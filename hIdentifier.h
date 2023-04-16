#ifndef hIdentifier
#define hIdentifier

#include <unordered_map>
#include <cstdint>

#define FALSE false
#define TRUE true

const char *crypts[] = {"CRC-16",
			"CRC-16-CCITT",
			"FCS-16",
			"CRC-32",
			"ADLER-32",
			"CRC-32B",
			"XOR-32",
			"GHash-32-3",
			"GHash-32-5",
			"DES(Unix)",
			"MD5(Half)",
			"MD5(Middle)",
			"MySQL",
			"Domain Cached Credentials - MD4(MD4(($pass)).(strtolower($username)))",
			"Haval-128",
                        "Haval-128(HMAC)",
                        "MD2",
                        "MD2(HMAC)",
                        "MD4",
                        "MD4(HMAC)",
                        "MD5",
                        "MD5(HMAC)",
                        "MD5(HMAC(Wordpress))",
                        "NTLM",
                        "RAdmin v2.x",
                        "RipeMD-128",
                        "RipeMD-128(HMAC)",
                        "SNEFRU-128",
                        NULL
                        };

/*
const char *crypts[] = {        "ADLER-32",
                                "CRC-32",
                                "CRC-32B",
                                "CRC-16",
                                "CRC-16-CCITT",
                                "DES(Unix)",
                                "FCS-16",
                                "GHash-32-3",
                                "GHash-32-5",
                                "GOST R 34.11-94",
                                "Haval-160",
                                "Haval-160(HMAC)",
                                "Haval-192",
                                "Haval-192(HMAC)",
                                "Haval-224",
                                "Haval-224(HMAC)",
                                "Haval-256",
                                "Haval-256(HMAC)",
                                "Lineage II C4",
                                "Domain Cached Credentials - MD4(MD4(($pass)).(strtolower($username)))",
                                "XOR-32",
                                "MD5(Half)",
                                "MD5(Middle)",
                                "MySQL",
                                "MD5(phpBB3)",
                                "MD5(Unix)",
                                "MD5(Wordpress)",
                                "MD5(APR)",
                                "Haval-128",
                                "Haval-128(HMAC)",
                                "MD2",
                                "MD2(HMAC)",
                                "MD4",
                                "MD4(HMAC)",
                                "MD5",
                                "MD5(HMAC)",
                                "MD5(HMAC(Wordpress))",
                                "NTLM",
                                "RAdmin v2.x",
                                "RipeMD-128",
                                "RipeMD-128(HMAC)",
                                "SNEFRU-128",
                                "SNEFRU-128(HMAC)",
                                "Tiger-128",
                                "Tiger-128(HMAC)",

                                "md5($pass.$salt)",
                                "md5($salt.'-'.md5($pass))",
                                "md5($salt.$pass)",
                                "md5($salt.$pass.$salt)",
                                "md5($salt.$pass.$username)",
                                "md5($salt.md5($pass))",
                                "md5($salt.md5($pass).$salt)",
                                "md5($salt.md5($pass.$salt))",
                                "md5($salt.md5($salt.$pass))",
                                "md5($salt.md5(md5($pass).$salt))",
                                "md5($username.0.$pass)",
                                "md5($username.LF.$pass)",
                                "md5($username.md5($pass).$salt)",
                                "md5(md5($pass))",
                                "md5(md5($pass).$salt)",
                                "md5(md5($pass).md5($salt))",
                                "md5(md5($salt).$pass)",
                                "md5(md5($salt).md5($pass))",
                                "md5(md5($username.$pass).$salt)",
                                "md5(md5(md5($pass)))",
                                "md5(md5(md5(md5($pass))))",
                                "md5(md5(md5(md5(md5($pass)))))",
                                "md5(sha1($pass))",
                                "md5(sha1(md5($pass)))",
                                "md5(sha1(md5(sha1($pass))))",
                                "md5(strtoupper(md5($pass)))",

                                "MySQL5 - SHA-1(SHA-1($pass))",
                                "MySQL 160bit - SHA-1(SHA-1($pass))",

                                "RipeMD-160(HMAC)",
                                "RipeMD-160",
                                "SHA-1",
                                "SHA-1(HMAC)",
                                "SHA-1(MaNGOS)",
                                "SHA-1(MaNGOS2)",
                                "Tiger-160",
                                "Tiger-160(HMAC)",

                                "sha1($pass.$salt)",
                                "sha1($salt.$pass)",
                                "sha1($salt.md5($pass))",
                                "sha1($salt.md5($pass).$salt)",
                                "sha1($salt.sha1($pass))",
                                "sha1($salt.sha1($salt.sha1($pass)))",
                                "sha1($username.$pass)",
                                "sha1($username.$pass.$salt)",
                                "sha1(md5($pass))",
                                "sha1(md5($pass).$salt)",
                                "sha1(md5(sha1($pass)))",
                                "sha1(sha1($pass))",
                                "sha1(sha1($pass).$salt)",
                                "sha1(sha1($pass).substr($pass,0,3))",
                                "sha1(sha1($salt.$pass))",
                                "sha1(sha1(sha1($pass)))",
                                "sha1(strtolower($username).$pass)",

                                "Tiger-192",
                                "Tiger-192(HMAC)"
                                "md5($pass.$salt) - Joomla",
                                "SHA-1(Django)",
                                "SHA-224",
                                "SHA-224(HMAC)",
                                "RipeMD-256",
                                "RipeMD-256(HMAC)",
                                "SNEFRU-256",
                                "SNEFRU-256(HMAC)",

                                "SHA-256(md5($pass))",
                                "SHA-256(sha1($pass))",

                                "SHA-256",
                                "SHA-256(HMAC)",

                                "md5($pass.$salt) - Joomla",

                                "SAM - (LM_hash:NT_hash)",
                                "SHA-256(Django)",
                                "RipeMD-320",
                                "RipeMD-320(HMAC)",
                                "SHA-384",
                                "SHA-384(HMAC)",
                                "SHA-256",
                                "SHA-384(Django)",
                                "SHA-512",
                                "SHA-512(HMAC)",
                                "Whirlpool",
                                "Whirlpool(HMAC)",
                                NULL
                                };
                                
*/

#endif
