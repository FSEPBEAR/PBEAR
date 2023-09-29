#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define __CPROVER_assume(a) if (!(a)) exit(0)
typedef _Bool __CPROVER_bool;
FILE *__iv__fp;
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#ifndef NULL
#define NULL ((void*)0)
#endif
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif
struct JoinPoint;
struct __ACC__ERR;
struct __UTAC__CFLOW_FUNC;
struct __UTAC__EXCEPTION;
void __automaton_fail(void);
void * __utac__error_stack_mgt(void *env, signed int mode, signed int count);
void __utac__exception__cf_handler_free(void *exception);
void __utac__exception__cf_handler_reset(void *exception);
void __utac__exception__cf_handler_set(void *exception, signed int (*cflow_func)(signed int, signed int), signed int val);
void * __utac__get_this_arg(signed int i, struct JoinPoint *this);
 char * __utac__get_this_argtype(signed int i, struct JoinPoint *this);
void __utac_acc__SignForward_spec__1(signed int client, signed int msg);
void autoRespond(signed int client, signed int msg);
void bobKeyAdd(void);
void bobKeyAddChuck(void);
void bobKeyChange(void);
void bobSetAddressBook(void);
void bobToRjh(void);
void chuckKeyAdd(void);
void chuckKeyAddRjh(void);
signed int cloneEmail(signed int msg);
signed int createClient(char *name);
signed int createClientAddressBookEntry(signed int handle);
signed int createClientKeyringEntry(signed int handle);
signed int createEmail(signed int from, signed int to);
void deliver(signed int client, signed int msg);
signed int findClientAddressBookAlias(signed int handle, signed int userid);
signed int findPublicKey(signed int handle, signed int userid);
void forward(signed int client, signed int msg);
void generateKeyPair(signed int client, signed int seed);
signed int getClientAddressBookAddress(signed int handle, signed int index);
signed int getClientAddressBookAlias(signed int handle, signed int index);
signed int getClientAddressBookSize(signed int handle);
signed int getClientAutoResponse(signed int handle);
signed int getClientForwardReceiver(signed int handle);
signed int getClientId(signed int handle);
signed int getClientKeyringPublicKey(signed int handle, signed int index);
signed int getClientKeyringSize(signed int handle);
signed int getClientKeyringUser(signed int handle, signed int index);
char * getClientName(signed int handle);
signed int getClientOutbuffer(signed int handle);
signed int getClientPrivateKey(signed int handle);
char * getEmailBody(signed int handle);
signed int getEmailEncryptionKey(signed int handle);
signed int getEmailFrom(signed int handle);
signed int getEmailId(signed int handle);
signed int getEmailSignKey(signed int handle);
char * getEmailSubject(signed int handle);
signed int getEmailTo(signed int handle);
signed int get_queued_client(void);
signed int get_queued_email(void);
void incoming(signed int client, signed int msg);
void incoming__before__AutoResponder(signed int client, signed int msg);
void incoming__before__Decrypt(signed int client, signed int msg);
void incoming__before__Forward(signed int client, signed int msg);
void incoming__before__Verify(signed int client, signed int msg);
void incoming__role__AutoResponder(signed int client, signed int msg);
void incoming__role__Decrypt(signed int client, signed int msg);
void incoming__role__Forward(signed int client, signed int msg);
void incoming__role__Verify(signed int client, signed int msg);
signed int initClient(void);
signed int initEmail(void);
signed int isEncrypted(signed int handle);
signed int isKeyPairValid(signed int publicKey, signed int privateKey);
signed int isReadable(signed int msg);
signed int isReadable__before__Encrypt(signed int msg);
signed int isReadable__role__Encrypt(signed int msg);
signed int isSigned(signed int handle);
signed int isVerified(signed int handle);
signed int is_queue_empty(void);
void mail(signed int client, signed int msg);
void outgoing(signed int client, signed int msg);
void outgoing__before__AddressBook(signed int client, signed int msg);
void outgoing__before__Encrypt(signed int client, signed int msg);
void outgoing__before__Sign(signed int client, signed int msg);
void outgoing__role__AddressBook(signed int client, signed int msg);
void outgoing__role__Encrypt(signed int client, signed int msg);
void outgoing__role__Sign(signed int client, signed int msg);
void printMail(signed int msg);
void printMail__before__Encrypt(signed int msg);
void printMail__before__Sign(signed int msg);
void printMail__before__Verify(signed int msg);
void printMail__role__Encrypt(signed int msg);
void printMail__role__Sign(signed int msg);
void printMail__role__Verify(signed int msg);
signed int prompt(char *msg);
void queue(signed int client, signed int msg);
void reach_error();
void rjhDeletePrivateKey(void);
void rjhEnableForwarding(void);
void rjhKeyAdd(void);
void rjhKeyAddChuck(void);
void rjhKeyChange(void);
void rjhSetAutoRespond(void);
void rjhToBob(void);
void select_features(void);
void select_helpers(void);
signed int select_one(void);
void sendEmail(signed int sender, signed int receiver);
void sendToAddressBook(signed int client, signed int msg);
void setClientAddressBookAddress(signed int handle, signed int index, signed int value);
void setClientAddressBookAlias(signed int handle, signed int index, signed int value);
void setClientAddressBookSize(signed int handle, signed int value);
void setClientAutoResponse(signed int handle, signed int value);
void setClientForwardReceiver(signed int handle, signed int value);
void setClientId(signed int handle, signed int value);
void setClientKeyringPublicKey(signed int handle, signed int index, signed int value);
void setClientKeyringSize(signed int handle, signed int value);
void setClientKeyringUser(signed int handle, signed int index, signed int value);
void setClientName(signed int handle, char *value);
void setClientOutbuffer(signed int handle, signed int value);
void setClientPrivateKey(signed int handle, signed int value);
void setEmailBody(signed int handle, char *value);
void setEmailEncryptionKey(signed int handle, signed int value);
void setEmailFrom(signed int handle, signed int value);
void setEmailId(signed int handle, signed int value);
void setEmailIsEncrypted(signed int handle, signed int value);
void setEmailIsSignatureVerified(signed int handle, signed int value);
void setEmailIsSigned(signed int handle, signed int value);
void setEmailSignKey(signed int handle, signed int value);
void setEmailSubject(signed int handle, char *value);
void setEmailTo(signed int handle, signed int value);
void setup(void);
void setup_bob(signed int bob___0);
void setup_bob__before__Keys(signed int bob___0);
void setup_bob__role__Keys(signed int bob___0);
void setup_chuck(signed int chuck___0);
void setup_chuck__before__Keys(signed int chuck___0);
void setup_chuck__role__Keys(signed int chuck___0);
void setup_rjh(signed int rjh___0);
void setup_rjh__before__Keys(signed int rjh___0);
void setup_rjh__role__Keys(signed int rjh___0);
void sign(signed int client, signed int msg);
void test(void);
signed int valid_product(void);
void verify(signed int client, signed int msg);
struct JoinPoint
{
  void ** (*fp)(struct JoinPoint *);
  void **args;
  signed int argsCount;
   char **argsType;
  void * (*arg)(signed int, struct JoinPoint *);
   char * (*argType)(signed int, struct JoinPoint *);
  void **retValue;
   char *retType;
   char *funcName;
   char *targetName;
   char *fileName;
   char *kind;
  void *excep_return;
};
struct __ACC__ERR
{
  void *v;
  struct __ACC__ERR *next;
};
struct __UTAC__CFLOW_FUNC
{
  signed int (*func)(signed int, signed int);
  signed int val;
  struct __UTAC__CFLOW_FUNC *next;
};
struct __UTAC__EXCEPTION
{
  void *jumpbuf;
  unsigned long long int prtValue;
  signed int pops;
  struct __UTAC__CFLOW_FUNC *cflowfuncs;
};
signed int __GUIDSL_ROOT_PRODUCTION;
signed int __SELECTED_FEATURE_AddressBook;
signed int __SELECTED_FEATURE_AutoResponder;
signed int __SELECTED_FEATURE_Base;
signed int __SELECTED_FEATURE_Decrypt;
signed int __SELECTED_FEATURE_Encrypt;
signed int __SELECTED_FEATURE_Forward;
signed int __SELECTED_FEATURE_Keys;
signed int __SELECTED_FEATURE_Sign;
signed int __SELECTED_FEATURE_Verify;
signed int __ste_ClientAddressBook_size0=0;
signed int __ste_ClientAddressBook_size1=0;
signed int __ste_ClientAddressBook_size2=0;
signed int __ste_ClientKeyring_size0=0;
signed int __ste_ClientKeyring_size1=0;
signed int __ste_ClientKeyring_size2=0;
signed int __ste_Client_AddressBook0_Address0=0;
signed int __ste_Client_AddressBook0_Address1=0;
signed int __ste_Client_AddressBook0_Address2=0;
signed int __ste_Client_AddressBook0_Alias0=0;
signed int __ste_Client_AddressBook0_Alias1=0;
signed int __ste_Client_AddressBook0_Alias2=0;
signed int __ste_Client_AddressBook1_Address0=0;
signed int __ste_Client_AddressBook1_Address1=0;
signed int __ste_Client_AddressBook1_Address2=0;
signed int __ste_Client_AddressBook1_Alias0=0;
signed int __ste_Client_AddressBook1_Alias1=0;
signed int __ste_Client_AddressBook1_Alias2=0;
signed int __ste_Client_AddressBook2_Address0=0;
signed int __ste_Client_AddressBook2_Address1=0;
signed int __ste_Client_AddressBook2_Address2=0;
signed int __ste_Client_AddressBook2_Alias0=0;
signed int __ste_Client_AddressBook2_Alias1=0;
signed int __ste_Client_AddressBook2_Alias2=0;
signed int __ste_Client_Keyring0_PublicKey0=0;
signed int __ste_Client_Keyring0_PublicKey1=0;
signed int __ste_Client_Keyring0_PublicKey2=0;
signed int __ste_Client_Keyring0_User0=0;
signed int __ste_Client_Keyring0_User1=0;
signed int __ste_Client_Keyring0_User2=0;
signed int __ste_Client_Keyring1_PublicKey0=0;
signed int __ste_Client_Keyring1_PublicKey1=0;
signed int __ste_Client_Keyring1_PublicKey2=0;
signed int __ste_Client_Keyring1_User0=0;
signed int __ste_Client_Keyring1_User1=0;
signed int __ste_Client_Keyring1_User2=0;
signed int __ste_Client_Keyring2_PublicKey0=0;
signed int __ste_Client_Keyring2_PublicKey1=0;
signed int __ste_Client_Keyring2_PublicKey2=0;
signed int __ste_Client_Keyring2_User0=0;
signed int __ste_Client_Keyring2_User1=0;
signed int __ste_Client_Keyring2_User2=0;
signed int __ste_Client_counter=0;
signed int __ste_Email_counter=0;
signed int __ste_client_autoResponse0=0;
signed int __ste_client_autoResponse1=0;
signed int __ste_client_autoResponse2=0;
signed int __ste_client_forwardReceiver0=0;
signed int __ste_client_forwardReceiver1=0;
signed int __ste_client_forwardReceiver2=0;
signed int __ste_client_forwardReceiver3=0;
signed int __ste_client_idCounter0=0;
signed int __ste_client_idCounter1=0;
signed int __ste_client_idCounter2=0;
char *__ste_client_name0=((char *)NULL);
char *__ste_client_name1=((char *)NULL);
char *__ste_client_name2=((char *)NULL);
signed int __ste_client_outbuffer0=0;
signed int __ste_client_outbuffer1=0;
signed int __ste_client_outbuffer2=0;
signed int __ste_client_outbuffer3=0;
signed int __ste_client_privateKey0=0;
signed int __ste_client_privateKey1=0;
signed int __ste_client_privateKey2=0;
char *__ste_email_body0=((char *)NULL);
char *__ste_email_body1=((char *)NULL);
signed int __ste_email_encryptionKey0=0;
signed int __ste_email_encryptionKey1=0;
signed int __ste_email_from0=0;
signed int __ste_email_from1=0;
signed int __ste_email_id0=0;
signed int __ste_email_id1=0;
signed int __ste_email_isEncrypted0=0;
signed int __ste_email_isEncrypted1=0;
signed int __ste_email_isSignatureVerified0;
signed int __ste_email_isSignatureVerified1;
signed int __ste_email_isSigned0=0;
signed int __ste_email_isSigned1=0;
signed int __ste_email_signKey0=0;
signed int __ste_email_signKey1=0;
char *__ste_email_subject0;
char *__ste_email_subject1;
signed int __ste_email_to0=0;
signed int __ste_email_to1=0;
signed int bob;
signed int chuck;
static struct __ACC__ERR *head=((struct __ACC__ERR *)NULL);
signed int queue_empty=1;
signed int queued_client;
signed int queued_message;
signed int rjh;
signed int __VERIFIER_nondet_signed_int(){ signed int __iv_temp; if (-1 == fscanf(__iv__fp, "%d", &__iv_temp)) exit(0); return __iv_temp; }
int main(int argc, char* argv[]) {
	__iv__fp = fopen(argv[1], "r");
	signed int retValue_acc;
	signed int tmp;
	select_helpers();
	select_features();
	tmp = valid_product();
	if (!((tmp != 0))) goto Node_0_8;
	setup();
	test();
	Node_0_8:;
	return retValue_acc;
}
void sign(signed int client, signed int msg) {
	signed int privkey;
	privkey = getClientPrivateKey(client);
	if ((privkey != 0)) goto Node_1_22;
	goto Node_1_28;
	Node_1_22:;
	setEmailIsSigned(msg, 1);
	setEmailSignKey(msg, privkey);
	goto Node_1_28;
	Node_1_28:;
	// End of Function
}
void __utac_acc__SignForward_spec__1(signed int client, signed int msg) {
	signed int tmp;
	signed int tmp___0;
	puts("before mail\n");
	tmp___0 = isSigned(msg);
	if (!((tmp___0 != 0))) goto Node_3_43;
	tmp = getClientPrivateKey(client);
	if (!((tmp == 0))) goto Node_3_42;
	__automaton_fail();
	Node_3_42:;
	Node_3_43:;
	goto Node_3_47;
	Node_3_47:;
	// End of Function
}
char* __utac__get_this_argtype(signed int i, struct JoinPoint* this) {
	char *retValue_acc;
	unsigned long int __cil_tmp4;
	unsigned long int __cil_tmp5;
	signed int __cil_tmp6;
	signed int __cil_tmp7;
	unsigned long int __cil_tmp8;
	unsigned long int __cil_tmp9;
	char **__cil_tmp10;
	char **__cil_tmp11;
	signed int *mem_12;
	char ***mem_13;
	assert((i > 0));
	if (!((i > 0))) goto Node_4_66;
	__cil_tmp4 = (unsigned long int)(this);
	__cil_tmp5 = (__cil_tmp4 + (unsigned long int)(16));
	mem_12 = (signed int*)(__cil_tmp5);
	__cil_tmp6 = *mem_12;
	assert((i <= __cil_tmp6));
	Node_4_66:;
	__cil_tmp7 = (i - 1);
	__cil_tmp8 = (unsigned long int)(this);
	__cil_tmp9 = (__cil_tmp8 + (unsigned long int)(24));
	mem_13 = (char***)(__cil_tmp9);
	__cil_tmp10 = *mem_13;
	__cil_tmp11 = (__cil_tmp10 + (signed long int)(__cil_tmp7));
	retValue_acc = *__cil_tmp11;
	return retValue_acc;
}
void* __utac__get_this_arg(signed int i, struct JoinPoint* this) {
	void *retValue_acc;
	unsigned long int __cil_tmp4;
	unsigned long int __cil_tmp5;
	signed int __cil_tmp6;
	signed int __cil_tmp7;
	unsigned long int __cil_tmp8;
	unsigned long int __cil_tmp9;
	void **__cil_tmp10;
	void **__cil_tmp11;
	signed int *mem_12;
	void ***mem_13;
	assert((i > 0));
	if (!((i > 0))) goto Node_5_119;
	__cil_tmp4 = (unsigned long int)(this);
	__cil_tmp5 = (__cil_tmp4 + (unsigned long int)(16));
	mem_12 = (signed int*)(__cil_tmp5);
	__cil_tmp6 = *mem_12;
	assert((i <= __cil_tmp6));
	Node_5_119:;
	__cil_tmp7 = (i - 1);
	__cil_tmp8 = (unsigned long int)(this);
	__cil_tmp9 = (__cil_tmp8 + (unsigned long int)(8));
	mem_13 = (void***)(__cil_tmp9);
	__cil_tmp10 = *mem_13;
	__cil_tmp11 = (__cil_tmp10 + (signed long int)(__cil_tmp7));
	retValue_acc = *__cil_tmp11;
	return retValue_acc;
}
void* __utac__error_stack_mgt(void* env, signed int mode, signed int count) {
	void *retValue_acc;
	struct __ACC__ERR *new;
	void *tmp;
	struct __ACC__ERR *temp;
	struct __ACC__ERR *next;
	void *excep;
	unsigned long int __cil_tmp10;
	unsigned long int __cil_tmp11;
	unsigned long int __cil_tmp12;
	unsigned long int __cil_tmp13;
	void *__cil_tmp14;
	unsigned long int __cil_tmp15;
	unsigned long int __cil_tmp16;
	void *__cil_tmp17;
	void **mem_18;
	struct __ACC__ERR **mem_19;
	struct __ACC__ERR **mem_20;
	void **mem_21;
	struct __ACC__ERR **mem_22;
	void **mem_23;
	void **mem_24;
	if (!((count == 0))) goto Node_6_199;
	return retValue_acc;
	Node_6_199:;
	if (!((mode == 0))) goto Node_6_234;
	tmp = malloc((size_t)(16ul));
	new = (struct __ACC__ERR*)(tmp);
	mem_18 = (void**)(new);
	*mem_18 = env;
	__cil_tmp10 = (unsigned long int)(new);
	__cil_tmp11 = (__cil_tmp10 + (unsigned long int)(8));
	mem_19 = (struct __ACC__ERR**)(__cil_tmp11);
	*mem_19 = head;
	head = new;
	retValue_acc = (void*)(new);
	return retValue_acc;
	Node_6_234:;
	if (!((mode == 1))) goto Node_6_289;
	temp = head;
	Node_6_237:;
	if (!((1 != 0))) goto Node_6_254;
	if (!((count > 1))) goto Node_6_255;
	__cil_tmp12 = (unsigned long int)(temp);
	__cil_tmp13 = (__cil_tmp12 + (unsigned long int)(8));
	mem_20 = (struct __ACC__ERR**)(__cil_tmp13);
	next = *mem_20;
	mem_21 = (void**)(temp);
	excep = *mem_21;
	__cil_tmp14 = (void*)(temp);
	free(__cil_tmp14);
	__utac__exception__cf_handler_reset(excep);
	temp = next;
	count = (count - 1);
	goto Node_6_237;
	Node_6_254:;
	Node_6_255:;
	__cil_tmp15 = (unsigned long int)(temp);
	__cil_tmp16 = (__cil_tmp15 + (unsigned long int)(8));
	mem_22 = (struct __ACC__ERR**)(__cil_tmp16);
	head = *mem_22;
	mem_23 = (void**)(temp);
	excep = *mem_23;
	__cil_tmp17 = (void*)(temp);
	free(__cil_tmp17);
	__utac__exception__cf_handler_reset(excep);
	retValue_acc = excep;
	return retValue_acc;
	Node_6_289:;
	if (!((mode == 2))) goto Node_6_343;
	if (!((head != (struct __ACC__ERR*)(NULL)))) goto Node_6_318;
	mem_24 = (void**)(head);
	retValue_acc = *mem_24;
	return retValue_acc;
	Node_6_318:;
	retValue_acc = (void*)(0);
	return retValue_acc;
	Node_6_343:;
	return retValue_acc;
}
void __utac__exception__cf_handler_reset(void* exception) {
	struct __UTAC__EXCEPTION *excep;
	struct __UTAC__CFLOW_FUNC *cf;
	unsigned long int __cil_tmp5;
	unsigned long int __cil_tmp6;
	struct __UTAC__CFLOW_FUNC *__cil_tmp7;
	unsigned long int __cil_tmp8;
	unsigned long int __cil_tmp9;
	signed int (*__cil_tmp10)(signed int, signed int);
	unsigned long int __cil_tmp11;
	unsigned long int __cil_tmp12;
	signed int __cil_tmp13;
	unsigned long int __cil_tmp14;
	unsigned long int __cil_tmp15;
	struct __UTAC__CFLOW_FUNC **mem_16;
	signed int (**mem_17)(signed int, signed int);
	signed int *mem_18;
	struct __UTAC__CFLOW_FUNC **mem_19;
	excep = (struct __UTAC__EXCEPTION*)(exception);
	__cil_tmp5 = (unsigned long int)(excep);
	__cil_tmp6 = (__cil_tmp5 + (unsigned long int)(24));
	mem_16 = (struct __UTAC__CFLOW_FUNC**)(__cil_tmp6);
	cf = *mem_16;
	Node_7_390:;
	if (!((1 != 0))) goto Node_7_410;
	__cil_tmp7 = (struct __UTAC__CFLOW_FUNC*)(0);
	__cil_tmp8 = (unsigned long int)(__cil_tmp7);
	__cil_tmp9 = (unsigned long int)(cf);
	if (!((__cil_tmp9 != __cil_tmp8))) goto Node_7_411;
	mem_17 = (signed int (**)(signed int, signed int))(cf);
	__cil_tmp10 = *mem_17;
	__cil_tmp11 = (unsigned long int)(cf);
	__cil_tmp12 = (__cil_tmp11 + (unsigned long int)(8));
	mem_18 = (signed int*)(__cil_tmp12);
	__cil_tmp13 = *mem_18;
	__cil_tmp10(4, __cil_tmp13);
	__cil_tmp14 = (unsigned long int)(cf);
	__cil_tmp15 = (__cil_tmp14 + (unsigned long int)(16));
	mem_19 = (struct __UTAC__CFLOW_FUNC**)(__cil_tmp15);
	cf = *mem_19;
	goto Node_7_390;
	Node_7_410:;
	Node_7_411:;
	__utac__exception__cf_handler_free(exception);
	goto Node_7_431;
	Node_7_431:;
	// End of Function
}
void __utac__exception__cf_handler_free(void* exception) {
	struct __UTAC__EXCEPTION *excep;
	struct __UTAC__CFLOW_FUNC *cf;
	struct __UTAC__CFLOW_FUNC *tmp;
	unsigned long int __cil_tmp5;
	unsigned long int __cil_tmp6;
	struct __UTAC__CFLOW_FUNC *__cil_tmp7;
	unsigned long int __cil_tmp8;
	unsigned long int __cil_tmp9;
	unsigned long int __cil_tmp10;
	unsigned long int __cil_tmp11;
	void *__cil_tmp12;
	unsigned long int __cil_tmp13;
	unsigned long int __cil_tmp14;
	struct __UTAC__CFLOW_FUNC **mem_15;
	struct __UTAC__CFLOW_FUNC **mem_16;
	struct __UTAC__CFLOW_FUNC **mem_17;
	excep = (struct __UTAC__EXCEPTION*)(exception);
	__cil_tmp5 = (unsigned long int)(excep);
	__cil_tmp6 = (__cil_tmp5 + (unsigned long int)(24));
	mem_15 = (struct __UTAC__CFLOW_FUNC**)(__cil_tmp6);
	cf = *mem_15;
	Node_8_453:;
	if (!((1 != 0))) goto Node_8_469;
	__cil_tmp7 = (struct __UTAC__CFLOW_FUNC*)(0);
	__cil_tmp8 = (unsigned long int)(__cil_tmp7);
	__cil_tmp9 = (unsigned long int)(cf);
	if (!((__cil_tmp9 != __cil_tmp8))) goto Node_8_470;
	tmp = cf;
	__cil_tmp10 = (unsigned long int)(cf);
	__cil_tmp11 = (__cil_tmp10 + (unsigned long int)(16));
	mem_16 = (struct __UTAC__CFLOW_FUNC**)(__cil_tmp11);
	cf = *mem_16;
	__cil_tmp12 = (void*)(tmp);
	free(__cil_tmp12);
	goto Node_8_453;
	Node_8_469:;
	Node_8_470:;
	__cil_tmp13 = (unsigned long int)(excep);
	__cil_tmp14 = (__cil_tmp13 + (unsigned long int)(24));
	mem_17 = (struct __UTAC__CFLOW_FUNC**)(__cil_tmp14);
	*mem_17 = (struct __UTAC__CFLOW_FUNC*)(0);
	goto Node_8_492;
	Node_8_492:;
	// End of Function
}
void __utac__exception__cf_handler_set(void* exception, signed int (*cflow_func)( signed int ,  signed int ), signed int val) {
	struct __UTAC__EXCEPTION *excep;
	struct __UTAC__CFLOW_FUNC *cf;
	void *tmp;
	unsigned long int __cil_tmp7;
	unsigned long int __cil_tmp8;
	unsigned long int __cil_tmp9;
	unsigned long int __cil_tmp10;
	unsigned long int __cil_tmp11;
	unsigned long int __cil_tmp12;
	unsigned long int __cil_tmp13;
	unsigned long int __cil_tmp14;
	signed int (**mem_15)(signed int, signed int);
	signed int *mem_16;
	struct __UTAC__CFLOW_FUNC **mem_17;
	struct __UTAC__CFLOW_FUNC **mem_18;
	struct __UTAC__CFLOW_FUNC **mem_19;
	excep = (struct __UTAC__EXCEPTION*)(exception);
	tmp = malloc((size_t)(24ul));
	cf = (struct __UTAC__CFLOW_FUNC*)(tmp);
	mem_15 = (signed int (**)(signed int, signed int))(cf);
	*mem_15 = cflow_func;
	__cil_tmp7 = (unsigned long int)(cf);
	__cil_tmp8 = (__cil_tmp7 + (unsigned long int)(8));
	mem_16 = (signed int*)(__cil_tmp8);
	*mem_16 = val;
	__cil_tmp9 = (unsigned long int)(cf);
	__cil_tmp10 = (__cil_tmp9 + (unsigned long int)(16));
	__cil_tmp11 = (unsigned long int)(excep);
	__cil_tmp12 = (__cil_tmp11 + (unsigned long int)(24));
	mem_17 = (struct __UTAC__CFLOW_FUNC**)(__cil_tmp10);
	mem_18 = (struct __UTAC__CFLOW_FUNC**)(__cil_tmp12);
	*mem_17 = *mem_18;
	__cil_tmp13 = (unsigned long int)(excep);
	__cil_tmp14 = (__cil_tmp13 + (unsigned long int)(24));
	mem_19 = (struct __UTAC__CFLOW_FUNC**)(__cil_tmp14);
	*mem_19 = cf;
	goto Node_9_546;
	Node_9_546:;
	// End of Function
}
signed int createEmail(signed int from, signed int to) {
	signed int retValue_acc;
	signed int msg;
	msg = 1;
	setEmailFrom(msg, from);
	setEmailTo(msg, to);
	retValue_acc = msg;
	return retValue_acc;
}
void printMail__role__Verify(signed int msg) {
	signed int tmp;
	char *__cil_tmp3;
	printMail__before__Verify(msg);
	tmp = isVerified(msg);
	__cil_tmp3 = (char*)("SIGNATURE VERIFIED\n  %d\n");
	goto Node_11_571;
	Node_11_571:;
	// End of Function
}
void printMail__role__Sign(signed int msg) {
	signed int tmp;
	signed int tmp___0;
	char *__cil_tmp4;
	char *__cil_tmp5;
	printMail__before__Sign(msg);
	tmp = isSigned(msg);
	__cil_tmp4 = (char*)("SIGNED\n  %i\n");
	tmp___0 = getEmailSignKey(msg);
	__cil_tmp5 = (char*)("SIGNATURE\n  %i\n");
	goto Node_12_588;
	Node_12_588:;
	// End of Function
}
void printMail__before__Encrypt(signed int msg) {
	signed int tmp;
	signed int tmp___0;
	signed int tmp___1;
	signed int tmp___2;
	char *__cil_tmp6;
	char *__cil_tmp7;
	char *__cil_tmp8;
	char *__cil_tmp9;
	tmp = getEmailId(msg);
	__cil_tmp6 = (char*)("ID:\n  %i\n");
	tmp___0 = getEmailFrom(msg);
	__cil_tmp7 = (char*)("FROM:\n  %i\n");
	tmp___1 = getEmailTo(msg);
	__cil_tmp8 = (char*)("TO:\n  %i\n");
	tmp___2 = isReadable(msg);
	__cil_tmp9 = (char*)("IS_READABLE\n  %i\n");
	goto Node_13_618;
	Node_13_618:;
	// End of Function
}
signed int cloneEmail(signed int msg) {
	signed int retValue_acc;
	retValue_acc = msg;
	return retValue_acc;
}
void bobKeyAdd() {
	signed int tmp;
	signed int tmp___0;
	char *__cil_tmp3;
	char *__cil_tmp4;
	createClientKeyringEntry(bob);
	setClientKeyringUser(bob, 0, 2);
	setClientKeyringPublicKey(bob, 0, 456);
	puts("bob added rjhs key");
	tmp = getClientKeyringUser(bob, 0);
	__cil_tmp3 = (char*)("%d\n");
	tmp___0 = getClientKeyringPublicKey(bob, 0);
	__cil_tmp4 = (char*)("%d\n");
	goto Node_15_647;
	Node_15_647:;
	// End of Function
}
void outgoing__role__Sign(signed int client, signed int msg) {
	sign(client, msg);
	outgoing__before__Sign(client, msg);
	goto Node_16_651;
	Node_16_651:;
	// End of Function
}
signed int getClientOutbuffer(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_17_659;
	retValue_acc = __ste_client_outbuffer0;
	return retValue_acc;
	Node_17_659:;
	if (!((handle == 2))) goto Node_17_665;
	retValue_acc = __ste_client_outbuffer1;
	return retValue_acc;
	Node_17_665:;
	if (!((handle == 3))) goto Node_17_671;
	retValue_acc = __ste_client_outbuffer2;
	return retValue_acc;
	Node_17_671:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int getEmailSignKey(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_18_689;
	retValue_acc = __ste_email_signKey0;
	return retValue_acc;
	Node_18_689:;
	if (!((handle == 2))) goto Node_18_695;
	retValue_acc = __ste_email_signKey1;
	return retValue_acc;
	Node_18_695:;
	retValue_acc = 0;
	return retValue_acc;
}
void outgoing__role__Encrypt(signed int client, signed int msg) {
	signed int receiver;
	signed int pubkey;
	receiver = getEmailTo(msg);
	pubkey = findPublicKey(client, receiver);
	if (!((pubkey != 0))) goto Node_19_716;
	setEmailEncryptionKey(msg, pubkey);
	setEmailIsEncrypted(msg, 1);
	Node_19_716:;
	outgoing__before__Encrypt(client, msg);
	goto Node_19_723;
	Node_19_723:;
	// End of Function
}
void outgoing__before__Encrypt(signed int client, signed int msg) {
	signed int tmp;
	tmp = getClientId(client);
	setEmailFrom(msg, tmp);
	mail(client, msg);
	goto Node_20_730;
	Node_20_730:;
	// End of Function
}
void test() {
	signed int op1;
	signed int op2;
	signed int op3;
	signed int op4;
	signed int op5;
	signed int op6;
	signed int op7;
	signed int op8;
	signed int op9;
	signed int op10;
	signed int op11;
	signed int splverifierCounter;
	signed int tmp;
	signed int tmp___0;
	signed int tmp___1;
	signed int tmp___2;
	signed int tmp___3;
	signed int tmp___4;
	signed int tmp___5;
	signed int tmp___6;
	signed int tmp___7;
	signed int tmp___8;
	signed int tmp___9;
	op1 = 0;
	op2 = 0;
	op3 = 0;
	op4 = 0;
	op5 = 0;
	op6 = 0;
	op7 = 0;
	op8 = 0;
	op9 = 0;
	op10 = 0;
	op11 = 0;
	splverifierCounter = 0;
	Node_21_766:;
	if (!((1 != 0))) goto Node_21_906;
	if (!((splverifierCounter < 4))) goto Node_21_907;
	splverifierCounter = (splverifierCounter + 1);
	if ((op1 != 0)) goto Node_21_783;
	tmp___9 = __VERIFIER_nondet_signed_int();
	if (!((tmp___9 != 0))) goto Node_21_780;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_21_777;
	bobKeyAdd();
	Node_21_777:;
	op1 = 1;
	goto Node_21_781;
	Node_21_780:;
	goto Node_21_783;
	Node_21_781:;
	goto Node_21_904;
	Node_21_783:;
	if ((op2 != 0)) goto Node_21_794;
	tmp___8 = __VERIFIER_nondet_signed_int();
	if (!((tmp___8 != 0))) goto Node_21_791;
	if (!((__SELECTED_FEATURE_AutoResponder != 0))) goto Node_21_788;
	rjhSetAutoRespond();
	Node_21_788:;
	op2 = 1;
	goto Node_21_792;
	Node_21_791:;
	goto Node_21_794;
	Node_21_792:;
	goto Node_21_903;
	Node_21_794:;
	if ((op3 != 0)) goto Node_21_805;
	tmp___7 = __VERIFIER_nondet_signed_int();
	if (!((tmp___7 != 0))) goto Node_21_802;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_21_799;
	rjhDeletePrivateKey();
	Node_21_799:;
	op3 = 1;
	goto Node_21_803;
	Node_21_802:;
	goto Node_21_805;
	Node_21_803:;
	goto Node_21_902;
	Node_21_805:;
	if ((op4 != 0)) goto Node_21_816;
	tmp___6 = __VERIFIER_nondet_signed_int();
	if (!((tmp___6 != 0))) goto Node_21_813;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_21_810;
	rjhKeyAdd();
	Node_21_810:;
	op4 = 1;
	goto Node_21_814;
	Node_21_813:;
	goto Node_21_816;
	Node_21_814:;
	goto Node_21_901;
	Node_21_816:;
	if ((op5 != 0)) goto Node_21_827;
	tmp___5 = __VERIFIER_nondet_signed_int();
	if (!((tmp___5 != 0))) goto Node_21_824;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_21_821;
	chuckKeyAddRjh();
	Node_21_821:;
	op5 = 1;
	goto Node_21_825;
	Node_21_824:;
	goto Node_21_827;
	Node_21_825:;
	goto Node_21_900;
	Node_21_827:;
	if ((op6 != 0)) goto Node_21_838;
	tmp___4 = __VERIFIER_nondet_signed_int();
	if (!((tmp___4 != 0))) goto Node_21_835;
	if (!((__SELECTED_FEATURE_Forward != 0))) goto Node_21_832;
	rjhEnableForwarding();
	Node_21_832:;
	op6 = 1;
	goto Node_21_836;
	Node_21_835:;
	goto Node_21_838;
	Node_21_836:;
	goto Node_21_899;
	Node_21_838:;
	if ((op7 != 0)) goto Node_21_849;
	tmp___3 = __VERIFIER_nondet_signed_int();
	if (!((tmp___3 != 0))) goto Node_21_846;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_21_843;
	rjhKeyChange();
	Node_21_843:;
	op7 = 1;
	goto Node_21_847;
	Node_21_846:;
	goto Node_21_849;
	Node_21_847:;
	goto Node_21_898;
	Node_21_849:;
	if ((op8 != 0)) goto Node_21_860;
	tmp___2 = __VERIFIER_nondet_signed_int();
	if (!((tmp___2 != 0))) goto Node_21_857;
	if (!((__SELECTED_FEATURE_AddressBook != 0))) goto Node_21_854;
	bobSetAddressBook();
	Node_21_854:;
	op8 = 1;
	goto Node_21_858;
	Node_21_857:;
	goto Node_21_860;
	Node_21_858:;
	goto Node_21_897;
	Node_21_860:;
	if ((op9 != 0)) goto Node_21_871;
	tmp___1 = __VERIFIER_nondet_signed_int();
	if (!((tmp___1 != 0))) goto Node_21_868;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_21_865;
	chuckKeyAdd();
	Node_21_865:;
	op9 = 1;
	goto Node_21_869;
	Node_21_868:;
	goto Node_21_871;
	Node_21_869:;
	goto Node_21_896;
	Node_21_871:;
	if ((op10 != 0)) goto Node_21_882;
	tmp___0 = __VERIFIER_nondet_signed_int();
	if (!((tmp___0 != 0))) goto Node_21_879;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_21_876;
	bobKeyChange();
	Node_21_876:;
	op10 = 1;
	goto Node_21_880;
	Node_21_879:;
	goto Node_21_882;
	Node_21_880:;
	goto Node_21_895;
	Node_21_882:;
	if ((op11 != 0)) goto Node_21_893;
	tmp = __VERIFIER_nondet_signed_int();
	if (!((tmp != 0))) goto Node_21_890;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_21_887;
	chuckKeyAdd();
	Node_21_887:;
	op11 = 1;
	goto Node_21_891;
	Node_21_890:;
	goto Node_21_907;
	Node_21_891:;
	goto Node_21_894;
	Node_21_893:;
	goto Node_21_907;
	Node_21_894:;
	Node_21_895:;
	Node_21_896:;
	Node_21_897:;
	Node_21_898:;
	Node_21_899:;
	Node_21_900:;
	Node_21_901:;
	Node_21_902:;
	Node_21_903:;
	Node_21_904:;
	goto Node_21_766;
	Node_21_906:;
	Node_21_907:;
	bobToRjh();
	goto Node_21_933;
	Node_21_933:;
	// End of Function
}
void mail(signed int client, signed int msg) {
	signed int __utac__ad__arg1;
	signed int __utac__ad__arg2;
	signed int tmp;
	__utac__ad__arg1 = client;
	__utac__ad__arg2 = msg;
	__utac_acc__SignForward_spec__1(__utac__ad__arg1, __utac__ad__arg2);
	puts("mail sent");
	tmp = getEmailTo(msg);
	incoming(tmp, msg);
	goto Node_22_947;
	Node_22_947:;
	// End of Function
}
void printMail__before__Sign(signed int msg) {
	if (!((__SELECTED_FEATURE_Encrypt != 0))) goto Node_23_952;
	printMail__role__Encrypt(msg);
	goto Node_23_955;
	Node_23_952:;
	printMail__before__Encrypt(msg);
	goto Node_23_955;
	Node_23_955:;
	// End of Function
}
void generateKeyPair(signed int client, signed int seed) {
	setClientPrivateKey(client, seed);
	goto Node_24_958;
	Node_24_958:;
	// End of Function
}
signed int isKeyPairValid(signed int publicKey, signed int privateKey) {
	signed int retValue_acc;
	char *__cil_tmp4;
	__cil_tmp4 = (char*)("keypair valid %d %d");
	if ((publicKey != 0)) goto Node_25_970;
	retValue_acc = 0;
	return retValue_acc;
	Node_25_970:;
	if ((privateKey != 0)) goto Node_25_976;
	retValue_acc = 0;
	return retValue_acc;
	Node_25_976:;
	retValue_acc = (signed int)((privateKey == publicKey));
	return retValue_acc;
}
void sendEmail(signed int sender, signed int receiver) {
	signed int email;
	email = createEmail(0, receiver);
	outgoing(sender, email);
	goto Node_26_996;
	Node_26_996:;
	// End of Function
}
void autoRespond(signed int client, signed int msg) {
	signed int sender;
	puts("sending autoresponse\n");
	sender = getEmailFrom(msg);
	setEmailTo(msg, sender);
	queue(client, msg);
	goto Node_27_1007;
	Node_27_1007:;
	// End of Function
}
signed int createClient(char* name) {
	signed int retValue_acc;
	signed int client;
	client = initClient();
	retValue_acc = client;
	return retValue_acc;
}
void incoming(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_Decrypt != 0))) goto Node_29_1029;
	incoming__role__Decrypt(client, msg);
	goto Node_29_1032;
	Node_29_1029:;
	incoming__before__Decrypt(client, msg);
	goto Node_29_1032;
	Node_29_1032:;
	// End of Function
}
signed int getEmailEncryptionKey(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_30_1040;
	retValue_acc = __ste_email_encryptionKey0;
	return retValue_acc;
	Node_30_1040:;
	if (!((handle == 2))) goto Node_30_1046;
	retValue_acc = __ste_email_encryptionKey1;
	return retValue_acc;
	Node_30_1046:;
	retValue_acc = 0;
	return retValue_acc;
}
void printMail__role__Encrypt(signed int msg) {
	signed int tmp;
	signed int tmp___0;
	char *__cil_tmp4;
	char *__cil_tmp5;
	printMail__before__Encrypt(msg);
	tmp = isEncrypted(msg);
	__cil_tmp4 = (char*)("ENCRYPTED\n  %d\n");
	tmp___0 = getEmailEncryptionKey(msg);
	__cil_tmp5 = (char*)("ENCRYPTION KEY\n  %d\n");
	goto Node_31_1072;
	Node_31_1072:;
	// End of Function
}
void deliver(signed int client, signed int msg) {
	puts("mail delivered\n");
	goto Node_32_1075;
	Node_32_1075:;
	// End of Function
}
void incoming__before__AutoResponder(signed int client, signed int msg) {
	deliver(client, msg);
	goto Node_33_1078;
	Node_33_1078:;
	// End of Function
}
signed int get_queued_email() {
	signed int retValue_acc;
	retValue_acc = queued_message;
	return retValue_acc;
}
void setEmailIsSignatureVerified(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_35_1091;
	__ste_email_isSignatureVerified0 = value;
	goto Node_35_1094;
	Node_35_1091:;
	if (!((handle == 2))) goto Node_35_1093;
	__ste_email_isSignatureVerified1 = value;
	Node_35_1093:;
	Node_35_1094:;
	goto Node_35_1096;
	Node_35_1096:;
	// End of Function
}
void setEmailSignKey(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_36_1100;
	__ste_email_signKey0 = value;
	goto Node_36_1103;
	Node_36_1100:;
	if (!((handle == 2))) goto Node_36_1102;
	__ste_email_signKey1 = value;
	Node_36_1102:;
	Node_36_1103:;
	goto Node_36_1105;
	Node_36_1105:;
	// End of Function
}
void setEmailIsSigned(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_37_1109;
	__ste_email_isSigned0 = value;
	goto Node_37_1112;
	Node_37_1109:;
	if (!((handle == 2))) goto Node_37_1111;
	__ste_email_isSigned1 = value;
	Node_37_1111:;
	Node_37_1112:;
	goto Node_37_1114;
	Node_37_1114:;
	// End of Function
}
signed int isSigned(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_38_1122;
	retValue_acc = __ste_email_isSigned0;
	return retValue_acc;
	Node_38_1122:;
	if (!((handle == 2))) goto Node_38_1128;
	retValue_acc = __ste_email_isSigned1;
	return retValue_acc;
	Node_38_1128:;
	retValue_acc = 0;
	return retValue_acc;
}
void setEmailEncryptionKey(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_40_1262;
	__ste_email_encryptionKey0 = value;
	goto Node_40_1265;
	Node_40_1262:;
	if (!((handle == 2))) goto Node_40_1264;
	__ste_email_encryptionKey1 = value;
	Node_40_1264:;
	Node_40_1265:;
	goto Node_40_1267;
	Node_40_1267:;
	// End of Function
}
void setEmailIsEncrypted(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_41_1271;
	__ste_email_isEncrypted0 = value;
	goto Node_41_1274;
	Node_41_1271:;
	if (!((handle == 2))) goto Node_41_1273;
	__ste_email_isEncrypted1 = value;
	Node_41_1273:;
	Node_41_1274:;
	goto Node_41_1276;
	Node_41_1276:;
	// End of Function
}
void outgoing__before__Sign(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_AddressBook != 0))) goto Node_42_1281;
	outgoing__role__AddressBook(client, msg);
	goto Node_42_1284;
	Node_42_1281:;
	outgoing__before__AddressBook(client, msg);
	goto Node_42_1284;
	Node_42_1284:;
	// End of Function
}
char* getEmailSubject(signed int handle) {
	char *retValue_acc;
	void *__cil_tmp3;
	if (!((handle == 1))) goto Node_43_1294;
	retValue_acc = __ste_email_subject0;
	return retValue_acc;
	Node_43_1294:;
	if (!((handle == 2))) goto Node_43_1301;
	retValue_acc = __ste_email_subject1;
	return retValue_acc;
	Node_43_1301:;
	__cil_tmp3 = (void*)(0);
	retValue_acc = (char*)(__cil_tmp3);
	return retValue_acc;
}
signed int isEncrypted(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_44_1321;
	retValue_acc = __ste_email_isEncrypted0;
	return retValue_acc;
	Node_44_1321:;
	if (!((handle == 2))) goto Node_44_1327;
	retValue_acc = __ste_email_isEncrypted1;
	return retValue_acc;
	Node_44_1327:;
	retValue_acc = 0;
	return retValue_acc;
}
void setEmailTo(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_45_1340;
	__ste_email_to0 = value;
	goto Node_45_1343;
	Node_45_1340:;
	if (!((handle == 2))) goto Node_45_1342;
	__ste_email_to1 = value;
	Node_45_1342:;
	Node_45_1343:;
	goto Node_45_1345;
	Node_45_1345:;
	// End of Function
}
signed int getEmailTo(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_46_1353;
	retValue_acc = __ste_email_to0;
	return retValue_acc;
	Node_46_1353:;
	if (!((handle == 2))) goto Node_46_1359;
	retValue_acc = __ste_email_to1;
	return retValue_acc;
	Node_46_1359:;
	retValue_acc = 0;
	return retValue_acc;
}
void setEmailFrom(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_47_1372;
	__ste_email_from0 = value;
	goto Node_47_1375;
	Node_47_1372:;
	if (!((handle == 2))) goto Node_47_1374;
	__ste_email_from1 = value;
	Node_47_1374:;
	Node_47_1375:;
	goto Node_47_1377;
	Node_47_1377:;
	// End of Function
}
void reach_error() {
	if(!(FALSE)) printf("vioated property: Node_48_1378\n"); fflush(stdout);
	assert(FALSE);
	// End of Function
}
signed int get_queued_client() {
	signed int retValue_acc;
	retValue_acc = queued_client;
	return retValue_acc;
}
signed int is_queue_empty() {
	signed int retValue_acc;
	retValue_acc = queue_empty;
	return retValue_acc;
}
signed int isReadable__role__Encrypt(signed int msg) {
	signed int retValue_acc;
	signed int tmp;
	tmp = isEncrypted(msg);
	if (!((tmp != 0))) goto Node_51_1408;
	retValue_acc = 0;
	return retValue_acc;
	Node_51_1408:;
	retValue_acc = isReadable__before__Encrypt(msg);
	return retValue_acc;
}
void queue(signed int client, signed int msg) {
	queue_empty = 0;
	queued_message = msg;
	queued_client = client;
	goto Node_52_1423;
	Node_52_1423:;
	// End of Function
}
char* getEmailBody(signed int handle) {
	char *retValue_acc;
	void *__cil_tmp3;
	if (!((handle == 1))) goto Node_53_1433;
	retValue_acc = __ste_email_body0;
	return retValue_acc;
	Node_53_1433:;
	if (!((handle == 2))) goto Node_53_1440;
	retValue_acc = __ste_email_body1;
	return retValue_acc;
	Node_53_1440:;
	__cil_tmp3 = (void*)(0);
	retValue_acc = (char*)(__cil_tmp3);
	return retValue_acc;
}
signed int isReadable(signed int msg) {
	signed int retValue_acc;
	if (!((__SELECTED_FEATURE_Encrypt != 0))) goto Node_54_1460;
	retValue_acc = isReadable__role__Encrypt(msg);
	return retValue_acc;
	Node_54_1460:;
	retValue_acc = isReadable__before__Encrypt(msg);
	return retValue_acc;
}
void outgoing__before__AddressBook(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_Encrypt != 0))) goto Node_55_1473;
	outgoing__role__Encrypt(client, msg);
	goto Node_55_1476;
	Node_55_1473:;
	outgoing__before__Encrypt(client, msg);
	goto Node_55_1476;
	Node_55_1476:;
	// End of Function
}
void incoming__before__Forward(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_AutoResponder != 0))) goto Node_56_1481;
	incoming__role__AutoResponder(client, msg);
	goto Node_56_1484;
	Node_56_1481:;
	incoming__before__AutoResponder(client, msg);
	goto Node_56_1484;
	Node_56_1484:;
	// End of Function
}
void printMail(signed int msg) {
	if (!((__SELECTED_FEATURE_Verify != 0))) goto Node_57_1489;
	printMail__role__Verify(msg);
	goto Node_57_1492;
	Node_57_1489:;
	printMail__before__Verify(msg);
	goto Node_57_1492;
	Node_57_1492:;
	// End of Function
}
void incoming__role__Decrypt(signed int client, signed int msg) {
	signed int privkey;
	signed int tmp___0;
	signed int tmp___1;
	signed int tmp___2;
	privkey = getClientPrivateKey(client);
	if (!((privkey != 0))) goto Node_58_1510;
	tmp___0 = isEncrypted(msg);
	if (!((tmp___0 != 0))) goto Node_58_1509;
	tmp___1 = getEmailEncryptionKey(msg);
	tmp___2 = isKeyPairValid(tmp___1, privkey);
	if (!((tmp___2 != 0))) goto Node_58_1508;
	setEmailIsEncrypted(msg, 0);
	setEmailEncryptionKey(msg, 0);
	Node_58_1508:;
	Node_58_1509:;
	Node_58_1510:;
	incoming__before__Decrypt(client, msg);
	goto Node_58_1518;
	Node_58_1518:;
	// End of Function
}
signed int findPublicKey(signed int handle, signed int userid) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_59_1540;
	if (!((userid == __ste_Client_Keyring0_User0))) goto Node_59_1527;
	retValue_acc = __ste_Client_Keyring0_PublicKey0;
	return retValue_acc;
	Node_59_1527:;
	if (!((userid == __ste_Client_Keyring0_User1))) goto Node_59_1533;
	retValue_acc = __ste_Client_Keyring0_PublicKey1;
	return retValue_acc;
	Node_59_1533:;
	retValue_acc = 0;
	return retValue_acc;
	Node_59_1540:;
	if (!((handle == 2))) goto Node_59_1560;
	if (!((userid == __ste_Client_Keyring1_User0))) goto Node_59_1547;
	retValue_acc = __ste_Client_Keyring1_PublicKey0;
	return retValue_acc;
	Node_59_1547:;
	if (!((userid == __ste_Client_Keyring1_User1))) goto Node_59_1553;
	retValue_acc = __ste_Client_Keyring1_PublicKey1;
	return retValue_acc;
	Node_59_1553:;
	retValue_acc = 0;
	return retValue_acc;
	Node_59_1560:;
	if (!((handle == 3))) goto Node_59_1580;
	if (!((userid == __ste_Client_Keyring2_User0))) goto Node_59_1567;
	retValue_acc = __ste_Client_Keyring2_PublicKey0;
	return retValue_acc;
	Node_59_1567:;
	if (!((userid == __ste_Client_Keyring2_User1))) goto Node_59_1573;
	retValue_acc = __ste_Client_Keyring2_PublicKey1;
	return retValue_acc;
	Node_59_1573:;
	retValue_acc = 0;
	return retValue_acc;
	Node_59_1580:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int isReadable__before__Encrypt(signed int msg) {
	signed int retValue_acc;
	retValue_acc = 1;
	return retValue_acc;
}
void setClientAddressBookAlias(signed int handle, signed int index, signed int value) {
	if (!((handle == 1))) goto Node_61_1613;
	if (!((index == 0))) goto Node_61_1604;
	__ste_Client_AddressBook0_Alias0 = value;
	goto Node_61_1611;
	Node_61_1604:;
	if (!((index == 1))) goto Node_61_1607;
	__ste_Client_AddressBook0_Alias1 = value;
	goto Node_61_1610;
	Node_61_1607:;
	if (!((index == 2))) goto Node_61_1609;
	__ste_Client_AddressBook0_Alias2 = value;
	Node_61_1609:;
	Node_61_1610:;
	Node_61_1611:;
	goto Node_61_1640;
	Node_61_1613:;
	if (!((handle == 2))) goto Node_61_1626;
	if (!((index == 0))) goto Node_61_1617;
	__ste_Client_AddressBook1_Alias0 = value;
	goto Node_61_1624;
	Node_61_1617:;
	if (!((index == 1))) goto Node_61_1620;
	__ste_Client_AddressBook1_Alias1 = value;
	goto Node_61_1623;
	Node_61_1620:;
	if (!((index == 2))) goto Node_61_1622;
	__ste_Client_AddressBook1_Alias2 = value;
	Node_61_1622:;
	Node_61_1623:;
	Node_61_1624:;
	goto Node_61_1639;
	Node_61_1626:;
	if (!((handle == 3))) goto Node_61_1638;
	if (!((index == 0))) goto Node_61_1630;
	__ste_Client_AddressBook2_Alias0 = value;
	goto Node_61_1637;
	Node_61_1630:;
	if (!((index == 1))) goto Node_61_1633;
	__ste_Client_AddressBook2_Alias1 = value;
	goto Node_61_1636;
	Node_61_1633:;
	if (!((index == 2))) goto Node_61_1635;
	__ste_Client_AddressBook2_Alias2 = value;
	Node_61_1635:;
	Node_61_1636:;
	Node_61_1637:;
	Node_61_1638:;
	Node_61_1639:;
	Node_61_1640:;
	goto Node_61_1642;
	Node_61_1642:;
	// End of Function
}
signed int prompt(char* msg) {
	signed int retValue_acc;
	signed int retval;
	char *__cil_tmp4;
	__cil_tmp4 = (char*)("%s\n");
	retValue_acc = retval;
	return retValue_acc;
}
void verify(signed int client, signed int msg) {
	signed int tmp;
	signed int tmp___0;
	signed int pubkey;
	signed int tmp___1;
	signed int tmp___3;
	signed int tmp___4;
	tmp = isReadable(msg);
	if (!((tmp != 0))) goto Node_63_1681;
	tmp___0 = isSigned(msg);
	if ((tmp___0 != 0)) goto Node_63_1679;
	goto Node_63_1708;
	Node_63_1679:;
	goto Node_63_1689;
	Node_63_1681:;
	goto Node_63_1708;
	Node_63_1689:;
	tmp___1 = getEmailFrom(msg);
	pubkey = findPublicKey(client, tmp___1);
	if (!((pubkey != 0))) goto Node_63_1699;
	tmp___3 = getEmailSignKey(msg);
	tmp___4 = isKeyPairValid(tmp___3, pubkey);
	if (!((tmp___4 != 0))) goto Node_63_1698;
	setEmailIsSignatureVerified(msg, 1);
	Node_63_1698:;
	Node_63_1699:;
	goto Node_63_1708;
	Node_63_1708:;
	// End of Function
}
void outgoing__role__AddressBook(signed int client, signed int msg) {
	signed int size;
	signed int receiver;
	signed int second;
	signed int tmp___2;
	size = getClientAddressBookSize(client);
	if (!((size != 0))) goto Node_64_1732;
	sendToAddressBook(client, msg);
	puts("sending to alias in address book\n");
	receiver = getEmailTo(msg);
	puts("sending to second receipient\n");
	second = getClientAddressBookAddress(client, 1);
	setEmailTo(msg, second);
	outgoing__before__AddressBook(client, msg);
	tmp___2 = getClientAddressBookAddress(client, 0);
	setEmailTo(msg, tmp___2);
	outgoing__before__AddressBook(client, msg);
	goto Node_64_1733;
	Node_64_1732:;
	outgoing__before__AddressBook(client, msg);
	Node_64_1733:;
	goto Node_64_1742;
	Node_64_1742:;
	// End of Function
}
signed int getClientId(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_65_1750;
	retValue_acc = __ste_client_idCounter0;
	return retValue_acc;
	Node_65_1750:;
	if (!((handle == 2))) goto Node_65_1756;
	retValue_acc = __ste_client_idCounter1;
	return retValue_acc;
	Node_65_1756:;
	if (!((handle == 3))) goto Node_65_1762;
	retValue_acc = __ste_client_idCounter2;
	return retValue_acc;
	Node_65_1762:;
	retValue_acc = 0;
	return retValue_acc;
}
void bobToRjh() {
	signed int tmp;
	signed int tmp___0;
	signed int tmp___1;
	puts("Please enter a subject and a message body.\n");
	sendEmail(bob, rjh);
	tmp___1 = is_queue_empty();
	if ((tmp___1 != 0)) goto Node_66_1783;
	tmp = get_queued_email();
	tmp___0 = get_queued_client();
	outgoing(tmp___0, tmp);
	Node_66_1783:;
	goto Node_66_1788;
	Node_66_1788:;
	// End of Function
}
signed int getClientAddressBookAddress(signed int handle, signed int index) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_67_1817;
	if (!((index == 0))) goto Node_67_1797;
	retValue_acc = __ste_Client_AddressBook0_Address0;
	return retValue_acc;
	Node_67_1797:;
	if (!((index == 1))) goto Node_67_1803;
	retValue_acc = __ste_Client_AddressBook0_Address1;
	return retValue_acc;
	Node_67_1803:;
	if (!((index == 2))) goto Node_67_1809;
	retValue_acc = __ste_Client_AddressBook0_Address2;
	return retValue_acc;
	Node_67_1809:;
	retValue_acc = 0;
	return retValue_acc;
	Node_67_1817:;
	if (!((handle == 2))) goto Node_67_1844;
	if (!((index == 0))) goto Node_67_1824;
	retValue_acc = __ste_Client_AddressBook1_Address0;
	return retValue_acc;
	Node_67_1824:;
	if (!((index == 1))) goto Node_67_1830;
	retValue_acc = __ste_Client_AddressBook1_Address1;
	return retValue_acc;
	Node_67_1830:;
	if (!((index == 2))) goto Node_67_1836;
	retValue_acc = __ste_Client_AddressBook1_Address2;
	return retValue_acc;
	Node_67_1836:;
	retValue_acc = 0;
	return retValue_acc;
	Node_67_1844:;
	if (!((handle == 3))) goto Node_67_1871;
	if (!((index == 0))) goto Node_67_1851;
	retValue_acc = __ste_Client_AddressBook2_Address0;
	return retValue_acc;
	Node_67_1851:;
	if (!((index == 1))) goto Node_67_1857;
	retValue_acc = __ste_Client_AddressBook2_Address1;
	return retValue_acc;
	Node_67_1857:;
	if (!((index == 2))) goto Node_67_1863;
	retValue_acc = __ste_Client_AddressBook2_Address2;
	return retValue_acc;
	Node_67_1863:;
	retValue_acc = 0;
	return retValue_acc;
	Node_67_1871:;
	retValue_acc = 0;
	return retValue_acc;
}
void chuckKeyAdd() {
	createClientKeyringEntry(chuck);
	setClientKeyringUser(chuck, 0, 1);
	setClientKeyringPublicKey(chuck, 0, 123);
	goto Node_68_1886;
	Node_68_1886:;
	// End of Function
}
signed int getEmailFrom(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_69_1894;
	retValue_acc = __ste_email_from0;
	return retValue_acc;
	Node_69_1894:;
	if (!((handle == 2))) goto Node_69_1900;
	retValue_acc = __ste_email_from1;
	return retValue_acc;
	Node_69_1900:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int initClient() {
	signed int retValue_acc;
	if (!((__ste_Client_counter < 3))) goto Node_70_1918;
	__ste_Client_counter = (__ste_Client_counter + 1);
	retValue_acc = __ste_Client_counter;
	return retValue_acc;
	Node_70_1918:;
	retValue_acc = -1;
	return retValue_acc;
}
void setClientAddressBookAddress(signed int handle, signed int index, signed int value) {
	if (!((handle == 1))) goto Node_71_1940;
	if (!((index == 0))) goto Node_71_1931;
	__ste_Client_AddressBook0_Address0 = value;
	goto Node_71_1938;
	Node_71_1931:;
	if (!((index == 1))) goto Node_71_1934;
	__ste_Client_AddressBook0_Address1 = value;
	goto Node_71_1937;
	Node_71_1934:;
	if (!((index == 2))) goto Node_71_1936;
	__ste_Client_AddressBook0_Address2 = value;
	Node_71_1936:;
	Node_71_1937:;
	Node_71_1938:;
	goto Node_71_1967;
	Node_71_1940:;
	if (!((handle == 2))) goto Node_71_1953;
	if (!((index == 0))) goto Node_71_1944;
	__ste_Client_AddressBook1_Address0 = value;
	goto Node_71_1951;
	Node_71_1944:;
	if (!((index == 1))) goto Node_71_1947;
	__ste_Client_AddressBook1_Address1 = value;
	goto Node_71_1950;
	Node_71_1947:;
	if (!((index == 2))) goto Node_71_1949;
	__ste_Client_AddressBook1_Address2 = value;
	Node_71_1949:;
	Node_71_1950:;
	Node_71_1951:;
	goto Node_71_1966;
	Node_71_1953:;
	if (!((handle == 3))) goto Node_71_1965;
	if (!((index == 0))) goto Node_71_1957;
	__ste_Client_AddressBook2_Address0 = value;
	goto Node_71_1964;
	Node_71_1957:;
	if (!((index == 1))) goto Node_71_1960;
	__ste_Client_AddressBook2_Address1 = value;
	goto Node_71_1963;
	Node_71_1960:;
	if (!((index == 2))) goto Node_71_1962;
	__ste_Client_AddressBook2_Address2 = value;
	Node_71_1962:;
	Node_71_1963:;
	Node_71_1964:;
	Node_71_1965:;
	Node_71_1966:;
	Node_71_1967:;
	goto Node_71_1969;
	Node_71_1969:;
	// End of Function
}
signed int getClientAddressBookSize(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_72_1977;
	retValue_acc = __ste_ClientAddressBook_size0;
	return retValue_acc;
	Node_72_1977:;
	if (!((handle == 2))) goto Node_72_1983;
	retValue_acc = __ste_ClientAddressBook_size1;
	return retValue_acc;
	Node_72_1983:;
	if (!((handle == 3))) goto Node_72_1989;
	retValue_acc = __ste_ClientAddressBook_size2;
	return retValue_acc;
	Node_72_1989:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int getClientAutoResponse(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_73_2007;
	retValue_acc = __ste_client_autoResponse0;
	return retValue_acc;
	Node_73_2007:;
	if (!((handle == 2))) goto Node_73_2013;
	retValue_acc = __ste_client_autoResponse1;
	return retValue_acc;
	Node_73_2013:;
	if (!((handle == 3))) goto Node_73_2019;
	retValue_acc = __ste_client_autoResponse2;
	return retValue_acc;
	Node_73_2019:;
	retValue_acc = -1;
	return retValue_acc;
}
void rjhSetAutoRespond() {
	setClientAutoResponse(rjh, 1);
	goto Node_74_2032;
	Node_74_2032:;
	// End of Function
}
void rjhToBob() {
	puts("Please enter a subject and a message body.\n");
	sendEmail(rjh, bob);
	goto Node_75_2036;
	Node_75_2036:;
	// End of Function
}
signed int getClientKeyringSize(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_76_2044;
	retValue_acc = __ste_ClientKeyring_size0;
	return retValue_acc;
	Node_76_2044:;
	if (!((handle == 2))) goto Node_76_2050;
	retValue_acc = __ste_ClientKeyring_size1;
	return retValue_acc;
	Node_76_2050:;
	if (!((handle == 3))) goto Node_76_2056;
	retValue_acc = __ste_ClientKeyring_size2;
	return retValue_acc;
	Node_76_2056:;
	retValue_acc = 0;
	return retValue_acc;
}
void sendToAddressBook(signed int client, signed int msg) {
	goto Node_77_2068;
	Node_77_2068:;
	// End of Function
}
void rjhDeletePrivateKey() {
	setClientPrivateKey(rjh, 0);
	goto Node_78_2071;
	Node_78_2071:;
	// End of Function
}
void forward(signed int client, signed int msg) {
	puts("Forwarding message.\n");
	printMail(msg);
	queue(client, msg);
	goto Node_79_2076;
	Node_79_2076:;
	// End of Function
}
void rjhKeyAdd() {
	createClientKeyringEntry(rjh);
	setClientKeyringUser(rjh, 0, 1);
	setClientKeyringPublicKey(rjh, 0, 123);
	goto Node_80_2081;
	Node_80_2081:;
	// End of Function
}
void setup() {
	char *__cil_tmp1;
	char *__cil_tmp2;
	char *__cil_tmp3;
	bob = 1;
	setup_bob(bob);
	__cil_tmp1 = (char*)("bob: %d\n");
	rjh = 2;
	setup_rjh(rjh);
	__cil_tmp2 = (char*)("rjh: %d\n");
	chuck = 3;
	setup_chuck(chuck);
	__cil_tmp3 = (char*)("chuck: %d\n");
	goto Node_81_2101;
	Node_81_2101:;
	// End of Function
}
signed int getClientPrivateKey(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_82_2109;
	retValue_acc = __ste_client_privateKey0;
	return retValue_acc;
	Node_82_2109:;
	if (!((handle == 2))) goto Node_82_2115;
	retValue_acc = __ste_client_privateKey1;
	return retValue_acc;
	Node_82_2115:;
	if (!((handle == 3))) goto Node_82_2121;
	retValue_acc = __ste_client_privateKey2;
	return retValue_acc;
	Node_82_2121:;
	retValue_acc = 0;
	return retValue_acc;
}
void chuckKeyAddRjh() {
	createClientKeyringEntry(chuck);
	setClientKeyringUser(chuck, 0, 2);
	setClientKeyringPublicKey(chuck, 0, 456);
	goto Node_83_2136;
	Node_83_2136:;
	// End of Function
}
void printMail__before__Verify(signed int msg) {
	if (!((__SELECTED_FEATURE_Sign != 0))) goto Node_84_2141;
	printMail__role__Sign(msg);
	goto Node_84_2144;
	Node_84_2141:;
	printMail__before__Sign(msg);
	goto Node_84_2144;
	Node_84_2144:;
	// End of Function
}
void rjhEnableForwarding() {
	setClientForwardReceiver(rjh, chuck);
	goto Node_85_2147;
	Node_85_2147:;
	// End of Function
}
void rjhKeyChange() {
	generateKeyPair(rjh, 666);
	goto Node_86_2150;
	Node_86_2150:;
	// End of Function
}
void bobSetAddressBook() {
	setClientAddressBookSize(bob, 1);
	setClientAddressBookAlias(bob, 0, rjh);
	setClientAddressBookAddress(bob, 0, rjh);
	setClientAddressBookAddress(bob, 1, chuck);
	goto Node_87_2156;
	Node_87_2156:;
	// End of Function
}
void bobKeyChange() {
	generateKeyPair(bob, 777);
	goto Node_88_2159;
	Node_88_2159:;
	// End of Function
}
void setClientAddressBookSize(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_89_2163;
	__ste_ClientAddressBook_size0 = value;
	goto Node_89_2170;
	Node_89_2163:;
	if (!((handle == 2))) goto Node_89_2166;
	__ste_ClientAddressBook_size1 = value;
	goto Node_89_2169;
	Node_89_2166:;
	if (!((handle == 3))) goto Node_89_2168;
	__ste_ClientAddressBook_size2 = value;
	Node_89_2168:;
	Node_89_2169:;
	Node_89_2170:;
	goto Node_89_2172;
	Node_89_2172:;
	// End of Function
}
void __automaton_fail() {
	reach_error();
	exit(0);
}
void setClientPrivateKey(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_91_2180;
	__ste_client_privateKey0 = value;
	goto Node_91_2187;
	Node_91_2180:;
	if (!((handle == 2))) goto Node_91_2183;
	__ste_client_privateKey1 = value;
	goto Node_91_2186;
	Node_91_2183:;
	if (!((handle == 3))) goto Node_91_2185;
	__ste_client_privateKey2 = value;
	Node_91_2185:;
	Node_91_2186:;
	Node_91_2187:;
	goto Node_91_2189;
	Node_91_2189:;
	// End of Function
}
void incoming__role__Forward(signed int client, signed int msg) {
	signed int fwreceiver;
	incoming__before__Forward(client, msg);
	fwreceiver = getClientForwardReceiver(client);
	if (!((fwreceiver != 0))) goto Node_92_2198;
	setEmailTo(msg, fwreceiver);
	forward(client, msg);
	Node_92_2198:;
	goto Node_92_2202;
	Node_92_2202:;
	// End of Function
}
void setEmailSubject(signed int handle, char* value) {
	if (!((handle == 1))) goto Node_93_2206;
	__ste_email_subject0 = value;
	goto Node_93_2209;
	Node_93_2206:;
	if (!((handle == 2))) goto Node_93_2208;
	__ste_email_subject1 = value;
	Node_93_2208:;
	Node_93_2209:;
	goto Node_93_2211;
	Node_93_2211:;
	// End of Function
}
signed int createClientKeyringEntry(signed int handle) {
	signed int retValue_acc;
	signed int size;
	signed int __cil_tmp5;
	size = getClientKeyringSize(handle);
	if (!((size < 2))) goto Node_94_2229;
	__cil_tmp5 = (size + 1);
	setClientKeyringSize(handle, __cil_tmp5);
	retValue_acc = (size + 1);
	return retValue_acc;
	Node_94_2229:;
	retValue_acc = -1;
	return retValue_acc;
}
void incoming__before__Decrypt(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_Verify != 0))) goto Node_95_2248;
	incoming__role__Verify(client, msg);
	goto Node_95_2251;
	Node_95_2248:;
	incoming__before__Verify(client, msg);
	goto Node_95_2251;
	Node_95_2251:;
	// End of Function
}
char* getClientName(signed int handle) {
	char *retValue_acc;
	void *__cil_tmp3;
	if (!((handle == 1))) goto Node_96_2261;
	retValue_acc = __ste_client_name0;
	return retValue_acc;
	Node_96_2261:;
	if (!((handle == 2))) goto Node_96_2268;
	retValue_acc = __ste_client_name1;
	return retValue_acc;
	Node_96_2268:;
	if (!((handle == 3))) goto Node_96_2275;
	retValue_acc = __ste_client_name2;
	return retValue_acc;
	Node_96_2275:;
	__cil_tmp3 = (void*)(0);
	retValue_acc = (char*)(__cil_tmp3);
	return retValue_acc;
}
void setClientName(signed int handle, char* value) {
	if (!((handle == 1))) goto Node_97_2292;
	__ste_client_name0 = value;
	goto Node_97_2299;
	Node_97_2292:;
	if (!((handle == 2))) goto Node_97_2295;
	__ste_client_name1 = value;
	goto Node_97_2298;
	Node_97_2295:;
	if (!((handle == 3))) goto Node_97_2297;
	__ste_client_name2 = value;
	Node_97_2297:;
	Node_97_2298:;
	Node_97_2299:;
	goto Node_97_2301;
	Node_97_2301:;
	// End of Function
}
void setClientOutbuffer(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_98_2305;
	__ste_client_outbuffer0 = value;
	goto Node_98_2312;
	Node_98_2305:;
	if (!((handle == 2))) goto Node_98_2308;
	__ste_client_outbuffer1 = value;
	goto Node_98_2311;
	Node_98_2308:;
	if (!((handle == 3))) goto Node_98_2310;
	__ste_client_outbuffer2 = value;
	Node_98_2310:;
	Node_98_2311:;
	Node_98_2312:;
	goto Node_98_2314;
	Node_98_2314:;
	// End of Function
}
signed int createClientAddressBookEntry(signed int handle) {
	signed int retValue_acc;
	signed int size;
	signed int __cil_tmp5;
	size = getClientAddressBookSize(handle);
	if (!((size < 3))) goto Node_99_2332;
	__cil_tmp5 = (size + 1);
	setClientAddressBookSize(handle, __cil_tmp5);
	retValue_acc = (size + 1);
	return retValue_acc;
	Node_99_2332:;
	retValue_acc = -1;
	return retValue_acc;
}
signed int getClientAddressBookAlias(signed int handle, signed int index) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_100_2375;
	if (!((index == 0))) goto Node_100_2355;
	retValue_acc = __ste_Client_AddressBook0_Alias0;
	return retValue_acc;
	Node_100_2355:;
	if (!((index == 1))) goto Node_100_2361;
	retValue_acc = __ste_Client_AddressBook0_Alias1;
	return retValue_acc;
	Node_100_2361:;
	if (!((index == 2))) goto Node_100_2367;
	retValue_acc = __ste_Client_AddressBook0_Alias2;
	return retValue_acc;
	Node_100_2367:;
	retValue_acc = 0;
	return retValue_acc;
	Node_100_2375:;
	if (!((handle == 2))) goto Node_100_2402;
	if (!((index == 0))) goto Node_100_2382;
	retValue_acc = __ste_Client_AddressBook1_Alias0;
	return retValue_acc;
	Node_100_2382:;
	if (!((index == 1))) goto Node_100_2388;
	retValue_acc = __ste_Client_AddressBook1_Alias1;
	return retValue_acc;
	Node_100_2388:;
	if (!((index == 2))) goto Node_100_2394;
	retValue_acc = __ste_Client_AddressBook1_Alias2;
	return retValue_acc;
	Node_100_2394:;
	retValue_acc = 0;
	return retValue_acc;
	Node_100_2402:;
	if (!((handle == 3))) goto Node_100_2429;
	if (!((index == 0))) goto Node_100_2409;
	retValue_acc = __ste_Client_AddressBook2_Alias0;
	return retValue_acc;
	Node_100_2409:;
	if (!((index == 1))) goto Node_100_2415;
	retValue_acc = __ste_Client_AddressBook2_Alias1;
	return retValue_acc;
	Node_100_2415:;
	if (!((index == 2))) goto Node_100_2421;
	retValue_acc = __ste_Client_AddressBook2_Alias2;
	return retValue_acc;
	Node_100_2421:;
	retValue_acc = 0;
	return retValue_acc;
	Node_100_2429:;
	retValue_acc = 0;
	return retValue_acc;
}
void setClientAutoResponse(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_101_2443;
	__ste_client_autoResponse0 = value;
	goto Node_101_2450;
	Node_101_2443:;
	if (!((handle == 2))) goto Node_101_2446;
	__ste_client_autoResponse1 = value;
	goto Node_101_2449;
	Node_101_2446:;
	if (!((handle == 3))) goto Node_101_2448;
	__ste_client_autoResponse2 = value;
	Node_101_2448:;
	Node_101_2449:;
	Node_101_2450:;
	goto Node_101_2452;
	Node_101_2452:;
	// End of Function
}
signed int isVerified(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_102_2460;
	retValue_acc = __ste_email_isSignatureVerified0;
	return retValue_acc;
	Node_102_2460:;
	if (!((handle == 2))) goto Node_102_2466;
	retValue_acc = __ste_email_isSignatureVerified1;
	return retValue_acc;
	Node_102_2466:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int getClientKeyringUser(signed int handle, signed int index) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_103_2497;
	if (!((index == 0))) goto Node_103_2484;
	retValue_acc = __ste_Client_Keyring0_User0;
	return retValue_acc;
	Node_103_2484:;
	if (!((index == 1))) goto Node_103_2490;
	retValue_acc = __ste_Client_Keyring0_User1;
	return retValue_acc;
	Node_103_2490:;
	retValue_acc = 0;
	return retValue_acc;
	Node_103_2497:;
	if (!((handle == 2))) goto Node_103_2517;
	if (!((index == 0))) goto Node_103_2504;
	retValue_acc = __ste_Client_Keyring1_User0;
	return retValue_acc;
	Node_103_2504:;
	if (!((index == 1))) goto Node_103_2510;
	retValue_acc = __ste_Client_Keyring1_User1;
	return retValue_acc;
	Node_103_2510:;
	retValue_acc = 0;
	return retValue_acc;
	Node_103_2517:;
	if (!((handle == 3))) goto Node_103_2537;
	if (!((index == 0))) goto Node_103_2524;
	retValue_acc = __ste_Client_Keyring2_User0;
	return retValue_acc;
	Node_103_2524:;
	if (!((index == 1))) goto Node_103_2530;
	retValue_acc = __ste_Client_Keyring2_User1;
	return retValue_acc;
	Node_103_2530:;
	retValue_acc = 0;
	return retValue_acc;
	Node_103_2537:;
	retValue_acc = 0;
	return retValue_acc;
}
void setClientKeyringUser(signed int handle, signed int index, signed int value) {
	if (!((handle == 1))) goto Node_104_2557;
	if (!((index == 0))) goto Node_104_2552;
	__ste_Client_Keyring0_User0 = value;
	goto Node_104_2555;
	Node_104_2552:;
	if (!((index == 1))) goto Node_104_2554;
	__ste_Client_Keyring0_User1 = value;
	Node_104_2554:;
	Node_104_2555:;
	goto Node_104_2576;
	Node_104_2557:;
	if (!((handle == 2))) goto Node_104_2566;
	if (!((index == 0))) goto Node_104_2561;
	__ste_Client_Keyring1_User0 = value;
	goto Node_104_2564;
	Node_104_2561:;
	if (!((index == 1))) goto Node_104_2563;
	__ste_Client_Keyring1_User1 = value;
	Node_104_2563:;
	Node_104_2564:;
	goto Node_104_2575;
	Node_104_2566:;
	if (!((handle == 3))) goto Node_104_2574;
	if (!((index == 0))) goto Node_104_2570;
	__ste_Client_Keyring2_User0 = value;
	goto Node_104_2573;
	Node_104_2570:;
	if (!((index == 1))) goto Node_104_2572;
	__ste_Client_Keyring2_User1 = value;
	Node_104_2572:;
	Node_104_2573:;
	Node_104_2574:;
	Node_104_2575:;
	Node_104_2576:;
	goto Node_104_2578;
	Node_104_2578:;
	// End of Function
}
signed int getClientKeyringPublicKey(signed int handle, signed int index) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_105_2600;
	if (!((index == 0))) goto Node_105_2587;
	retValue_acc = __ste_Client_Keyring0_PublicKey0;
	return retValue_acc;
	Node_105_2587:;
	if (!((index == 1))) goto Node_105_2593;
	retValue_acc = __ste_Client_Keyring0_PublicKey1;
	return retValue_acc;
	Node_105_2593:;
	retValue_acc = 0;
	return retValue_acc;
	Node_105_2600:;
	if (!((handle == 2))) goto Node_105_2620;
	if (!((index == 0))) goto Node_105_2607;
	retValue_acc = __ste_Client_Keyring1_PublicKey0;
	return retValue_acc;
	Node_105_2607:;
	if (!((index == 1))) goto Node_105_2613;
	retValue_acc = __ste_Client_Keyring1_PublicKey1;
	return retValue_acc;
	Node_105_2613:;
	retValue_acc = 0;
	return retValue_acc;
	Node_105_2620:;
	if (!((handle == 3))) goto Node_105_2640;
	if (!((index == 0))) goto Node_105_2627;
	retValue_acc = __ste_Client_Keyring2_PublicKey0;
	return retValue_acc;
	Node_105_2627:;
	if (!((index == 1))) goto Node_105_2633;
	retValue_acc = __ste_Client_Keyring2_PublicKey1;
	return retValue_acc;
	Node_105_2633:;
	retValue_acc = 0;
	return retValue_acc;
	Node_105_2640:;
	retValue_acc = 0;
	return retValue_acc;
}
void setClientForwardReceiver(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_106_2654;
	__ste_client_forwardReceiver0 = value;
	goto Node_106_2661;
	Node_106_2654:;
	if (!((handle == 2))) goto Node_106_2657;
	__ste_client_forwardReceiver1 = value;
	goto Node_106_2660;
	Node_106_2657:;
	if (!((handle == 3))) goto Node_106_2659;
	__ste_client_forwardReceiver2 = value;
	Node_106_2659:;
	Node_106_2660:;
	Node_106_2661:;
	goto Node_106_2663;
	Node_106_2663:;
	// End of Function
}
void setClientId(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_107_2667;
	__ste_client_idCounter0 = value;
	goto Node_107_2674;
	Node_107_2667:;
	if (!((handle == 2))) goto Node_107_2670;
	__ste_client_idCounter1 = value;
	goto Node_107_2673;
	Node_107_2670:;
	if (!((handle == 3))) goto Node_107_2672;
	__ste_client_idCounter2 = value;
	Node_107_2672:;
	Node_107_2673:;
	Node_107_2674:;
	goto Node_107_2676;
	Node_107_2676:;
	// End of Function
}
signed int select_one() {
	signed int retValue_acc;
	signed int choice;
	choice = __VERIFIER_nondet_signed_int();
	retValue_acc = choice;
	return retValue_acc;
}
signed int findClientAddressBookAlias(signed int handle, signed int userid) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_109_2722;
	if (!((userid == __ste_Client_AddressBook0_Alias0))) goto Node_109_2702;
	retValue_acc = 0;
	return retValue_acc;
	Node_109_2702:;
	if (!((userid == __ste_Client_AddressBook0_Alias1))) goto Node_109_2708;
	retValue_acc = 1;
	return retValue_acc;
	Node_109_2708:;
	if (!((userid == __ste_Client_AddressBook0_Alias2))) goto Node_109_2714;
	retValue_acc = 2;
	return retValue_acc;
	Node_109_2714:;
	retValue_acc = -1;
	return retValue_acc;
	Node_109_2722:;
	if (!((handle == 2))) goto Node_109_2749;
	if (!((userid == __ste_Client_AddressBook1_Alias0))) goto Node_109_2729;
	retValue_acc = 0;
	return retValue_acc;
	Node_109_2729:;
	if (!((userid == __ste_Client_AddressBook1_Alias1))) goto Node_109_2735;
	retValue_acc = 1;
	return retValue_acc;
	Node_109_2735:;
	if (!((userid == __ste_Client_AddressBook1_Alias2))) goto Node_109_2741;
	retValue_acc = 2;
	return retValue_acc;
	Node_109_2741:;
	retValue_acc = -1;
	return retValue_acc;
	Node_109_2749:;
	if (!((handle == 3))) goto Node_109_2776;
	if (!((userid == __ste_Client_AddressBook2_Alias0))) goto Node_109_2756;
	retValue_acc = 0;
	return retValue_acc;
	Node_109_2756:;
	if (!((userid == __ste_Client_AddressBook2_Alias1))) goto Node_109_2762;
	retValue_acc = 1;
	return retValue_acc;
	Node_109_2762:;
	if (!((userid == __ste_Client_AddressBook2_Alias2))) goto Node_109_2768;
	retValue_acc = 2;
	return retValue_acc;
	Node_109_2768:;
	retValue_acc = -1;
	return retValue_acc;
	Node_109_2776:;
	retValue_acc = -1;
	return retValue_acc;
}
void setup_bob__before__Keys(signed int bob___0) {
	setClientId(bob___0, bob___0);
	goto Node_110_2789;
	Node_110_2789:;
	// End of Function
}
void setup_rjh__role__Keys(signed int rjh___0) {
	setup_rjh__before__Keys(rjh___0);
	setClientPrivateKey(rjh___0, 456);
	goto Node_111_2793;
	Node_111_2793:;
	// End of Function
}
void setClientKeyringSize(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_112_2797;
	__ste_ClientKeyring_size0 = value;
	goto Node_112_2804;
	Node_112_2797:;
	if (!((handle == 2))) goto Node_112_2800;
	__ste_ClientKeyring_size1 = value;
	goto Node_112_2803;
	Node_112_2800:;
	if (!((handle == 3))) goto Node_112_2802;
	__ste_ClientKeyring_size2 = value;
	Node_112_2802:;
	Node_112_2803:;
	Node_112_2804:;
	goto Node_112_2806;
	Node_112_2806:;
	// End of Function
}
signed int getEmailId(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_113_2814;
	retValue_acc = __ste_email_id0;
	return retValue_acc;
	Node_113_2814:;
	if (!((handle == 2))) goto Node_113_2820;
	retValue_acc = __ste_email_id1;
	return retValue_acc;
	Node_113_2820:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int getClientForwardReceiver(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_114_2837;
	retValue_acc = __ste_client_forwardReceiver0;
	return retValue_acc;
	Node_114_2837:;
	if (!((handle == 2))) goto Node_114_2843;
	retValue_acc = __ste_client_forwardReceiver1;
	return retValue_acc;
	Node_114_2843:;
	if (!((handle == 3))) goto Node_114_2849;
	retValue_acc = __ste_client_forwardReceiver2;
	return retValue_acc;
	Node_114_2849:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int valid_product() {
	signed int retValue_acc;
	signed int tmp;
	if ((__SELECTED_FEATURE_Encrypt != 0)) goto Node_115_2865;
	goto Node_115_2866;
	Node_115_2865:;
	if (!((__SELECTED_FEATURE_Decrypt != 0))) goto Node_115_2912;
	Node_115_2866:;
	if ((__SELECTED_FEATURE_Decrypt != 0)) goto Node_115_2869;
	goto Node_115_2870;
	Node_115_2869:;
	if (!((__SELECTED_FEATURE_Encrypt != 0))) goto Node_115_2908;
	Node_115_2870:;
	if ((__SELECTED_FEATURE_Encrypt != 0)) goto Node_115_2873;
	goto Node_115_2874;
	Node_115_2873:;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_115_2904;
	Node_115_2874:;
	if ((__SELECTED_FEATURE_Sign != 0)) goto Node_115_2877;
	goto Node_115_2878;
	Node_115_2877:;
	if (!((__SELECTED_FEATURE_Verify != 0))) goto Node_115_2900;
	Node_115_2878:;
	if ((__SELECTED_FEATURE_Verify != 0)) goto Node_115_2881;
	goto Node_115_2882;
	Node_115_2881:;
	if (!((__SELECTED_FEATURE_Sign != 0))) goto Node_115_2896;
	Node_115_2882:;
	if ((__SELECTED_FEATURE_Sign != 0)) goto Node_115_2885;
	goto Node_115_2886;
	Node_115_2885:;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_115_2892;
	Node_115_2886:;
	if (!((__SELECTED_FEATURE_Base != 0))) goto Node_115_2889;
	tmp = 1;
	goto Node_115_2890;
	Node_115_2889:;
	tmp = 0;
	Node_115_2890:;
	goto Node_115_2893;
	Node_115_2892:;
	tmp = 0;
	Node_115_2893:;
	goto Node_115_2897;
	Node_115_2896:;
	tmp = 0;
	Node_115_2897:;
	goto Node_115_2901;
	Node_115_2900:;
	tmp = 0;
	Node_115_2901:;
	goto Node_115_2905;
	Node_115_2904:;
	tmp = 0;
	Node_115_2905:;
	goto Node_115_2909;
	Node_115_2908:;
	tmp = 0;
	Node_115_2909:;
	goto Node_115_2913;
	Node_115_2912:;
	tmp = 0;
	Node_115_2913:;
	retValue_acc = tmp;
	return retValue_acc;
}
void incoming__role__AutoResponder(signed int client, signed int msg) {
	signed int tmp;
	incoming__before__AutoResponder(client, msg);
	tmp = getClientAutoResponse(client);
	if (!((tmp != 0))) goto Node_116_2930;
	autoRespond(client, msg);
	Node_116_2930:;
	goto Node_116_2933;
	Node_116_2933:;
	// End of Function
}
void setEmailId(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_117_2937;
	__ste_email_id0 = value;
	goto Node_117_2940;
	Node_117_2937:;
	if (!((handle == 2))) goto Node_117_2939;
	__ste_email_id1 = value;
	Node_117_2939:;
	Node_117_2940:;
	goto Node_117_2942;
	Node_117_2942:;
	// End of Function
}
void incoming__role__Verify(signed int client, signed int msg) {
	verify(client, msg);
	incoming__before__Verify(client, msg);
	goto Node_118_2946;
	Node_118_2946:;
	// End of Function
}
void incoming__before__Verify(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_Forward != 0))) goto Node_119_2951;
	incoming__role__Forward(client, msg);
	goto Node_119_2954;
	Node_119_2951:;
	incoming__before__Forward(client, msg);
	goto Node_119_2954;
	Node_119_2954:;
	// End of Function
}
void setClientKeyringPublicKey(signed int handle, signed int index, signed int value) {
	if (!((handle == 1))) goto Node_120_2964;
	if (!((index == 0))) goto Node_120_2959;
	__ste_Client_Keyring0_PublicKey0 = value;
	goto Node_120_2962;
	Node_120_2959:;
	if (!((index == 1))) goto Node_120_2961;
	__ste_Client_Keyring0_PublicKey1 = value;
	Node_120_2961:;
	Node_120_2962:;
	goto Node_120_2983;
	Node_120_2964:;
	if (!((handle == 2))) goto Node_120_2973;
	if (!((index == 0))) goto Node_120_2968;
	__ste_Client_Keyring1_PublicKey0 = value;
	goto Node_120_2971;
	Node_120_2968:;
	if (!((index == 1))) goto Node_120_2970;
	__ste_Client_Keyring1_PublicKey1 = value;
	Node_120_2970:;
	Node_120_2971:;
	goto Node_120_2982;
	Node_120_2973:;
	if (!((handle == 3))) goto Node_120_2981;
	if (!((index == 0))) goto Node_120_2977;
	__ste_Client_Keyring2_PublicKey0 = value;
	goto Node_120_2980;
	Node_120_2977:;
	if (!((index == 1))) goto Node_120_2979;
	__ste_Client_Keyring2_PublicKey1 = value;
	Node_120_2979:;
	Node_120_2980:;
	Node_120_2981:;
	Node_120_2982:;
	Node_120_2983:;
	goto Node_120_2985;
	Node_120_2985:;
	// End of Function
}
void select_features() {
	__SELECTED_FEATURE_Base = select_one();
	__SELECTED_FEATURE_Keys = select_one();
	__SELECTED_FEATURE_Encrypt = select_one();
	__SELECTED_FEATURE_AutoResponder = select_one();
	__SELECTED_FEATURE_AddressBook = select_one();
	__SELECTED_FEATURE_Sign = 1;
	__SELECTED_FEATURE_Forward = select_one();
	__SELECTED_FEATURE_Verify = select_one();
	__SELECTED_FEATURE_Decrypt = select_one();
	goto Node_121_2996;
	Node_121_2996:;
	// End of Function
}
void setup_rjh(signed int rjh___0) {
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_122_3001;
	setup_rjh__role__Keys(rjh___0);
	goto Node_122_3004;
	Node_122_3001:;
	setup_rjh__before__Keys(rjh___0);
	goto Node_122_3004;
	Node_122_3004:;
	// End of Function
}
void select_helpers() {
	__GUIDSL_ROOT_PRODUCTION = 1;
	goto Node_123_3007;
	Node_123_3007:;
	// End of Function
}
void setup_chuck(signed int chuck___0) {
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_124_3012;
	setup_chuck__role__Keys(chuck___0);
	goto Node_124_3015;
	Node_124_3012:;
	setup_chuck__before__Keys(chuck___0);
	goto Node_124_3015;
	Node_124_3015:;
	// End of Function
}
signed int initEmail() {
	signed int retValue_acc;
	if (!((__ste_Email_counter < 2))) goto Node_125_3024;
	__ste_Email_counter = (__ste_Email_counter + 1);
	retValue_acc = __ste_Email_counter;
	return retValue_acc;
	Node_125_3024:;
	retValue_acc = -1;
	return retValue_acc;
}
void setEmailBody(signed int handle, char* value) {
	if (!((handle == 1))) goto Node_126_3036;
	__ste_email_body0 = value;
	goto Node_126_3039;
	Node_126_3036:;
	if (!((handle == 2))) goto Node_126_3038;
	__ste_email_body1 = value;
	Node_126_3038:;
	Node_126_3039:;
	goto Node_126_3041;
	Node_126_3041:;
	// End of Function
}
void outgoing(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_Sign != 0))) goto Node_127_3046;
	outgoing__role__Sign(client, msg);
	goto Node_127_3049;
	Node_127_3046:;
	outgoing__before__Sign(client, msg);
	goto Node_127_3049;
	Node_127_3049:;
	// End of Function
}
void setup_bob(signed int bob___0) {
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_128_3054;
	setup_bob__role__Keys(bob___0);
	goto Node_128_3057;
	Node_128_3054:;
	setup_bob__before__Keys(bob___0);
	goto Node_128_3057;
	Node_128_3057:;
	// End of Function
}
void bobKeyAddChuck() {
	createClientKeyringEntry(bob);
	setClientKeyringUser(bob, 1, 3);
	setClientKeyringPublicKey(bob, 1, 789);
	goto Node_129_3062;
	Node_129_3062:;
	// End of Function
}
void rjhKeyAddChuck() {
	createClientKeyringEntry(rjh);
	setClientKeyringUser(rjh, 0, 3);
	setClientKeyringPublicKey(rjh, 0, 789);
	goto Node_130_3067;
	Node_130_3067:;
	// End of Function
}
void setup_bob__role__Keys(signed int bob___0) {
	setup_bob__before__Keys(bob___0);
	setClientPrivateKey(bob___0, 123);
	goto Node_131_3071;
	Node_131_3071:;
	// End of Function
}
void setup_rjh__before__Keys(signed int rjh___0) {
	setClientId(rjh___0, rjh___0);
	goto Node_132_3074;
	Node_132_3074:;
	// End of Function
}
void setup_chuck__before__Keys(signed int chuck___0) {
	setClientId(chuck___0, chuck___0);
	goto Node_133_3077;
	Node_133_3077:;
	// End of Function
}
void setup_chuck__role__Keys(signed int chuck___0) {
	setup_chuck__before__Keys(chuck___0);
	setClientPrivateKey(chuck___0, 789);
	goto Node_134_3081;
	Node_134_3081:;
	// End of Function
}
