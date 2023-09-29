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
void __utac_acc__EncryptVerify_spec__1(signed int msg);
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
extern signed int __VERIFIER_nondet_signed_int();
signed int __iv__isKeyPairValid_stub(signed int publicKey, signed int privateKey);
void __iv__forward_stub(signed int client, signed int msg);
int main() {
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
signed int select_one() {
	signed int retValue_acc;
	signed int choice;
	choice = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", choice);
	retValue_acc = choice;
	return retValue_acc;
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
	if (!((i > 0))) __CPROVER_printf("violated property: Node_4_62");
	assert((i > 0));
	if (!((i > 0))) goto Node_4_69;
	__cil_tmp4 = (unsigned long int)(this);
	__cil_tmp5 = (__cil_tmp4 + (unsigned long int)(16));
	mem_12 = (signed int*)(__cil_tmp5);
	__cil_tmp6 = *mem_12;
	if (!((i <= __cil_tmp6))) __CPROVER_printf("violated property: Node_4_68");
	assert((i <= __cil_tmp6));
	Node_4_69:;
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
	if (!((i > 0))) __CPROVER_printf("violated property: Node_5_115");
	assert((i > 0));
	if (!((i > 0))) goto Node_5_122;
	__cil_tmp4 = (unsigned long int)(this);
	__cil_tmp5 = (__cil_tmp4 + (unsigned long int)(16));
	mem_12 = (signed int*)(__cil_tmp5);
	__cil_tmp6 = *mem_12;
	if (!((i <= __cil_tmp6))) __CPROVER_printf("violated property: Node_5_121");
	assert((i <= __cil_tmp6));
	Node_5_122:;
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
	if (!((count == 0))) goto Node_6_202;
	return retValue_acc;
	Node_6_202:;
	if (!((mode == 0))) goto Node_6_237;
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
	Node_6_237:;
	if (!((mode == 1))) goto Node_6_292;
	temp = head;
	Node_6_240:;
	if (!((1 != 0))) goto Node_6_257;
	if (!((count > 1))) goto Node_6_258;
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
	goto Node_6_240;
	Node_6_257:;
	Node_6_258:;
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
	Node_6_292:;
	if (!((mode == 2))) goto Node_6_346;
	if (!((head != (struct __ACC__ERR*)(NULL)))) goto Node_6_321;
	mem_24 = (void**)(head);
	retValue_acc = *mem_24;
	return retValue_acc;
	Node_6_321:;
	retValue_acc = (void*)(0);
	return retValue_acc;
	Node_6_346:;
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
	Node_7_393:;
	if (!((1 != 0))) goto Node_7_413;
	__cil_tmp7 = (struct __UTAC__CFLOW_FUNC*)(0);
	__cil_tmp8 = (unsigned long int)(__cil_tmp7);
	__cil_tmp9 = (unsigned long int)(cf);
	if (!((__cil_tmp9 != __cil_tmp8))) goto Node_7_414;
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
	goto Node_7_393;
	Node_7_413:;
	Node_7_414:;
	__utac__exception__cf_handler_free(exception);
	goto Node_7_434;
	Node_7_434:;
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
	Node_8_456:;
	if (!((1 != 0))) goto Node_8_472;
	__cil_tmp7 = (struct __UTAC__CFLOW_FUNC*)(0);
	__cil_tmp8 = (unsigned long int)(__cil_tmp7);
	__cil_tmp9 = (unsigned long int)(cf);
	if (!((__cil_tmp9 != __cil_tmp8))) goto Node_8_473;
	tmp = cf;
	__cil_tmp10 = (unsigned long int)(cf);
	__cil_tmp11 = (__cil_tmp10 + (unsigned long int)(16));
	mem_16 = (struct __UTAC__CFLOW_FUNC**)(__cil_tmp11);
	cf = *mem_16;
	__cil_tmp12 = (void*)(tmp);
	free(__cil_tmp12);
	goto Node_8_456;
	Node_8_472:;
	Node_8_473:;
	__cil_tmp13 = (unsigned long int)(excep);
	__cil_tmp14 = (__cil_tmp13 + (unsigned long int)(24));
	mem_17 = (struct __UTAC__CFLOW_FUNC**)(__cil_tmp14);
	*mem_17 = (struct __UTAC__CFLOW_FUNC*)(0);
	goto Node_8_495;
	Node_8_495:;
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
	goto Node_9_549;
	Node_9_549:;
	// End of Function
}
signed int valid_product() {
	signed int retValue_acc;
	signed int tmp;
	if ((__SELECTED_FEATURE_Encrypt != 0)) goto Node_10_555;
	goto Node_10_556;
	Node_10_555:;
	if (!((__SELECTED_FEATURE_Decrypt != 0))) goto Node_10_602;
	Node_10_556:;
	if ((__SELECTED_FEATURE_Decrypt != 0)) goto Node_10_559;
	goto Node_10_560;
	Node_10_559:;
	if (!((__SELECTED_FEATURE_Encrypt != 0))) goto Node_10_598;
	Node_10_560:;
	if ((__SELECTED_FEATURE_Encrypt != 0)) goto Node_10_563;
	goto Node_10_564;
	Node_10_563:;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_10_594;
	Node_10_564:;
	if ((__SELECTED_FEATURE_Sign != 0)) goto Node_10_567;
	goto Node_10_568;
	Node_10_567:;
	if (!((__SELECTED_FEATURE_Verify != 0))) goto Node_10_590;
	Node_10_568:;
	if ((__SELECTED_FEATURE_Verify != 0)) goto Node_10_571;
	goto Node_10_572;
	Node_10_571:;
	if (!((__SELECTED_FEATURE_Sign != 0))) goto Node_10_586;
	Node_10_572:;
	if ((__SELECTED_FEATURE_Sign != 0)) goto Node_10_575;
	goto Node_10_576;
	Node_10_575:;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_10_582;
	Node_10_576:;
	if (!((__SELECTED_FEATURE_Base != 0))) goto Node_10_579;
	tmp = 1;
	goto Node_10_580;
	Node_10_579:;
	tmp = 0;
	Node_10_580:;
	goto Node_10_583;
	Node_10_582:;
	tmp = 0;
	Node_10_583:;
	goto Node_10_587;
	Node_10_586:;
	tmp = 0;
	Node_10_587:;
	goto Node_10_591;
	Node_10_590:;
	tmp = 0;
	Node_10_591:;
	goto Node_10_595;
	Node_10_594:;
	tmp = 0;
	Node_10_595:;
	goto Node_10_599;
	Node_10_598:;
	tmp = 0;
	Node_10_599:;
	goto Node_10_603;
	Node_10_602:;
	tmp = 0;
	Node_10_603:;
	retValue_acc = tmp;
	return retValue_acc;
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
	Node_11_650:;
	if (!((1 != 0))) goto Node_11_790;
	if (!((splverifierCounter < 4))) goto Node_11_791;
	splverifierCounter = (splverifierCounter + 1);
	if ((op1 != 0)) goto Node_11_667;
	tmp___9 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp___9);
	if (!((tmp___9 != 0))) goto Node_11_664;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_11_661;
	bobKeyAdd();
	Node_11_661:;
	op1 = 1;
	goto Node_11_665;
	Node_11_664:;
	goto Node_11_667;
	Node_11_665:;
	goto Node_11_788;
	Node_11_667:;
	if ((op2 != 0)) goto Node_11_678;
	tmp___8 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp___8);
	if (!((tmp___8 != 0))) goto Node_11_675;
	if (!((__SELECTED_FEATURE_AutoResponder != 0))) goto Node_11_672;
	rjhSetAutoRespond();
	Node_11_672:;
	op2 = 1;
	goto Node_11_676;
	Node_11_675:;
	goto Node_11_678;
	Node_11_676:;
	goto Node_11_787;
	Node_11_678:;
	if ((op3 != 0)) goto Node_11_689;
	tmp___7 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp___7);
	if (!((tmp___7 != 0))) goto Node_11_686;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_11_683;
	rjhDeletePrivateKey();
	Node_11_683:;
	op3 = 1;
	goto Node_11_687;
	Node_11_686:;
	goto Node_11_689;
	Node_11_687:;
	goto Node_11_786;
	Node_11_689:;
	if ((op4 != 0)) goto Node_11_700;
	tmp___6 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp___6);
	if (!((tmp___6 != 0))) goto Node_11_697;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_11_694;
	rjhKeyAdd();
	Node_11_694:;
	op4 = 1;
	goto Node_11_698;
	Node_11_697:;
	goto Node_11_700;
	Node_11_698:;
	goto Node_11_785;
	Node_11_700:;
	if ((op5 != 0)) goto Node_11_711;
	tmp___5 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp___5);
	if (!((tmp___5 != 0))) goto Node_11_708;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_11_705;
	chuckKeyAddRjh();
	Node_11_705:;
	op5 = 1;
	goto Node_11_709;
	Node_11_708:;
	goto Node_11_711;
	Node_11_709:;
	goto Node_11_784;
	Node_11_711:;
	if ((op6 != 0)) goto Node_11_722;
	tmp___4 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp___4);
	if (!((tmp___4 != 0))) goto Node_11_719;
	if (!((__SELECTED_FEATURE_Forward != 0))) goto Node_11_716;
	rjhEnableForwarding();
	Node_11_716:;
	op6 = 1;
	goto Node_11_720;
	Node_11_719:;
	goto Node_11_722;
	Node_11_720:;
	goto Node_11_783;
	Node_11_722:;
	if ((op7 != 0)) goto Node_11_733;
	tmp___3 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp___3);
	if (!((tmp___3 != 0))) goto Node_11_730;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_11_727;
	rjhKeyChange();
	Node_11_727:;
	op7 = 1;
	goto Node_11_731;
	Node_11_730:;
	goto Node_11_733;
	Node_11_731:;
	goto Node_11_782;
	Node_11_733:;
	if ((op8 != 0)) goto Node_11_744;
	tmp___2 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp___2);
	if (!((tmp___2 != 0))) goto Node_11_741;
	if (!((__SELECTED_FEATURE_AddressBook != 0))) goto Node_11_738;
	bobSetAddressBook();
	Node_11_738:;
	op8 = 1;
	goto Node_11_742;
	Node_11_741:;
	goto Node_11_744;
	Node_11_742:;
	goto Node_11_781;
	Node_11_744:;
	if ((op9 != 0)) goto Node_11_755;
	tmp___1 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp___1);
	if (!((tmp___1 != 0))) goto Node_11_752;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_11_749;
	chuckKeyAdd();
	Node_11_749:;
	op9 = 1;
	goto Node_11_753;
	Node_11_752:;
	goto Node_11_755;
	Node_11_753:;
	goto Node_11_780;
	Node_11_755:;
	if ((op10 != 0)) goto Node_11_766;
	tmp___0 = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp___0);
	if (!((tmp___0 != 0))) goto Node_11_763;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_11_760;
	bobKeyChange();
	Node_11_760:;
	op10 = 1;
	goto Node_11_764;
	Node_11_763:;
	goto Node_11_766;
	Node_11_764:;
	goto Node_11_779;
	Node_11_766:;
	if ((op11 != 0)) goto Node_11_777;
	tmp = __VERIFIER_nondet_signed_int();
	__CPROVER_printf("__iv__test_case:%d", tmp);
	if (!((tmp != 0))) goto Node_11_774;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_11_771;
	chuckKeyAdd();
	Node_11_771:;
	op11 = 1;
	goto Node_11_775;
	Node_11_774:;
	goto Node_11_791;
	Node_11_775:;
	goto Node_11_778;
	Node_11_777:;
	goto Node_11_791;
	Node_11_778:;
	Node_11_779:;
	Node_11_780:;
	Node_11_781:;
	Node_11_782:;
	Node_11_783:;
	Node_11_784:;
	Node_11_785:;
	Node_11_786:;
	Node_11_787:;
	Node_11_788:;
	goto Node_11_650;
	Node_11_790:;
	Node_11_791:;
	bobToRjh();
	goto Node_11_817;
	Node_11_817:;
	// End of Function
}
signed int getClientId(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_12_825;
	retValue_acc = __ste_client_idCounter0;
	return retValue_acc;
	Node_12_825:;
	if (!((handle == 2))) goto Node_12_831;
	retValue_acc = __ste_client_idCounter1;
	return retValue_acc;
	Node_12_831:;
	if (!((handle == 3))) goto Node_12_837;
	retValue_acc = __ste_client_idCounter2;
	return retValue_acc;
	Node_12_837:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int getClientForwardReceiver(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_13_855;
	retValue_acc = __ste_client_forwardReceiver0;
	return retValue_acc;
	Node_13_855:;
	if (!((handle == 2))) goto Node_13_861;
	retValue_acc = __ste_client_forwardReceiver1;
	return retValue_acc;
	Node_13_861:;
	if (!((handle == 3))) goto Node_13_867;
	retValue_acc = __ste_client_forwardReceiver2;
	return retValue_acc;
	Node_13_867:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int findPublicKey(signed int handle, signed int userid) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_14_899;
	if (!((userid == __ste_Client_Keyring0_User0))) goto Node_14_886;
	retValue_acc = __ste_Client_Keyring0_PublicKey0;
	return retValue_acc;
	Node_14_886:;
	if (!((userid == __ste_Client_Keyring0_User1))) goto Node_14_892;
	retValue_acc = __ste_Client_Keyring0_PublicKey1;
	return retValue_acc;
	Node_14_892:;
	retValue_acc = 0;
	return retValue_acc;
	Node_14_899:;
	if (!((handle == 2))) goto Node_14_919;
	if (!((userid == __ste_Client_Keyring1_User0))) goto Node_14_906;
	retValue_acc = __ste_Client_Keyring1_PublicKey0;
	return retValue_acc;
	Node_14_906:;
	if (!((userid == __ste_Client_Keyring1_User1))) goto Node_14_912;
	retValue_acc = __ste_Client_Keyring1_PublicKey1;
	return retValue_acc;
	Node_14_912:;
	retValue_acc = 0;
	return retValue_acc;
	Node_14_919:;
	if (!((handle == 3))) goto Node_14_939;
	if (!((userid == __ste_Client_Keyring2_User0))) goto Node_14_926;
	retValue_acc = __ste_Client_Keyring2_PublicKey0;
	return retValue_acc;
	Node_14_926:;
	if (!((userid == __ste_Client_Keyring2_User1))) goto Node_14_932;
	retValue_acc = __ste_Client_Keyring2_PublicKey1;
	return retValue_acc;
	Node_14_932:;
	retValue_acc = 0;
	return retValue_acc;
	Node_14_939:;
	retValue_acc = 0;
	return retValue_acc;
}
void verify(signed int client, signed int msg) {
	signed int __utac__ad__arg1;
	signed int tmp;
	signed int tmp___0;
	signed int pubkey;
	signed int tmp___1;
	signed int tmp___3;
	signed int tmp___4;
	__utac__ad__arg1 = msg;
	__utac_acc__EncryptVerify_spec__1(__utac__ad__arg1);
	tmp = isReadable(msg);
	if (!((tmp != 0))) goto Node_15_975;
	tmp___0 = isSigned(msg);
	if ((tmp___0 != 0)) goto Node_15_973;
	goto Node_15_1004;
	Node_15_973:;
	goto Node_15_984;
	Node_15_975:;
	goto Node_15_1004;
	Node_15_984:;
	tmp___1 = getEmailFrom(msg);
	pubkey = findPublicKey(client, tmp___1);
	if (!((pubkey != 0))) goto Node_15_994;
	tmp___3 = getEmailSignKey(msg);
	tmp___4 = __iv__isKeyPairValid_stub(tmp___3, pubkey);
	if (!((tmp___4 != 0))) goto Node_15_993;
	setEmailIsSignatureVerified(msg, 1);
	Node_15_993:;
	Node_15_994:;
	goto Node_15_1004;
	Node_15_1004:;
	// End of Function
}
void printMail__role__Verify(signed int msg) {
	signed int tmp;
	char *__cil_tmp3;
	printMail__before__Verify(msg);
	tmp = isVerified(msg);
	__cil_tmp3 = (char*)("SIGNATURE VERIFIED\n  %d\n");
	goto Node_16_1014;
	Node_16_1014:;
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
	goto Node_17_1031;
	Node_17_1031:;
	// End of Function
}
void autoRespond(signed int client, signed int msg) {
	signed int sender;
	puts("sending autoresponse\n");
	sender = getEmailFrom(msg);
	setEmailTo(msg, sender);
	queue(client, msg);
	goto Node_18_1042;
	Node_18_1042:;
	// End of Function
}
signed int get_queued_email() {
	signed int retValue_acc;
	retValue_acc = queued_message;
	return retValue_acc;
}
signed int get_queued_client() {
	signed int retValue_acc;
	retValue_acc = queued_client;
	return retValue_acc;
}
signed int getEmailEncryptionKey(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_21_1068;
	retValue_acc = __ste_email_encryptionKey0;
	return retValue_acc;
	Node_21_1068:;
	if (!((handle == 2))) goto Node_21_1074;
	retValue_acc = __ste_email_encryptionKey1;
	return retValue_acc;
	Node_21_1074:;
	retValue_acc = 0;
	return retValue_acc;
}
void incoming__role__Decrypt(signed int client, signed int msg) {
	signed int privkey;
	signed int tmp___0;
	signed int tmp___1;
	signed int tmp___2;
	privkey = getClientPrivateKey(client);
	if (!((privkey != 0))) goto Node_22_1101;
	tmp___0 = isEncrypted(msg);
	if (!((tmp___0 != 0))) goto Node_22_1100;
	tmp___1 = getEmailEncryptionKey(msg);
	tmp___2 = isKeyPairValid(tmp___1, privkey);
	if (!((tmp___2 != 0))) goto Node_22_1099;
	setEmailIsEncrypted(msg, 0);
	setEmailEncryptionKey(msg, 0);
	Node_22_1099:;
	Node_22_1100:;
	Node_22_1101:;
	incoming__before__Decrypt(client, msg);
	goto Node_22_1109;
	Node_22_1109:;
	// End of Function
}
signed int createClientAddressBookEntry(signed int handle) {
	signed int retValue_acc;
	signed int size;
	signed int __cil_tmp5;
	size = getClientAddressBookSize(handle);
	if (!((size < 3))) goto Node_23_1127;
	__cil_tmp5 = (size + 1);
	setClientAddressBookSize(handle, __cil_tmp5);
	retValue_acc = (size + 1);
	return retValue_acc;
	Node_23_1127:;
	retValue_acc = -1;
	return retValue_acc;
}
void setClientKeyringSize(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_24_1145;
	__ste_ClientKeyring_size0 = value;
	goto Node_24_1152;
	Node_24_1145:;
	if (!((handle == 2))) goto Node_24_1148;
	__ste_ClientKeyring_size1 = value;
	goto Node_24_1151;
	Node_24_1148:;
	if (!((handle == 3))) goto Node_24_1150;
	__ste_ClientKeyring_size2 = value;
	Node_24_1150:;
	Node_24_1151:;
	Node_24_1152:;
	goto Node_24_1154;
	Node_24_1154:;
	// End of Function
}
void incoming__before__Verify(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_Forward != 0))) goto Node_25_1159;
	incoming__role__Forward(client, msg);
	goto Node_25_1162;
	Node_25_1159:;
	incoming__before__Forward(client, msg);
	goto Node_25_1162;
	Node_25_1162:;
	// End of Function
}
signed int isKeyPairValid(signed int publicKey, signed int privateKey) {
	signed int retValue_acc;
	char *__cil_tmp4;
	__cil_tmp4 = (char*)("keypair valid %d %d");
	if ((publicKey != 0)) goto Node_27_1295;
	retValue_acc = 0;
	return retValue_acc;
	Node_27_1295:;
	if ((privateKey != 0)) goto Node_27_1301;
	retValue_acc = 0;
	return retValue_acc;
	Node_27_1301:;
	retValue_acc = (signed int)((privateKey == publicKey));
	return retValue_acc;
}
void incoming__before__AutoResponder(signed int client, signed int msg) {
	deliver(client, msg);
	goto Node_28_1315;
	Node_28_1315:;
	// End of Function
}
void outgoing__role__AddressBook(signed int client, signed int msg) {
	signed int size;
	signed int receiver;
	signed int second;
	signed int tmp___2;
	size = getClientAddressBookSize(client);
	if (!((size != 0))) goto Node_29_1339;
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
	goto Node_29_1340;
	Node_29_1339:;
	outgoing__before__AddressBook(client, msg);
	Node_29_1340:;
	goto Node_29_1349;
	Node_29_1349:;
	// End of Function
}
signed int getEmailId(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_30_1357;
	retValue_acc = __ste_email_id0;
	return retValue_acc;
	Node_30_1357:;
	if (!((handle == 2))) goto Node_30_1363;
	retValue_acc = __ste_email_id1;
	return retValue_acc;
	Node_30_1363:;
	retValue_acc = 0;
	return retValue_acc;
}
void outgoing__before__AddressBook(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_Encrypt != 0))) goto Node_31_1377;
	outgoing__role__Encrypt(client, msg);
	goto Node_31_1380;
	Node_31_1377:;
	outgoing__before__Encrypt(client, msg);
	goto Node_31_1380;
	Node_31_1380:;
	// End of Function
}
void mail(signed int client, signed int msg) {
	signed int tmp;
	puts("mail sent");
	tmp = getEmailTo(msg);
	incoming(tmp, msg);
	goto Node_32_1387;
	Node_32_1387:;
	// End of Function
}
void __utac_acc__EncryptVerify_spec__1(signed int msg) {
	signed int tmp;
	tmp = isReadable(msg);
	if ((tmp != 0)) goto Node_33_1392;
	__automaton_fail();
	Node_33_1392:;
	goto Node_33_1395;
	Node_33_1395:;
	// End of Function
}
void incoming__role__Forward(signed int client, signed int msg) {
	signed int fwreceiver;
	incoming__before__Forward(client, msg);
	fwreceiver = getClientForwardReceiver(client);
	if (!((fwreceiver != 0))) goto Node_34_1404;
	setEmailTo(msg, fwreceiver);
	__iv__forward_stub(client, msg);
	Node_34_1404:;
	goto Node_34_1408;
	Node_34_1408:;
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
	goto Node_35_1428;
	Node_35_1428:;
	// End of Function
}
void printMail__before__Verify(signed int msg) {
	if (!((__SELECTED_FEATURE_Sign != 0))) goto Node_36_1433;
	printMail__role__Sign(msg);
	goto Node_36_1436;
	Node_36_1433:;
	printMail__before__Sign(msg);
	goto Node_36_1436;
	Node_36_1436:;
	// End of Function
}
void rjhToBob() {
	puts("Please enter a subject and a message body.\n");
	sendEmail(rjh, bob);
	goto Node_37_1440;
	Node_37_1440:;
	// End of Function
}
void setClientForwardReceiver(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_38_1444;
	__ste_client_forwardReceiver0 = value;
	goto Node_38_1451;
	Node_38_1444:;
	if (!((handle == 2))) goto Node_38_1447;
	__ste_client_forwardReceiver1 = value;
	goto Node_38_1450;
	Node_38_1447:;
	if (!((handle == 3))) goto Node_38_1449;
	__ste_client_forwardReceiver2 = value;
	Node_38_1449:;
	Node_38_1450:;
	Node_38_1451:;
	goto Node_38_1453;
	Node_38_1453:;
	// End of Function
}
void sendToAddressBook(signed int client, signed int msg) {
	goto Node_39_1455;
	Node_39_1455:;
	// End of Function
}
void setClientKeyringPublicKey(signed int handle, signed int index, signed int value) {
	if (!((handle == 1))) goto Node_40_1465;
	if (!((index == 0))) goto Node_40_1460;
	__ste_Client_Keyring0_PublicKey0 = value;
	goto Node_40_1463;
	Node_40_1460:;
	if (!((index == 1))) goto Node_40_1462;
	__ste_Client_Keyring0_PublicKey1 = value;
	Node_40_1462:;
	Node_40_1463:;
	goto Node_40_1484;
	Node_40_1465:;
	if (!((handle == 2))) goto Node_40_1474;
	if (!((index == 0))) goto Node_40_1469;
	__ste_Client_Keyring1_PublicKey0 = value;
	goto Node_40_1472;
	Node_40_1469:;
	if (!((index == 1))) goto Node_40_1471;
	__ste_Client_Keyring1_PublicKey1 = value;
	Node_40_1471:;
	Node_40_1472:;
	goto Node_40_1483;
	Node_40_1474:;
	if (!((handle == 3))) goto Node_40_1482;
	if (!((index == 0))) goto Node_40_1478;
	__ste_Client_Keyring2_PublicKey0 = value;
	goto Node_40_1481;
	Node_40_1478:;
	if (!((index == 1))) goto Node_40_1480;
	__ste_Client_Keyring2_PublicKey1 = value;
	Node_40_1480:;
	Node_40_1481:;
	Node_40_1482:;
	Node_40_1483:;
	Node_40_1484:;
	goto Node_40_1486;
	Node_40_1486:;
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
void select_helpers() {
	__GUIDSL_ROOT_PRODUCTION = 1;
	goto Node_42_1506;
	Node_42_1506:;
	// End of Function
}
void incoming__role__AutoResponder(signed int client, signed int msg) {
	signed int tmp;
	incoming__before__AutoResponder(client, msg);
	tmp = getClientAutoResponse(client);
	if (!((tmp != 0))) goto Node_43_1512;
	autoRespond(client, msg);
	Node_43_1512:;
	goto Node_43_1515;
	Node_43_1515:;
	// End of Function
}
signed int getClientKeyringPublicKey(signed int handle, signed int index) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_44_1537;
	if (!((index == 0))) goto Node_44_1524;
	retValue_acc = __ste_Client_Keyring0_PublicKey0;
	return retValue_acc;
	Node_44_1524:;
	if (!((index == 1))) goto Node_44_1530;
	retValue_acc = __ste_Client_Keyring0_PublicKey1;
	return retValue_acc;
	Node_44_1530:;
	retValue_acc = 0;
	return retValue_acc;
	Node_44_1537:;
	if (!((handle == 2))) goto Node_44_1557;
	if (!((index == 0))) goto Node_44_1544;
	retValue_acc = __ste_Client_Keyring1_PublicKey0;
	return retValue_acc;
	Node_44_1544:;
	if (!((index == 1))) goto Node_44_1550;
	retValue_acc = __ste_Client_Keyring1_PublicKey1;
	return retValue_acc;
	Node_44_1550:;
	retValue_acc = 0;
	return retValue_acc;
	Node_44_1557:;
	if (!((handle == 3))) goto Node_44_1577;
	if (!((index == 0))) goto Node_44_1564;
	retValue_acc = __ste_Client_Keyring2_PublicKey0;
	return retValue_acc;
	Node_44_1564:;
	if (!((index == 1))) goto Node_44_1570;
	retValue_acc = __ste_Client_Keyring2_PublicKey1;
	return retValue_acc;
	Node_44_1570:;
	retValue_acc = 0;
	return retValue_acc;
	Node_44_1577:;
	retValue_acc = 0;
	return retValue_acc;
}
void printMail__before__Sign(signed int msg) {
	if (!((__SELECTED_FEATURE_Encrypt != 0))) goto Node_45_1592;
	printMail__role__Encrypt(msg);
	goto Node_45_1595;
	Node_45_1592:;
	printMail__before__Encrypt(msg);
	goto Node_45_1595;
	Node_45_1595:;
	// End of Function
}
void outgoing(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_Sign != 0))) goto Node_46_1600;
	outgoing__role__Sign(client, msg);
	goto Node_46_1603;
	Node_46_1600:;
	outgoing__before__Sign(client, msg);
	goto Node_46_1603;
	Node_46_1603:;
	// End of Function
}
void queue(signed int client, signed int msg) {
	queue_empty = 0;
	queued_message = msg;
	queued_client = client;
	goto Node_47_1608;
	Node_47_1608:;
	// End of Function
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
	goto Node_48_1625;
	Node_48_1625:;
	// End of Function
}
void reach_error() {
	if (!(FALSE)) __CPROVER_printf("violated property: Node_49_1626");
	assert(FALSE);
	// End of Function
}
signed int isEncrypted(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_50_1635;
	retValue_acc = __ste_email_isEncrypted0;
	return retValue_acc;
	Node_50_1635:;
	if (!((handle == 2))) goto Node_50_1641;
	retValue_acc = __ste_email_isEncrypted1;
	return retValue_acc;
	Node_50_1641:;
	retValue_acc = 0;
	return retValue_acc;
}
void outgoing__role__Encrypt(signed int client, signed int msg) {
	signed int receiver;
	signed int pubkey;
	receiver = getEmailTo(msg);
	pubkey = findPublicKey(client, receiver);
	if (!((pubkey != 0))) goto Node_51_1662;
	setEmailEncryptionKey(msg, pubkey);
	setEmailIsEncrypted(msg, 1);
	Node_51_1662:;
	outgoing__before__Encrypt(client, msg);
	goto Node_51_1669;
	Node_51_1669:;
	// End of Function
}
void outgoing__before__Encrypt(signed int client, signed int msg) {
	signed int tmp;
	tmp = getClientId(client);
	setEmailFrom(msg, tmp);
	mail(client, msg);
	goto Node_52_1676;
	Node_52_1676:;
	// End of Function
}
void bobSetAddressBook() {
	setClientAddressBookSize(bob, 1);
	setClientAddressBookAlias(bob, 0, rjh);
	setClientAddressBookAddress(bob, 0, rjh);
	setClientAddressBookAddress(bob, 1, chuck);
	goto Node_53_1682;
	Node_53_1682:;
	// End of Function
}
signed int isReadable__before__Encrypt(signed int msg) {
	signed int retValue_acc;
	retValue_acc = 1;
	return retValue_acc;
}
signed int is_queue_empty() {
	signed int retValue_acc;
	retValue_acc = queue_empty;
	return retValue_acc;
}
void forward(signed int client, signed int msg) {
	puts("Forwarding message.\n");
	printMail(msg);
	queue(client, msg);
	goto Node_56_1705;
	Node_56_1705:;
	// End of Function
}
void bobToRjh() {
	signed int tmp;
	signed int tmp___0;
	signed int tmp___1;
	puts("Please enter a subject and a message body.\n");
	sendEmail(bob, rjh);
	tmp___1 = is_queue_empty();
	if ((tmp___1 != 0)) goto Node_57_1716;
	tmp = get_queued_email();
	tmp___0 = get_queued_client();
	outgoing(tmp___0, tmp);
	Node_57_1716:;
	goto Node_57_1721;
	Node_57_1721:;
	// End of Function
}
void setEmailSignKey(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_58_1725;
	__ste_email_signKey0 = value;
	goto Node_58_1728;
	Node_58_1725:;
	if (!((handle == 2))) goto Node_58_1727;
	__ste_email_signKey1 = value;
	Node_58_1727:;
	Node_58_1728:;
	goto Node_58_1730;
	Node_58_1730:;
	// End of Function
}
signed int getClientAddressBookAddress(signed int handle, signed int index) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_59_1759;
	if (!((index == 0))) goto Node_59_1739;
	retValue_acc = __ste_Client_AddressBook0_Address0;
	return retValue_acc;
	Node_59_1739:;
	if (!((index == 1))) goto Node_59_1745;
	retValue_acc = __ste_Client_AddressBook0_Address1;
	return retValue_acc;
	Node_59_1745:;
	if (!((index == 2))) goto Node_59_1751;
	retValue_acc = __ste_Client_AddressBook0_Address2;
	return retValue_acc;
	Node_59_1751:;
	retValue_acc = 0;
	return retValue_acc;
	Node_59_1759:;
	if (!((handle == 2))) goto Node_59_1786;
	if (!((index == 0))) goto Node_59_1766;
	retValue_acc = __ste_Client_AddressBook1_Address0;
	return retValue_acc;
	Node_59_1766:;
	if (!((index == 1))) goto Node_59_1772;
	retValue_acc = __ste_Client_AddressBook1_Address1;
	return retValue_acc;
	Node_59_1772:;
	if (!((index == 2))) goto Node_59_1778;
	retValue_acc = __ste_Client_AddressBook1_Address2;
	return retValue_acc;
	Node_59_1778:;
	retValue_acc = 0;
	return retValue_acc;
	Node_59_1786:;
	if (!((handle == 3))) goto Node_59_1813;
	if (!((index == 0))) goto Node_59_1793;
	retValue_acc = __ste_Client_AddressBook2_Address0;
	return retValue_acc;
	Node_59_1793:;
	if (!((index == 1))) goto Node_59_1799;
	retValue_acc = __ste_Client_AddressBook2_Address1;
	return retValue_acc;
	Node_59_1799:;
	if (!((index == 2))) goto Node_59_1805;
	retValue_acc = __ste_Client_AddressBook2_Address2;
	return retValue_acc;
	Node_59_1805:;
	retValue_acc = 0;
	return retValue_acc;
	Node_59_1813:;
	retValue_acc = 0;
	return retValue_acc;
}
void incoming__before__Forward(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_AutoResponder != 0))) goto Node_60_1828;
	incoming__role__AutoResponder(client, msg);
	goto Node_60_1831;
	Node_60_1828:;
	incoming__before__AutoResponder(client, msg);
	goto Node_60_1831;
	Node_60_1831:;
	// End of Function
}
char* getEmailSubject(signed int handle) {
	char *retValue_acc;
	void *__cil_tmp3;
	if (!((handle == 1))) goto Node_61_1841;
	retValue_acc = __ste_email_subject0;
	return retValue_acc;
	Node_61_1841:;
	if (!((handle == 2))) goto Node_61_1848;
	retValue_acc = __ste_email_subject1;
	return retValue_acc;
	Node_61_1848:;
	__cil_tmp3 = (void*)(0);
	retValue_acc = (char*)(__cil_tmp3);
	return retValue_acc;
}
void setup_chuck(signed int chuck___0) {
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_62_1865;
	setup_chuck__role__Keys(chuck___0);
	goto Node_62_1868;
	Node_62_1865:;
	setup_chuck__before__Keys(chuck___0);
	goto Node_62_1868;
	Node_62_1868:;
	// End of Function
}
void rjhDeletePrivateKey() {
	setClientPrivateKey(rjh, 0);
	goto Node_63_1871;
	Node_63_1871:;
	// End of Function
}
signed int getEmailSignKey(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_64_1879;
	retValue_acc = __ste_email_signKey0;
	return retValue_acc;
	Node_64_1879:;
	if (!((handle == 2))) goto Node_64_1885;
	retValue_acc = __ste_email_signKey1;
	return retValue_acc;
	Node_64_1885:;
	retValue_acc = 0;
	return retValue_acc;
}
void rjhKeyChange() {
	generateKeyPair(rjh, 666);
	goto Node_65_1897;
	Node_65_1897:;
	// End of Function
}
signed int getClientAddressBookSize(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_66_1905;
	retValue_acc = __ste_ClientAddressBook_size0;
	return retValue_acc;
	Node_66_1905:;
	if (!((handle == 2))) goto Node_66_1911;
	retValue_acc = __ste_ClientAddressBook_size1;
	return retValue_acc;
	Node_66_1911:;
	if (!((handle == 3))) goto Node_66_1917;
	retValue_acc = __ste_ClientAddressBook_size2;
	return retValue_acc;
	Node_66_1917:;
	retValue_acc = 0;
	return retValue_acc;
}
void setEmailIsSigned(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_67_1931;
	__ste_email_isSigned0 = value;
	goto Node_67_1934;
	Node_67_1931:;
	if (!((handle == 2))) goto Node_67_1933;
	__ste_email_isSigned1 = value;
	Node_67_1933:;
	Node_67_1934:;
	goto Node_67_1936;
	Node_67_1936:;
	// End of Function
}
void incoming__role__Verify(signed int client, signed int msg) {
	verify(client, msg);
	incoming__before__Verify(client, msg);
	goto Node_68_1940;
	Node_68_1940:;
	// End of Function
}
void chuckKeyAdd() {
	createClientKeyringEntry(chuck);
	setClientKeyringUser(chuck, 0, 1);
	setClientKeyringPublicKey(chuck, 0, 123);
	goto Node_69_1945;
	Node_69_1945:;
	// End of Function
}
signed int isSigned(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_70_1953;
	retValue_acc = __ste_email_isSigned0;
	return retValue_acc;
	Node_70_1953:;
	if (!((handle == 2))) goto Node_70_1959;
	retValue_acc = __ste_email_isSigned1;
	return retValue_acc;
	Node_70_1959:;
	retValue_acc = 0;
	return retValue_acc;
}
void printMail(signed int msg) {
	if (!((__SELECTED_FEATURE_Verify != 0))) goto Node_71_1973;
	printMail__role__Verify(msg);
	goto Node_71_1976;
	Node_71_1973:;
	printMail__before__Verify(msg);
	goto Node_71_1976;
	Node_71_1976:;
	// End of Function
}
void outgoing__before__Sign(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_AddressBook != 0))) goto Node_72_1981;
	outgoing__role__AddressBook(client, msg);
	goto Node_72_1984;
	Node_72_1981:;
	outgoing__before__AddressBook(client, msg);
	goto Node_72_1984;
	Node_72_1984:;
	// End of Function
}
void setEmailFrom(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_73_1988;
	__ste_email_from0 = value;
	goto Node_73_1991;
	Node_73_1988:;
	if (!((handle == 2))) goto Node_73_1990;
	__ste_email_from1 = value;
	Node_73_1990:;
	Node_73_1991:;
	goto Node_73_1993;
	Node_73_1993:;
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
void setClientAddressBookAddress(signed int handle, signed int index, signed int value) {
	if (!((handle == 1))) goto Node_75_2022;
	if (!((index == 0))) goto Node_75_2013;
	__ste_Client_AddressBook0_Address0 = value;
	goto Node_75_2020;
	Node_75_2013:;
	if (!((index == 1))) goto Node_75_2016;
	__ste_Client_AddressBook0_Address1 = value;
	goto Node_75_2019;
	Node_75_2016:;
	if (!((index == 2))) goto Node_75_2018;
	__ste_Client_AddressBook0_Address2 = value;
	Node_75_2018:;
	Node_75_2019:;
	Node_75_2020:;
	goto Node_75_2049;
	Node_75_2022:;
	if (!((handle == 2))) goto Node_75_2035;
	if (!((index == 0))) goto Node_75_2026;
	__ste_Client_AddressBook1_Address0 = value;
	goto Node_75_2033;
	Node_75_2026:;
	if (!((index == 1))) goto Node_75_2029;
	__ste_Client_AddressBook1_Address1 = value;
	goto Node_75_2032;
	Node_75_2029:;
	if (!((index == 2))) goto Node_75_2031;
	__ste_Client_AddressBook1_Address2 = value;
	Node_75_2031:;
	Node_75_2032:;
	Node_75_2033:;
	goto Node_75_2048;
	Node_75_2035:;
	if (!((handle == 3))) goto Node_75_2047;
	if (!((index == 0))) goto Node_75_2039;
	__ste_Client_AddressBook2_Address0 = value;
	goto Node_75_2046;
	Node_75_2039:;
	if (!((index == 1))) goto Node_75_2042;
	__ste_Client_AddressBook2_Address1 = value;
	goto Node_75_2045;
	Node_75_2042:;
	if (!((index == 2))) goto Node_75_2044;
	__ste_Client_AddressBook2_Address2 = value;
	Node_75_2044:;
	Node_75_2045:;
	Node_75_2046:;
	Node_75_2047:;
	Node_75_2048:;
	Node_75_2049:;
	goto Node_75_2051;
	Node_75_2051:;
	// End of Function
}
signed int getClientOutbuffer(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_76_2059;
	retValue_acc = __ste_client_outbuffer0;
	return retValue_acc;
	Node_76_2059:;
	if (!((handle == 2))) goto Node_76_2065;
	retValue_acc = __ste_client_outbuffer1;
	return retValue_acc;
	Node_76_2065:;
	if (!((handle == 3))) goto Node_76_2071;
	retValue_acc = __ste_client_outbuffer2;
	return retValue_acc;
	Node_76_2071:;
	retValue_acc = 0;
	return retValue_acc;
}
void bobKeyChange() {
	generateKeyPair(bob, 777);
	goto Node_77_2084;
	Node_77_2084:;
	// End of Function
}
signed int createClientKeyringEntry(signed int handle) {
	signed int retValue_acc;
	signed int size;
	signed int __cil_tmp5;
	size = getClientKeyringSize(handle);
	if (!((size < 2))) goto Node_78_2102;
	__cil_tmp5 = (size + 1);
	setClientKeyringSize(handle, __cil_tmp5);
	retValue_acc = (size + 1);
	return retValue_acc;
	Node_78_2102:;
	retValue_acc = -1;
	return retValue_acc;
}
void setEmailIsSignatureVerified(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_79_2120;
	__ste_email_isSignatureVerified0 = value;
	goto Node_79_2123;
	Node_79_2120:;
	if (!((handle == 2))) goto Node_79_2122;
	__ste_email_isSignatureVerified1 = value;
	Node_79_2122:;
	Node_79_2123:;
	goto Node_79_2125;
	Node_79_2125:;
	// End of Function
}
void setClientAutoResponse(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_80_2129;
	__ste_client_autoResponse0 = value;
	goto Node_80_2136;
	Node_80_2129:;
	if (!((handle == 2))) goto Node_80_2132;
	__ste_client_autoResponse1 = value;
	goto Node_80_2135;
	Node_80_2132:;
	if (!((handle == 3))) goto Node_80_2134;
	__ste_client_autoResponse2 = value;
	Node_80_2134:;
	Node_80_2135:;
	Node_80_2136:;
	goto Node_80_2138;
	Node_80_2138:;
	// End of Function
}
void incoming__before__Decrypt(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_Verify != 0))) goto Node_81_2143;
	incoming__role__Verify(client, msg);
	goto Node_81_2146;
	Node_81_2143:;
	incoming__before__Verify(client, msg);
	goto Node_81_2146;
	Node_81_2146:;
	// End of Function
}
void outgoing__role__Sign(signed int client, signed int msg) {
	sign(client, msg);
	outgoing__before__Sign(client, msg);
	goto Node_82_2150;
	Node_82_2150:;
	// End of Function
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
	goto Node_83_2170;
	Node_83_2170:;
	// End of Function
}
void setup_chuck__before__Keys(signed int chuck___0) {
	setClientId(chuck___0, chuck___0);
	goto Node_84_2173;
	Node_84_2173:;
	// End of Function
}
void setClientPrivateKey(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_85_2177;
	__ste_client_privateKey0 = value;
	goto Node_85_2184;
	Node_85_2177:;
	if (!((handle == 2))) goto Node_85_2180;
	__ste_client_privateKey1 = value;
	goto Node_85_2183;
	Node_85_2180:;
	if (!((handle == 3))) goto Node_85_2182;
	__ste_client_privateKey2 = value;
	Node_85_2182:;
	Node_85_2183:;
	Node_85_2184:;
	goto Node_85_2186;
	Node_85_2186:;
	// End of Function
}
signed int createClient(char* name) {
	signed int retValue_acc;
	signed int client;
	client = initClient();
	retValue_acc = client;
	return retValue_acc;
}
void __automaton_fail() {
	reach_error();
	abort();
}
signed int getClientAutoResponse(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_88_2215;
	retValue_acc = __ste_client_autoResponse0;
	return retValue_acc;
	Node_88_2215:;
	if (!((handle == 2))) goto Node_88_2221;
	retValue_acc = __ste_client_autoResponse1;
	return retValue_acc;
	Node_88_2221:;
	if (!((handle == 3))) goto Node_88_2227;
	retValue_acc = __ste_client_autoResponse2;
	return retValue_acc;
	Node_88_2227:;
	retValue_acc = -1;
	return retValue_acc;
}
signed int getClientPrivateKey(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_89_2245;
	retValue_acc = __ste_client_privateKey0;
	return retValue_acc;
	Node_89_2245:;
	if (!((handle == 2))) goto Node_89_2251;
	retValue_acc = __ste_client_privateKey1;
	return retValue_acc;
	Node_89_2251:;
	if (!((handle == 3))) goto Node_89_2257;
	retValue_acc = __ste_client_privateKey2;
	return retValue_acc;
	Node_89_2257:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int cloneEmail(signed int msg) {
	signed int retValue_acc;
	retValue_acc = msg;
	return retValue_acc;
}
signed int getEmailFrom(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_91_2284;
	retValue_acc = __ste_email_from0;
	return retValue_acc;
	Node_91_2284:;
	if (!((handle == 2))) goto Node_91_2290;
	retValue_acc = __ste_email_from1;
	return retValue_acc;
	Node_91_2290:;
	retValue_acc = 0;
	return retValue_acc;
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
	goto Node_92_2329;
	Node_92_2329:;
	// End of Function
}
signed int getClientAddressBookAlias(signed int handle, signed int index) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_93_2358;
	if (!((index == 0))) goto Node_93_2338;
	retValue_acc = __ste_Client_AddressBook0_Alias0;
	return retValue_acc;
	Node_93_2338:;
	if (!((index == 1))) goto Node_93_2344;
	retValue_acc = __ste_Client_AddressBook0_Alias1;
	return retValue_acc;
	Node_93_2344:;
	if (!((index == 2))) goto Node_93_2350;
	retValue_acc = __ste_Client_AddressBook0_Alias2;
	return retValue_acc;
	Node_93_2350:;
	retValue_acc = 0;
	return retValue_acc;
	Node_93_2358:;
	if (!((handle == 2))) goto Node_93_2385;
	if (!((index == 0))) goto Node_93_2365;
	retValue_acc = __ste_Client_AddressBook1_Alias0;
	return retValue_acc;
	Node_93_2365:;
	if (!((index == 1))) goto Node_93_2371;
	retValue_acc = __ste_Client_AddressBook1_Alias1;
	return retValue_acc;
	Node_93_2371:;
	if (!((index == 2))) goto Node_93_2377;
	retValue_acc = __ste_Client_AddressBook1_Alias2;
	return retValue_acc;
	Node_93_2377:;
	retValue_acc = 0;
	return retValue_acc;
	Node_93_2385:;
	if (!((handle == 3))) goto Node_93_2412;
	if (!((index == 0))) goto Node_93_2392;
	retValue_acc = __ste_Client_AddressBook2_Alias0;
	return retValue_acc;
	Node_93_2392:;
	if (!((index == 1))) goto Node_93_2398;
	retValue_acc = __ste_Client_AddressBook2_Alias1;
	return retValue_acc;
	Node_93_2398:;
	if (!((index == 2))) goto Node_93_2404;
	retValue_acc = __ste_Client_AddressBook2_Alias2;
	return retValue_acc;
	Node_93_2404:;
	retValue_acc = 0;
	return retValue_acc;
	Node_93_2412:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int getEmailTo(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_94_2430;
	retValue_acc = __ste_email_to0;
	return retValue_acc;
	Node_94_2430:;
	if (!((handle == 2))) goto Node_94_2436;
	retValue_acc = __ste_email_to1;
	return retValue_acc;
	Node_94_2436:;
	retValue_acc = 0;
	return retValue_acc;
}
void setup_chuck__role__Keys(signed int chuck___0) {
	setup_chuck__before__Keys(chuck___0);
	setClientPrivateKey(chuck___0, 789);
	goto Node_95_2449;
	Node_95_2449:;
	// End of Function
}
void setEmailTo(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_96_2453;
	__ste_email_to0 = value;
	goto Node_96_2456;
	Node_96_2453:;
	if (!((handle == 2))) goto Node_96_2455;
	__ste_email_to1 = value;
	Node_96_2455:;
	Node_96_2456:;
	goto Node_96_2458;
	Node_96_2458:;
	// End of Function
}
signed int isVerified(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_97_2466;
	retValue_acc = __ste_email_isSignatureVerified0;
	return retValue_acc;
	Node_97_2466:;
	if (!((handle == 2))) goto Node_97_2472;
	retValue_acc = __ste_email_isSignatureVerified1;
	return retValue_acc;
	Node_97_2472:;
	retValue_acc = 0;
	return retValue_acc;
}
void setEmailIsEncrypted(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_98_2485;
	__ste_email_isEncrypted0 = value;
	goto Node_98_2488;
	Node_98_2485:;
	if (!((handle == 2))) goto Node_98_2487;
	__ste_email_isEncrypted1 = value;
	Node_98_2487:;
	Node_98_2488:;
	goto Node_98_2490;
	Node_98_2490:;
	// End of Function
}
void sendEmail(signed int sender, signed int receiver) {
	signed int email;
	email = createEmail(0, receiver);
	outgoing(sender, email);
	goto Node_99_2499;
	Node_99_2499:;
	// End of Function
}
void setEmailEncryptionKey(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_100_2503;
	__ste_email_encryptionKey0 = value;
	goto Node_100_2506;
	Node_100_2503:;
	if (!((handle == 2))) goto Node_100_2505;
	__ste_email_encryptionKey1 = value;
	Node_100_2505:;
	Node_100_2506:;
	goto Node_100_2508;
	Node_100_2508:;
	// End of Function
}
signed int isReadable(signed int msg) {
	signed int retValue_acc;
	if (!((__SELECTED_FEATURE_Encrypt != 0))) goto Node_101_2516;
	retValue_acc = isReadable__role__Encrypt(msg);
	return retValue_acc;
	Node_101_2516:;
	retValue_acc = isReadable__before__Encrypt(msg);
	return retValue_acc;
}
signed int initEmail() {
	signed int retValue_acc;
	if (!((__ste_Email_counter < 2))) goto Node_102_2533;
	__ste_Email_counter = (__ste_Email_counter + 1);
	retValue_acc = __ste_Email_counter;
	return retValue_acc;
	Node_102_2533:;
	retValue_acc = -1;
	return retValue_acc;
}
void setEmailSubject(signed int handle, char* value) {
	if (!((handle == 1))) goto Node_103_2545;
	__ste_email_subject0 = value;
	goto Node_103_2548;
	Node_103_2545:;
	if (!((handle == 2))) goto Node_103_2547;
	__ste_email_subject1 = value;
	Node_103_2547:;
	Node_103_2548:;
	goto Node_103_2550;
	Node_103_2550:;
	// End of Function
}
void setEmailBody(signed int handle, char* value) {
	if (!((handle == 1))) goto Node_104_2554;
	__ste_email_body0 = value;
	goto Node_104_2557;
	Node_104_2554:;
	if (!((handle == 2))) goto Node_104_2556;
	__ste_email_body1 = value;
	Node_104_2556:;
	Node_104_2557:;
	goto Node_104_2559;
	Node_104_2559:;
	// End of Function
}
void setup_rjh__before__Keys(signed int rjh___0) {
	setClientId(rjh___0, rjh___0);
	goto Node_105_2562;
	Node_105_2562:;
	// End of Function
}
char* getEmailBody(signed int handle) {
	char *retValue_acc;
	void *__cil_tmp3;
	if (!((handle == 1))) goto Node_106_2572;
	retValue_acc = __ste_email_body0;
	return retValue_acc;
	Node_106_2572:;
	if (!((handle == 2))) goto Node_106_2579;
	retValue_acc = __ste_email_body1;
	return retValue_acc;
	Node_106_2579:;
	__cil_tmp3 = (void*)(0);
	retValue_acc = (char*)(__cil_tmp3);
	return retValue_acc;
}
signed int findClientAddressBookAlias(signed int handle, signed int userid) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_107_2620;
	if (!((userid == __ste_Client_AddressBook0_Alias0))) goto Node_107_2600;
	retValue_acc = 0;
	return retValue_acc;
	Node_107_2600:;
	if (!((userid == __ste_Client_AddressBook0_Alias1))) goto Node_107_2606;
	retValue_acc = 1;
	return retValue_acc;
	Node_107_2606:;
	if (!((userid == __ste_Client_AddressBook0_Alias2))) goto Node_107_2612;
	retValue_acc = 2;
	return retValue_acc;
	Node_107_2612:;
	retValue_acc = -1;
	return retValue_acc;
	Node_107_2620:;
	if (!((handle == 2))) goto Node_107_2647;
	if (!((userid == __ste_Client_AddressBook1_Alias0))) goto Node_107_2627;
	retValue_acc = 0;
	return retValue_acc;
	Node_107_2627:;
	if (!((userid == __ste_Client_AddressBook1_Alias1))) goto Node_107_2633;
	retValue_acc = 1;
	return retValue_acc;
	Node_107_2633:;
	if (!((userid == __ste_Client_AddressBook1_Alias2))) goto Node_107_2639;
	retValue_acc = 2;
	return retValue_acc;
	Node_107_2639:;
	retValue_acc = -1;
	return retValue_acc;
	Node_107_2647:;
	if (!((handle == 3))) goto Node_107_2674;
	if (!((userid == __ste_Client_AddressBook2_Alias0))) goto Node_107_2654;
	retValue_acc = 0;
	return retValue_acc;
	Node_107_2654:;
	if (!((userid == __ste_Client_AddressBook2_Alias1))) goto Node_107_2660;
	retValue_acc = 1;
	return retValue_acc;
	Node_107_2660:;
	if (!((userid == __ste_Client_AddressBook2_Alias2))) goto Node_107_2666;
	retValue_acc = 2;
	return retValue_acc;
	Node_107_2666:;
	retValue_acc = -1;
	return retValue_acc;
	Node_107_2674:;
	retValue_acc = -1;
	return retValue_acc;
}
void setClientAddressBookSize(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_108_2688;
	__ste_ClientAddressBook_size0 = value;
	goto Node_108_2695;
	Node_108_2688:;
	if (!((handle == 2))) goto Node_108_2691;
	__ste_ClientAddressBook_size1 = value;
	goto Node_108_2694;
	Node_108_2691:;
	if (!((handle == 3))) goto Node_108_2693;
	__ste_ClientAddressBook_size2 = value;
	Node_108_2693:;
	Node_108_2694:;
	Node_108_2695:;
	goto Node_108_2697;
	Node_108_2697:;
	// End of Function
}
void setClientAddressBookAlias(signed int handle, signed int index, signed int value) {
	if (!((handle == 1))) goto Node_109_2711;
	if (!((index == 0))) goto Node_109_2702;
	__ste_Client_AddressBook0_Alias0 = value;
	goto Node_109_2709;
	Node_109_2702:;
	if (!((index == 1))) goto Node_109_2705;
	__ste_Client_AddressBook0_Alias1 = value;
	goto Node_109_2708;
	Node_109_2705:;
	if (!((index == 2))) goto Node_109_2707;
	__ste_Client_AddressBook0_Alias2 = value;
	Node_109_2707:;
	Node_109_2708:;
	Node_109_2709:;
	goto Node_109_2738;
	Node_109_2711:;
	if (!((handle == 2))) goto Node_109_2724;
	if (!((index == 0))) goto Node_109_2715;
	__ste_Client_AddressBook1_Alias0 = value;
	goto Node_109_2722;
	Node_109_2715:;
	if (!((index == 1))) goto Node_109_2718;
	__ste_Client_AddressBook1_Alias1 = value;
	goto Node_109_2721;
	Node_109_2718:;
	if (!((index == 2))) goto Node_109_2720;
	__ste_Client_AddressBook1_Alias2 = value;
	Node_109_2720:;
	Node_109_2721:;
	Node_109_2722:;
	goto Node_109_2737;
	Node_109_2724:;
	if (!((handle == 3))) goto Node_109_2736;
	if (!((index == 0))) goto Node_109_2728;
	__ste_Client_AddressBook2_Alias0 = value;
	goto Node_109_2735;
	Node_109_2728:;
	if (!((index == 1))) goto Node_109_2731;
	__ste_Client_AddressBook2_Alias1 = value;
	goto Node_109_2734;
	Node_109_2731:;
	if (!((index == 2))) goto Node_109_2733;
	__ste_Client_AddressBook2_Alias2 = value;
	Node_109_2733:;
	Node_109_2734:;
	Node_109_2735:;
	Node_109_2736:;
	Node_109_2737:;
	Node_109_2738:;
	goto Node_109_2740;
	Node_109_2740:;
	// End of Function
}
signed int getClientKeyringUser(signed int handle, signed int index) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_110_2762;
	if (!((index == 0))) goto Node_110_2749;
	retValue_acc = __ste_Client_Keyring0_User0;
	return retValue_acc;
	Node_110_2749:;
	if (!((index == 1))) goto Node_110_2755;
	retValue_acc = __ste_Client_Keyring0_User1;
	return retValue_acc;
	Node_110_2755:;
	retValue_acc = 0;
	return retValue_acc;
	Node_110_2762:;
	if (!((handle == 2))) goto Node_110_2782;
	if (!((index == 0))) goto Node_110_2769;
	retValue_acc = __ste_Client_Keyring1_User0;
	return retValue_acc;
	Node_110_2769:;
	if (!((index == 1))) goto Node_110_2775;
	retValue_acc = __ste_Client_Keyring1_User1;
	return retValue_acc;
	Node_110_2775:;
	retValue_acc = 0;
	return retValue_acc;
	Node_110_2782:;
	if (!((handle == 3))) goto Node_110_2802;
	if (!((index == 0))) goto Node_110_2789;
	retValue_acc = __ste_Client_Keyring2_User0;
	return retValue_acc;
	Node_110_2789:;
	if (!((index == 1))) goto Node_110_2795;
	retValue_acc = __ste_Client_Keyring2_User1;
	return retValue_acc;
	Node_110_2795:;
	retValue_acc = 0;
	return retValue_acc;
	Node_110_2802:;
	retValue_acc = 0;
	return retValue_acc;
}
void setClientKeyringUser(signed int handle, signed int index, signed int value) {
	if (!((handle == 1))) goto Node_111_2822;
	if (!((index == 0))) goto Node_111_2817;
	__ste_Client_Keyring0_User0 = value;
	goto Node_111_2820;
	Node_111_2817:;
	if (!((index == 1))) goto Node_111_2819;
	__ste_Client_Keyring0_User1 = value;
	Node_111_2819:;
	Node_111_2820:;
	goto Node_111_2841;
	Node_111_2822:;
	if (!((handle == 2))) goto Node_111_2831;
	if (!((index == 0))) goto Node_111_2826;
	__ste_Client_Keyring1_User0 = value;
	goto Node_111_2829;
	Node_111_2826:;
	if (!((index == 1))) goto Node_111_2828;
	__ste_Client_Keyring1_User1 = value;
	Node_111_2828:;
	Node_111_2829:;
	goto Node_111_2840;
	Node_111_2831:;
	if (!((handle == 3))) goto Node_111_2839;
	if (!((index == 0))) goto Node_111_2835;
	__ste_Client_Keyring2_User0 = value;
	goto Node_111_2838;
	Node_111_2835:;
	if (!((index == 1))) goto Node_111_2837;
	__ste_Client_Keyring2_User1 = value;
	Node_111_2837:;
	Node_111_2838:;
	Node_111_2839:;
	Node_111_2840:;
	Node_111_2841:;
	goto Node_111_2843;
	Node_111_2843:;
	// End of Function
}
void deliver(signed int client, signed int msg) {
	puts("mail delivered\n");
	goto Node_112_2846;
	Node_112_2846:;
	// End of Function
}
void incoming(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_Decrypt != 0))) goto Node_113_2851;
	incoming__role__Decrypt(client, msg);
	goto Node_113_2854;
	Node_113_2851:;
	incoming__before__Decrypt(client, msg);
	goto Node_113_2854;
	Node_113_2854:;
	// End of Function
}
void setClientId(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_114_2858;
	__ste_client_idCounter0 = value;
	goto Node_114_2865;
	Node_114_2858:;
	if (!((handle == 2))) goto Node_114_2861;
	__ste_client_idCounter1 = value;
	goto Node_114_2864;
	Node_114_2861:;
	if (!((handle == 3))) goto Node_114_2863;
	__ste_client_idCounter2 = value;
	Node_114_2863:;
	Node_114_2864:;
	Node_114_2865:;
	goto Node_114_2867;
	Node_114_2867:;
	// End of Function
}
void select_features() {
	__SELECTED_FEATURE_Base = select_one();
	__SELECTED_FEATURE_Keys = select_one();
	__SELECTED_FEATURE_Encrypt = select_one();
	__SELECTED_FEATURE_AutoResponder = select_one();
	__SELECTED_FEATURE_AddressBook = select_one();
	__SELECTED_FEATURE_Sign = select_one();
	__SELECTED_FEATURE_Forward = select_one();
	__SELECTED_FEATURE_Verify = 1;
	__SELECTED_FEATURE_Decrypt = select_one();
	goto Node_115_2878;
	Node_115_2878:;
	// End of Function
}
void generateKeyPair(signed int client, signed int seed) {
	setClientPrivateKey(client, seed);
	goto Node_116_2881;
	Node_116_2881:;
	// End of Function
}
void setup_bob(signed int bob___0) {
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_117_2886;
	setup_bob__role__Keys(bob___0);
	goto Node_117_2889;
	Node_117_2886:;
	setup_bob__before__Keys(bob___0);
	goto Node_117_2889;
	Node_117_2889:;
	// End of Function
}
void setup_rjh(signed int rjh___0) {
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_118_2894;
	setup_rjh__role__Keys(rjh___0);
	goto Node_118_2897;
	Node_118_2894:;
	setup_rjh__before__Keys(rjh___0);
	goto Node_118_2897;
	Node_118_2897:;
	// End of Function
}
void bobKeyAddChuck() {
	createClientKeyringEntry(bob);
	setClientKeyringUser(bob, 1, 3);
	setClientKeyringPublicKey(bob, 1, 789);
	goto Node_119_2902;
	Node_119_2902:;
	// End of Function
}
void rjhKeyAdd() {
	createClientKeyringEntry(rjh);
	setClientKeyringUser(rjh, 0, 1);
	setClientKeyringPublicKey(rjh, 0, 123);
	goto Node_120_2907;
	Node_120_2907:;
	// End of Function
}
void rjhKeyAddChuck() {
	createClientKeyringEntry(rjh);
	setClientKeyringUser(rjh, 0, 3);
	setClientKeyringPublicKey(rjh, 0, 789);
	goto Node_121_2912;
	Node_121_2912:;
	// End of Function
}
void chuckKeyAddRjh() {
	createClientKeyringEntry(chuck);
	setClientKeyringUser(chuck, 0, 2);
	setClientKeyringPublicKey(chuck, 0, 456);
	goto Node_122_2917;
	Node_122_2917:;
	// End of Function
}
void rjhSetAutoRespond() {
	setClientAutoResponse(rjh, 1);
	goto Node_123_2920;
	Node_123_2920:;
	// End of Function
}
void rjhEnableForwarding() {
	setClientForwardReceiver(rjh, chuck);
	goto Node_124_2923;
	Node_124_2923:;
	// End of Function
}
void setup_bob__before__Keys(signed int bob___0) {
	setClientId(bob___0, bob___0);
	goto Node_125_2926;
	Node_125_2926:;
	// End of Function
}
void setup_bob__role__Keys(signed int bob___0) {
	setup_bob__before__Keys(bob___0);
	setClientPrivateKey(bob___0, 123);
	goto Node_126_2930;
	Node_126_2930:;
	// End of Function
}
signed int isReadable__role__Encrypt(signed int msg) {
	signed int retValue_acc;
	signed int tmp;
	tmp = isEncrypted(msg);
	if (!((tmp != 0))) goto Node_127_2941;
	retValue_acc = 0;
	return retValue_acc;
	Node_127_2941:;
	retValue_acc = isReadable__before__Encrypt(msg);
	return retValue_acc;
}
void setup_rjh__role__Keys(signed int rjh___0) {
	setup_rjh__before__Keys(rjh___0);
	setClientPrivateKey(rjh___0, 456);
	goto Node_128_2955;
	Node_128_2955:;
	// End of Function
}
signed int initClient() {
	signed int retValue_acc;
	if (!((__ste_Client_counter < 3))) goto Node_129_2964;
	__ste_Client_counter = (__ste_Client_counter + 1);
	retValue_acc = __ste_Client_counter;
	return retValue_acc;
	Node_129_2964:;
	retValue_acc = -1;
	return retValue_acc;
}
void setEmailId(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_130_2976;
	__ste_email_id0 = value;
	goto Node_130_2979;
	Node_130_2976:;
	if (!((handle == 2))) goto Node_130_2978;
	__ste_email_id1 = value;
	Node_130_2978:;
	Node_130_2979:;
	goto Node_130_2981;
	Node_130_2981:;
	// End of Function
}
char* getClientName(signed int handle) {
	char *retValue_acc;
	void *__cil_tmp3;
	if (!((handle == 1))) goto Node_131_2991;
	retValue_acc = __ste_client_name0;
	return retValue_acc;
	Node_131_2991:;
	if (!((handle == 2))) goto Node_131_2998;
	retValue_acc = __ste_client_name1;
	return retValue_acc;
	Node_131_2998:;
	if (!((handle == 3))) goto Node_131_3005;
	retValue_acc = __ste_client_name2;
	return retValue_acc;
	Node_131_3005:;
	__cil_tmp3 = (void*)(0);
	retValue_acc = (char*)(__cil_tmp3);
	return retValue_acc;
}
void setClientName(signed int handle, char* value) {
	if (!((handle == 1))) goto Node_132_3022;
	__ste_client_name0 = value;
	goto Node_132_3029;
	Node_132_3022:;
	if (!((handle == 2))) goto Node_132_3025;
	__ste_client_name1 = value;
	goto Node_132_3028;
	Node_132_3025:;
	if (!((handle == 3))) goto Node_132_3027;
	__ste_client_name2 = value;
	Node_132_3027:;
	Node_132_3028:;
	Node_132_3029:;
	goto Node_132_3031;
	Node_132_3031:;
	// End of Function
}
void setClientOutbuffer(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_133_3035;
	__ste_client_outbuffer0 = value;
	goto Node_133_3042;
	Node_133_3035:;
	if (!((handle == 2))) goto Node_133_3038;
	__ste_client_outbuffer1 = value;
	goto Node_133_3041;
	Node_133_3038:;
	if (!((handle == 3))) goto Node_133_3040;
	__ste_client_outbuffer2 = value;
	Node_133_3040:;
	Node_133_3041:;
	Node_133_3042:;
	goto Node_133_3044;
	Node_133_3044:;
	// End of Function
}
signed int getClientKeyringSize(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_134_3052;
	retValue_acc = __ste_ClientKeyring_size0;
	return retValue_acc;
	Node_134_3052:;
	if (!((handle == 2))) goto Node_134_3058;
	retValue_acc = __ste_ClientKeyring_size1;
	return retValue_acc;
	Node_134_3058:;
	if (!((handle == 3))) goto Node_134_3064;
	retValue_acc = __ste_ClientKeyring_size2;
	return retValue_acc;
	Node_134_3064:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int __iv__isKeyPairValid_stub(signed int publicKey, signed int privateKey){
	__CPROVER_printf("__iv__stub_call:isKeyPairValid");
	__CPROVER_printf("__iv__stub_input:publicKey=%d", publicKey);
	__CPROVER_printf("__iv__stub_input:privateKey=%d", privateKey);
	signed int __iv__return_expr_isKeyPairValid;
	if(publicKey==privateKey) __iv__return_expr_isKeyPairValid = 1; else __iv__return_expr_isKeyPairValid = 0; 
	__CPROVER_assume(__iv__return_expr_isKeyPairValid == 0 || __iv__return_expr_isKeyPairValid == 1);
	__CPROVER_printf("__iv__stub_output:__iv__return_expr_isKeyPairValid=%d", __iv__return_expr_isKeyPairValid);
	return __iv__return_expr_isKeyPairValid;
}
void __iv__forward_stub(signed int client, signed int msg){
	__CPROVER_printf("__iv__stub_call:forward");
	__CPROVER_printf("__iv__stub_input:client=%d", client);
	__CPROVER_printf("__iv__stub_input:msg=%d", msg);
	__CPROVER_printf("__iv__stub_input:__SELECTED_FEATURE_Encrypt=%d", __SELECTED_FEATURE_Encrypt);
	__CPROVER_printf("__iv__stub_input:__SELECTED_FEATURE_Sign=%d", __SELECTED_FEATURE_Sign);
	__CPROVER_printf("__iv__stub_input:__SELECTED_FEATURE_Verify=%d", __SELECTED_FEATURE_Verify);
	queue_empty = 0;
	__CPROVER_assume(queue_empty == 0);
	queued_client = client;
	queued_message = msg;
	__CPROVER_printf("__iv__stub_output:queue_empty=%d", queue_empty);
	__CPROVER_printf("__iv__stub_output:queued_client=%d", queued_client);
	__CPROVER_printf("__iv__stub_output:queued_message=%d", queued_message);
}
