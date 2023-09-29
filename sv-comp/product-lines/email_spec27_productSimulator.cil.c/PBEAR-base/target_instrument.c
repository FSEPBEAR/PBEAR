int __iv__current_func_call;
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
static inline void __utac_acc__VerifyForward_spec__1(signed int client, signed int msg);
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
int main() {
	signed int retValue_acc;
	signed int tmp;
__iv__current_func_call = 0;	select_helpers();
__iv__current_func_call = 1;	select_features();
__iv__current_func_call = 2;	tmp = valid_product();
	if (!((tmp != 0))) goto Node_0_8;
__iv__current_func_call = 3;	setup();
__iv__current_func_call = 4;	test();
	Node_0_8:;
	return retValue_acc;
}
void sign(signed int client, signed int msg) {
	signed int privkey;
__iv__current_func_call = 5;	privkey = getClientPrivateKey(client);
	if ((privkey != 0)) goto Node_1_22;
	goto Node_1_28;
	Node_1_22:;
__iv__current_func_call = 6;	setEmailIsSigned(msg, 1);
__iv__current_func_call = 7;	setEmailSignKey(msg, privkey);
	goto Node_1_28;
	Node_1_28:;
	// End of Function
}
signed int select_one() {
	signed int retValue_acc;
	signed int choice;
	choice = __VERIFIER_nondet_signed_int();
	retValue_acc = choice;
	return retValue_acc;
}
signed int createEmail(signed int from, signed int to) {
	signed int retValue_acc;
	signed int msg;
	msg = 1;
__iv__current_func_call = 9;	setEmailFrom(msg, from);
__iv__current_func_call = 10;	setEmailTo(msg, to);
	retValue_acc = msg;
	return retValue_acc;
}
signed int cloneEmail(signed int msg) {
	signed int retValue_acc;
	retValue_acc = msg;
	return retValue_acc;
}
signed int isReadable(signed int msg) {
	signed int retValue_acc;
	if (!((__SELECTED_FEATURE_Encrypt != 0))) goto Node_5_77;
__iv__current_func_call = 11;	retValue_acc = isReadable__role__Encrypt(msg);
	return retValue_acc;
	Node_5_77:;
__iv__current_func_call = 12;	retValue_acc = isReadable__before__Encrypt(msg);
	return retValue_acc;
}
signed int isReadable__role__Encrypt(signed int msg) {
	signed int retValue_acc;
	signed int tmp;
__iv__current_func_call = 13;	tmp = isEncrypted(msg);
	if (!((tmp != 0))) goto Node_6_96;
	retValue_acc = 0;
	return retValue_acc;
	Node_6_96:;
__iv__current_func_call = 14;	retValue_acc = isReadable__before__Encrypt(msg);
	return retValue_acc;
}
signed int isReadable__before__Encrypt(signed int msg) {
	signed int retValue_acc;
	retValue_acc = 1;
	return retValue_acc;
}
void printMail__before__Sign(signed int msg) {
	if (!((__SELECTED_FEATURE_Encrypt != 0))) goto Node_8_120;
__iv__current_func_call = 15;	printMail__role__Encrypt(msg);
	goto Node_8_123;
	Node_8_120:;
__iv__current_func_call = 16;	printMail__before__Encrypt(msg);
	goto Node_8_123;
	Node_8_123:;
	// End of Function
}
void printMail__role__Encrypt(signed int msg) {
	signed int tmp;
	signed int tmp___0;
	char *__cil_tmp4;
	char *__cil_tmp5;
__iv__current_func_call = 17;	printMail__before__Encrypt(msg);
__iv__current_func_call = 18;	tmp = isEncrypted(msg);
	__cil_tmp4 = (char*)("ENCRYPTED\n  %d\n");
	printf(__cil_tmp4, tmp);
__iv__current_func_call = 20;	tmp___0 = getEmailEncryptionKey(msg);
	__cil_tmp5 = (char*)("ENCRYPTION KEY\n  %d\n");
	printf(__cil_tmp5, tmp___0);
	goto Node_9_140;
	Node_9_140:;
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
__iv__current_func_call = 22;	tmp = getEmailId(msg);
	__cil_tmp6 = (char*)("ID:\n  %i\n");
	printf(__cil_tmp6, tmp);
__iv__current_func_call = 24;	tmp___0 = getEmailFrom(msg);
	__cil_tmp7 = (char*)("FROM:\n  %i\n");
	printf(__cil_tmp7, tmp___0);
__iv__current_func_call = 26;	tmp___1 = getEmailTo(msg);
	__cil_tmp8 = (char*)("TO:\n  %i\n");
	printf(__cil_tmp8, tmp___1);
__iv__current_func_call = 28;	tmp___2 = isReadable(msg);
	__cil_tmp9 = (char*)("IS_READABLE\n  %i\n");
	printf(__cil_tmp9, tmp___2);
	goto Node_10_170;
	Node_10_170:;
	// End of Function
}
void bobKeyAdd() {
	signed int tmp;
	signed int tmp___0;
	char *__cil_tmp3;
	char *__cil_tmp4;
__iv__current_func_call = 30;	createClientKeyringEntry(bob);
__iv__current_func_call = 31;	setClientKeyringUser(bob, 0, 2);
__iv__current_func_call = 32;	setClientKeyringPublicKey(bob, 0, 456);
	puts("bob added rjhs key");
__iv__current_func_call = 34;	tmp = getClientKeyringUser(bob, 0);
	__cil_tmp3 = (char*)("%d\n");
	printf(__cil_tmp3, tmp);
__iv__current_func_call = 36;	tmp___0 = getClientKeyringPublicKey(bob, 0);
	__cil_tmp4 = (char*)("%d\n");
	printf(__cil_tmp4, tmp___0);
	goto Node_11_190;
	Node_11_190:;
	// End of Function
}
void bobToRjh() {
	signed int tmp;
	signed int tmp___0;
	signed int tmp___1;
	puts("Please enter a subject and a message body.\n");
__iv__current_func_call = 39;	sendEmail(bob, rjh);
__iv__current_func_call = 40;	tmp___1 = is_queue_empty();
	if ((tmp___1 != 0)) goto Node_12_201;
__iv__current_func_call = 41;	tmp = get_queued_email();
__iv__current_func_call = 42;	tmp___0 = get_queued_client();
__iv__current_func_call = 43;	outgoing(tmp___0, tmp);
	Node_12_201:;
	goto Node_12_206;
	Node_12_206:;
	// End of Function
}
void setup_chuck__role__Keys(signed int chuck___0) {
__iv__current_func_call = 44;	setup_chuck__before__Keys(chuck___0);
__iv__current_func_call = 45;	setClientPrivateKey(chuck___0, 789);
	goto Node_13_210;
	Node_13_210:;
	// End of Function
}
void setup_chuck__before__Keys(signed int chuck___0) {
__iv__current_func_call = 46;	setClientId(chuck___0, chuck___0);
	goto Node_14_213;
	Node_14_213:;
	// End of Function
}
void setup_rjh__role__Keys(signed int rjh___0) {
__iv__current_func_call = 47;	setup_rjh__before__Keys(rjh___0);
__iv__current_func_call = 48;	setClientPrivateKey(rjh___0, 456);
	goto Node_15_217;
	Node_15_217:;
	// End of Function
}
void setup_rjh__before__Keys(signed int rjh___0) {
__iv__current_func_call = 49;	setClientId(rjh___0, rjh___0);
	goto Node_16_220;
	Node_16_220:;
	// End of Function
}
void verify(signed int client, signed int msg) {
	signed int tmp;
	signed int tmp___0;
	signed int pubkey;
	signed int tmp___1;
	signed int tmp___3;
	signed int tmp___4;
__iv__current_func_call = 50;	tmp = isReadable(msg);
	if (!((tmp != 0))) goto Node_17_242;
__iv__current_func_call = 51;	tmp___0 = isSigned(msg);
	if ((tmp___0 != 0)) goto Node_17_240;
	goto Node_17_269;
	Node_17_240:;
	goto Node_17_250;
	Node_17_242:;
	goto Node_17_269;
	Node_17_250:;
__iv__current_func_call = 52;	tmp___1 = getEmailFrom(msg);
__iv__current_func_call = 53;	pubkey = findPublicKey(client, tmp___1);
	if (!((pubkey != 0))) goto Node_17_260;
__iv__current_func_call = 54;	tmp___3 = getEmailSignKey(msg);
__iv__current_func_call = 55;	tmp___4 = isKeyPairValid(tmp___3, pubkey);
	if (!((tmp___4 != 0))) goto Node_17_259;
__iv__current_func_call = 56;	setEmailIsSignatureVerified(msg, 1);
	Node_17_259:;
	Node_17_260:;
	goto Node_17_269;
	Node_17_269:;
	// End of Function
}
void autoRespond(signed int client, signed int msg) {
	signed int sender;
	puts("sending autoresponse\n");
__iv__current_func_call = 58;	sender = getEmailFrom(msg);
__iv__current_func_call = 59;	setEmailTo(msg, sender);
__iv__current_func_call = 60;	queue(client, msg);
	goto Node_18_280;
	Node_18_280:;
	// End of Function
}
signed int isKeyPairValid(signed int publicKey, signed int privateKey) {
	signed int retValue_acc;
	char *__cil_tmp4;
	__cil_tmp4 = (char*)("keypair valid %d %d");
	printf(__cil_tmp4, publicKey, privateKey);
	if ((publicKey != 0)) goto Node_19_292;
	retValue_acc = 0;
	return retValue_acc;
	Node_19_292:;
	if ((privateKey != 0)) goto Node_19_298;
	retValue_acc = 0;
	return retValue_acc;
	Node_19_298:;
	retValue_acc = (signed int)((privateKey == publicKey));
	return retValue_acc;
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
signed int is_queue_empty() {
	signed int retValue_acc;
	retValue_acc = queue_empty;
	return retValue_acc;
}
void incoming__role__Decrypt(signed int client, signed int msg) {
	signed int privkey;
	signed int tmp___0;
	signed int tmp___1;
	signed int tmp___2;
__iv__current_func_call = 62;	privkey = getClientPrivateKey(client);
	if (!((privkey != 0))) goto Node_23_354;
__iv__current_func_call = 63;	tmp___0 = isEncrypted(msg);
	if (!((tmp___0 != 0))) goto Node_23_353;
__iv__current_func_call = 64;	tmp___1 = getEmailEncryptionKey(msg);
__iv__current_func_call = 65;	tmp___2 = isKeyPairValid(tmp___1, privkey);
	if (!((tmp___2 != 0))) goto Node_23_352;
__iv__current_func_call = 66;	setEmailIsEncrypted(msg, 0);
__iv__current_func_call = 67;	setEmailEncryptionKey(msg, 0);
	Node_23_352:;
	Node_23_353:;
	Node_23_354:;
__iv__current_func_call = 68;	incoming__before__Decrypt(client, msg);
	goto Node_23_362;
	Node_23_362:;
	// End of Function
}
void incoming__before__Decrypt(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_Verify != 0))) goto Node_24_367;
__iv__current_func_call = 69;	incoming__role__Verify(client, msg);
	goto Node_24_370;
	Node_24_367:;
__iv__current_func_call = 70;	incoming__before__Verify(client, msg);
	goto Node_24_370;
	Node_24_370:;
	// End of Function
}
void incoming__role__Verify(signed int client, signed int msg) {
__iv__current_func_call = 71;	verify(client, msg);
__iv__current_func_call = 72;	incoming__before__Verify(client, msg);
	goto Node_25_374;
	Node_25_374:;
	// End of Function
}
void incoming__role__Forward(signed int client, signed int msg) {
	signed int fwreceiver;
__iv__current_func_call = 73;	incoming__before__Forward(client, msg);
__iv__current_func_call = 74;	fwreceiver = getClientForwardReceiver(client);
	if (!((fwreceiver != 0))) goto Node_26_383;
__iv__current_func_call = 75;	setEmailTo(msg, fwreceiver);
__iv__current_func_call = 76;	forward(client, msg);
	Node_26_383:;
	goto Node_26_387;
	Node_26_387:;
	// End of Function
}
void incoming__role__AutoResponder(signed int client, signed int msg) {
	signed int tmp;
__iv__current_func_call = 77;	incoming__before__AutoResponder(client, msg);
__iv__current_func_call = 78;	tmp = getClientAutoResponse(client);
	if (!((tmp != 0))) goto Node_27_393;
__iv__current_func_call = 79;	autoRespond(client, msg);
	Node_27_393:;
	goto Node_27_396;
	Node_27_396:;
	// End of Function
}
void outgoing__role__Sign(signed int client, signed int msg) {
__iv__current_func_call = 80;	sign(client, msg);
__iv__current_func_call = 81;	outgoing__before__Sign(client, msg);
	goto Node_28_400;
	Node_28_400:;
	// End of Function
}
void outgoing__role__AddressBook(signed int client, signed int msg) {
	signed int size;
	signed int receiver;
	signed int second;
	signed int tmp___2;
__iv__current_func_call = 82;	size = getClientAddressBookSize(client);
	if (!((size != 0))) goto Node_29_424;
__iv__current_func_call = 83;	sendToAddressBook(client, msg);
	puts("sending to alias in address book\n");
__iv__current_func_call = 85;	receiver = getEmailTo(msg);
	puts("sending to second receipient\n");
__iv__current_func_call = 87;	second = getClientAddressBookAddress(client, 1);
__iv__current_func_call = 88;	setEmailTo(msg, second);
__iv__current_func_call = 89;	outgoing__before__AddressBook(client, msg);
__iv__current_func_call = 90;	tmp___2 = getClientAddressBookAddress(client, 0);
__iv__current_func_call = 91;	setEmailTo(msg, tmp___2);
__iv__current_func_call = 92;	outgoing__before__AddressBook(client, msg);
	goto Node_29_425;
	Node_29_424:;
__iv__current_func_call = 93;	outgoing__before__AddressBook(client, msg);
	Node_29_425:;
	goto Node_29_434;
	Node_29_434:;
	// End of Function
}
void outgoing__before__AddressBook(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_Encrypt != 0))) goto Node_30_439;
__iv__current_func_call = 94;	outgoing__role__Encrypt(client, msg);
	goto Node_30_442;
	Node_30_439:;
__iv__current_func_call = 95;	outgoing__before__Encrypt(client, msg);
	goto Node_30_442;
	Node_30_442:;
	// End of Function
}
void outgoing__role__Encrypt(signed int client, signed int msg) {
	signed int receiver;
	signed int pubkey;
__iv__current_func_call = 96;	receiver = getEmailTo(msg);
__iv__current_func_call = 97;	pubkey = findPublicKey(client, receiver);
	if (!((pubkey != 0))) goto Node_31_454;
__iv__current_func_call = 98;	setEmailEncryptionKey(msg, pubkey);
__iv__current_func_call = 99;	setEmailIsEncrypted(msg, 1);
	Node_31_454:;
__iv__current_func_call = 100;	outgoing__before__Encrypt(client, msg);
	goto Node_31_461;
	Node_31_461:;
	// End of Function
}
void outgoing__before__Encrypt(signed int client, signed int msg) {
	signed int tmp;
__iv__current_func_call = 101;	tmp = getClientId(client);
__iv__current_func_call = 102;	setEmailFrom(msg, tmp);
__iv__current_func_call = 103;	mail(client, msg);
	goto Node_32_468;
	Node_32_468:;
	// End of Function
}
signed int getEmailFrom(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_33_476;
	retValue_acc = __ste_email_from0;
	return retValue_acc;
	Node_33_476:;
	if (!((handle == 2))) goto Node_33_482;
	retValue_acc = __ste_email_from1;
	return retValue_acc;
	Node_33_482:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int getClientKeyringUser(signed int handle, signed int index) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_34_513;
	if (!((index == 0))) goto Node_34_500;
	retValue_acc = __ste_Client_Keyring0_User0;
	return retValue_acc;
	Node_34_500:;
	if (!((index == 1))) goto Node_34_506;
	retValue_acc = __ste_Client_Keyring0_User1;
	return retValue_acc;
	Node_34_506:;
	retValue_acc = 0;
	return retValue_acc;
	Node_34_513:;
	if (!((handle == 2))) goto Node_34_533;
	if (!((index == 0))) goto Node_34_520;
	retValue_acc = __ste_Client_Keyring1_User0;
	return retValue_acc;
	Node_34_520:;
	if (!((index == 1))) goto Node_34_526;
	retValue_acc = __ste_Client_Keyring1_User1;
	return retValue_acc;
	Node_34_526:;
	retValue_acc = 0;
	return retValue_acc;
	Node_34_533:;
	if (!((handle == 3))) goto Node_34_553;
	if (!((index == 0))) goto Node_34_540;
	retValue_acc = __ste_Client_Keyring2_User0;
	return retValue_acc;
	Node_34_540:;
	if (!((index == 1))) goto Node_34_546;
	retValue_acc = __ste_Client_Keyring2_User1;
	return retValue_acc;
	Node_34_546:;
	retValue_acc = 0;
	return retValue_acc;
	Node_34_553:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int createClientKeyringEntry(signed int handle) {
	signed int retValue_acc;
	signed int size;
	signed int __cil_tmp5;
__iv__current_func_call = 104;	size = getClientKeyringSize(handle);
	if (!((size < 2))) goto Node_35_581;
	__cil_tmp5 = (size + 1);
__iv__current_func_call = 105;	setClientKeyringSize(handle, __cil_tmp5);
	retValue_acc = (size + 1);
	return retValue_acc;
	Node_35_581:;
	retValue_acc = -1;
	return retValue_acc;
}
signed int getClientKeyringSize(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_36_603;
	retValue_acc = __ste_ClientKeyring_size0;
	return retValue_acc;
	Node_36_603:;
	if (!((handle == 2))) goto Node_36_609;
	retValue_acc = __ste_ClientKeyring_size1;
	return retValue_acc;
	Node_36_609:;
	if (!((handle == 3))) goto Node_36_615;
	retValue_acc = __ste_ClientKeyring_size2;
	return retValue_acc;
	Node_36_615:;
	retValue_acc = 0;
	return retValue_acc;
}
void setClientPrivateKey(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_37_629;
	__ste_client_privateKey0 = value;
	goto Node_37_636;
	Node_37_629:;
	if (!((handle == 2))) goto Node_37_632;
	__ste_client_privateKey1 = value;
	goto Node_37_635;
	Node_37_632:;
	if (!((handle == 3))) goto Node_37_634;
	__ste_client_privateKey2 = value;
	Node_37_634:;
	Node_37_635:;
	Node_37_636:;
	goto Node_37_638;
	Node_37_638:;
	// End of Function
}
signed int getClientPrivateKey(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_38_646;
	retValue_acc = __ste_client_privateKey0;
	return retValue_acc;
	Node_38_646:;
	if (!((handle == 2))) goto Node_38_652;
	retValue_acc = __ste_client_privateKey1;
	return retValue_acc;
	Node_38_652:;
	if (!((handle == 3))) goto Node_38_658;
	retValue_acc = __ste_client_privateKey2;
	return retValue_acc;
	Node_38_658:;
	retValue_acc = 0;
	return retValue_acc;
}
void setClientAutoResponse(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_39_672;
	__ste_client_autoResponse0 = value;
	goto Node_39_679;
	Node_39_672:;
	if (!((handle == 2))) goto Node_39_675;
	__ste_client_autoResponse1 = value;
	goto Node_39_678;
	Node_39_675:;
	if (!((handle == 3))) goto Node_39_677;
	__ste_client_autoResponse2 = value;
	Node_39_677:;
	Node_39_678:;
	Node_39_679:;
	goto Node_39_681;
	Node_39_681:;
	// End of Function
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
	Node_40_704:;
	if (!((1 != 0))) goto Node_40_724;
	__cil_tmp7 = (struct __UTAC__CFLOW_FUNC*)(0);
	__cil_tmp8 = (unsigned long int)(__cil_tmp7);
	__cil_tmp9 = (unsigned long int)(cf);
	if (!((__cil_tmp9 != __cil_tmp8))) goto Node_40_725;
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
	goto Node_40_704;
	Node_40_724:;
	Node_40_725:;
__iv__current_func_call = 107;	__utac__exception__cf_handler_free(exception);
	goto Node_40_745;
	Node_40_745:;
	// End of Function
}
void setup_bob__role__Keys(signed int bob___0) {
__iv__current_func_call = 108;	setup_bob__before__Keys(bob___0);
__iv__current_func_call = 109;	setClientPrivateKey(bob___0, 123);
	goto Node_41_749;
	Node_41_749:;
	// End of Function
}
signed int valid_product() {
	signed int retValue_acc;
	signed int tmp;
	if ((__SELECTED_FEATURE_Encrypt != 0)) goto Node_42_755;
	goto Node_42_756;
	Node_42_755:;
	if (!((__SELECTED_FEATURE_Decrypt != 0))) goto Node_42_802;
	Node_42_756:;
	if ((__SELECTED_FEATURE_Decrypt != 0)) goto Node_42_759;
	goto Node_42_760;
	Node_42_759:;
	if (!((__SELECTED_FEATURE_Encrypt != 0))) goto Node_42_798;
	Node_42_760:;
	if ((__SELECTED_FEATURE_Encrypt != 0)) goto Node_42_763;
	goto Node_42_764;
	Node_42_763:;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_42_794;
	Node_42_764:;
	if ((__SELECTED_FEATURE_Sign != 0)) goto Node_42_767;
	goto Node_42_768;
	Node_42_767:;
	if (!((__SELECTED_FEATURE_Verify != 0))) goto Node_42_790;
	Node_42_768:;
	if ((__SELECTED_FEATURE_Verify != 0)) goto Node_42_771;
	goto Node_42_772;
	Node_42_771:;
	if (!((__SELECTED_FEATURE_Sign != 0))) goto Node_42_786;
	Node_42_772:;
	if ((__SELECTED_FEATURE_Sign != 0)) goto Node_42_775;
	goto Node_42_776;
	Node_42_775:;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_42_782;
	Node_42_776:;
	if (!((__SELECTED_FEATURE_Base != 0))) goto Node_42_779;
	tmp = 1;
	goto Node_42_780;
	Node_42_779:;
	tmp = 0;
	Node_42_780:;
	goto Node_42_783;
	Node_42_782:;
	tmp = 0;
	Node_42_783:;
	goto Node_42_787;
	Node_42_786:;
	tmp = 0;
	Node_42_787:;
	goto Node_42_791;
	Node_42_790:;
	tmp = 0;
	Node_42_791:;
	goto Node_42_795;
	Node_42_794:;
	tmp = 0;
	Node_42_795:;
	goto Node_42_799;
	Node_42_798:;
	tmp = 0;
	Node_42_799:;
	goto Node_42_803;
	Node_42_802:;
	tmp = 0;
	Node_42_803:;
	retValue_acc = tmp;
	return retValue_acc;
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
	goto Node_43_868;
	Node_43_868:;
	// End of Function
}
void select_helpers() {
	__GUIDSL_ROOT_PRODUCTION = 1;
	goto Node_44_871;
	Node_44_871:;
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
	if (!((i > 0))) goto Node_45_890;
	__cil_tmp4 = (unsigned long int)(this);
	__cil_tmp5 = (__cil_tmp4 + (unsigned long int)(16));
	mem_12 = (signed int*)(__cil_tmp5);
	__cil_tmp6 = *mem_12;
	assert((i <= __cil_tmp6));
	Node_45_890:;
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
	if (!((i > 0))) goto Node_46_943;
	__cil_tmp4 = (unsigned long int)(this);
	__cil_tmp5 = (__cil_tmp4 + (unsigned long int)(16));
	mem_12 = (signed int*)(__cil_tmp5);
	__cil_tmp6 = *mem_12;
	assert((i <= __cil_tmp6));
	Node_46_943:;
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
	if (!((count == 0))) goto Node_47_1023;
	return retValue_acc;
	Node_47_1023:;
	if (!((mode == 0))) goto Node_47_1058;
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
	Node_47_1058:;
	if (!((mode == 1))) goto Node_47_1113;
	temp = head;
	Node_47_1061:;
	if (!((1 != 0))) goto Node_47_1078;
	if (!((count > 1))) goto Node_47_1079;
	__cil_tmp12 = (unsigned long int)(temp);
	__cil_tmp13 = (__cil_tmp12 + (unsigned long int)(8));
	mem_20 = (struct __ACC__ERR**)(__cil_tmp13);
	next = *mem_20;
	mem_21 = (void**)(temp);
	excep = *mem_21;
	__cil_tmp14 = (void*)(temp);
	free(__cil_tmp14);
__iv__current_func_call = 117;	__utac__exception__cf_handler_reset(excep);
	temp = next;
	count = (count - 1);
	goto Node_47_1061;
	Node_47_1078:;
	Node_47_1079:;
	__cil_tmp15 = (unsigned long int)(temp);
	__cil_tmp16 = (__cil_tmp15 + (unsigned long int)(8));
	mem_22 = (struct __ACC__ERR**)(__cil_tmp16);
	head = *mem_22;
	mem_23 = (void**)(temp);
	excep = *mem_23;
	__cil_tmp17 = (void*)(temp);
	free(__cil_tmp17);
__iv__current_func_call = 119;	__utac__exception__cf_handler_reset(excep);
	retValue_acc = excep;
	return retValue_acc;
	Node_47_1113:;
	if (!((mode == 2))) goto Node_47_1167;
	if (!((head != (struct __ACC__ERR*)(NULL)))) goto Node_47_1142;
	mem_24 = (void**)(head);
	retValue_acc = *mem_24;
	return retValue_acc;
	Node_47_1142:;
	retValue_acc = (void*)(0);
	return retValue_acc;
	Node_47_1167:;
	return retValue_acc;
}
void sendEmail(signed int sender, signed int receiver) {
	signed int email;
__iv__current_func_call = 120;	email = createEmail(0, receiver);
__iv__current_func_call = 121;	outgoing(sender, email);
	goto Node_48_1200;
	Node_48_1200:;
	// End of Function
}
void printMail__role__Verify(signed int msg) {
	signed int tmp;
	char *__cil_tmp3;
__iv__current_func_call = 122;	printMail__before__Verify(msg);
__iv__current_func_call = 123;	tmp = isVerified(msg);
	__cil_tmp3 = (char*)("SIGNATURE VERIFIED\n  %d\n");
	printf(__cil_tmp3, tmp);
	goto Node_49_1210;
	Node_49_1210:;
	// End of Function
}
void reach_error() {
	assert(FALSE);
	// End of Function
}
void rjhKeyAdd() {
__iv__current_func_call = 126;	createClientKeyringEntry(rjh);
__iv__current_func_call = 127;	setClientKeyringUser(rjh, 0, 1);
__iv__current_func_call = 128;	setClientKeyringPublicKey(rjh, 0, 123);
	goto Node_51_1217;
	Node_51_1217:;
	// End of Function
}
signed int getClientAddressBookAddress(signed int handle, signed int index) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_52_1246;
	if (!((index == 0))) goto Node_52_1226;
	retValue_acc = __ste_Client_AddressBook0_Address0;
	return retValue_acc;
	Node_52_1226:;
	if (!((index == 1))) goto Node_52_1232;
	retValue_acc = __ste_Client_AddressBook0_Address1;
	return retValue_acc;
	Node_52_1232:;
	if (!((index == 2))) goto Node_52_1238;
	retValue_acc = __ste_Client_AddressBook0_Address2;
	return retValue_acc;
	Node_52_1238:;
	retValue_acc = 0;
	return retValue_acc;
	Node_52_1246:;
	if (!((handle == 2))) goto Node_52_1273;
	if (!((index == 0))) goto Node_52_1253;
	retValue_acc = __ste_Client_AddressBook1_Address0;
	return retValue_acc;
	Node_52_1253:;
	if (!((index == 1))) goto Node_52_1259;
	retValue_acc = __ste_Client_AddressBook1_Address1;
	return retValue_acc;
	Node_52_1259:;
	if (!((index == 2))) goto Node_52_1265;
	retValue_acc = __ste_Client_AddressBook1_Address2;
	return retValue_acc;
	Node_52_1265:;
	retValue_acc = 0;
	return retValue_acc;
	Node_52_1273:;
	if (!((handle == 3))) goto Node_52_1300;
	if (!((index == 0))) goto Node_52_1280;
	retValue_acc = __ste_Client_AddressBook2_Address0;
	return retValue_acc;
	Node_52_1280:;
	if (!((index == 1))) goto Node_52_1286;
	retValue_acc = __ste_Client_AddressBook2_Address1;
	return retValue_acc;
	Node_52_1286:;
	if (!((index == 2))) goto Node_52_1292;
	retValue_acc = __ste_Client_AddressBook2_Address2;
	return retValue_acc;
	Node_52_1292:;
	retValue_acc = 0;
	return retValue_acc;
	Node_52_1300:;
	retValue_acc = 0;
	return retValue_acc;
}
void rjhSetAutoRespond() {
__iv__current_func_call = 129;	setClientAutoResponse(rjh, 1);
	goto Node_53_1313;
	Node_53_1313:;
	// End of Function
}
void setClientAddressBookAlias(signed int handle, signed int index, signed int value) {
	if (!((handle == 1))) goto Node_54_1327;
	if (!((index == 0))) goto Node_54_1318;
	__ste_Client_AddressBook0_Alias0 = value;
	goto Node_54_1325;
	Node_54_1318:;
	if (!((index == 1))) goto Node_54_1321;
	__ste_Client_AddressBook0_Alias1 = value;
	goto Node_54_1324;
	Node_54_1321:;
	if (!((index == 2))) goto Node_54_1323;
	__ste_Client_AddressBook0_Alias2 = value;
	Node_54_1323:;
	Node_54_1324:;
	Node_54_1325:;
	goto Node_54_1354;
	Node_54_1327:;
	if (!((handle == 2))) goto Node_54_1340;
	if (!((index == 0))) goto Node_54_1331;
	__ste_Client_AddressBook1_Alias0 = value;
	goto Node_54_1338;
	Node_54_1331:;
	if (!((index == 1))) goto Node_54_1334;
	__ste_Client_AddressBook1_Alias1 = value;
	goto Node_54_1337;
	Node_54_1334:;
	if (!((index == 2))) goto Node_54_1336;
	__ste_Client_AddressBook1_Alias2 = value;
	Node_54_1336:;
	Node_54_1337:;
	Node_54_1338:;
	goto Node_54_1353;
	Node_54_1340:;
	if (!((handle == 3))) goto Node_54_1352;
	if (!((index == 0))) goto Node_54_1344;
	__ste_Client_AddressBook2_Alias0 = value;
	goto Node_54_1351;
	Node_54_1344:;
	if (!((index == 1))) goto Node_54_1347;
	__ste_Client_AddressBook2_Alias1 = value;
	goto Node_54_1350;
	Node_54_1347:;
	if (!((index == 2))) goto Node_54_1349;
	__ste_Client_AddressBook2_Alias2 = value;
	Node_54_1349:;
	Node_54_1350:;
	Node_54_1351:;
	Node_54_1352:;
	Node_54_1353:;
	Node_54_1354:;
	goto Node_54_1356;
	Node_54_1356:;
	// End of Function
}
signed int getEmailSignKey(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_55_1364;
	retValue_acc = __ste_email_signKey0;
	return retValue_acc;
	Node_55_1364:;
	if (!((handle == 2))) goto Node_55_1370;
	retValue_acc = __ste_email_signKey1;
	return retValue_acc;
	Node_55_1370:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int getClientAddressBookAlias(signed int handle, signed int index) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_56_1408;
	if (!((index == 0))) goto Node_56_1388;
	retValue_acc = __ste_Client_AddressBook0_Alias0;
	return retValue_acc;
	Node_56_1388:;
	if (!((index == 1))) goto Node_56_1394;
	retValue_acc = __ste_Client_AddressBook0_Alias1;
	return retValue_acc;
	Node_56_1394:;
	if (!((index == 2))) goto Node_56_1400;
	retValue_acc = __ste_Client_AddressBook0_Alias2;
	return retValue_acc;
	Node_56_1400:;
	retValue_acc = 0;
	return retValue_acc;
	Node_56_1408:;
	if (!((handle == 2))) goto Node_56_1435;
	if (!((index == 0))) goto Node_56_1415;
	retValue_acc = __ste_Client_AddressBook1_Alias0;
	return retValue_acc;
	Node_56_1415:;
	if (!((index == 1))) goto Node_56_1421;
	retValue_acc = __ste_Client_AddressBook1_Alias1;
	return retValue_acc;
	Node_56_1421:;
	if (!((index == 2))) goto Node_56_1427;
	retValue_acc = __ste_Client_AddressBook1_Alias2;
	return retValue_acc;
	Node_56_1427:;
	retValue_acc = 0;
	return retValue_acc;
	Node_56_1435:;
	if (!((handle == 3))) goto Node_56_1462;
	if (!((index == 0))) goto Node_56_1442;
	retValue_acc = __ste_Client_AddressBook2_Alias0;
	return retValue_acc;
	Node_56_1442:;
	if (!((index == 1))) goto Node_56_1448;
	retValue_acc = __ste_Client_AddressBook2_Alias1;
	return retValue_acc;
	Node_56_1448:;
	if (!((index == 2))) goto Node_56_1454;
	retValue_acc = __ste_Client_AddressBook2_Alias2;
	return retValue_acc;
	Node_56_1454:;
	retValue_acc = 0;
	return retValue_acc;
	Node_56_1462:;
	retValue_acc = 0;
	return retValue_acc;
}
void outgoing__before__Sign(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_AddressBook != 0))) goto Node_57_1477;
__iv__current_func_call = 130;	outgoing__role__AddressBook(client, msg);
	goto Node_57_1480;
	Node_57_1477:;
__iv__current_func_call = 131;	outgoing__before__AddressBook(client, msg);
	goto Node_57_1480;
	Node_57_1480:;
	// End of Function
}
signed int createClientAddressBookEntry(signed int handle) {
	signed int retValue_acc;
	signed int size;
	signed int __cil_tmp5;
__iv__current_func_call = 132;	size = getClientAddressBookSize(handle);
	if (!((size < 3))) goto Node_58_1498;
	__cil_tmp5 = (size + 1);
__iv__current_func_call = 133;	setClientAddressBookSize(handle, __cil_tmp5);
	retValue_acc = (size + 1);
	return retValue_acc;
	Node_58_1498:;
	retValue_acc = -1;
	return retValue_acc;
}
signed int getClientForwardReceiver(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_59_1520;
	retValue_acc = __ste_client_forwardReceiver0;
	return retValue_acc;
	Node_59_1520:;
	if (!((handle == 2))) goto Node_59_1526;
	retValue_acc = __ste_client_forwardReceiver1;
	return retValue_acc;
	Node_59_1526:;
	if (!((handle == 3))) goto Node_59_1532;
	retValue_acc = __ste_client_forwardReceiver2;
	return retValue_acc;
	Node_59_1532:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int createClient(char* name) {
	signed int retValue_acc;
	signed int client;
__iv__current_func_call = 134;	client = initClient();
	retValue_acc = client;
	return retValue_acc;
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
	Node_61_1581:;
	if (!((1 != 0))) goto Node_61_1597;
	__cil_tmp7 = (struct __UTAC__CFLOW_FUNC*)(0);
	__cil_tmp8 = (unsigned long int)(__cil_tmp7);
	__cil_tmp9 = (unsigned long int)(cf);
	if (!((__cil_tmp9 != __cil_tmp8))) goto Node_61_1598;
	tmp = cf;
	__cil_tmp10 = (unsigned long int)(cf);
	__cil_tmp11 = (__cil_tmp10 + (unsigned long int)(16));
	mem_16 = (struct __UTAC__CFLOW_FUNC**)(__cil_tmp11);
	cf = *mem_16;
	__cil_tmp12 = (void*)(tmp);
	free(__cil_tmp12);
	goto Node_61_1581;
	Node_61_1597:;
	Node_61_1598:;
	__cil_tmp13 = (unsigned long int)(excep);
	__cil_tmp14 = (__cil_tmp13 + (unsigned long int)(24));
	mem_17 = (struct __UTAC__CFLOW_FUNC**)(__cil_tmp14);
	*mem_17 = (struct __UTAC__CFLOW_FUNC*)(0);
	goto Node_61_1620;
	Node_61_1620:;
	// End of Function
}
void rjhToBob() {
	puts("Please enter a subject and a message body.\n");
__iv__current_func_call = 137;	sendEmail(rjh, bob);
	goto Node_62_1624;
	Node_62_1624:;
	// End of Function
}
void setEmailTo(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_63_1628;
	__ste_email_to0 = value;
	goto Node_63_1631;
	Node_63_1628:;
	if (!((handle == 2))) goto Node_63_1630;
	__ste_email_to1 = value;
	Node_63_1630:;
	Node_63_1631:;
	goto Node_63_1633;
	Node_63_1633:;
	// End of Function
}
void setClientAddressBookAddress(signed int handle, signed int index, signed int value) {
	if (!((handle == 1))) goto Node_64_1647;
	if (!((index == 0))) goto Node_64_1638;
	__ste_Client_AddressBook0_Address0 = value;
	goto Node_64_1645;
	Node_64_1638:;
	if (!((index == 1))) goto Node_64_1641;
	__ste_Client_AddressBook0_Address1 = value;
	goto Node_64_1644;
	Node_64_1641:;
	if (!((index == 2))) goto Node_64_1643;
	__ste_Client_AddressBook0_Address2 = value;
	Node_64_1643:;
	Node_64_1644:;
	Node_64_1645:;
	goto Node_64_1674;
	Node_64_1647:;
	if (!((handle == 2))) goto Node_64_1660;
	if (!((index == 0))) goto Node_64_1651;
	__ste_Client_AddressBook1_Address0 = value;
	goto Node_64_1658;
	Node_64_1651:;
	if (!((index == 1))) goto Node_64_1654;
	__ste_Client_AddressBook1_Address1 = value;
	goto Node_64_1657;
	Node_64_1654:;
	if (!((index == 2))) goto Node_64_1656;
	__ste_Client_AddressBook1_Address2 = value;
	Node_64_1656:;
	Node_64_1657:;
	Node_64_1658:;
	goto Node_64_1673;
	Node_64_1660:;
	if (!((handle == 3))) goto Node_64_1672;
	if (!((index == 0))) goto Node_64_1664;
	__ste_Client_AddressBook2_Address0 = value;
	goto Node_64_1671;
	Node_64_1664:;
	if (!((index == 1))) goto Node_64_1667;
	__ste_Client_AddressBook2_Address1 = value;
	goto Node_64_1670;
	Node_64_1667:;
	if (!((index == 2))) goto Node_64_1669;
	__ste_Client_AddressBook2_Address2 = value;
	Node_64_1669:;
	Node_64_1670:;
	Node_64_1671:;
	Node_64_1672:;
	Node_64_1673:;
	Node_64_1674:;
	goto Node_64_1676;
	Node_64_1676:;
	// End of Function
}
void setClientKeyringUser(signed int handle, signed int index, signed int value) {
	if (!((handle == 1))) goto Node_65_1686;
	if (!((index == 0))) goto Node_65_1681;
	__ste_Client_Keyring0_User0 = value;
	goto Node_65_1684;
	Node_65_1681:;
	if (!((index == 1))) goto Node_65_1683;
	__ste_Client_Keyring0_User1 = value;
	Node_65_1683:;
	Node_65_1684:;
	goto Node_65_1705;
	Node_65_1686:;
	if (!((handle == 2))) goto Node_65_1695;
	if (!((index == 0))) goto Node_65_1690;
	__ste_Client_Keyring1_User0 = value;
	goto Node_65_1693;
	Node_65_1690:;
	if (!((index == 1))) goto Node_65_1692;
	__ste_Client_Keyring1_User1 = value;
	Node_65_1692:;
	Node_65_1693:;
	goto Node_65_1704;
	Node_65_1695:;
	if (!((handle == 3))) goto Node_65_1703;
	if (!((index == 0))) goto Node_65_1699;
	__ste_Client_Keyring2_User0 = value;
	goto Node_65_1702;
	Node_65_1699:;
	if (!((index == 1))) goto Node_65_1701;
	__ste_Client_Keyring2_User1 = value;
	Node_65_1701:;
	Node_65_1702:;
	Node_65_1703:;
	Node_65_1704:;
	Node_65_1705:;
	goto Node_65_1707;
	Node_65_1707:;
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
	Node_66_1743:;
	if (!((1 != 0))) goto Node_66_1883;
	if (!((splverifierCounter < 4))) goto Node_66_1884;
	splverifierCounter = (splverifierCounter + 1);
	if ((op1 != 0)) goto Node_66_1760;
	tmp___9 = __VERIFIER_nondet_signed_int();
	if (!((tmp___9 != 0))) goto Node_66_1757;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_66_1754;
__iv__current_func_call = 139;	bobKeyAdd();
	Node_66_1754:;
	op1 = 1;
	goto Node_66_1758;
	Node_66_1757:;
	goto Node_66_1760;
	Node_66_1758:;
	goto Node_66_1881;
	Node_66_1760:;
	if ((op2 != 0)) goto Node_66_1771;
	tmp___8 = __VERIFIER_nondet_signed_int();
	if (!((tmp___8 != 0))) goto Node_66_1768;
	if (!((__SELECTED_FEATURE_AutoResponder != 0))) goto Node_66_1765;
__iv__current_func_call = 141;	rjhSetAutoRespond();
	Node_66_1765:;
	op2 = 1;
	goto Node_66_1769;
	Node_66_1768:;
	goto Node_66_1771;
	Node_66_1769:;
	goto Node_66_1880;
	Node_66_1771:;
	if ((op3 != 0)) goto Node_66_1782;
	tmp___7 = __VERIFIER_nondet_signed_int();
	if (!((tmp___7 != 0))) goto Node_66_1779;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_66_1776;
__iv__current_func_call = 143;	rjhDeletePrivateKey();
	Node_66_1776:;
	op3 = 1;
	goto Node_66_1780;
	Node_66_1779:;
	goto Node_66_1782;
	Node_66_1780:;
	goto Node_66_1879;
	Node_66_1782:;
	if ((op4 != 0)) goto Node_66_1793;
	tmp___6 = __VERIFIER_nondet_signed_int();
	if (!((tmp___6 != 0))) goto Node_66_1790;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_66_1787;
__iv__current_func_call = 145;	rjhKeyAdd();
	Node_66_1787:;
	op4 = 1;
	goto Node_66_1791;
	Node_66_1790:;
	goto Node_66_1793;
	Node_66_1791:;
	goto Node_66_1878;
	Node_66_1793:;
	if ((op5 != 0)) goto Node_66_1804;
	tmp___5 = __VERIFIER_nondet_signed_int();
	if (!((tmp___5 != 0))) goto Node_66_1801;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_66_1798;
__iv__current_func_call = 147;	chuckKeyAddRjh();
	Node_66_1798:;
	op5 = 1;
	goto Node_66_1802;
	Node_66_1801:;
	goto Node_66_1804;
	Node_66_1802:;
	goto Node_66_1877;
	Node_66_1804:;
	if ((op6 != 0)) goto Node_66_1815;
	tmp___4 = __VERIFIER_nondet_signed_int();
	if (!((tmp___4 != 0))) goto Node_66_1812;
	if (!((__SELECTED_FEATURE_Forward != 0))) goto Node_66_1809;
__iv__current_func_call = 149;	rjhEnableForwarding();
	Node_66_1809:;
	op6 = 1;
	goto Node_66_1813;
	Node_66_1812:;
	goto Node_66_1815;
	Node_66_1813:;
	goto Node_66_1876;
	Node_66_1815:;
	if ((op7 != 0)) goto Node_66_1826;
	tmp___3 = __VERIFIER_nondet_signed_int();
	if (!((tmp___3 != 0))) goto Node_66_1823;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_66_1820;
__iv__current_func_call = 151;	rjhKeyChange();
	Node_66_1820:;
	op7 = 1;
	goto Node_66_1824;
	Node_66_1823:;
	goto Node_66_1826;
	Node_66_1824:;
	goto Node_66_1875;
	Node_66_1826:;
	if ((op8 != 0)) goto Node_66_1837;
	tmp___2 = __VERIFIER_nondet_signed_int();
	if (!((tmp___2 != 0))) goto Node_66_1834;
	if (!((__SELECTED_FEATURE_AddressBook != 0))) goto Node_66_1831;
__iv__current_func_call = 153;	bobSetAddressBook();
	Node_66_1831:;
	op8 = 1;
	goto Node_66_1835;
	Node_66_1834:;
	goto Node_66_1837;
	Node_66_1835:;
	goto Node_66_1874;
	Node_66_1837:;
	if ((op9 != 0)) goto Node_66_1848;
	tmp___1 = __VERIFIER_nondet_signed_int();
	if (!((tmp___1 != 0))) goto Node_66_1845;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_66_1842;
__iv__current_func_call = 155;	chuckKeyAdd();
	Node_66_1842:;
	op9 = 1;
	goto Node_66_1846;
	Node_66_1845:;
	goto Node_66_1848;
	Node_66_1846:;
	goto Node_66_1873;
	Node_66_1848:;
	if ((op10 != 0)) goto Node_66_1859;
	tmp___0 = __VERIFIER_nondet_signed_int();
	if (!((tmp___0 != 0))) goto Node_66_1856;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_66_1853;
__iv__current_func_call = 157;	bobKeyChange();
	Node_66_1853:;
	op10 = 1;
	goto Node_66_1857;
	Node_66_1856:;
	goto Node_66_1859;
	Node_66_1857:;
	goto Node_66_1872;
	Node_66_1859:;
	if ((op11 != 0)) goto Node_66_1870;
	tmp = __VERIFIER_nondet_signed_int();
	if (!((tmp != 0))) goto Node_66_1867;
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_66_1864;
__iv__current_func_call = 159;	chuckKeyAdd();
	Node_66_1864:;
	op11 = 1;
	goto Node_66_1868;
	Node_66_1867:;
	goto Node_66_1884;
	Node_66_1868:;
	goto Node_66_1871;
	Node_66_1870:;
	goto Node_66_1884;
	Node_66_1871:;
	Node_66_1872:;
	Node_66_1873:;
	Node_66_1874:;
	Node_66_1875:;
	Node_66_1876:;
	Node_66_1877:;
	Node_66_1878:;
	Node_66_1879:;
	Node_66_1880:;
	Node_66_1881:;
	goto Node_66_1743;
	Node_66_1883:;
	Node_66_1884:;
__iv__current_func_call = 160;	bobToRjh();
	goto Node_66_1910;
	Node_66_1910:;
	// End of Function
}
signed int initEmail() {
	signed int retValue_acc;
	if (!((__ste_Email_counter < 2))) goto Node_67_1919;
	__ste_Email_counter = (__ste_Email_counter + 1);
	retValue_acc = __ste_Email_counter;
	return retValue_acc;
	Node_67_1919:;
	retValue_acc = -1;
	return retValue_acc;
}
void mail(signed int client, signed int msg) {
	signed int tmp;
	puts("mail sent");
__iv__current_func_call = 162;	tmp = getEmailTo(msg);
__iv__current_func_call = 163;	incoming(tmp, msg);
	goto Node_68_1934;
	Node_68_1934:;
	// End of Function
}
void setup() {
	char *__cil_tmp1;
	char *__cil_tmp2;
	char *__cil_tmp3;
	bob = 1;
__iv__current_func_call = 164;	setup_bob(bob);
	__cil_tmp1 = (char*)("bob: %d\n");
	printf(__cil_tmp1, bob);
	rjh = 2;
__iv__current_func_call = 166;	setup_rjh(rjh);
	__cil_tmp2 = (char*)("rjh: %d\n");
	printf(__cil_tmp2, rjh);
	chuck = 3;
__iv__current_func_call = 168;	setup_chuck(chuck);
	__cil_tmp3 = (char*)("chuck: %d\n");
	printf(__cil_tmp3, chuck);
	goto Node_69_1954;
	Node_69_1954:;
	// End of Function
}
signed int findPublicKey(signed int handle, signed int userid) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_70_1976;
	if (!((userid == __ste_Client_Keyring0_User0))) goto Node_70_1963;
	retValue_acc = __ste_Client_Keyring0_PublicKey0;
	return retValue_acc;
	Node_70_1963:;
	if (!((userid == __ste_Client_Keyring0_User1))) goto Node_70_1969;
	retValue_acc = __ste_Client_Keyring0_PublicKey1;
	return retValue_acc;
	Node_70_1969:;
	retValue_acc = 0;
	return retValue_acc;
	Node_70_1976:;
	if (!((handle == 2))) goto Node_70_1996;
	if (!((userid == __ste_Client_Keyring1_User0))) goto Node_70_1983;
	retValue_acc = __ste_Client_Keyring1_PublicKey0;
	return retValue_acc;
	Node_70_1983:;
	if (!((userid == __ste_Client_Keyring1_User1))) goto Node_70_1989;
	retValue_acc = __ste_Client_Keyring1_PublicKey1;
	return retValue_acc;
	Node_70_1989:;
	retValue_acc = 0;
	return retValue_acc;
	Node_70_1996:;
	if (!((handle == 3))) goto Node_70_2016;
	if (!((userid == __ste_Client_Keyring2_User0))) goto Node_70_2003;
	retValue_acc = __ste_Client_Keyring2_PublicKey0;
	return retValue_acc;
	Node_70_2003:;
	if (!((userid == __ste_Client_Keyring2_User1))) goto Node_70_2009;
	retValue_acc = __ste_Client_Keyring2_PublicKey1;
	return retValue_acc;
	Node_70_2009:;
	retValue_acc = 0;
	return retValue_acc;
	Node_70_2016:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int getClientId(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_71_2034;
	retValue_acc = __ste_client_idCounter0;
	return retValue_acc;
	Node_71_2034:;
	if (!((handle == 2))) goto Node_71_2040;
	retValue_acc = __ste_client_idCounter1;
	return retValue_acc;
	Node_71_2040:;
	if (!((handle == 3))) goto Node_71_2046;
	retValue_acc = __ste_client_idCounter2;
	return retValue_acc;
	Node_71_2046:;
	retValue_acc = 0;
	return retValue_acc;
}
void rjhDeletePrivateKey() {
__iv__current_func_call = 170;	setClientPrivateKey(rjh, 0);
	goto Node_72_2059;
	Node_72_2059:;
	// End of Function
}
void deliver(signed int client, signed int msg) {
	signed int __utac__ad__arg1;
	signed int __utac__ad__arg2;
	__utac__ad__arg1 = client;
	__utac__ad__arg2 = msg;
__iv__current_func_call = 171;	__utac_acc__VerifyForward_spec__1(__utac__ad__arg1, __utac__ad__arg2);
	puts("mail delivered\n");
	goto Node_74_2190;
	Node_74_2190:;
	// End of Function
}
void __automaton_fail() {
__iv__current_func_call = 173;	reach_error();
	abort();
}
signed int getClientAutoResponse(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_76_2202;
	retValue_acc = __ste_client_autoResponse0;
	return retValue_acc;
	Node_76_2202:;
	if (!((handle == 2))) goto Node_76_2208;
	retValue_acc = __ste_client_autoResponse1;
	return retValue_acc;
	Node_76_2208:;
	if (!((handle == 3))) goto Node_76_2214;
	retValue_acc = __ste_client_autoResponse2;
	return retValue_acc;
	Node_76_2214:;
	retValue_acc = -1;
	return retValue_acc;
}
signed int getClientKeyringPublicKey(signed int handle, signed int index) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_77_2246;
	if (!((index == 0))) goto Node_77_2233;
	retValue_acc = __ste_Client_Keyring0_PublicKey0;
	return retValue_acc;
	Node_77_2233:;
	if (!((index == 1))) goto Node_77_2239;
	retValue_acc = __ste_Client_Keyring0_PublicKey1;
	return retValue_acc;
	Node_77_2239:;
	retValue_acc = 0;
	return retValue_acc;
	Node_77_2246:;
	if (!((handle == 2))) goto Node_77_2266;
	if (!((index == 0))) goto Node_77_2253;
	retValue_acc = __ste_Client_Keyring1_PublicKey0;
	return retValue_acc;
	Node_77_2253:;
	if (!((index == 1))) goto Node_77_2259;
	retValue_acc = __ste_Client_Keyring1_PublicKey1;
	return retValue_acc;
	Node_77_2259:;
	retValue_acc = 0;
	return retValue_acc;
	Node_77_2266:;
	if (!((handle == 3))) goto Node_77_2286;
	if (!((index == 0))) goto Node_77_2273;
	retValue_acc = __ste_Client_Keyring2_PublicKey0;
	return retValue_acc;
	Node_77_2273:;
	if (!((index == 1))) goto Node_77_2279;
	retValue_acc = __ste_Client_Keyring2_PublicKey1;
	return retValue_acc;
	Node_77_2279:;
	retValue_acc = 0;
	return retValue_acc;
	Node_77_2286:;
	retValue_acc = 0;
	return retValue_acc;
}
void setClientAddressBookSize(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_79_2305;
	__ste_ClientAddressBook_size0 = value;
	goto Node_79_2312;
	Node_79_2305:;
	if (!((handle == 2))) goto Node_79_2308;
	__ste_ClientAddressBook_size1 = value;
	goto Node_79_2311;
	Node_79_2308:;
	if (!((handle == 3))) goto Node_79_2310;
	__ste_ClientAddressBook_size2 = value;
	Node_79_2310:;
	Node_79_2311:;
	Node_79_2312:;
	goto Node_79_2314;
	Node_79_2314:;
	// End of Function
}
signed int getClientAddressBookSize(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_80_2322;
	retValue_acc = __ste_ClientAddressBook_size0;
	return retValue_acc;
	Node_80_2322:;
	if (!((handle == 2))) goto Node_80_2328;
	retValue_acc = __ste_ClientAddressBook_size1;
	return retValue_acc;
	Node_80_2328:;
	if (!((handle == 3))) goto Node_80_2334;
	retValue_acc = __ste_ClientAddressBook_size2;
	return retValue_acc;
	Node_80_2334:;
	retValue_acc = 0;
	return retValue_acc;
}
void setClientOutbuffer(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_81_2348;
	__ste_client_outbuffer0 = value;
	goto Node_81_2355;
	Node_81_2348:;
	if (!((handle == 2))) goto Node_81_2351;
	__ste_client_outbuffer1 = value;
	goto Node_81_2354;
	Node_81_2351:;
	if (!((handle == 3))) goto Node_81_2353;
	__ste_client_outbuffer2 = value;
	Node_81_2353:;
	Node_81_2354:;
	Node_81_2355:;
	goto Node_81_2357;
	Node_81_2357:;
	// End of Function
}
signed int prompt(char* msg) {
	signed int retValue_acc;
	signed int retval;
	char *__cil_tmp4;
	__cil_tmp4 = (char*)("%s\n");
	printf(__cil_tmp4, msg);
	retValue_acc = retval;
	return retValue_acc;
}
void printMail__role__Sign(signed int msg) {
	signed int tmp;
	signed int tmp___0;
	char *__cil_tmp4;
	char *__cil_tmp5;
__iv__current_func_call = 176;	printMail__before__Sign(msg);
__iv__current_func_call = 177;	tmp = isSigned(msg);
	__cil_tmp4 = (char*)("SIGNED\n  %i\n");
	printf(__cil_tmp4, tmp);
__iv__current_func_call = 179;	tmp___0 = getEmailSignKey(msg);
	__cil_tmp5 = (char*)("SIGNATURE\n  %i\n");
	printf(__cil_tmp5, tmp___0);
	goto Node_83_2391;
	Node_83_2391:;
	// End of Function
}
void incoming(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_Decrypt != 0))) goto Node_84_2396;
__iv__current_func_call = 181;	incoming__role__Decrypt(client, msg);
	goto Node_84_2399;
	Node_84_2396:;
__iv__current_func_call = 182;	incoming__before__Decrypt(client, msg);
	goto Node_84_2399;
	Node_84_2399:;
	// End of Function
}
void rjhKeyAddChuck() {
__iv__current_func_call = 183;	createClientKeyringEntry(rjh);
__iv__current_func_call = 184;	setClientKeyringUser(rjh, 0, 3);
__iv__current_func_call = 185;	setClientKeyringPublicKey(rjh, 0, 789);
	goto Node_85_2404;
	Node_85_2404:;
	// End of Function
}
signed int getEmailId(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_86_2412;
	retValue_acc = __ste_email_id0;
	return retValue_acc;
	Node_86_2412:;
	if (!((handle == 2))) goto Node_86_2418;
	retValue_acc = __ste_email_id1;
	return retValue_acc;
	Node_86_2418:;
	retValue_acc = 0;
	return retValue_acc;
}
signed int initClient() {
	signed int retValue_acc;
	if (!((__ste_Client_counter < 3))) goto Node_87_2436;
	__ste_Client_counter = (__ste_Client_counter + 1);
	retValue_acc = __ste_Client_counter;
	return retValue_acc;
	Node_87_2436:;
	retValue_acc = -1;
	return retValue_acc;
}
char* getClientName(signed int handle) {
	char *retValue_acc;
	void *__cil_tmp3;
	if (!((handle == 1))) goto Node_88_2454;
	retValue_acc = __ste_client_name0;
	return retValue_acc;
	Node_88_2454:;
	if (!((handle == 2))) goto Node_88_2461;
	retValue_acc = __ste_client_name1;
	return retValue_acc;
	Node_88_2461:;
	if (!((handle == 3))) goto Node_88_2468;
	retValue_acc = __ste_client_name2;
	return retValue_acc;
	Node_88_2468:;
	__cil_tmp3 = (void*)(0);
	retValue_acc = (char*)(__cil_tmp3);
	return retValue_acc;
}
void setClientName(signed int handle, char* value) {
	if (!((handle == 1))) goto Node_89_2485;
	__ste_client_name0 = value;
	goto Node_89_2492;
	Node_89_2485:;
	if (!((handle == 2))) goto Node_89_2488;
	__ste_client_name1 = value;
	goto Node_89_2491;
	Node_89_2488:;
	if (!((handle == 3))) goto Node_89_2490;
	__ste_client_name2 = value;
	Node_89_2490:;
	Node_89_2491:;
	Node_89_2492:;
	goto Node_89_2494;
	Node_89_2494:;
	// End of Function
}
signed int getClientOutbuffer(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_90_2502;
	retValue_acc = __ste_client_outbuffer0;
	return retValue_acc;
	Node_90_2502:;
	if (!((handle == 2))) goto Node_90_2508;
	retValue_acc = __ste_client_outbuffer1;
	return retValue_acc;
	Node_90_2508:;
	if (!((handle == 3))) goto Node_90_2514;
	retValue_acc = __ste_client_outbuffer2;
	return retValue_acc;
	Node_90_2514:;
	retValue_acc = 0;
	return retValue_acc;
}
void setClientKeyringPublicKey(signed int handle, signed int index, signed int value) {
	if (!((handle == 1))) goto Node_91_2534;
	if (!((index == 0))) goto Node_91_2529;
	__ste_Client_Keyring0_PublicKey0 = value;
	goto Node_91_2532;
	Node_91_2529:;
	if (!((index == 1))) goto Node_91_2531;
	__ste_Client_Keyring0_PublicKey1 = value;
	Node_91_2531:;
	Node_91_2532:;
	goto Node_91_2553;
	Node_91_2534:;
	if (!((handle == 2))) goto Node_91_2543;
	if (!((index == 0))) goto Node_91_2538;
	__ste_Client_Keyring1_PublicKey0 = value;
	goto Node_91_2541;
	Node_91_2538:;
	if (!((index == 1))) goto Node_91_2540;
	__ste_Client_Keyring1_PublicKey1 = value;
	Node_91_2540:;
	Node_91_2541:;
	goto Node_91_2552;
	Node_91_2543:;
	if (!((handle == 3))) goto Node_91_2551;
	if (!((index == 0))) goto Node_91_2547;
	__ste_Client_Keyring2_PublicKey0 = value;
	goto Node_91_2550;
	Node_91_2547:;
	if (!((index == 1))) goto Node_91_2549;
	__ste_Client_Keyring2_PublicKey1 = value;
	Node_91_2549:;
	Node_91_2550:;
	Node_91_2551:;
	Node_91_2552:;
	Node_91_2553:;
	goto Node_91_2555;
	Node_91_2555:;
	// End of Function
}
void setClientForwardReceiver(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_92_2559;
	__ste_client_forwardReceiver0 = value;
	goto Node_92_2566;
	Node_92_2559:;
	if (!((handle == 2))) goto Node_92_2562;
	__ste_client_forwardReceiver1 = value;
	goto Node_92_2565;
	Node_92_2562:;
	if (!((handle == 3))) goto Node_92_2564;
	__ste_client_forwardReceiver2 = value;
	Node_92_2564:;
	Node_92_2565:;
	Node_92_2566:;
	goto Node_92_2568;
	Node_92_2568:;
	// End of Function
}
signed int getEmailTo(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_93_2576;
	retValue_acc = __ste_email_to0;
	return retValue_acc;
	Node_93_2576:;
	if (!((handle == 2))) goto Node_93_2582;
	retValue_acc = __ste_email_to1;
	return retValue_acc;
	Node_93_2582:;
	retValue_acc = 0;
	return retValue_acc;
}
void chuckKeyAddRjh() {
__iv__current_func_call = 186;	createClientKeyringEntry(chuck);
__iv__current_func_call = 187;	setClientKeyringUser(chuck, 0, 2);
__iv__current_func_call = 188;	setClientKeyringPublicKey(chuck, 0, 456);
	goto Node_94_2596;
	Node_94_2596:;
	// End of Function
}
void rjhEnableForwarding() {
__iv__current_func_call = 189;	setClientForwardReceiver(rjh, chuck);
	goto Node_95_2599;
	Node_95_2599:;
	// End of Function
}
void incoming__before__AutoResponder(signed int client, signed int msg) {
__iv__current_func_call = 190;	deliver(client, msg);
	goto Node_96_2602;
	Node_96_2602:;
	// End of Function
}
void setClientId(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_97_2606;
	__ste_client_idCounter0 = value;
	goto Node_97_2613;
	Node_97_2606:;
	if (!((handle == 2))) goto Node_97_2609;
	__ste_client_idCounter1 = value;
	goto Node_97_2612;
	Node_97_2609:;
	if (!((handle == 3))) goto Node_97_2611;
	__ste_client_idCounter2 = value;
	Node_97_2611:;
	Node_97_2612:;
	Node_97_2613:;
	goto Node_97_2615;
	Node_97_2615:;
	// End of Function
}
void rjhKeyChange() {
__iv__current_func_call = 191;	generateKeyPair(rjh, 666);
	goto Node_98_2618;
	Node_98_2618:;
	// End of Function
}
void bobSetAddressBook() {
__iv__current_func_call = 192;	setClientAddressBookSize(bob, 1);
__iv__current_func_call = 193;	setClientAddressBookAlias(bob, 0, rjh);
__iv__current_func_call = 194;	setClientAddressBookAddress(bob, 0, rjh);
__iv__current_func_call = 195;	setClientAddressBookAddress(bob, 1, chuck);
	goto Node_99_2624;
	Node_99_2624:;
	// End of Function
}
void chuckKeyAdd() {
__iv__current_func_call = 196;	createClientKeyringEntry(chuck);
__iv__current_func_call = 197;	setClientKeyringUser(chuck, 0, 1);
__iv__current_func_call = 198;	setClientKeyringPublicKey(chuck, 0, 123);
	goto Node_100_2629;
	Node_100_2629:;
	// End of Function
}
signed int findClientAddressBookAlias(signed int handle, signed int userid) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_101_2658;
	if (!((userid == __ste_Client_AddressBook0_Alias0))) goto Node_101_2638;
	retValue_acc = 0;
	return retValue_acc;
	Node_101_2638:;
	if (!((userid == __ste_Client_AddressBook0_Alias1))) goto Node_101_2644;
	retValue_acc = 1;
	return retValue_acc;
	Node_101_2644:;
	if (!((userid == __ste_Client_AddressBook0_Alias2))) goto Node_101_2650;
	retValue_acc = 2;
	return retValue_acc;
	Node_101_2650:;
	retValue_acc = -1;
	return retValue_acc;
	Node_101_2658:;
	if (!((handle == 2))) goto Node_101_2685;
	if (!((userid == __ste_Client_AddressBook1_Alias0))) goto Node_101_2665;
	retValue_acc = 0;
	return retValue_acc;
	Node_101_2665:;
	if (!((userid == __ste_Client_AddressBook1_Alias1))) goto Node_101_2671;
	retValue_acc = 1;
	return retValue_acc;
	Node_101_2671:;
	if (!((userid == __ste_Client_AddressBook1_Alias2))) goto Node_101_2677;
	retValue_acc = 2;
	return retValue_acc;
	Node_101_2677:;
	retValue_acc = -1;
	return retValue_acc;
	Node_101_2685:;
	if (!((handle == 3))) goto Node_101_2712;
	if (!((userid == __ste_Client_AddressBook2_Alias0))) goto Node_101_2692;
	retValue_acc = 0;
	return retValue_acc;
	Node_101_2692:;
	if (!((userid == __ste_Client_AddressBook2_Alias1))) goto Node_101_2698;
	retValue_acc = 1;
	return retValue_acc;
	Node_101_2698:;
	if (!((userid == __ste_Client_AddressBook2_Alias2))) goto Node_101_2704;
	retValue_acc = 2;
	return retValue_acc;
	Node_101_2704:;
	retValue_acc = -1;
	return retValue_acc;
	Node_101_2712:;
	retValue_acc = -1;
	return retValue_acc;
}
char* getEmailSubject(signed int handle) {
	char *retValue_acc;
	void *__cil_tmp3;
	if (!((handle == 1))) goto Node_102_2732;
	retValue_acc = __ste_email_subject0;
	return retValue_acc;
	Node_102_2732:;
	if (!((handle == 2))) goto Node_102_2739;
	retValue_acc = __ste_email_subject1;
	return retValue_acc;
	Node_102_2739:;
	__cil_tmp3 = (void*)(0);
	retValue_acc = (char*)(__cil_tmp3);
	return retValue_acc;
}
void setEmailIsSigned(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_103_2755;
	__ste_email_isSigned0 = value;
	goto Node_103_2758;
	Node_103_2755:;
	if (!((handle == 2))) goto Node_103_2757;
	__ste_email_isSigned1 = value;
	Node_103_2757:;
	Node_103_2758:;
	goto Node_103_2760;
	Node_103_2760:;
	// End of Function
}
void setEmailBody(signed int handle, char* value) {
	if (!((handle == 1))) goto Node_104_2764;
	__ste_email_body0 = value;
	goto Node_104_2767;
	Node_104_2764:;
	if (!((handle == 2))) goto Node_104_2766;
	__ste_email_body1 = value;
	Node_104_2766:;
	Node_104_2767:;
	goto Node_104_2769;
	Node_104_2769:;
	// End of Function
}
void setEmailIsSignatureVerified(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_105_2773;
	__ste_email_isSignatureVerified0 = value;
	goto Node_105_2776;
	Node_105_2773:;
	if (!((handle == 2))) goto Node_105_2775;
	__ste_email_isSignatureVerified1 = value;
	Node_105_2775:;
	Node_105_2776:;
	goto Node_105_2778;
	Node_105_2778:;
	// End of Function
}
void setup_rjh(signed int rjh___0) {
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_106_2783;
__iv__current_func_call = 199;	setup_rjh__role__Keys(rjh___0);
	goto Node_106_2786;
	Node_106_2783:;
__iv__current_func_call = 200;	setup_rjh__before__Keys(rjh___0);
	goto Node_106_2786;
	Node_106_2786:;
	// End of Function
}
void setClientKeyringSize(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_107_2790;
	__ste_ClientKeyring_size0 = value;
	goto Node_107_2797;
	Node_107_2790:;
	if (!((handle == 2))) goto Node_107_2793;
	__ste_ClientKeyring_size1 = value;
	goto Node_107_2796;
	Node_107_2793:;
	if (!((handle == 3))) goto Node_107_2795;
	__ste_ClientKeyring_size2 = value;
	Node_107_2795:;
	Node_107_2796:;
	Node_107_2797:;
	goto Node_107_2799;
	Node_107_2799:;
	// End of Function
}
void printMail(signed int msg) {
	if (!((__SELECTED_FEATURE_Verify != 0))) goto Node_108_2804;
__iv__current_func_call = 201;	printMail__role__Verify(msg);
	goto Node_108_2807;
	Node_108_2804:;
__iv__current_func_call = 202;	printMail__before__Verify(msg);
	goto Node_108_2807;
	Node_108_2807:;
	// End of Function
}
void printMail__before__Verify(signed int msg) {
	if (!((__SELECTED_FEATURE_Sign != 0))) goto Node_109_2812;
__iv__current_func_call = 203;	printMail__role__Sign(msg);
	goto Node_109_2815;
	Node_109_2812:;
__iv__current_func_call = 204;	printMail__before__Sign(msg);
	goto Node_109_2815;
	Node_109_2815:;
	// End of Function
}
void bobKeyChange() {
__iv__current_func_call = 205;	generateKeyPair(bob, 777);
	goto Node_110_2818;
	Node_110_2818:;
	// End of Function
}
void incoming__before__Forward(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_AutoResponder != 0))) goto Node_111_2823;
__iv__current_func_call = 206;	incoming__role__AutoResponder(client, msg);
	goto Node_111_2826;
	Node_111_2823:;
__iv__current_func_call = 207;	incoming__before__AutoResponder(client, msg);
	goto Node_111_2826;
	Node_111_2826:;
	// End of Function
}
void incoming__before__Verify(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_Forward != 0))) goto Node_112_2831;
__iv__current_func_call = 208;	incoming__role__Forward(client, msg);
	goto Node_112_2834;
	Node_112_2831:;
__iv__current_func_call = 209;	incoming__before__Forward(client, msg);
	goto Node_112_2834;
	Node_112_2834:;
	// End of Function
}
signed int isVerified(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_113_2842;
	retValue_acc = __ste_email_isSignatureVerified0;
	return retValue_acc;
	Node_113_2842:;
	if (!((handle == 2))) goto Node_113_2848;
	retValue_acc = __ste_email_isSignatureVerified1;
	return retValue_acc;
	Node_113_2848:;
	retValue_acc = 0;
	return retValue_acc;
}
void __utac_acc__VerifyForward_spec__1(signed int client, signed int msg) {
	signed int pubkey;
	signed int tmp;
	signed int tmp___1;
	puts("before deliver\n");
__iv__current_func_call = 211;	tmp___1 = isVerified(msg);
	if (!((tmp___1 != 0))) goto Node_114_2871;
__iv__current_func_call = 212;	tmp = getEmailFrom(msg);
__iv__current_func_call = 213;	pubkey = findPublicKey(client, tmp);
	if (!((pubkey == 0))) goto Node_114_2870;
__iv__current_func_call = 214;	__automaton_fail();
	Node_114_2870:;
	Node_114_2871:;
	goto Node_114_2877;
	Node_114_2877:;
	// End of Function
}
void generateKeyPair(signed int client, signed int seed) {
__iv__current_func_call = 215;	setClientPrivateKey(client, seed);
	goto Node_115_2880;
	Node_115_2880:;
	// End of Function
}
void setEmailId(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_116_2884;
	__ste_email_id0 = value;
	goto Node_116_2887;
	Node_116_2884:;
	if (!((handle == 2))) goto Node_116_2886;
	__ste_email_id1 = value;
	Node_116_2886:;
	Node_116_2887:;
	goto Node_116_2889;
	Node_116_2889:;
	// End of Function
}
void setEmailFrom(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_117_2893;
	__ste_email_from0 = value;
	goto Node_117_2896;
	Node_117_2893:;
	if (!((handle == 2))) goto Node_117_2895;
	__ste_email_from1 = value;
	Node_117_2895:;
	Node_117_2896:;
	goto Node_117_2898;
	Node_117_2898:;
	// End of Function
}
void setEmailSubject(signed int handle, char* value) {
	if (!((handle == 1))) goto Node_118_2902;
	__ste_email_subject0 = value;
	goto Node_118_2905;
	Node_118_2902:;
	if (!((handle == 2))) goto Node_118_2904;
	__ste_email_subject1 = value;
	Node_118_2904:;
	Node_118_2905:;
	goto Node_118_2907;
	Node_118_2907:;
	// End of Function
}
char* getEmailBody(signed int handle) {
	char *retValue_acc;
	void *__cil_tmp3;
	if (!((handle == 1))) goto Node_119_2917;
	retValue_acc = __ste_email_body0;
	return retValue_acc;
	Node_119_2917:;
	if (!((handle == 2))) goto Node_119_2924;
	retValue_acc = __ste_email_body1;
	return retValue_acc;
	Node_119_2924:;
	__cil_tmp3 = (void*)(0);
	retValue_acc = (char*)(__cil_tmp3);
	return retValue_acc;
}
void setup_bob(signed int bob___0) {
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_120_2941;
__iv__current_func_call = 216;	setup_bob__role__Keys(bob___0);
	goto Node_120_2944;
	Node_120_2941:;
__iv__current_func_call = 217;	setup_bob__before__Keys(bob___0);
	goto Node_120_2944;
	Node_120_2944:;
	// End of Function
}
signed int isEncrypted(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_121_2952;
	retValue_acc = __ste_email_isEncrypted0;
	return retValue_acc;
	Node_121_2952:;
	if (!((handle == 2))) goto Node_121_2958;
	retValue_acc = __ste_email_isEncrypted1;
	return retValue_acc;
	Node_121_2958:;
	retValue_acc = 0;
	return retValue_acc;
}
void setEmailIsEncrypted(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_122_2971;
	__ste_email_isEncrypted0 = value;
	goto Node_122_2974;
	Node_122_2971:;
	if (!((handle == 2))) goto Node_122_2973;
	__ste_email_isEncrypted1 = value;
	Node_122_2973:;
	Node_122_2974:;
	goto Node_122_2976;
	Node_122_2976:;
	// End of Function
}
void setup_chuck(signed int chuck___0) {
	if (!((__SELECTED_FEATURE_Keys != 0))) goto Node_123_2981;
__iv__current_func_call = 218;	setup_chuck__role__Keys(chuck___0);
	goto Node_123_2984;
	Node_123_2981:;
__iv__current_func_call = 219;	setup_chuck__before__Keys(chuck___0);
	goto Node_123_2984;
	Node_123_2984:;
	// End of Function
}
signed int getEmailEncryptionKey(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_124_2992;
	retValue_acc = __ste_email_encryptionKey0;
	return retValue_acc;
	Node_124_2992:;
	if (!((handle == 2))) goto Node_124_2998;
	retValue_acc = __ste_email_encryptionKey1;
	return retValue_acc;
	Node_124_2998:;
	retValue_acc = 0;
	return retValue_acc;
}
void setEmailEncryptionKey(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_125_3011;
	__ste_email_encryptionKey0 = value;
	goto Node_125_3014;
	Node_125_3011:;
	if (!((handle == 2))) goto Node_125_3013;
	__ste_email_encryptionKey1 = value;
	Node_125_3013:;
	Node_125_3014:;
	goto Node_125_3016;
	Node_125_3016:;
	// End of Function
}
void bobKeyAddChuck() {
__iv__current_func_call = 220;	createClientKeyringEntry(bob);
__iv__current_func_call = 221;	setClientKeyringUser(bob, 1, 3);
__iv__current_func_call = 222;	setClientKeyringPublicKey(bob, 1, 789);
	goto Node_126_3021;
	Node_126_3021:;
	// End of Function
}
signed int isSigned(signed int handle) {
	signed int retValue_acc;
	if (!((handle == 1))) goto Node_127_3029;
	retValue_acc = __ste_email_isSigned0;
	return retValue_acc;
	Node_127_3029:;
	if (!((handle == 2))) goto Node_127_3035;
	retValue_acc = __ste_email_isSigned1;
	return retValue_acc;
	Node_127_3035:;
	retValue_acc = 0;
	return retValue_acc;
}
void setup_bob__before__Keys(signed int bob___0) {
__iv__current_func_call = 223;	setClientId(bob___0, bob___0);
	goto Node_128_3047;
	Node_128_3047:;
	// End of Function
}
void setEmailSignKey(signed int handle, signed int value) {
	if (!((handle == 1))) goto Node_129_3051;
	__ste_email_signKey0 = value;
	goto Node_129_3054;
	Node_129_3051:;
	if (!((handle == 2))) goto Node_129_3053;
	__ste_email_signKey1 = value;
	Node_129_3053:;
	Node_129_3054:;
	goto Node_129_3056;
	Node_129_3056:;
	// End of Function
}
void queue(signed int client, signed int msg) {
	queue_empty = 0;
	queued_message = msg;
	queued_client = client;
	goto Node_130_3061;
	Node_130_3061:;
	// End of Function
}
void outgoing(signed int client, signed int msg) {
	if (!((__SELECTED_FEATURE_Sign != 0))) goto Node_131_3066;
__iv__current_func_call = 224;	outgoing__role__Sign(client, msg);
	goto Node_131_3069;
	Node_131_3066:;
__iv__current_func_call = 225;	outgoing__before__Sign(client, msg);
	goto Node_131_3069;
	Node_131_3069:;
	// End of Function
}
void sendToAddressBook(signed int client, signed int msg) {
	goto Node_132_3071;
	Node_132_3071:;
	// End of Function
}
void select_features() {
__iv__current_func_call = 226;	__SELECTED_FEATURE_Base = select_one();
__iv__current_func_call = 227;	__SELECTED_FEATURE_Keys = select_one();
__iv__current_func_call = 228;	__SELECTED_FEATURE_Encrypt = select_one();
__iv__current_func_call = 229;	__SELECTED_FEATURE_AutoResponder = select_one();
__iv__current_func_call = 230;	__SELECTED_FEATURE_AddressBook = select_one();
__iv__current_func_call = 231;	__SELECTED_FEATURE_Sign = select_one();
__iv__current_func_call = 232;	__SELECTED_FEATURE_Forward = select_one();
	__SELECTED_FEATURE_Verify = 1;
__iv__current_func_call = 233;	__SELECTED_FEATURE_Decrypt = select_one();
	goto Node_133_3082;
	Node_133_3082:;
	// End of Function
}
void forward(signed int client, signed int msg) {
	puts("Forwarding message.\n");
__iv__current_func_call = 235;	printMail(msg);
__iv__current_func_call = 236;	queue(client, msg);
	goto Node_134_3087;
	Node_134_3087:;
	// End of Function
}
