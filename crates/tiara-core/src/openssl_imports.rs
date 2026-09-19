//! The cryptography the program binds at run time.
//!
//! None of it is compiled in. The program looks up 556 entry points by name when
//! it starts, and what it asks for says exactly which library it expects and
//! what it can do.
//!
//! The vintage is settled by what is asked for and what is not. It asks for
//! `SSL_library_init` and `SSLeay_version`, which a later library does not have;
//! it does not ask for `OPENSSL_init_ssl`, `TLS_method` or `OpenSSL_version`,
//! which a later one does. So this is bound against the older line of the
//! library, and that fixes what follows.
//!
//! What follows is that it offers protocols nobody should still be offering.
//! Among the 18 ways of starting a connection are three for **SSL version two**
//! — a protocol broken for decades and removed outright from the later library
//! — and three more for version three. The newest it can speak is TLS 1.2;
//! there is nothing here for 1.3.

/// How many entry points are looked up.
pub const IMPORT_COUNT: usize = 556;

/// Every entry point the program looks up, in name order.
pub const IMPORTS: [&str; 556] = [
    "ASN1_INTEGER_get",
    "ASN1_INTEGER_set",
    "ASN1_INTEGER_to_BN",
    "ASN1_STRING_free",
    "ASN1_STRING_type_new",
    "ASN1_dup",
    "BIO_ctrl",
    "BIO_f_base64",
    "BIO_f_cipher",
    "BIO_f_md",
    "BIO_f_reliable",
    "BIO_free",
    "BIO_get_ex_data",
    "BIO_int_ctrl",
    "BIO_new",
    "BIO_new_file",
    "BIO_new_mem_buf",
    "BIO_ptr_ctrl",
    "BIO_puts",
    "BIO_read",
    "BIO_s_file",
    "BIO_s_mem",
    "BIO_set_cipher",
    "BIO_set_ex_data",
    "BIO_write",
    "BN_bn2dec",
    "BN_bn2hex",
    "BN_free",
    "BN_hex2bn",
    "BN_new",
    "BN_set_word",
    "CRYPTO_cleanup_all_ex_data",
    "CRYPTO_free",
    "CRYPTO_lock",
    "CRYPTO_malloc",
    "CRYPTO_mem_ctrl",
    "CRYPTO_mem_leaks",
    "CRYPTO_num_locks",
    "CRYPTO_set_locking_callback",
    "CRYPTO_set_mem_debug_functions",
    "CRYPTO_set_mem_functions",
    "DES_ecb_encrypt",
    "DES_set_key",
    "DES_set_odd_parity",
    "DH_free",
    "DTLSv1_client_method",
    "DTLSv1_method",
    "DTLSv1_server_method",
    "ERR_clear_error",
    "ERR_error_string",
    "ERR_error_string_n",
    "ERR_free_strings",
    "ERR_func_error_string",
    "ERR_get_error",
    "ERR_lib_error_string",
    "ERR_load_CRYPTO_strings",
    "ERR_load_ERR_strings",
    "ERR_peek_error",
    "ERR_peek_last_error",
    "ERR_put_error",
    "ERR_reason_error_string",
    "ERR_remove_state",
    "ERR_remove_thread_state",
    "EVP_CIPHER_CTX_block_size",
    "EVP_CIPHER_CTX_cipher",
    "EVP_CIPHER_CTX_cleanup",
    "EVP_CIPHER_CTX_copy",
    "EVP_CIPHER_CTX_ctrl",
    "EVP_CIPHER_CTX_flags",
    "EVP_CIPHER_CTX_free",
    "EVP_CIPHER_CTX_get_app_data",
    "EVP_CIPHER_CTX_init",
    "EVP_CIPHER_CTX_iv_length",
    "EVP_CIPHER_CTX_key_length",
    "EVP_CIPHER_CTX_new",
    "EVP_CIPHER_CTX_nid",
    "EVP_CIPHER_CTX_rand_key",
    "EVP_CIPHER_CTX_set_app_data",
    "EVP_CIPHER_CTX_set_key_length",
    "EVP_CIPHER_CTX_set_padding",
    "EVP_CIPHER_asn1_to_param",
    "EVP_CIPHER_block_size",
    "EVP_CIPHER_do_all",
    "EVP_CIPHER_do_all_sorted",
    "EVP_CIPHER_flags",
    "EVP_CIPHER_get_asn1_iv",
    "EVP_CIPHER_iv_length",
    "EVP_CIPHER_key_length",
    "EVP_CIPHER_nid",
    "EVP_CIPHER_param_to_asn1",
    "EVP_CIPHER_set_asn1_iv",
    "EVP_CIPHER_type",
    "EVP_CipherFinal",
    "EVP_CipherFinal_ex",
    "EVP_CipherInit",
    "EVP_CipherInit_ex",
    "EVP_CipherUpdate",
    "EVP_DecodeBlock",
    "EVP_DecodeFinal",
    "EVP_DecodeInit",
    "EVP_DecodeUpdate",
    "EVP_DecryptFinal",
    "EVP_DecryptFinal_ex",
    "EVP_DecryptInit",
    "EVP_DecryptInit_ex",
    "EVP_DecryptUpdate",
    "EVP_DigestFinal_ex",
    "EVP_DigestInit",
    "EVP_DigestInit_ex",
    "EVP_DigestSignFinal",
    "EVP_DigestSignInit",
    "EVP_DigestUpdate",
    "EVP_DigestVerifyFinal",
    "EVP_DigestVerifyInit",
    "EVP_EncodeBlock",
    "EVP_EncodeFinal",
    "EVP_EncodeInit",
    "EVP_EncodeUpdate",
    "EVP_EncryptFinal",
    "EVP_EncryptFinal_ex",
    "EVP_EncryptInit",
    "EVP_EncryptInit_ex",
    "EVP_EncryptUpdate",
    "EVP_MD_CTX_cleanup",
    "EVP_MD_CTX_init",
    "EVP_MD_CTX_md",
    "EVP_MD_block_size",
    "EVP_MD_do_all",
    "EVP_MD_do_all_sorted",
    "EVP_MD_flags",
    "EVP_MD_size",
    "EVP_MD_type",
    "EVP_OpenFinal",
    "EVP_OpenInit",
    "EVP_PBE_CipherInit",
    "EVP_PBE_alg_add",
    "EVP_PBE_alg_add_type",
    "EVP_PBE_cleanup",
    "EVP_PBE_find",
    "EVP_PKEY_CTX_ctrl",
    "EVP_PKEY_CTX_ctrl_str",
    "EVP_PKEY_CTX_dup",
    "EVP_PKEY_CTX_free",
    "EVP_PKEY_CTX_get0_peerkey",
    "EVP_PKEY_CTX_get0_pkey",
    "EVP_PKEY_CTX_get_app_data",
    "EVP_PKEY_CTX_get_cb",
    "EVP_PKEY_CTX_get_data",
    "EVP_PKEY_CTX_get_keygen_info",
    "EVP_PKEY_CTX_get_operation",
    "EVP_PKEY_CTX_new",
    "EVP_PKEY_CTX_new_id",
    "EVP_PKEY_CTX_set0_keygen_info",
    "EVP_PKEY_CTX_set_app_data",
    "EVP_PKEY_CTX_set_cb",
    "EVP_PKEY_CTX_set_data",
    "EVP_PKEY_asn1_add0",
    "EVP_PKEY_asn1_add_alias",
    "EVP_PKEY_asn1_copy",
    "EVP_PKEY_asn1_find",
    "EVP_PKEY_asn1_find_str",
    "EVP_PKEY_asn1_free",
    "EVP_PKEY_asn1_get0",
    "EVP_PKEY_asn1_get0_info",
    "EVP_PKEY_asn1_get_count",
    "EVP_PKEY_asn1_new",
    "EVP_PKEY_asn1_set_ctrl",
    "EVP_PKEY_asn1_set_free",
    "EVP_PKEY_asn1_set_param",
    "EVP_PKEY_asn1_set_private",
    "EVP_PKEY_asn1_set_public",
    "EVP_PKEY_assign",
    "EVP_PKEY_base_id",
    "EVP_PKEY_bits",
    "EVP_PKEY_cmp",
    "EVP_PKEY_cmp_parameters",
    "EVP_PKEY_copy_parameters",
    "EVP_PKEY_decrypt",
    "EVP_PKEY_decrypt_init",
    "EVP_PKEY_decrypt_old",
    "EVP_PKEY_derive",
    "EVP_PKEY_derive_init",
    "EVP_PKEY_derive_set_peer",
    "EVP_PKEY_encrypt",
    "EVP_PKEY_encrypt_init",
    "EVP_PKEY_encrypt_old",
    "EVP_PKEY_free",
    "EVP_PKEY_get0",
    "EVP_PKEY_get0_asn1",
    "EVP_PKEY_get1_DH",
    "EVP_PKEY_get1_DSA",
    "EVP_PKEY_get1_EC_KEY",
    "EVP_PKEY_get1_RSA",
    "EVP_PKEY_get_default_digest_nid",
    "EVP_PKEY_id",
    "EVP_PKEY_keygen",
    "EVP_PKEY_keygen_init",
    "EVP_PKEY_meth_add0",
    "EVP_PKEY_meth_copy",
    "EVP_PKEY_meth_find",
    "EVP_PKEY_meth_free",
    "EVP_PKEY_meth_get0_info",
    "EVP_PKEY_meth_new",
    "EVP_PKEY_meth_set_cleanup",
    "EVP_PKEY_meth_set_copy",
    "EVP_PKEY_meth_set_ctrl",
    "EVP_PKEY_meth_set_decrypt",
    "EVP_PKEY_meth_set_derive",
    "EVP_PKEY_meth_set_encrypt",
    "EVP_PKEY_meth_set_init",
    "EVP_PKEY_meth_set_keygen",
    "EVP_PKEY_meth_set_paramgen",
    "EVP_PKEY_meth_set_sign",
    "EVP_PKEY_meth_set_signctx",
    "EVP_PKEY_meth_set_verify",
    "EVP_PKEY_meth_set_verify_recover",
    "EVP_PKEY_meth_set_verifyctx",
    "EVP_PKEY_missing_parameters",
    "EVP_PKEY_new",
    "EVP_PKEY_new_mac_key",
    "EVP_PKEY_paramgen",
    "EVP_PKEY_paramgen_init",
    "EVP_PKEY_print_params",
    "EVP_PKEY_print_private",
    "EVP_PKEY_print_public",
    "EVP_PKEY_save_parameters",
    "EVP_PKEY_set1_DH",
    "EVP_PKEY_set1_DSA",
    "EVP_PKEY_set1_EC_KEY",
    "EVP_PKEY_set1_RSA",
    "EVP_PKEY_set_type",
    "EVP_PKEY_set_type_str",
    "EVP_PKEY_sign",
    "EVP_PKEY_sign_init",
    "EVP_PKEY_size",
    "EVP_PKEY_type",
    "EVP_PKEY_verify",
    "EVP_PKEY_verify_init",
    "EVP_PKEY_verify_recover",
    "EVP_PKEY_verify_recover_init",
    "EVP_SealFinal",
    "EVP_SealInit",
    "EVP_SignFinal",
    "EVP_VerifyFinal",
    "EVP_add_cipher",
    "EVP_add_digest",
    "EVP_aes_128_cbc",
    "EVP_aes_128_ccm",
    "EVP_aes_128_cfb1",
    "EVP_aes_128_cfb128",
    "EVP_aes_128_cfb8",
    "EVP_aes_128_ctr",
    "EVP_aes_128_ecb",
    "EVP_aes_128_gcm",
    "EVP_aes_128_ofb",
    "EVP_aes_128_xts",
    "EVP_aes_192_cbc",
    "EVP_aes_192_ccm",
    "EVP_aes_192_cfb1",
    "EVP_aes_192_cfb128",
    "EVP_aes_192_ctr",
    "EVP_aes_192_ecb",
    "EVP_aes_192_gcm",
    "EVP_aes_192_ofb",
    "EVP_aes_256_cbc",
    "EVP_aes_256_ccm",
    "EVP_aes_256_cfb1",
    "EVP_aes_256_cfb128",
    "EVP_aes_256_cfb8",
    "EVP_aes_256_ctr",
    "EVP_aes_256_ecb",
    "EVP_aes_256_gcm",
    "EVP_aes_256_ofb",
    "EVP_aes_256_xts",
    "EVP_bf_cbc",
    "EVP_bf_cfb64",
    "EVP_bf_ecb",
    "EVP_bf_ofb",
    "EVP_cast5_cbc",
    "EVP_cast5_cfb64",
    "EVP_cast5_ecb",
    "EVP_cast5_ofb",
    "EVP_cleanup",
    "EVP_des_cfb1",
    "EVP_des_cfb64",
    "EVP_des_cfb8",
    "EVP_des_ecb",
    "EVP_des_ede",
    "EVP_des_ede3",
    "EVP_des_ede3_cbc",
    "EVP_des_ede3_ecb",
    "EVP_des_ede_cfb64",
    "EVP_des_ede_ecb",
    "EVP_dss",
    "EVP_dss1",
    "EVP_ecdsa",
    "EVP_get_cipherbyname",
    "EVP_get_digestbyname",
    "EVP_idea_cbc",
    "EVP_idea_cfb64",
    "EVP_idea_ecb",
    "EVP_idea_ofb",
    "EVP_md4",
    "EVP_md5",
    "EVP_md_null",
    "EVP_mdc2",
    "EVP_rc2_40_cbc",
    "EVP_rc2_64_cbc",
    "EVP_rc2_cbc",
    "EVP_rc2_cfb64",
    "EVP_rc2_ecb",
    "EVP_rc2_ofb",
    "EVP_rc4",
    "EVP_rc4_40",
    "EVP_rc4_hmac_md5",
    "EVP_ripemd160",
    "EVP_seed_cbc",
    "EVP_seed_cfb128",
    "EVP_seed_ecb",
    "EVP_seed_ofb",
    "EVP_sha",
    "EVP_sha1",
    "EVP_sha224",
    "EVP_sha256",
    "EVP_sha384",
    "EVP_sha512",
    "EVP_whirlpool",
    "FIPS_mode",
    "FIPS_mode_set",
    "HMAC_CTX_cleanup",
    "HMAC_CTX_init",
    "HMAC_Final",
    "HMAC_Init_ex",
    "HMAC_Update",
    "OBJ_nid2ln",
    "OBJ_nid2obj",
    "OBJ_nid2sn",
    "OBJ_obj2nid",
    "OPENSSL_add_all_algorithms_noconf",
    "OpenSSL_add_all_algorithms",
    "OpenSSL_add_all_ciphers",
    "OpenSSL_add_all_digests",
    "PEM_X509_INFO_read_bio",
    "PEM_read_bio_DHparams",
    "PEM_read_bio_DSAPrivateKey",
    "PEM_read_bio_DSAparams",
    "PEM_read_bio_NETSCAPE_CERT_SEQUENCE",
    "PEM_read_bio_PKCS7",
    "PEM_read_bio_PrivateKey",
    "PEM_read_bio_RSAPrivateKey",
    "PEM_read_bio_RSAPublicKey",
    "PEM_read_bio_X509",
    "PEM_read_bio_X509_AUX",
    "PEM_read_bio_X509_CRL",
    "PEM_read_bio_X509_REQ",
    "PEM_write_bio_DHparams",
    "PEM_write_bio_DSAPrivateKey",
    "PEM_write_bio_DSAparams",
    "PEM_write_bio_NETSCAPE_CERT_SEQUENCE",
    "PEM_write_bio_PKCS7",
    "PEM_write_bio_PKCS8PrivateKey",
    "PEM_write_bio_PrivateKey",
    "PEM_write_bio_RSAPrivateKey",
    "PEM_write_bio_RSAPublicKey",
    "PEM_write_bio_X509",
    "PEM_write_bio_X509_CRL",
    "PEM_write_bio_X509_REQ",
    "PKCS12_create",
    "PKCS12_free",
    "PKCS12_parse",
    "PKCS5_PBE_add",
    "PKCS5_PBE_keyivgen",
    "PKCS5_PBKDF2_HMAC",
    "PKCS5_PBKDF2_HMAC_SHA1",
    "PKCS5_v2_PBE_keyivgen",
    "RAND_add",
    "RAND_bytes",
    "RAND_cleanup",
    "RAND_event",
    "RAND_pseudo_bytes",
    "RAND_screen",
    "RAND_seed",
    "RAND_status",
    "RSA_check_key",
    "RSA_free",
    "RSA_generate_key",
    "RSA_generate_key_ex",
    "RSA_new",
    "RSA_private_decrypt",
    "RSA_public_encrypt",
    "RSA_size",
    "SSL_CIPHER_description",
    "SSL_CIPHER_get_bits",
    "SSL_CIPHER_get_name",
    "SSL_CIPHER_get_version",
    "SSL_COMP_get_compression_methods",
    "SSL_CTX_callback_ctrl",
    "SSL_CTX_check_private_key",
    "SSL_CTX_ctrl",
    "SSL_CTX_free",
    "SSL_CTX_get_verify_depth",
    "SSL_CTX_load_verify_locations",
    "SSL_CTX_new",
    "SSL_CTX_set_cipher_list",
    "SSL_CTX_set_client_CA_list",
    "SSL_CTX_set_default_passwd_cb",
    "SSL_CTX_set_default_passwd_cb_userdata",
    "SSL_CTX_set_default_verify_paths",
    "SSL_CTX_set_session_id_context",
    "SSL_CTX_set_verify",
    "SSL_CTX_set_verify_depth",
    "SSL_CTX_use_PrivateKey",
    "SSL_CTX_use_PrivateKey_file",
    "SSL_CTX_use_certificate",
    "SSL_CTX_use_certificate_chain_file",
    "SSL_CTX_use_certificate_file",
    "SSL_SESSION_get_id",
    "SSL_accept",
    "SSL_alert_desc_string_long",
    "SSL_alert_type_string_long",
    "SSL_callback_ctrl",
    "SSL_connect",
    "SSL_copy_session_id",
    "SSL_ctrl",
    "SSL_free",
    "SSL_get_current_cipher",
    "SSL_get_error",
    "SSL_get_ex_data",
    "SSL_get_peer_certificate",
    "SSL_get_session",
    "SSL_library_init",
    "SSL_load_client_CA_file",
    "SSL_load_error_strings",
    "SSL_new",
    "SSL_peek",
    "SSL_pending",
    "SSL_read",
    "SSL_set_accept_state",
    "SSL_set_connect_state",
    "SSL_set_ex_data",
    "SSL_set_fd",
    "SSL_set_shutdown",
    "SSL_shutdown",
    "SSL_state_string_long",
    "SSL_write",
    "SSLeay",
    "SSLeay_version",
    "SSLv23_client_method",
    "SSLv23_method",
    "SSLv23_server_method",
    "SSLv2_client_method",
    "SSLv2_method",
    "SSLv2_server_method",
    "SSLv3_client_method",
    "SSLv3_method",
    "SSLv3_server_method",
    "TLSv1_1_client_method",
    "TLSv1_1_method",
    "TLSv1_1_server_method",
    "TLSv1_2_client_method",
    "TLSv1_2_method",
    "TLSv1_2_server_method",
    "TLSv1_client_method",
    "TLSv1_method",
    "TLSv1_server_method",
    "X509V3_EXT_conf_nid",
    "X509V3_set_ctx",
    "X509_EXTENSION_create_by_NID",
    "X509_EXTENSION_free",
    "X509_INFO_free",
    "X509_LOOKUP_ctrl",
    "X509_NAME_add_entry_by_txt",
    "X509_NAME_cmp",
    "X509_NAME_free",
    "X509_NAME_hash",
    "X509_NAME_new",
    "X509_NAME_oneline",
    "X509_PUBKEY_get",
    "X509_REQ_add_extensions",
    "X509_REQ_free",
    "X509_REQ_new",
    "X509_REQ_set_pubkey",
    "X509_REQ_sign",
    "X509_STORE_CTX_get_current_cert",
    "X509_STORE_CTX_get_error",
    "X509_STORE_CTX_get_error_depth",
    "X509_STORE_CTX_get_ex_data",
    "X509_STORE_CTX_set_error",
    "X509_STORE_add_cert",
    "X509_STORE_add_crl",
    "X509_STORE_add_lookup",
    "X509_STORE_load_locations",
    "X509_add_ext",
    "X509_digest",
    "X509_free",
    "X509_get_default_cert_file",
    "X509_get_default_cert_file_env",
    "X509_get_issuer_name",
    "X509_get_serialNumber",
    "X509_get_subject_name",
    "X509_gmtime_adj",
    "X509_new",
    "X509_print",
    "X509_set_issuer_name",
    "X509_set_notAfter",
    "X509_set_notBefore",
    "X509_set_pubkey",
    "X509_set_subject_name",
    "X509_set_version",
    "X509_sign",
    "X509_to_X509_REQ",
    "X509_verify",
    "_ossl_old_des_ecb_encrypt",
    "_ossl_old_des_set_key",
    "_ossl_old_des_set_odd_parity",
    "d2i_AutoPrivateKey",
    "d2i_DHparams",
    "d2i_DSAPrivateKey",
    "d2i_DSAparams",
    "d2i_PKCS12_bio",
    "d2i_PKCS7",
    "d2i_PrivateKey",
    "d2i_PrivateKey_bio",
    "d2i_PublicKey",
    "d2i_RSAPrivateKey",
    "d2i_RSAPublicKey",
    "d2i_X509",
    "d2i_X509_CRL",
    "d2i_X509_NAME",
    "d2i_X509_REQ",
    "d2i_X509_bio",
    "i2d_DHparams",
    "i2d_DSAPrivateKey",
    "i2d_DSAparams",
    "i2d_NETSCAPE_CERT_SEQUENCE",
    "i2d_PKCS7",
    "i2d_PrivateKey",
    "i2d_PrivateKey_bio",
    "i2d_PublicKey",
    "i2d_RSAPrivateKey",
    "i2d_RSAPublicKey",
    "i2d_X509",
    "i2d_X509_CRL",
    "i2d_X509_NAME",
    "i2d_X509_REQ",
    "i2d_X509_REQ_bio",
    "i2d_X509_bio",
    "sk_dup",
    "sk_find",
    "sk_free",
    "sk_new",
    "sk_new_null",
    "sk_num",
    "sk_pop_free",
    "sk_push",
    "sk_value",
];

/// The entry points looked up more than once.
///
/// Part of Ghidra function `FUN_00c99a40` at `0x00C99A40`.
///
/// Ten of them, bound twice over. Nothing is gained by the second lookup — the
/// name resolves to the same place — so these are the marks of a list that grew
/// by being added to rather than by being written.
pub const LOOKED_UP_TWICE: [&str; 10] = [
    "DES_ecb_encrypt",
    "DES_set_odd_parity",
    "EVP_PKEY_type",
    "EVP_des_cfb64",
    "HMAC_Final",
    "HMAC_Init_ex",
    "HMAC_Update",
    "_ossl_old_des_set_key",
    "d2i_PrivateKey",
    "i2d_NETSCAPE_CERT_SEQUENCE",
];

/// Every way of starting a connection that the program binds.
///
/// Part of Ghidra function `FUN_00c99a40` at `0x00C99A40`.
pub const PROTOCOL_METHODS: [&str; 18] = [
    "SSLv23_client_method",
    "SSLv23_method",
    "SSLv23_server_method",
    "SSLv2_client_method",
    "SSLv2_method",
    "SSLv2_server_method",
    "SSLv3_client_method",
    "SSLv3_method",
    "SSLv3_server_method",
    "TLSv1_1_client_method",
    "TLSv1_1_method",
    "TLSv1_1_server_method",
    "TLSv1_2_client_method",
    "TLSv1_2_method",
    "TLSv1_2_server_method",
    "TLSv1_client_method",
    "TLSv1_method",
    "TLSv1_server_method",
];

/// The names that say the library is of the older line.
///
/// Part of Ghidra function `FUN_00c99a40` at `0x00C99A40`.
pub const OLD_LIBRARY_MARKS: [&str; 3] = ["SSL_library_init", "SSLv23_method", "SSLeay_version"];

/// The names that would say it is of the newer one.
///
/// Part of Ghidra function `FUN_00c99a40` at `0x00C99A40`.
///
/// None of these is asked for, which is what makes the reading certain rather
/// than likely: the two sets do not overlap, so a binding that has all of one
/// and none of the other cannot be both.
pub const NEW_LIBRARY_MARKS: [&str; 3] = ["OPENSSL_init_ssl", "TLS_method", "OpenSSL_version"];

/// Implements part of Ghidra function `FUN_00c99a40` at `0x00C99A40`.
///
/// Whether the program asks for one entry point.
#[must_use]
pub fn binds(name: &str) -> bool {
    IMPORTS.binary_search(&name).is_ok()
}

/// Implements part of Ghidra function `FUN_00c99a40` at `0x00C99A40`.
///
/// Every entry point whose name begins with one word.
#[must_use]
pub fn family(prefix: &str) -> Vec<&'static str> {
    IMPORTS
        .iter()
        .filter(|name| name.starts_with(prefix))
        .copied()
        .collect()
}

/// Implements part of Ghidra function `FUN_00c99a40` at `0x00C99A40`.
///
/// The families of the library the program draws on, largest first.
#[must_use]
pub fn families(how_many: usize) -> Vec<(&'static str, usize)> {
    let mut counted: Vec<(&'static str, usize)> = Vec::new();
    for name in IMPORTS {
        let prefix = name.split('_').next().unwrap_or(name);
        match counted.iter_mut().find(|(held, _)| *held == prefix) {
            Some((_, seen)) => *seen += 1,
            None => counted.push((prefix, 1)),
        }
    }
    counted.sort_by(|left, right| right.1.cmp(&left.1).then(left.0.cmp(right.0)));
    counted.truncate(how_many);
    counted
}

/// Implements part of Ghidra function `FUN_00c99a40` at `0x00C99A40`.
///
/// The protocols the program can be asked to speak.
///
/// Taken from the names of the methods rather than from anything that declares
/// them, because nothing here declares them.
#[must_use]
pub fn protocols() -> Vec<&'static str> {
    let mut found: Vec<&'static str> = PROTOCOL_METHODS
        .iter()
        .map(|name| {
            name.strip_suffix("_client_method")
                .or_else(|| name.strip_suffix("_server_method"))
                .or_else(|| name.strip_suffix("_method"))
                .unwrap_or(name)
        })
        .collect();
    found.sort_unstable();
    found.dedup();
    found
}

/// Implements part of Ghidra function `FUN_00c99a40` at `0x00C99A40`.
///
/// The protocols that were already unsafe when this was bound.
#[must_use]
pub fn unsafe_protocols() -> Vec<&'static str> {
    protocols()
        .into_iter()
        .filter(|held| held.starts_with("SSLv") && *held != "SSLv23")
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn the_count_is_what_the_table_holds() {
        assert_eq!(IMPORTS.len(), IMPORT_COUNT);
    }

    #[test]
    fn the_table_is_sorted_so_it_can_be_searched() {
        assert!(IMPORTS.windows(2).all(|pair| pair[0] < pair[1]));
    }

    #[test]
    fn an_entry_point_can_be_looked_for_by_name() {
        assert!(binds("SSL_CTX_new"));
        assert!(!binds("NoSuchFunction"));
    }

    #[test]
    fn everything_bound_twice_is_bound_at_all() {
        for name in LOOKED_UP_TWICE {
            assert!(binds(name), "{name}");
        }
    }

    #[test]
    fn ten_entry_points_are_bound_twice_over() {
        // Nothing is gained by the second lookup.
        assert_eq!(LOOKED_UP_TWICE.len(), 10);
    }

    #[test]
    fn the_library_is_of_the_older_line() {
        for name in OLD_LIBRARY_MARKS {
            assert!(binds(name), "{name}");
        }
    }

    #[test]
    fn and_certainly_not_the_newer_one() {
        // The two sets do not overlap, so having all of one and none of the
        // other settles it rather than suggesting it.
        for name in NEW_LIBRARY_MARKS {
            assert!(!binds(name), "{name}");
        }
        for name in NEW_LIBRARY_MARKS {
            assert!(!OLD_LIBRARY_MARKS.contains(&name), "{name}");
        }
    }

    #[test]
    fn the_high_level_envelope_is_the_largest_part_of_what_it_uses() {
        let largest = families(1);

        assert_eq!(largest[0].0, "EVP");
        assert!(largest[0].1 > 200);
    }

    #[test]
    fn and_the_connection_layer_is_far_smaller_than_the_cryptography() {
        let counted = families(8);
        let envelope = counted
            .iter()
            .find(|(name, _)| *name == "EVP")
            .map(|(_, seen)| *seen)
            .expect("listed");
        let connection = counted
            .iter()
            .find(|(name, _)| *name == "SSL")
            .map(|(_, seen)| *seen)
            .expect("listed");

        assert!(envelope > connection * 4);
    }

    #[test]
    fn every_way_of_starting_a_connection_is_a_method() {
        for name in PROTOCOL_METHODS {
            assert!(name.ends_with("method"), "{name}");
            assert!(binds(name), "{name}");
        }
    }

    #[test]
    fn each_protocol_comes_in_three_forms() {
        // One that will do either end, one for each end.
        for protocol in protocols() {
            let forms = PROTOCOL_METHODS
                .iter()
                .filter(|name| {
                    **name == format!("{protocol}_method")
                        || **name == format!("{protocol}_client_method")
                        || **name == format!("{protocol}_server_method")
                })
                .count();

            assert_eq!(forms, 3, "{protocol}");
        }
    }

    #[test]
    fn it_binds_protocols_that_were_already_broken() {
        // Version two of the protocol, which the later library removed
        // outright.
        let unsafe_ones = unsafe_protocols();

        assert!(unsafe_ones.contains(&"SSLv2"));
        assert!(unsafe_ones.contains(&"SSLv3"));
    }

    #[test]
    fn the_newest_it_can_speak_is_the_one_before_the_current() {
        assert!(binds("TLSv1_2_method"));
        assert!(!binds("TLSv1_3_method"));
    }

    #[test]
    fn it_reaches_for_an_entry_point_that_says_old_in_its_own_name() {
        assert!(binds("_ossl_old_des_set_key"));
    }

    #[test]
    fn it_binds_both_directions_of_the_encoding() {
        // Reading a structure from its bytes and writing it back.
        assert!(!family("d2i_").is_empty());
        assert!(!family("i2d_").is_empty());
        assert_eq!(family("d2i_").len(), family("i2d_").len());
    }

    #[test]
    fn no_name_is_listed_twice_in_the_table() {
        let mut names = IMPORTS.to_vec();
        let before = names.len();
        names.sort_unstable();
        names.dedup();

        assert_eq!(names.len(), before);
    }
}
