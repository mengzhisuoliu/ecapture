#ifndef ECAPTURE_GNUTLS_3_7_3_KERN_H
#define ECAPTURE_GNUTLS_3_7_3_KERN_H

// version 3.7.3, 3.7.4, 3.7.5, 3.7.6

// gnutls_session_int->security_parameters
#define GNUTLS_SESSION_INT_SECURITY_PARAMETERS 0x0

// gnutls_session_int->security_parameters.prf
#define GNUTLS_SESSION_INT_SECURITY_PARAMETERS_PRF 0x18

// mac_entry_st->id
#define MAC_ENTRY_ST_ID 0x18

// gnutls_session_int->security_parameters.client_random
#define GNUTLS_SESSION_INT_SECURITY_PARAMETERS_CLIENT_RANDOM 0x50

// gnutls_session_int->security_parameters.master_secret
#define GNUTLS_SESSION_INT_SECURITY_PARAMETERS_MASTER_SECRET 0x20

// gnutls_session_int->key.proto.tls13.e_ckey
#define GNUTLS_SESSION_INT_KEY_PROTO_TLS13_E_CKEY 0x17cc

// gnutls_session_int->key.proto.tls13.hs_ckey
#define GNUTLS_SESSION_INT_KEY_PROTO_TLS13_HS_CKEY 0x180c

// gnutls_session_int->key.proto.tls13.hs_skey
#define GNUTLS_SESSION_INT_KEY_PROTO_TLS13_HS_SKEY 0x184c

// gnutls_session_int->key.proto.tls13.ap_ckey
#define GNUTLS_SESSION_INT_KEY_PROTO_TLS13_AP_CKEY 0x188c

// gnutls_session_int->key.proto.tls13.ap_skey
#define GNUTLS_SESSION_INT_KEY_PROTO_TLS13_AP_SKEY 0x18cc

// gnutls_session_int->key.proto.tls13.ap_expkey
#define GNUTLS_SESSION_INT_KEY_PROTO_TLS13_AP_EXPKEY 0x190c

// security_parameters_st->pversion
#define SECURITY_PARAMETERS_ST_PVERSION 0xf8

// version_entry_st->id
#define VERSION_ENTRY_ST_ID 0x8


#include "gnutls.h"
#include "gnutls_masterkey.h"

#endif
