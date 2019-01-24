#include <efivar/efivar.h>
#include <endian.h>

#if BYTE_ORDER == BIG_ENDIAN
#define cpu_to_be32(n) (n)
#define cpu_to_be16(n) (n)
#define cpu_to_le32(n) (__builtin_bswap32(n))
#define cpu_to_le16(n) (__builtin_bswap16(n))
#else
#define cpu_to_le32(n) (n)
#define cpu_to_le16(n) (n)
#define cpu_to_be32(n) (__builtin_bswap32(n))
#define cpu_to_be16(n) (__builtin_bswap16(n))
#endif

const efi_guid_t
	__attribute__((__visibility__ ("default")))
	efi_guid_empty = {cpu_to_le32(0x00000000),cpu_to_le16(0x0000),cpu_to_le16(0x0000),cpu_to_be16(0x0000),{0x00,0x00,0x00,0x00,0x00,0x00}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_zero = {cpu_to_le32(0x00000000),cpu_to_le16(0x0000),cpu_to_le16(0x0000),cpu_to_be16(0x0000),{0x00,0x00,0x00,0x00,0x00,0x00}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_sha512 = {cpu_to_le32(0x093e0fae),cpu_to_le16(0xa6c4),cpu_to_le16(0x4f50),cpu_to_be16(0x9f1b),{0xd4,0x1e,0x2b,0x89,0xc1,0x9a}};


const efi_guid_t
	__attribute__((__visibility__ ("default")))
	efi_guid_redhat = {cpu_to_le32(0x0abba7dc),cpu_to_le16(0xe516),cpu_to_le16(0x4167),cpu_to_be16(0xbbf5),{0x4d,0x9d,0x1c,0x73,0x94,0x16}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_fwupdate = {cpu_to_le32(0x0abba7dc),cpu_to_le16(0xe516),cpu_to_le16(0x4167),cpu_to_be16(0xbbf5),{0x4d,0x9d,0x1c,0x73,0x94,0x16}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_sha224 = {cpu_to_le32(0x0b6e5233),cpu_to_le16(0xa65c),cpu_to_le16(0x44c9),cpu_to_be16(0x9407),{0xd9,0xab,0x83,0xbf,0xc8,0xbd}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_lenovo_boot_menu = {cpu_to_le32(0x126a762d),cpu_to_le16(0x5758),cpu_to_le16(0x4fca),cpu_to_be16(0x8531),{0x20,0x1a,0x7f,0x57,0xf8,0x50}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_ux_capsule = {cpu_to_le32(0x3b8c8162),cpu_to_le16(0x188c),cpu_to_le16(0x46a4),cpu_to_be16(0xaec9),{0xbe,0x43,0xf1,0xd6,0x56,0x97}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_x509_sha256 = {cpu_to_le32(0x3bd2a492),cpu_to_le16(0x96c0),cpu_to_le16(0x4079),cpu_to_be16(0xb420),{0xfc,0xf9,0x8e,0xf1,0x03,0xed}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_rsa2048 = {cpu_to_le32(0x3c5766e8),cpu_to_le16(0x269c),cpu_to_le16(0x4e34),cpu_to_be16(0xaa14),{0xed,0x77,0x6e,0x85,0xb3,0xb6}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_lenovo = {cpu_to_le32(0x3cc24e96),cpu_to_le16(0x22c7),cpu_to_le16(0x41d8),cpu_to_be16(0x8863),{0x8e,0x39,0xdc,0xdc,0xc2,0xcf}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_lenovo_diag = {cpu_to_le32(0x3f7e615b),cpu_to_le16(0x0d45),cpu_to_le16(0x4f80),cpu_to_be16(0x88dc),{0x26,0xb2,0x34,0x95,0x85,0x60}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_x509_sha512 = {cpu_to_le32(0x446dbf63),cpu_to_le16(0x2502),cpu_to_le16(0x4cda),cpu_to_be16(0xbcfa),{0x24,0x65,0xd2,0xb0,0xfe,0x9d}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_external_management = {cpu_to_le32(0x452e8ced),cpu_to_le16(0xdfff),cpu_to_le16(0x4b8c),cpu_to_be16(0xae01),{0x51,0x18,0x86,0x2e,0x68,0x2c}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_pkcs7_cert = {cpu_to_le32(0x4aafd29d),cpu_to_le16(0x68df),cpu_to_le16(0x49ee),cpu_to_be16(0x8aa9),{0x34,0x7d,0x37,0x56,0x65,0xa7}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_shim = {cpu_to_le32(0x605dab50),cpu_to_le16(0xe046),cpu_to_le16(0x4300),cpu_to_be16(0xabb6),{0x3d,0xd8,0x10,0xdd,0x8b,0x23}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_lenovo_rescue = {cpu_to_le32(0x665d3f60),cpu_to_le16(0xad3e),cpu_to_le16(0x4cad),cpu_to_be16(0x8e26),{0xdb,0x46,0xee,0xe9,0xf1,0xb5}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_rsa2048_sha1 = {cpu_to_le32(0x67f8444f),cpu_to_le16(0x8743),cpu_to_le16(0x48f1),cpu_to_be16(0xa328),{0x1e,0xaa,0xb8,0x73,0x60,0x80}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_x509_sha384 = {cpu_to_le32(0x7076876e),cpu_to_le16(0x80c2),cpu_to_le16(0x4ee6),cpu_to_be16(0xaad2),{0x28,0xb3,0x49,0xa6,0x86,0x5b}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_lenovo_setup = {cpu_to_le32(0x721c8b66),cpu_to_le16(0x426c),cpu_to_le16(0x4e86),cpu_to_be16(0x8e99),{0x34,0x57,0xc4,0x6a,0xb0,0xb9}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_microsoft = {cpu_to_le32(0x77fa9abd),cpu_to_le16(0x0359),cpu_to_le16(0x4d32),cpu_to_be16(0xbd60),{0x28,0xf4,0xe7,0x8f,0x78,0x4b}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_lenovo_2 = {cpu_to_le32(0x7facc7b6),cpu_to_le16(0x127f),cpu_to_le16(0x4e9c),cpu_to_be16(0x9c5d),{0x08,0x0f,0x98,0x99,0x43,0x45}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_sha1 = {cpu_to_le32(0x826ca512),cpu_to_le16(0xcf10),cpu_to_le16(0x4ac9),cpu_to_be16(0xb187),{0xbe,0x01,0x49,0x66,0x31,0xbd}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_lenovo_me_config = {cpu_to_le32(0x82988420),cpu_to_le16(0x7467),cpu_to_le16(0x4490),cpu_to_be16(0x9059),{0xfe,0xb4,0x48,0xdd,0x19,0x63}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_global = {cpu_to_le32(0x8be4df61),cpu_to_le16(0x93ca),cpu_to_le16(0x11d2),cpu_to_be16(0xaa0d),{0x00,0xe0,0x98,0x03,0x2b,0x8c}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_x509_cert = {cpu_to_le32(0xa5c059a1),cpu_to_le16(0x94e4),cpu_to_le16(0x4aa7),cpu_to_be16(0x87b5),{0xab,0x15,0x5c,0x2b,0xf0,0x72}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_rsa2048_sha256_cert = {cpu_to_le32(0xa7717414),cpu_to_le16(0xc616),cpu_to_le16(0x4977),cpu_to_be16(0x9420),{0x84,0x47,0x12,0xa7,0x35,0xbf}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_lenovo_diag_splash = {cpu_to_le32(0xa7d8d9a6),cpu_to_le16(0x6ab0),cpu_to_le16(0x4aeb),cpu_to_be16(0xad9d),{0x16,0x3e,0x59,0xa7,0xa3,0x80}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_redhat_2 = {cpu_to_le32(0xade9e48f),cpu_to_le16(0x9cb8),cpu_to_le16(0x98e6),cpu_to_be16(0x31af),{0xb4,0xe6,0x00,0x9e,0x2f,0xe3}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_lenovo_msg = {cpu_to_le32(0xbc7838d2),cpu_to_le16(0x0f82),cpu_to_le16(0x4d60),cpu_to_be16(0x8316),{0xc0,0x68,0xee,0x79,0xd2,0x5b}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_sha256 = {cpu_to_le32(0xc1c41626),cpu_to_le16(0x504c),cpu_to_le16(0x4092),cpu_to_be16(0xaca9),{0x41,0xf9,0x36,0x93,0x43,0x28}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_shell = {cpu_to_le32(0xc57ad6b7),cpu_to_le16(0x0515),cpu_to_le16(0x40a8),cpu_to_be16(0x9d21),{0x55,0x16,0x52,0x85,0x4e,0x37}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_security = {cpu_to_le32(0xd719b2cb),cpu_to_le16(0x3d3a),cpu_to_le16(0x4596),cpu_to_be16(0xa3bc),{0xda,0xd0,0x0e,0x67,0x65,0x6f}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_rsa2048_sha256 = {cpu_to_le32(0xe2b36190),cpu_to_le16(0x879b),cpu_to_le16(0x4a3d),cpu_to_be16(0xad8d),{0xf2,0xe7,0xbb,0xa3,0x27,0x84}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_sha384 = {cpu_to_le32(0xff3e5307),cpu_to_le16(0x9fd0),cpu_to_le16(0x48c9),cpu_to_be16(0x85f1),{0x8a,0xd5,0x6c,0x70,0x1e,0x01}};

const
__attribute__((__visibility__ ("default")))
efi_guid_t efi_guid_lenovo_startup_interrupt = {cpu_to_le32(0xf46ee6f4),cpu_to_le16(0x4785),cpu_to_le16(0x43a3),cpu_to_be16(0x923d),{0x7f,0x78,0x6c,0x3c,0x84,0x79}};

