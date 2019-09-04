/* ====================================================================
 * Copyright (c) 2003 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.openssl.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@openssl.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.openssl.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#include <openssl/opensslconf.h>
#include <openssl/dsa.h>
#include <openssl/evp.h>
#include <openssl/bn.h>

#ifndef OPENSSL_FIPS
# error FIPS is disabled.
#endif

#ifdef OPENSSL_FIPS

# ifdef  __cplusplus
extern "C" {
# endif

    int FIPS_selftest(void);
    int FIPS_selftest_failed(void);
    int FIPS_selftest_drbg_all(void);

    int FIPS_dsa_builtin_paramgen2(DSA *ret, size_t L, size_t N,
                               const EVP_MD *evpmd, const unsigned char *seed_in,
                               size_t seed_len, int idx, unsigned char *seed_out,
                               int *counter_ret, unsigned long *h_ret,
                               BN_GENCB *cb);
    int FIPS_dsa_paramgen_check_g(DSA *dsa);

/* BEGIN ERROR CODES */
/* The following lines are auto generated by the script mkerr.pl. Any changes
 * made after this point may be overwritten when the script is next run.
 */
    int ERR_load_FIPS_strings(void);

/* Error codes for the FIPS functions. */

/* Function codes. */
# define FIPS_F_DH_BUILTIN_GENPARAMS                      100
# define FIPS_F_DRBG_RESEED                               121
# define FIPS_F_DSA_BUILTIN_PARAMGEN2                     107
# define FIPS_F_DSA_DO_SIGN                               102
# define FIPS_F_DSA_DO_VERIFY                             103
# define FIPS_F_EVP_CIPHER_CTX_NEW                        137
# define FIPS_F_EVP_CIPHER_CTX_RESET                      122
# define FIPS_F_ECDH_COMPUTE_KEY                          123
# define FIPS_F_EVP_CIPHERINIT_EX                         124
# define FIPS_F_EVP_DIGESTINIT_EX                         125
# define FIPS_F_FIPS_CHECK_DSA                            104
# define FIPS_F_FIPS_CHECK_EC                             142
# define FIPS_F_FIPS_CHECK_RSA                            106
# define FIPS_F_FIPS_DRBG_BYTES                           131
# define FIPS_F_FIPS_DRBG_CHECK                           146
# define FIPS_F_FIPS_DRBG_CPRNG_TEST                      132
# define FIPS_F_FIPS_DRBG_ERROR_CHECK                     136
# define FIPS_F_FIPS_DRBG_GENERATE                        134
# define FIPS_F_FIPS_DRBG_INIT                            135
# define FIPS_F_FIPS_DRBG_INSTANTIATE                     138
# define FIPS_F_FIPS_DRBG_NEW                             139
# define FIPS_F_FIPS_DRBG_RESEED                          140
# define FIPS_F_FIPS_DRBG_SINGLE_KAT                      141
# define FIPS_F_FIPS_GET_ENTROPY                          147
# define FIPS_F_FIPS_MODULE_MODE_SET                      108
# define FIPS_F_FIPS_PKEY_SIGNATURE_TEST                  109
# define FIPS_F_FIPS_RAND_BYTES                           114
# define FIPS_F_FIPS_RAND_SEED                            128
# define FIPS_F_FIPS_RAND_SET_METHOD                      126
# define FIPS_F_FIPS_RAND_STATUS                          127
# define FIPS_F_FIPS_RSA_BUILTIN_KEYGEN                   101
# define FIPS_F_FIPS_SELFTEST                             150
# define FIPS_F_FIPS_SELFTEST_AES                         110
# define FIPS_F_FIPS_SELFTEST_AES_CCM                     145
# define FIPS_F_FIPS_SELFTEST_AES_GCM                     129
# define FIPS_F_FIPS_SELFTEST_AES_XTS                     144
# define FIPS_F_FIPS_SELFTEST_CMAC                        130
# define FIPS_F_FIPS_SELFTEST_DES                         111
# define FIPS_F_FIPS_SELFTEST_DSA                         112
# define FIPS_F_FIPS_SELFTEST_ECDSA                       133
# define FIPS_F_FIPS_SELFTEST_HMAC                        113
# define FIPS_F_FIPS_SELFTEST_SHA1                        115
# define FIPS_F_FIPS_SELFTEST_SHA2                        105
# define FIPS_F_OSSL_ECDSA_SIGN_SIG                       143
# define FIPS_F_OSSL_ECDSA_VERIFY_SIG                     148
# define FIPS_F_RSA_BUILTIN_KEYGEN                        116
# define FIPS_F_RSA_OSSL_INIT                             149
# define FIPS_F_RSA_OSSL_PRIVATE_DECRYPT                  117
# define FIPS_F_RSA_OSSL_PRIVATE_ENCRYPT                  118
# define FIPS_F_RSA_OSSL_PUBLIC_DECRYPT                   119
# define FIPS_F_RSA_OSSL_PUBLIC_ENCRYPT                   120

/* Reason codes. */
# define FIPS_R_ADDITIONAL_INPUT_ERROR_UNDETECTED         150
# define FIPS_R_ADDITIONAL_INPUT_TOO_LONG                 125
# define FIPS_R_ALREADY_INSTANTIATED                      134
# define FIPS_R_DRBG_NOT_INITIALISED                      152
# define FIPS_R_DRBG_STUCK                                103
# define FIPS_R_ENTROPY_ERROR_UNDETECTED                  104
# define FIPS_R_ENTROPY_NOT_REQUESTED_FOR_RESEED          105
# define FIPS_R_ENTROPY_SOURCE_STUCK                      142
# define FIPS_R_ERROR_INITIALISING_DRBG                   115
# define FIPS_R_ERROR_INSTANTIATING_DRBG                  127
# define FIPS_R_ERROR_RETRIEVING_ADDITIONAL_INPUT         124
# define FIPS_R_ERROR_RETRIEVING_ENTROPY                  122
# define FIPS_R_ERROR_RETRIEVING_NONCE                    140
# define FIPS_R_FINGERPRINT_DOES_NOT_MATCH                110
# define FIPS_R_FIPS_MODE_ALREADY_SET                     102
# define FIPS_R_FIPS_SELFTEST_FAILED                      106
# define FIPS_R_FUNCTION_ERROR                            116
# define FIPS_R_GENERATE_ERROR                            137
# define FIPS_R_GENERATE_ERROR_UNDETECTED                 118
# define FIPS_R_INSTANTIATE_ERROR                         119
# define FIPS_R_INTERNAL_ERROR                            121
# define FIPS_R_INVALID_KEY_LENGTH                        109
# define FIPS_R_IN_ERROR_STATE                            123
# define FIPS_R_KEY_TOO_SHORT                             108
# define FIPS_R_NONCE_ERROR_UNDETECTED                    149
# define FIPS_R_NON_FIPS_METHOD                           100
# define FIPS_R_NOPR_TEST1_FAILURE                        145
# define FIPS_R_NOPR_TEST2_FAILURE                        146
# define FIPS_R_NOT_INSTANTIATED                          126
# define FIPS_R_PAIRWISE_TEST_FAILED                      107
# define FIPS_R_PERSONALISATION_ERROR_UNDETECTED          128
# define FIPS_R_PERSONALISATION_STRING_TOO_LONG           129
# define FIPS_R_PR_TEST1_FAILURE                          147
# define FIPS_R_PR_TEST2_FAILURE                          148
# define FIPS_R_REQUEST_LENGTH_ERROR_UNDETECTED           130
# define FIPS_R_REQUEST_TOO_LARGE_FOR_DRBG                131
# define FIPS_R_RESEED_COUNTER_ERROR                      132
# define FIPS_R_RESEED_ERROR                              133
# define FIPS_R_SELFTEST_FAILED                           101
# define FIPS_R_SELFTEST_FAILURE                          135
# define FIPS_R_TEST_FAILURE                              117
# define FIPS_R_UNINSTANTIATE_ERROR                       141
# define FIPS_R_UNINSTANTIATE_ZEROISE_ERROR               138
# define FIPS_R_UNSUPPORTED_DRBG_TYPE                     139
# define FIPS_R_UNSUPPORTED_PLATFORM                      113

# ifdef  __cplusplus
}
# endif
#endif
