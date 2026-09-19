//! Routines that are nothing but a call to somewhere else.
//!
//! 7139 of them, standing in front of 2892 different targets. A routine of this
//! shape does no work: it takes what it was given, passes it straight on, and
//! returns whatever comes back. What it is for is being an address — something
//! a table of methods can point at, or a call from elsewhere can be linked
//! against, when the thing that does the work is not shaped the way the caller
//! needs.
//!
//! The distribution is the interesting part. 2251 of the targets are stood in
//! front of by exactly one of these, which is what a compiler emitting one shim
//! per call site produces rather than one per routine. The rest have several,
//! and the ones with many are the handful of routines the whole program leans
//! on — assigning a string, letting go of an array, fetching from a list.

// The addresses are written without separators so the port-mapping importer can
// match them against the recovered functions.
#![allow(clippy::unreadable_literal)]

/// Every routine that stands in front of one target.
#[derive(Debug, Clone, Copy)]
pub struct Shims {
    /// What they all call.
    pub target: u32,
    /// The routines that call it and do nothing else.
    pub members: &'static [u32],
}

/// Every one-call routine, grouped by what it calls.
pub static SHIMS: [Shims; 2892] = [
    Shims {
        target: 0x00406E10,
        members: &[0x00419F80],
    },
    Shims {
        target: 0x00409570,
        members: &[0x0041E250, 0x00626630, 0x01596960, 0x01B077E0],
    },
    Shims {
        target: 0x004095A0,
        members: &[0x00879810],
    },
    Shims {
        target: 0x004095C0,
        members: &[0x0083FF70],
    },
    Shims {
        target: 0x004095F0,
        members: &[
            0x00411C70, 0x0041E2A0, 0x0043D6E0, 0x0044F1D0, 0x0044F340, 0x004B2370, 0x004C5A10,
            0x0058A370, 0x00595810, 0x00595AD0, 0x0059AF50, 0x005DE3B0, 0x005DE5F0, 0x005EC4D0,
            0x005EC630, 0x005FD230, 0x006015B0, 0x00601610, 0x00606650, 0x006068C0, 0x00606F70,
            0x00607100, 0x00608780, 0x0060B590, 0x0060CBA0, 0x0060CBC0, 0x00626640, 0x0069E480,
            0x0069E7B0, 0x006F06F0, 0x008058F0, 0x00805910, 0x0080EA70, 0x0083FF90, 0x0088F480,
            0x00895A20, 0x00895DB0, 0x00895F30, 0x00896200, 0x00897270, 0x009ED5B0, 0x00A45EC0,
            0x00A466F0, 0x00BE7B60, 0x00BF6D10, 0x00BFE340, 0x00BFE360, 0x00BFE380, 0x00C23230,
            0x00C7B750, 0x00C7B770, 0x00C7B970, 0x00C7B990, 0x00CFA5B0, 0x00D3A7B0, 0x0141F000,
            0x0156C690, 0x01596990, 0x015D9E70, 0x015DD370, 0x016BF000, 0x0180F050, 0x0184B260,
            0x018D6C40, 0x018D9D50, 0x01B1F250, 0x01C47040,
        ],
    },
    Shims {
        target: 0x00409620,
        members: &[0x0151EB70, 0x017C52B0],
    },
    Shims {
        target: 0x00409880,
        members: &[0x004098E0, 0x00410AB0, 0x00414430, 0x00418740],
    },
    Shims {
        target: 0x00409970,
        members: &[0x004423C0],
    },
    Shims {
        target: 0x00409A70,
        members: &[
            0x00408590, 0x00414FF0, 0x0041ECD0, 0x00442450, 0x00442480, 0x0045B8F0, 0x0045B920,
            0x0053C450, 0x00711200, 0x00873DA0, 0x00873DD0, 0x00874E50, 0x00874EB0, 0x00878500,
            0x00878790, 0x00A36C70, 0x00A37D60, 0x00AA8E20, 0x00B3DFF0, 0x00B87060, 0x01596930,
            0x01B0F630,
        ],
    },
    Shims {
        target: 0x00409DA0,
        members: &[0x0080DCF0],
    },
    Shims {
        target: 0x0040A140,
        members: &[0x0040A030, 0x0040A090],
    },
    Shims {
        target: 0x0040BED0,
        members: &[0x00526070, 0x00526080],
    },
    Shims {
        target: 0x0040C660,
        members: &[0x016A9FC0],
    },
    Shims {
        target: 0x0040C760,
        members: &[0x00C44590, 0x01236BF0, 0x016A9D20, 0x01754BB0, 0x01D5F260],
    },
    Shims {
        target: 0x0040C770,
        members: &[
            0x006645F0, 0x0085A380, 0x00B413C0, 0x00B41430, 0x00DCD1F0, 0x00E24DE0, 0x00E270B0,
            0x00E35350, 0x00E37770, 0x00E41B50, 0x00E43F90, 0x00E6B6B0, 0x00E77400, 0x01101210,
            0x01101230, 0x01167B10, 0x015F6540, 0x01665F50, 0x0167B110, 0x01690560, 0x01690A40,
            0x0194DED0, 0x01A9A860, 0x01BD4D00, 0x01C19810, 0x01C37170,
        ],
    },
    Shims {
        target: 0x0040C840,
        members: &[0x00C385D0, 0x016D65B0],
    },
    Shims {
        target: 0x0040C850,
        members: &[0x016A9CA0],
    },
    Shims {
        target: 0x0040C960,
        members: &[0x0040C9E0, 0x0040CA00, 0x0040CA20],
    },
    Shims {
        target: 0x0040CFE0,
        members: &[0x0040D040, 0x0040D060],
    },
    Shims {
        target: 0x0040D080,
        members: &[0x0040D120],
    },
    Shims {
        target: 0x0040D150,
        members: &[0x01B43D10],
    },
    Shims {
        target: 0x0040D200,
        members: &[
            0x0041E070, 0x0042A210, 0x0042A230, 0x0085A770, 0x009E1040, 0x00B3E010, 0x00C273A0,
            0x01596900, 0x015C0C30, 0x01B0F5C0,
        ],
    },
    Shims {
        target: 0x0040E550,
        members: &[0x0040E710],
    },
    Shims {
        target: 0x0040E780,
        members: &[0x0040E840],
    },
    Shims {
        target: 0x0040EEE0,
        members: &[0x0040EF30],
    },
    Shims {
        target: 0x0040F220,
        members: &[0x0040F200],
    },
    Shims {
        target: 0x0040F530,
        members: &[0x0040F570],
    },
    Shims {
        target: 0x0040F5F0,
        members: &[0x0040F5D0],
    },
    Shims {
        target: 0x0040FB60,
        members: &[0x004100D0],
    },
    Shims {
        target: 0x004109C0,
        members: &[0x004109E0],
    },
    Shims {
        target: 0x00410AE0,
        members: &[
            0x004115C0, 0x004B18B0, 0x00648EF0, 0x01953850, 0x0197F2F0, 0x01980C30,
        ],
    },
    Shims {
        target: 0x00410F20,
        members: &[
            0x004C1A30, 0x004C1C10, 0x004C52A0, 0x00694480, 0x00715750, 0x0072F480, 0x00744B70,
            0x007E0B50, 0x007E1C50, 0x0084D750, 0x00972BA0, 0x00984C20, 0x0098D2A0, 0x009D4100,
            0x00A53770, 0x00AE13C0, 0x00AF8E10, 0x00B96D60, 0x00C27D00, 0x00C28160, 0x00CF3F60,
            0x00D99350, 0x00D99370, 0x00D993C0, 0x00DE8020, 0x00DE8720, 0x00F09DE0, 0x00F9C940,
            0x00FAEB00, 0x0108DA40, 0x011280D0, 0x0124CC10, 0x01302B70, 0x01464CB0, 0x0146B700,
            0x014C3E10, 0x0156BFD0, 0x0157F050, 0x01710710, 0x01710780, 0x0176F5B0, 0x0186B170,
            0x01A28C80, 0x01A876E0, 0x01B4A5B0, 0x01B4CD80, 0x01C05020, 0x01C6FE80,
        ],
    },
    Shims {
        target: 0x00411200,
        members: &[0x006221F0],
    },
    Shims {
        target: 0x004113D0,
        members: &[
            0x00546910, 0x00546950, 0x00546970, 0x00546990, 0x0064B700, 0x0064B760, 0x006A4450,
            0x018DC390,
        ],
    },
    Shims {
        target: 0x004113F0,
        members: &[
            0x005463C0, 0x005463E0, 0x00546400, 0x00546420, 0x006AA050, 0x006AA4F0, 0x009D7890,
            0x009D7DD0, 0x009D81F0, 0x009D97B0, 0x009DA1C0, 0x009DA5A0, 0x009DAB20, 0x0147CC90,
            0x017B6760, 0x017B6780, 0x01C07120,
        ],
    },
    Shims {
        target: 0x00411460,
        members: &[0x004114B0],
    },
    Shims {
        target: 0x004115F0,
        members: &[0x00A78000],
    },
    Shims {
        target: 0x00411B70,
        members: &[0x00411EE0, 0x004123D0, 0x004124E0],
    },
    Shims {
        target: 0x00411E10,
        members: &[0x004A0120],
    },
    Shims {
        target: 0x004120D0,
        members: &[0x0041CD00],
    },
    Shims {
        target: 0x00412130,
        members: &[
            0x0044C950, 0x0044F040, 0x00451CD0, 0x004A02F0, 0x004A06C0, 0x004A0800, 0x004A08D0,
            0x004A09F0, 0x004A0AC0, 0x004A0B70, 0x004A0C20, 0x004A0C90, 0x004A0D00, 0x004A0D80,
            0x004A3120, 0x004A31F0, 0x004AA440, 0x004AAA50, 0x004AFA70, 0x004AFCA0, 0x004AFD10,
            0x004AFDA0, 0x004B0CB0, 0x004BDC60, 0x004BDDE0, 0x004BDEC0, 0x004BE5A0, 0x004D0670,
            0x004D09C0, 0x004D1740, 0x004D19D0, 0x004D1D90, 0x004D5750, 0x004DBF80, 0x004DCC10,
            0x004DCCA0, 0x004DCDF0, 0x004DCE10, 0x004E9DB0, 0x004E9E40, 0x004E9F80, 0x004E9FA0,
            0x004F2BB0, 0x004F2C40, 0x004F2D80, 0x004F2DA0, 0x004F5710, 0x004F57A0, 0x004F58E0,
            0x004F5900, 0x00546030, 0x00546220, 0x0054A730, 0x0054AD60, 0x005539D0, 0x00554070,
            0x00554FA0, 0x0055A440, 0x0055AA10, 0x00607730, 0x006077F0, 0x00619710, 0x006199F0,
            0x0064AF30, 0x0064B000, 0x0064B180, 0x0065CD60, 0x0065D080, 0x00CBF7B0, 0x00CBF840,
            0x00CBF900, 0x00CBF970, 0x00CBFA70, 0x00CBFC00, 0x00CCDA00, 0x00CCDAE0, 0x00CCDD90,
        ],
    },
    Shims {
        target: 0x00412310,
        members: &[0x004DBF70],
    },
    Shims {
        target: 0x004133B0,
        members: &[0x004134C0],
    },
    Shims {
        target: 0x004134C0,
        members: &[0x0044D470],
    },
    Shims {
        target: 0x00413FB0,
        members: &[0x01D85050],
    },
    Shims {
        target: 0x00414160,
        members: &[0x00B94C60],
    },
    Shims {
        target: 0x00414480,
        members: &[
            0x00538E60, 0x005FCB80, 0x006E71A0, 0x00710020, 0x00710EF0, 0x00837CA0, 0x00877860,
            0x00877880, 0x008AED20, 0x00A96580, 0x00AAC440, 0x00ADB500, 0x00C6F2C0, 0x00FBACF0,
            0x00FC7790, 0x010D37B0, 0x01158FC0, 0x0131F480, 0x0153BD20, 0x016CB7A0, 0x016FAA50,
            0x019DDE50, 0x019E4F40, 0x01A8AF90, 0x01BBD730, 0x01C173C0, 0x01C1B1D0, 0x01CFC320,
            0x01D87680,
        ],
    },
    Shims {
        target: 0x004144D0,
        members: &[0x016A52B0, 0x016A54D0],
    },
    Shims {
        target: 0x00414520,
        members: &[0x009799D0, 0x009885A0, 0x018D63F0],
    },
    Shims {
        target: 0x00414560,
        members: &[
            0x00A3B400, 0x00BC9D20, 0x00C424E0, 0x00C7ECB0, 0x00EC10C0, 0x00EC2AF0, 0x00EC30E0,
            0x00EC52D0, 0x00EC5800, 0x00ECE4C0, 0x00ECE880, 0x00ED1410, 0x00ED1910, 0x00ED2000,
            0x00EF4820, 0x00F42B20, 0x00F9C070, 0x00FAFB30, 0x00FB52A0, 0x00FB6920, 0x00FB8650,
            0x00FB9230, 0x00FD4330, 0x00FF31C0, 0x00FF7940, 0x01060AC0, 0x01067B60, 0x010A76F0,
            0x010BD4A0, 0x010BDB90, 0x010CE210, 0x0111CD50, 0x0112B640, 0x011439A0, 0x011530F0,
            0x01197B70, 0x012D56D0, 0x01337710, 0x0139A2F0, 0x013ADEC0, 0x01446650, 0x014482D0,
            0x0144F280, 0x01453240, 0x01456A20, 0x0145A030, 0x0145DE50, 0x014608A0, 0x01497820,
            0x015E95C0, 0x01630CD0, 0x01644C60, 0x0164A3B0, 0x016BC100, 0x016CAB40, 0x01719900,
            0x017C6A00, 0x017C7C80, 0x017C82C0, 0x0180B170, 0x018AF040, 0x018B40E0, 0x01951CE0,
            0x01970A00, 0x01979500, 0x019845C0, 0x01A688B0, 0x01ADF8D0, 0x01ADFDE0, 0x01AEECF0,
            0x01B0A420, 0x01B78500, 0x01B82CB0, 0x01B969D0, 0x01C2A5D0, 0x01C2C3D0, 0x01C2D1B0,
            0x01C2DE20, 0x01C2F9A0, 0x01C7BF50, 0x01D7AD80,
        ],
    },
    Shims {
        target: 0x004145C0,
        members: &[
            0x006220E0, 0x008F7A60, 0x008F7C70, 0x008F7D70, 0x008FFCD0, 0x008FFDE0, 0x008FFEE0,
            0x009477B0, 0x00947930, 0x00948830, 0x0094ADA0, 0x0094B2D0, 0x0094B4A0, 0x0094B650,
            0x0094BD80, 0x0094C240, 0x0094DF90, 0x0094E390, 0x0094E610, 0x0094E900, 0x0094EB30,
            0x0094FC20, 0x009503A0, 0x00950710, 0x00950E20, 0x009514F0, 0x00952FA0, 0x00955770,
            0x00956A80, 0x00957800, 0x009582B0, 0x00959210, 0x0095A680, 0x0095BFC0, 0x0095CDF0,
            0x0095DB70, 0x0095E860, 0x00963150, 0x00972BC0, 0x0097D190, 0x0097DD40, 0x0097E0B0,
            0x00980900, 0x00980B60, 0x00980FE0, 0x00986680, 0x009878F0, 0x00987CD0, 0x00988090,
            0x009885F0, 0x00988F10, 0x00989340, 0x00989700, 0x00989B70, 0x0098A380, 0x0098CA50,
            0x0098CF80, 0x0098D6B0, 0x00996560, 0x00997AD0, 0x0099BFA0, 0x0099C440, 0x009D4EB0,
            0x009DA520, 0x009DD5F0, 0x009E78F0, 0x009E8240, 0x00B2A060, 0x00B2AF90, 0x00B4EF50,
            0x014749B0, 0x016198B0, 0x01619970, 0x01778C60, 0x01779360, 0x018071F0, 0x0180DC10,
            0x01961230,
        ],
    },
    Shims {
        target: 0x004146A0,
        members: &[0x004146F0],
    },
    Shims {
        target: 0x00414740,
        members: &[0x00418650],
    },
    Shims {
        target: 0x004147F0,
        members: &[0x004173B0],
    },
    Shims {
        target: 0x00414840,
        members: &[0x00414910],
    },
    Shims {
        target: 0x00414930,
        members: &[0x00414A00],
    },
    Shims {
        target: 0x00414A20,
        members: &[0x004173C0],
    },
    Shims {
        target: 0x00414AD0,
        members: &[
            0x00452A70, 0x0045B960, 0x0045BB60, 0x004D2FC0, 0x00558690, 0x005598C0, 0x0055A0E0,
            0x006EDF20, 0x00716C30, 0x00724350, 0x00727CF0, 0x00728780, 0x00729EF0, 0x0077D920,
            0x00809E30, 0x00809E50, 0x0085A5F0, 0x0086B370, 0x00882B40, 0x008CB290, 0x008CB2E0,
            0x008CB590, 0x008CB5E0, 0x008CB820, 0x008CB870, 0x008CBAB0, 0x008CBB00, 0x008CBD40,
            0x008CBD90, 0x008CBFB0, 0x008CC000, 0x008CC290, 0x008CC2E0, 0x008CC5B0, 0x008CC600,
            0x008CC810, 0x008CC860, 0x008CCAA0, 0x008CCAF0, 0x008CCCF0, 0x008CCD40, 0x008CCE90,
            0x008CCF60, 0x008CD0E0, 0x008CD340, 0x008CD570, 0x008CD6A0, 0x008CD7D0, 0x008CD8C0,
            0x008CD9A0, 0x008CDB20, 0x008CDC90, 0x008CDE50, 0x008CDFD0, 0x008CE220, 0x008CE3A0,
            0x008CE4E0, 0x008CE660, 0x008CE7E0, 0x008CE970, 0x008CEB40, 0x008CECC0, 0x008CEE40,
            0x008CEFC0, 0x008CF140, 0x008CF2D0, 0x008CF450, 0x008CF5D0, 0x008CF750, 0x008CF8D0,
            0x008CFAA0, 0x008CFC10, 0x008CFD80, 0x008CFEF0, 0x008D0060, 0x008D0210, 0x008D0380,
            0x008D04C0, 0x008D0630, 0x008D07A0, 0x008D0950, 0x008D0B20, 0x008D0CA0, 0x008D0E30,
            0x008D0FA0, 0x008D1120, 0x008D12A0, 0x008D13E0, 0x008D1500, 0x008D1610, 0x008D1780,
            0x008D1890, 0x008D19E0, 0x008D1B40, 0x008D1CA0, 0x008D1D90, 0x008D1E80, 0x008D1F70,
            0x008D2060, 0x008D2150, 0x008D2240, 0x008EDB90, 0x008EDC50, 0x008EDD10, 0x008EE110,
            0x008EE390, 0x008EE7A0, 0x008EE8D0, 0x008EEA70, 0x008EEB20, 0x008EEBD0, 0x008EEC80,
            0x008EF110, 0x008EF1F0, 0x008EF380, 0x008EF590, 0x008EF650, 0x008EF710, 0x008EF7D0,
            0x008EF890, 0x008EF950, 0x008EFA10, 0x008EFAD0, 0x008EFB90, 0x008EFC50, 0x008F0270,
            0x008F0310, 0x008F03C0, 0x008F0470, 0x008F0520, 0x008F05E0, 0x008F21E0, 0x008F4B30,
            0x009DD790, 0x009EC420, 0x009EC440, 0x00A3D5E0, 0x00A4A4C0, 0x00A77830, 0x00A77C70,
            0x00A78010, 0x00A7C980, 0x00AC1910, 0x00B13820, 0x00B70CA0, 0x00B72630, 0x00B74CB0,
            0x00B765F0, 0x00B78610, 0x00B79820, 0x00B7CBD0, 0x00B7D990, 0x00B7E5D0, 0x00B7F050,
            0x00B7FC20, 0x00B81000, 0x00B83DF0, 0x00B847B0, 0x00B86B10, 0x00B87FD0, 0x00BAD8B0,
            0x00BAD8D0, 0x00BAD900, 0x00BAD960, 0x00BAD9B0, 0x00BB0DF0, 0x00BB0E10, 0x00BB0E90,
            0x00BB1C90, 0x00BB1F30, 0x00BB22D0, 0x00BB2700, 0x00BB2A20, 0x00BB2D50, 0x00BB3800,
            0x00BC1D20, 0x00BC1EC0, 0x00C6FC50, 0x00C6FC90, 0x00C6FCB0, 0x00C6FCD0, 0x00C6FCF0,
            0x00C89220, 0x00CAC5F0, 0x00CAC620, 0x00CAEED0, 0x00CC3DB0, 0x00CE4580, 0x00CE45A0,
            0x00CE6C20, 0x00CF2510, 0x00CF27B0, 0x00CF2950, 0x00D74950, 0x00D7F370, 0x00D83AF0,
            0x00D97D50, 0x00DE54F0, 0x00E07BE0, 0x00E0FBB0, 0x00E81B40, 0x00E81C90, 0x00EA43B0,
            0x00EA47C0, 0x00EA4E20, 0x00F2F5A0, 0x00F33000, 0x00F6DE30, 0x00F6F680, 0x00F81470,
            0x00F8C960, 0x00F8D220, 0x00F8D250, 0x00F8E6F0, 0x00F8F540, 0x00FD84F0, 0x0106AA80,
            0x0106B870, 0x01094C00, 0x01094D30, 0x010995E0, 0x01099710, 0x010A06C0, 0x010AF810,
            0x010B96C0, 0x010B9750, 0x01114110, 0x0111A730, 0x0111A860, 0x0111F400, 0x011327D0,
            0x01132810, 0x012DCAC0, 0x012DCAE0, 0x012DCB60, 0x012DCBE0, 0x012DCC60, 0x012DCCE0,
            0x012E26E0, 0x012E2700, 0x012E2720, 0x012E2740, 0x012E2760, 0x012E5670, 0x013A48A0,
            0x013C5B90, 0x0142FCA0, 0x0142FCD0, 0x01433DF0, 0x01433F80, 0x01434110, 0x01434BE0,
            0x0149EEC0, 0x0149EF40, 0x014B1EE0, 0x014B2010, 0x014BBC90, 0x014BBFF0, 0x014C1750,
            0x014C1770, 0x014C1790, 0x014C17B0, 0x014CDCF0, 0x015652A0, 0x01565CF0, 0x01565D10,
            0x01571920, 0x015D6430, 0x015D8620, 0x015FC650, 0x01708430, 0x01708450, 0x01708470,
            0x0177DDC0, 0x017B9A30, 0x017B9AB0, 0x017BB2F0, 0x017BF330, 0x017FF4F0, 0x017FF570,
            0x01856570, 0x018565B0, 0x01856600, 0x01856700, 0x01856740, 0x01856790, 0x01856B70,
            0x01857370, 0x018573B0, 0x01857410, 0x01857F90, 0x01857FD0, 0x01858020, 0x0185A670,
            0x0185A6B0, 0x0185A6F0, 0x01863250, 0x01863290, 0x018632D0, 0x01867AD0, 0x01867B10,
            0x01867B60, 0x0187FD60, 0x018886C0, 0x01955870, 0x019558A0, 0x0196FD00, 0x01977D50,
            0x0197A390, 0x0197A4C0, 0x019AF5F0, 0x01AE5ED0, 0x01BA9630, 0x01BA96C0, 0x01BF8D40,
            0x01C1BBA0, 0x01C1C2B0, 0x01C1F360, 0x01D04330, 0x01D07FB0, 0x01D46210, 0x01D854B0,
            0x01D859B0,
        ],
    },
    Shims {
        target: 0x00414B90,
        members: &[
            0x00414BE0, 0x008FF060, 0x00948EC0, 0x00950770, 0x009507D0, 0x00950810, 0x009508A0,
            0x00951E50, 0x00951E80, 0x00951EB0, 0x00951EF0, 0x00953230, 0x00953580, 0x00953750,
            0x00953770, 0x009537A0, 0x00953920, 0x00953B00, 0x00953B60, 0x00953BA0, 0x00953BD0,
            0x00953D60, 0x00953EA0, 0x00954270, 0x009542A0, 0x009542D0, 0x00954300, 0x00954350,
            0x009543C0, 0x00954E10, 0x0095D520, 0x00961B00, 0x00963620, 0x00967280, 0x0096EA30,
            0x0096F630, 0x0096FFB0, 0x00990880, 0x00997540, 0x00B39470, 0x00B394E0, 0x018DC2B0,
            0x0195F8D0,
        ],
    },
    Shims {
        target: 0x00414BF0,
        members: &[0x00B39540, 0x00E0DFE0, 0x015CA5F0, 0x015E2C50, 0x015E3BD0],
    },
    Shims {
        target: 0x00414D00,
        members: &[0x01D11780],
    },
    Shims {
        target: 0x00414D20,
        members: &[0x00414DE0, 0x00414E00],
    },
    Shims {
        target: 0x00414D80,
        members: &[0x00414DF0, 0x00414E20],
    },
    Shims {
        target: 0x00414FF0,
        members: &[0x00587E70],
    },
    Shims {
        target: 0x00415430,
        members: &[0x00442AE0],
    },
    Shims {
        target: 0x00415460,
        members: &[0x0041E230],
    },
    Shims {
        target: 0x00415500,
        members: &[0x00A34260],
    },
    Shims {
        target: 0x004159C0,
        members: &[0x00415A60],
    },
    Shims {
        target: 0x00415AD0,
        members: &[0x005B8800],
    },
    Shims {
        target: 0x00415DD0,
        members: &[0x0041E210, 0x00E0FA40],
    },
    Shims {
        target: 0x00415EB0,
        members: &[0x00B23800],
    },
    Shims {
        target: 0x00416350,
        members: &[0x00416420],
    },
    Shims {
        target: 0x00416420,
        members: &[0x005940F0, 0x00900870, 0x0095E940],
    },
    Shims {
        target: 0x00416740,
        members: &[0x0041E1E0, 0x0041E1F0, 0x0041E200],
    },
    Shims {
        target: 0x004167A0,
        members: &[0x01430AC0, 0x01431770, 0x01431E70],
    },
    Shims {
        target: 0x004167D0,
        members: &[0x00418630, 0x00442B00],
    },
    Shims {
        target: 0x00416800,
        members: &[0x00C2F2C0, 0x00C2F3E0],
    },
    Shims {
        target: 0x00416830,
        members: &[0x005BF850, 0x007267A0, 0x00726820],
    },
    Shims {
        target: 0x004168B0,
        members: &[0x00B0CF80, 0x00DE5470],
    },
    Shims {
        target: 0x004168E0,
        members: &[0x00B0D0A0],
    },
    Shims {
        target: 0x004169A0,
        members: &[
            0x013B49B0, 0x0142FED0, 0x0142FF30, 0x01430070, 0x01432170, 0x01432260, 0x019F10C0,
            0x01D3D7F0, 0x01D3D880,
        ],
    },
    Shims {
        target: 0x00416BA0,
        members: &[0x010514C0, 0x01086B70],
    },
    Shims {
        target: 0x00416D10,
        members: &[0x00416DB0],
    },
    Shims {
        target: 0x00416DB0,
        members: &[
            0x00593F80, 0x007E4E10, 0x00A77DB0, 0x00A77DF0, 0x00F2F660, 0x00F8E7D0, 0x0174BC70,
            0x019561B0, 0x0195F300,
        ],
    },
    Shims {
        target: 0x00416DC0,
        members: &[0x005B8820, 0x005B8890, 0x00A74910, 0x00EA47E0],
    },
    Shims {
        target: 0x00416E20,
        members: &[0x00879060, 0x01C29C00],
    },
    Shims {
        target: 0x004170C0,
        members: &[
            0x004562E0, 0x004564B0, 0x005B8D30, 0x00876670, 0x01A45350, 0x01B251B0,
        ],
    },
    Shims {
        target: 0x00417580,
        members: &[0x005392C0],
    },
    Shims {
        target: 0x00417600,
        members: &[0x004175F0, 0x00417720],
    },
    Shims {
        target: 0x00417740,
        members: &[
            0x004401D0, 0x0049F9D0, 0x004A0100, 0x004D1AD0, 0x004F7E40, 0x004F81C0, 0x004FA950,
            0x004FACD0, 0x004FD9E0, 0x004FDD60, 0x00537160, 0x005484D0, 0x00548500, 0x00549720,
            0x00549750, 0x00554860, 0x0056EF10, 0x0056F290, 0x005715C0, 0x00571940, 0x005A2A40,
            0x005A2DC0, 0x005BAB00, 0x005BAED0, 0x005C3E60, 0x005C4EF0, 0x005C5270, 0x005C5350,
            0x005C7630, 0x005C79B0, 0x005DBA60, 0x005DBA90, 0x005DF580, 0x005DF900, 0x005E2DE0,
            0x005E3160, 0x00780C50, 0x00780E20, 0x00781A50, 0x00782290, 0x00798690, 0x00798A10,
            0x007A1FA0, 0x007A2320, 0x007AA530, 0x007AA610, 0x008555B0, 0x00855930, 0x00877170,
            0x009A99D0, 0x009B0D10, 0x009B1090, 0x009B1170, 0x009B2260, 0x009B25E0, 0x00A5B1E0,
            0x00BCF6B0, 0x00D80570, 0x00D80910, 0x00D80F60, 0x00D81000, 0x00D87560, 0x00D941C0,
            0x00D96230, 0x00D98B30, 0x00D9CE50, 0x00DDF480, 0x00DE0520, 0x00EA7810, 0x00EB1760,
            0x00EB1AE0, 0x00EECD10, 0x00EED090, 0x00F34400, 0x00F34A90, 0x00F39BD0, 0x00F39F50,
            0x00F84A70, 0x01144620, 0x011449A0, 0x01144A80, 0x01272BD0, 0x0129D730, 0x0129E130,
            0x013492F0, 0x0134E670, 0x014893D0, 0x01489750, 0x014A2BD0, 0x014A3340, 0x014A3D30,
            0x014A3F50, 0x014A4440, 0x014A4680, 0x014A4B20, 0x014F1340, 0x0157E370, 0x0157E750,
            0x015802B0, 0x01580EA0, 0x01580ED0, 0x01580F00, 0x01580F60, 0x01580F90, 0x01581540,
            0x01581570, 0x01581BD0, 0x01581C00, 0x01585040, 0x015862D0, 0x01586650, 0x01586730,
            0x01587810, 0x01587B90, 0x01587C70, 0x01589EF0, 0x0158A270, 0x015CA4E0, 0x015CB920,
            0x015D1D00, 0x015D1D30, 0x015D1D60, 0x015D1D90, 0x015D1DC0, 0x015D5700, 0x015D6D30,
            0x015DF230, 0x015E18F0, 0x0172C2C0, 0x0175BAE0, 0x0175BE60, 0x019B0D10, 0x019B1090,
            0x01B8A9F0, 0x01B8D870, 0x01B8DBF0, 0x01B8DCD0, 0x01BCA4A0, 0x01C23230, 0x01C23350,
            0x01C26AD0, 0x01CA8040, 0x01CA83C0, 0x01D39D60,
        ],
    },
    Shims {
        target: 0x00417840,
        members: &[
            0x004179B0, 0x0045B540, 0x004CA380, 0x004DB700, 0x004E2310, 0x004E5900, 0x004ECB10,
            0x004EE7D0, 0x005025B0, 0x005054F0, 0x00505940, 0x00505C40, 0x005061B0, 0x00537410,
            0x0053A690, 0x0053B140, 0x0053B530, 0x0053C420, 0x00542940, 0x005437A0, 0x0055E450,
            0x00560ED0, 0x00562F90, 0x00575AB0, 0x005760F0, 0x005A3990, 0x005A83B0, 0x005C22E0,
            0x005C8E50, 0x005D1E70, 0x005DBAB0, 0x005E0550, 0x005E3C40, 0x005E4330, 0x00681150,
            0x00685F10, 0x00687330, 0x006F5E40, 0x0072F590, 0x007423C0, 0x007780B0, 0x0078A6A0,
            0x0078D710, 0x0078F570, 0x007917D0, 0x00793B50, 0x00795E70, 0x007AF090, 0x007B0750,
            0x007B1C90, 0x007E7E20, 0x0083F3C0, 0x008468B0, 0x00846CD0, 0x008476C0, 0x00853140,
            0x00856740, 0x008771A0, 0x009A82D0, 0x009B71D0, 0x00A665B0, 0x00A92FC0, 0x00A98440,
            0x00A9FC80, 0x00AA5A00, 0x00AA8C00, 0x00AAE1E0, 0x00AAF330, 0x00BB6760, 0x00C2D780,
            0x00CE52C0, 0x00CE5690, 0x00CF23A0, 0x00D9FE50, 0x00EA6F50, 0x00EAF260, 0x00EB3CE0,
            0x00EEF560, 0x00F35080, 0x00F3B700, 0x00F85400, 0x01146D10, 0x0129CA20, 0x01486890,
            0x0148BC60, 0x015836B0, 0x0158BA00, 0x0158BDD0, 0x015C8E60, 0x015D3A70, 0x01637FD0,
            0x0171BEA0, 0x01752F20, 0x0175CC70, 0x017798E0, 0x01822BF0, 0x0182AC20, 0x0182C530,
            0x01848500, 0x0184F910, 0x018502E0, 0x01851E60, 0x018F0390, 0x019B2F20, 0x019C2240,
            0x019C3030, 0x019C7130, 0x019EB1C0, 0x01A91470, 0x01B15230, 0x01B26280, 0x01B80560,
            0x01B8EA30, 0x01CA58D0, 0x01CAA7C0, 0x01D105F0, 0x01D84E20,
        ],
    },
    Shims {
        target: 0x00417C40,
        members: &[
            0x0085D710, 0x00E061F0, 0x00EA74A0, 0x014EEC20, 0x01569CB0, 0x01A35AB0, 0x01B4EF40,
        ],
    },
    Shims {
        target: 0x00418590,
        members: &[0x005BFB70, 0x0084A280],
    },
    Shims {
        target: 0x00418630,
        members: &[0x004185F0],
    },
    Shims {
        target: 0x00418650,
        members: &[0x00418610],
    },
    Shims {
        target: 0x00418690,
        members: &[0x00418670],
    },
    Shims {
        target: 0x00418820,
        members: &[0x00418850],
    },
    Shims {
        target: 0x00418870,
        members: &[0x008752C0],
    },
    Shims {
        target: 0x00419430,
        members: &[
            0x0041E420, 0x0041E4A0, 0x0041E520, 0x0041E5A0, 0x0041E620, 0x0041E6A0, 0x0041E720,
            0x0041E7A0, 0x0041E820, 0x0041E920, 0x0041E9A0, 0x0041EA20, 0x0041EAA0, 0x0044D410,
            0x004C3C60, 0x004C5B60, 0x004D6760, 0x004D6BC0, 0x004D8E00, 0x004DBE30, 0x004E31D0,
            0x004E6730, 0x004ED930, 0x004EF4D0, 0x0053C630, 0x005424D0, 0x005425B0, 0x00542860,
            0x00547110, 0x00547130, 0x00547150, 0x00547170, 0x0055A130, 0x0055AD20, 0x0055C1F0,
            0x0055F150, 0x00561DF0, 0x00563DC0, 0x005894A0, 0x0058A6D0, 0x0058F510, 0x005983A0,
            0x005985E0, 0x00598830, 0x00598A80, 0x005A4690, 0x005B80F0, 0x005C3480, 0x005E1370,
            0x0060DC70, 0x00618960, 0x00619D20, 0x00653F30, 0x0065EA60, 0x006DC310, 0x006ED720,
            0x006EDE30, 0x006EE100, 0x00707650, 0x0078B380, 0x0078E410, 0x007903A0, 0x007924D0,
            0x00794970, 0x00796D90, 0x007E7980, 0x008540F0, 0x00879FD0, 0x0087A030, 0x008B1800,
            0x008E6A70, 0x009A92A0, 0x00A68250, 0x00A71870, 0x00AAE1B0, 0x00AAED00, 0x00AAF300,
            0x00AAFEA0, 0x00B00ED0, 0x00B0D4E0, 0x00C23990, 0x00CAE7C0, 0x00CB8790, 0x00CCC050,
            0x00CCC410, 0x00D47280, 0x00D76850, 0x00DA0B50, 0x00DA9BD0, 0x00DDF8F0, 0x00EB0090,
            0x00F35F40, 0x012444D0, 0x01426270, 0x0147DBC0, 0x014876C0, 0x01584690, 0x0171CB90,
            0x0177A760, 0x0184BEA0, 0x018774F0, 0x019B3BD0, 0x019C0540, 0x01A28C10, 0x01A92120,
            0x01B16150, 0x01B271E0, 0x01B504F0, 0x01C32DD0, 0x01CA6830, 0x01CC7CE0, 0x01D280F0,
        ],
    },
    Shims {
        target: 0x004194B0,
        members: &[
            0x004DCFE0, 0x004DE5F0, 0x004DF8E0, 0x004E0CB0, 0x004E4290, 0x004E73C0, 0x004E86B0,
            0x004EA140, 0x004EB4A0, 0x004F0450, 0x004F1740, 0x004F2F40, 0x004F42A0, 0x004F5AA0,
            0x004F7400, 0x004F8910, 0x004F9F10, 0x004FB420, 0x004FCFA0, 0x004FE4B0, 0x004FF5F0,
            0x00500880, 0x0055B110, 0x0055CD50, 0x00564B80, 0x00566320, 0x00567690, 0x00568AE0,
            0x00569E50, 0x0056B770, 0x0056CA30, 0x0056E4D0, 0x0056FA10, 0x00570B80, 0x005A2000,
            0x005A5BC0, 0x005A6E80, 0x005B4FD0, 0x005C44B0, 0x005C5A60, 0x005C6BF0, 0x005DEB40,
            0x005E23A0, 0x00614C50, 0x00716EE0, 0x0078C130, 0x00797C50, 0x007992F0, 0x0079A5E0,
            0x0079B8D0, 0x0079CAB0, 0x0079DD70, 0x0079F130, 0x007A03F0, 0x007A1560, 0x007A2AA0,
            0x007A3C10, 0x007A4F00, 0x007A6070, 0x007A71E0, 0x007A84D0, 0x007A9770, 0x007AACC0,
            0x0082CA20, 0x0082DB60, 0x00854B70, 0x008B9410, 0x008BA700, 0x0099CE70, 0x0099E160,
            0x0099F570, 0x009A0860, 0x009A1B50, 0x009A2E40, 0x009A4210, 0x009A4A10, 0x009A5210,
            0x009A5930, 0x009A6C20, 0x009AA160, 0x009AB530, 0x009AC9E0, 0x009ADB50, 0x009AECC0,
            0x009B02D0, 0x009B1820, 0x009B2F10, 0x009DDA00, 0x00BB4DD0, 0x00BE2260, 0x00BE3670,
            0x00C4E630, 0x00DA17A0, 0x00DA2A90, 0x00EB0D20, 0x00EB2260, 0x00EEC2D0, 0x00EED840,
            0x00F36D30, 0x00F38020, 0x00F39190, 0x01132920, 0x01143BE0, 0x01145130, 0x01488990,
            0x01489ED0, 0x01585870, 0x01586DD0, 0x01588350, 0x015894B0, 0x0167DCF0, 0x0167F110,
            0x01680770, 0x01681A60, 0x016D0390, 0x0171DA40, 0x0171ED30, 0x0171FEB0, 0x0175B0A0,
            0x01789410, 0x019B02D0, 0x019B1970, 0x01A92AF0, 0x01B11330, 0x01B128B0, 0x01B13BA0,
            0x01B16FC0, 0x01B27DB0, 0x01B8CE30, 0x01CA7600, 0x01CA8B40, 0x01D69390,
        ],
    },
    Shims {
        target: 0x00419840,
        members: &[0x004DC040, 0x00619F90],
    },
    Shims {
        target: 0x00419BA0,
        members: &[0x00419BD0],
    },
    Shims {
        target: 0x0041B520,
        members: &[0x0041B510],
    },
    Shims {
        target: 0x0041B5C0,
        members: &[0x0041B5A0],
    },
    Shims {
        target: 0x0041B5F0,
        members: &[0x0041B5B0],
    },
    Shims {
        target: 0x0041B6D0,
        members: &[0x0041F990],
    },
    Shims {
        target: 0x0041B800,
        members: &[0x005B4150, 0x007284D0, 0x0157EEC0, 0x01966F10],
    },
    Shims {
        target: 0x0041B840,
        members: &[
            0x0060DCE0, 0x006219C0, 0x007160B0, 0x008649E0, 0x00BAE690, 0x00BB3320,
        ],
    },
    Shims {
        target: 0x0041B890,
        members: &[
            0x008659D0, 0x00866040, 0x00866490, 0x00867900, 0x00867E80, 0x00868080, 0x00868350,
            0x008687D0,
        ],
    },
    Shims {
        target: 0x0041C380,
        members: &[0x0041C5D0, 0x0041C6D0],
    },
    Shims {
        target: 0x0041C450,
        members: &[0x0041C6F0, 0x0041C750],
    },
    Shims {
        target: 0x0041C5F0,
        members: &[0x0041C720, 0x0041C780],
    },
    Shims {
        target: 0x0041CA40,
        members: &[
            0x0041CDE0, 0x0041CF20, 0x0041D020, 0x0041D160, 0x0041D260, 0x0041D350,
        ],
    },
    Shims {
        target: 0x0041D5C0,
        members: &[0x009D36E0],
    },
    Shims {
        target: 0x0041D5D0,
        members: &[0x009D36F0],
    },
    Shims {
        target: 0x0041DAB0,
        members: &[0x0041DDB0],
    },
    Shims {
        target: 0x0041DD20,
        members: &[0x00410AE0],
    },
    Shims {
        target: 0x0041DDD0,
        members: &[
            0x004138E0, 0x00BC1EA0, 0x00D74990, 0x0106AE40, 0x01094D10, 0x010996F0, 0x0111A840,
            0x0111F5F0, 0x014B1FF0,
        ],
    },
    Shims {
        target: 0x0041DEA0,
        members: &[0x00414710, 0x0045B2B0, 0x00873940],
    },
    Shims {
        target: 0x0041DF30,
        members: &[0x0041DF60],
    },
    Shims {
        target: 0x0041E2A0,
        members: &[0x0045BDC0],
    },
    Shims {
        target: 0x0041ED80,
        members: &[0x0045BD60],
    },
    Shims {
        target: 0x0041EE00,
        members: &[0x0041EDD0, 0x0041F040],
    },
    Shims {
        target: 0x0041EF80,
        members: &[0x0041EF50, 0x0041F060],
    },
    Shims {
        target: 0x00422B30,
        members: &[0x00422EE0],
    },
    Shims {
        target: 0x00422E00,
        members: &[0x00422EA0, 0x00422F00],
    },
    Shims {
        target: 0x00422E20,
        members: &[0x00422E30],
    },
    Shims {
        target: 0x00423010,
        members: &[0x00422F60, 0x00422F90, 0x00422FD0],
    },
    Shims {
        target: 0x00423100,
        members: &[0x00423130],
    },
    Shims {
        target: 0x004231E0,
        members: &[0x00423210],
    },
    Shims {
        target: 0x00423280,
        members: &[0x00423170],
    },
    Shims {
        target: 0x004232E0,
        members: &[0x00423150],
    },
    Shims {
        target: 0x00423400,
        members: &[0x00423470, 0x00423490],
    },
    Shims {
        target: 0x004238D0,
        members: &[0x00788BE0, 0x00C2A220],
    },
    Shims {
        target: 0x004239D0,
        members: &[0x00423280],
    },
    Shims {
        target: 0x00423A60,
        members: &[0x004232E0],
    },
    Shims {
        target: 0x00423B30,
        members: &[0x004231D0],
    },
    Shims {
        target: 0x00423B80,
        members: &[0x00498370],
    },
    Shims {
        target: 0x00423CF0,
        members: &[0x00423D10],
    },
    Shims {
        target: 0x00423F10,
        members: &[0x00423F40],
    },
    Shims {
        target: 0x00424010,
        members: &[0x00424870, 0x004248A0, 0x004248D0, 0x00424900],
    },
    Shims {
        target: 0x00427790,
        members: &[0x0043E760, 0x0061DAD0],
    },
    Shims {
        target: 0x004277A0,
        members: &[0x0043E7A0, 0x0043E7E0],
    },
    Shims {
        target: 0x00427810,
        members: &[0x015BF580, 0x01B217D0],
    },
    Shims {
        target: 0x00427930,
        members: &[0x005FB7D0, 0x0060F160, 0x00618CB0, 0x015CA180],
    },
    Shims {
        target: 0x00427AB0,
        members: &[0x008752A0],
    },
    Shims {
        target: 0x00427DD0,
        members: &[0x004D1410, 0x00875120],
    },
    Shims {
        target: 0x00427FF0,
        members: &[
            0x005FB7F0, 0x005FE070, 0x00608F70, 0x0060AC60, 0x0060F180, 0x00618CD0, 0x015CA1A0,
        ],
    },
    Shims {
        target: 0x00428290,
        members: &[0x004D1E20],
    },
    Shims {
        target: 0x00431EF0,
        members: &[0x00CC3F30],
    },
    Shims {
        target: 0x0043D3F0,
        members: &[0x0043DB70, 0x0043DB90, 0x0043DBB0],
    },
    Shims {
        target: 0x0043E210,
        members: &[0x00593F60],
    },
    Shims {
        target: 0x0043E2C0,
        members: &[0x00593360, 0x005933A0],
    },
    Shims {
        target: 0x0043E420,
        members: &[0x004D39A0],
    },
    Shims {
        target: 0x0043E600,
        members: &[0x00879190],
    },
    Shims {
        target: 0x0043E650,
        members: &[0x0043E6B0],
    },
    Shims {
        target: 0x0043E6D0,
        members: &[0x0043E740, 0x00879070],
    },
    Shims {
        target: 0x0043E970,
        members: &[0x009E9640],
    },
    Shims {
        target: 0x0043F330,
        members: &[0x0043F7C0],
    },
    Shims {
        target: 0x0043F450,
        members: &[0x0043F7E0],
    },
    Shims {
        target: 0x0043F750,
        members: &[0x00DE5080, 0x01276DC0, 0x01471130],
    },
    Shims {
        target: 0x0043F780,
        members: &[0x00DE5980],
    },
    Shims {
        target: 0x0043FB20,
        members: &[0x0043FBA0],
    },
    Shims {
        target: 0x0043FB60,
        members: &[0x0043FBC0, 0x0043FBE0],
    },
    Shims {
        target: 0x0043FBC0,
        members: &[0x01CF1000],
    },
    Shims {
        target: 0x0043FC00,
        members: &[0x00F2FCB0, 0x0161AD90],
    },
    Shims {
        target: 0x0043FCB0,
        members: &[0x00F2FCD0],
    },
    Shims {
        target: 0x00440030,
        members: &[0x00DE5570],
    },
    Shims {
        target: 0x00440160,
        members: &[0x004401F0],
    },
    Shims {
        target: 0x00440710,
        members: &[0x004B97F0],
    },
    Shims {
        target: 0x00440B00,
        members: &[0x00B96DE0],
    },
    Shims {
        target: 0x00440C30,
        members: &[0x00B96DF0],
    },
    Shims {
        target: 0x00440F60,
        members: &[0x00C61FE0],
    },
    Shims {
        target: 0x00441070,
        members: &[0x015BF690],
    },
    Shims {
        target: 0x00441230,
        members: &[0x015BF5C0],
    },
    Shims {
        target: 0x00441290,
        members: &[0x015BF5F0],
    },
    Shims {
        target: 0x004412C0,
        members: &[0x005D0B20, 0x01059840, 0x015BF620, 0x0180BF10],
    },
    Shims {
        target: 0x004414C0,
        members: &[0x01565330, 0x01565380],
    },
    Shims {
        target: 0x00441640,
        members: &[0x015652E0],
    },
    Shims {
        target: 0x00441B20,
        members: &[0x005D2870],
    },
    Shims {
        target: 0x00441D00,
        members: &[0x015BF6D0],
    },
    Shims {
        target: 0x004423C0,
        members: &[0x015BF890],
    },
    Shims {
        target: 0x00442840,
        members: &[0x00CD7340],
    },
    Shims {
        target: 0x00442980,
        members: &[0x0044FE60],
    },
    Shims {
        target: 0x004429A0,
        members: &[0x0044FE50],
    },
    Shims {
        target: 0x004429E0,
        members: &[0x0044FE40],
    },
    Shims {
        target: 0x00442B40,
        members: &[0x00442B60],
    },
    Shims {
        target: 0x00442C30,
        members: &[
            0x00680BB0, 0x00680CC0, 0x006AADE0, 0x00C70590, 0x00C78B70, 0x00C78D40, 0x00C78F00,
            0x00C79510, 0x00C79840, 0x00C798E0, 0x00C7ACE0, 0x0177D500,
        ],
    },
    Shims {
        target: 0x00442D80,
        members: &[0x00442D50],
    },
    Shims {
        target: 0x00442DF0,
        members: &[0x00442DB0],
    },
    Shims {
        target: 0x00442E60,
        members: &[0x00442DD0],
    },
    Shims {
        target: 0x00442F00,
        members: &[0x00442ED0],
    },
    Shims {
        target: 0x00442FA0,
        members: &[0x00442F70],
    },
    Shims {
        target: 0x00442FF0,
        members: &[0x00442FA0, 0x00442FD0],
    },
    Shims {
        target: 0x00443450,
        members: &[0x00442D80],
    },
    Shims {
        target: 0x00445DD0,
        members: &[0x004462B0, 0x004462F0],
    },
    Shims {
        target: 0x00446F40,
        members: &[0x004471F0],
    },
    Shims {
        target: 0x004483D0,
        members: &[0x00448700],
    },
    Shims {
        target: 0x00448400,
        members: &[0x00448810],
    },
    Shims {
        target: 0x00448450,
        members: &[0x00448430, 0x00F2BB60],
    },
    Shims {
        target: 0x004485A0,
        members: &[0x00448580],
    },
    Shims {
        target: 0x00448650,
        members: &[0x00448630, 0x00F2BB80],
    },
    Shims {
        target: 0x00448700,
        members: &[0x004486E0],
    },
    Shims {
        target: 0x00448820,
        members: &[0x00448E40],
    },
    Shims {
        target: 0x00448880,
        members: &[0x004489D0],
    },
    Shims {
        target: 0x00448CB0,
        members: &[0x00448E20],
    },
    Shims {
        target: 0x0044A090,
        members: &[0x0044A2B0, 0x0044A300, 0x0044A350, 0x0044A3A0],
    },
    Shims {
        target: 0x0044A2B0,
        members: &[0x0044A290],
    },
    Shims {
        target: 0x0044A300,
        members: &[0x0044A2E0],
    },
    Shims {
        target: 0x0044A350,
        members: &[0x0044A330],
    },
    Shims {
        target: 0x0044A3A0,
        members: &[0x0044A380],
    },
    Shims {
        target: 0x0044B200,
        members: &[0x0044B1E0],
    },
    Shims {
        target: 0x0044B2C0,
        members: &[0x0044B2A0],
    },
    Shims {
        target: 0x0044B380,
        members: &[0x0044B360],
    },
    Shims {
        target: 0x0044BD60,
        members: &[0x0044BE40],
    },
    Shims {
        target: 0x0044D710,
        members: &[0x00534B60],
    },
    Shims {
        target: 0x0044E070,
        members: &[0x00874A10],
    },
    Shims {
        target: 0x0044E0F0,
        members: &[0x0044E1E0],
    },
    Shims {
        target: 0x0044F060,
        members: &[0x00879980],
    },
    Shims {
        target: 0x0044F080,
        members: &[0x00879960],
    },
    Shims {
        target: 0x0044F0A0,
        members: &[0x00879970],
    },
    Shims {
        target: 0x0044F850,
        members: &[0x00877B10],
    },
    Shims {
        target: 0x0044F900,
        members: &[0x005B8520, 0x00876690],
    },
    Shims {
        target: 0x0044FDB0,
        members: &[0x0044FE20],
    },
    Shims {
        target: 0x00450070,
        members: &[0x00456A20, 0x00456A50, 0x005B84F0, 0x00877C20, 0x0160F060],
    },
    Shims {
        target: 0x00450D60,
        members: &[0x004511F0],
    },
    Shims {
        target: 0x00451260,
        members: &[0x00451440, 0x01D85060],
    },
    Shims {
        target: 0x00451A00,
        members: &[0x00874A00],
    },
    Shims {
        target: 0x00452190,
        members: &[0x00621350, 0x00621400, 0x006216A0],
    },
    Shims {
        target: 0x00452290,
        members: &[0x00621500, 0x006215D0],
    },
    Shims {
        target: 0x00452320,
        members: &[0x018D0F20, 0x01955B20],
    },
    Shims {
        target: 0x00452E30,
        members: &[0x01A5A4C0],
    },
    Shims {
        target: 0x00452F00,
        members: &[0x004D7660],
    },
    Shims {
        target: 0x00452F70,
        members: &[0x004D7700],
    },
    Shims {
        target: 0x00452FB0,
        members: &[0x004D76A0],
    },
    Shims {
        target: 0x00453060,
        members: &[0x00453A40, 0x004D76C0, 0x004D77F0, 0x00F2FAD0, 0x00F32FE0],
    },
    Shims {
        target: 0x00453140,
        members: &[0x004D75C0],
    },
    Shims {
        target: 0x00453400,
        members: &[0x004D7540],
    },
    Shims {
        target: 0x00453470,
        members: &[0x004D75A0],
    },
    Shims {
        target: 0x00453560,
        members: &[0x004D7580],
    },
    Shims {
        target: 0x00453660,
        members: &[0x004D7560],
    },
    Shims {
        target: 0x00453740,
        members: &[0x004D7720],
    },
    Shims {
        target: 0x004537F0,
        members: &[0x004D76E0],
    },
    Shims {
        target: 0x00453860,
        members: &[0x004D7680],
    },
    Shims {
        target: 0x00453950,
        members: &[0x004D7740],
    },
    Shims {
        target: 0x004553D0,
        members: &[0x00455820],
    },
    Shims {
        target: 0x00455AE0,
        members: &[0x00455AC0],
    },
    Shims {
        target: 0x00456090,
        members: &[0x00456270],
    },
    Shims {
        target: 0x00456270,
        members: &[0x00456060],
    },
    Shims {
        target: 0x004563B0,
        members: &[0x005B84E0],
    },
    Shims {
        target: 0x00456550,
        members: &[0x004565C0],
    },
    Shims {
        target: 0x00456640,
        members: &[0x004565F0],
    },
    Shims {
        target: 0x004574B0,
        members: &[0x00456A80, 0x00456AB0],
    },
    Shims {
        target: 0x00458D50,
        members: &[0x0045A9D0],
    },
    Shims {
        target: 0x004592C0,
        members: &[0x00459280],
    },
    Shims {
        target: 0x004594F0,
        members: &[0x004594D0],
    },
    Shims {
        target: 0x00459D70,
        members: &[0x00459D40],
    },
    Shims {
        target: 0x00459FF0,
        members: &[0x00459FB0],
    },
    Shims {
        target: 0x0045A270,
        members: &[0x0045A210],
    },
    Shims {
        target: 0x0045ADF0,
        members: &[0x00B97C30],
    },
    Shims {
        target: 0x0045B570,
        members: &[0x0045B620],
    },
    Shims {
        target: 0x0045B660,
        members: &[0x0045B720],
    },
    Shims {
        target: 0x0045B810,
        members: &[0x0045B8C0, 0x0045BA80],
    },
    Shims {
        target: 0x0045C050,
        members: &[0x0045C030],
    },
    Shims {
        target: 0x0045C0D0,
        members: &[0x0045C110],
    },
    Shims {
        target: 0x0045C130,
        members: &[0x0045C1B0],
    },
    Shims {
        target: 0x00460BA0,
        members: &[
            0x004C0E40, 0x004C7880, 0x00588B70, 0x005892F0, 0x0086B490, 0x00A54110, 0x00A549A0,
            0x00A54BC0, 0x00A55980, 0x00A55AD0, 0x00A55C50, 0x00A58FE0, 0x00A93660, 0x00A93680,
            0x00A98370, 0x00A98390, 0x00A983B0, 0x00A983D0, 0x00A983F0, 0x00A98410, 0x00A9FB80,
            0x00A9FBA0, 0x00A9FBC0, 0x00A9FBE0, 0x00A9FC00, 0x00A9FC20, 0x00A9FC40, 0x00A9FC60,
            0x00AA59C0, 0x00AA59E0, 0x00AD7770, 0x00B11810, 0x00B11940, 0x00B11A30, 0x00B11B10,
            0x00B11E30, 0x00B4E670, 0x00B4E690, 0x00B4F170, 0x00B54920, 0x00B5DEF0, 0x00B5E040,
            0x00B5E150, 0x00B67220, 0x00DDF500, 0x00DDF990, 0x00DE0670, 0x00DE10D0, 0x00DE1F00,
            0x00EA7320, 0x0113D770, 0x01812840, 0x01816250, 0x01817140, 0x018171F0, 0x0182CF10,
            0x0182CF50, 0x01830290, 0x01830330, 0x018303D0, 0x01830470, 0x01830510, 0x018305B0,
            0x01831360, 0x018313F0, 0x018317E0, 0x01831CC0, 0x01831E40, 0x01837AE0, 0x01847B40,
            0x018486A0, 0x01849300, 0x018493B0, 0x0184C0E0, 0x0184C150, 0x0184C440, 0x0184C540,
            0x0184E090, 0x0184E4B0, 0x0184F3A0, 0x0184FB30, 0x0184FC60, 0x0184FD80, 0x01850570,
            0x01850820, 0x01850D40, 0x01851C50, 0x018799E0, 0x0187AA30, 0x018C6670, 0x018C7BE0,
            0x018C7FA0, 0x018C8670, 0x018E10C0, 0x018E1290, 0x018E1360, 0x018EA310, 0x018EA3E0,
            0x018F09F0, 0x0195EAA0, 0x0196F420, 0x01974200, 0x01977550, 0x01977610, 0x01977FD0,
            0x01980160, 0x019CEEF0, 0x01A5B180, 0x01A5B1A0, 0x01A5B230, 0x01B6E5F0, 0x01BD9870,
            0x01BD9C50, 0x01BDA000, 0x01BDA2F0, 0x01BDABA0, 0x01BDB070, 0x01BDB0E0, 0x01BDB140,
            0x01D82130, 0x01D827E0, 0x01D828C0,
        ],
    },
    Shims {
        target: 0x00461400,
        members: &[0x00625600],
    },
    Shims {
        target: 0x00461840,
        members: &[0x018475F0, 0x0195F6A0],
    },
    Shims {
        target: 0x00463F70,
        members: &[0x004644A0],
    },
    Shims {
        target: 0x00467E90,
        members: &[0x018479E0],
    },
    Shims {
        target: 0x00468A10,
        members: &[0x01849E70, 0x01963460],
    },
    Shims {
        target: 0x0046AF50,
        members: &[0x0046F320, 0x0046F340, 0x0046F360, 0x0046F3B0],
    },
    Shims {
        target: 0x0046CA40,
        members: &[0x01C206D0, 0x01D82100, 0x01D827B0],
    },
    Shims {
        target: 0x0046E750,
        members: &[0x01129AB0],
    },
    Shims {
        target: 0x0046E7B0,
        members: &[
            0x01129C10, 0x01129C30, 0x01129EA0, 0x0112AC40, 0x0112AC60, 0x0112AED0, 0x011302B0,
            0x011302D0, 0x011305D0, 0x011305F0,
        ],
    },
    Shims {
        target: 0x00498310,
        members: &[0x010F0A60, 0x017B5A60, 0x01955980],
    },
    Shims {
        target: 0x00498350,
        members: &[
            0x01740B30, 0x0174B100, 0x0174B700, 0x0174BD80, 0x0174C1C0, 0x0174C6F0, 0x0174CD70,
            0x01751540, 0x01751860, 0x01752B20, 0x01754D50, 0x017566F0, 0x017596A0, 0x01759C80,
            0x0197C110,
        ],
    },
    Shims {
        target: 0x00498370,
        members: &[0x017AFDF0],
    },
    Shims {
        target: 0x004A0A40,
        members: &[0x01B47CB0, 0x01B49D20, 0x01BA96E0],
    },
    Shims {
        target: 0x004A0BD0,
        members: &[0x004D5770],
    },
    Shims {
        target: 0x004A3210,
        members: &[0x005EF060, 0x005EF8F0, 0x005FC3C0, 0x00BD6C70],
    },
    Shims {
        target: 0x004A3290,
        members: &[0x005EF040, 0x005EF8D0, 0x005FC3A0, 0x00BD6C90],
    },
    Shims {
        target: 0x004AE230,
        members: &[0x00C0FC90],
    },
    Shims {
        target: 0x004AE6A0,
        members: &[0x004AEB00],
    },
    Shims {
        target: 0x004AE7E0,
        members: &[
            0x00610C90, 0x006113F0, 0x006117C0, 0x00808230, 0x009F46B0, 0x00AA6DF0, 0x00B196F0,
            0x00B28710, 0x00B353F0, 0x00B586F0, 0x00C0F490, 0x00D745A0, 0x00DE5B90, 0x00DE5EB0,
            0x00F1FD50, 0x0142FC80, 0x01847420, 0x018D3E90, 0x01BBB400, 0x01BFEDD0, 0x01BFEDF0,
        ],
    },
    Shims {
        target: 0x004AE870,
        members: &[0x00A748D0, 0x00A748F0, 0x00AFFC80, 0x010AF100],
    },
    Shims {
        target: 0x004AEA00,
        members: &[0x00C1AAC0],
    },
    Shims {
        target: 0x004AEAC0,
        members: &[
            0x004AEAB0, 0x00610EC0, 0x00610ED0, 0x00611480, 0x00611490, 0x00611760, 0x006D7610,
            0x006E5360, 0x006EEB80, 0x006FCA20, 0x00749D00, 0x0074B7E0, 0x00808020, 0x00808070,
            0x008080A0, 0x00808850, 0x009FA100, 0x00A08E00, 0x00A49450, 0x00A5EAB0, 0x00A5EAC0,
            0x00A72910, 0x00A73230, 0x00A78410, 0x00A78420, 0x00A78430, 0x00A79790, 0x00A7B020,
            0x00A94970, 0x00AA8DD0, 0x00AAB7D0, 0x00AC1A90, 0x00AC3910, 0x00AC4A60, 0x00AC4A70,
            0x00AC50C0, 0x00AC5660, 0x00AC5670, 0x00AC5680, 0x00AC5690, 0x00AC56A0, 0x00AC56B0,
            0x00B17A10, 0x00B19690, 0x00B1AE70, 0x00B28440, 0x00B28DC0, 0x00B28DF0, 0x00B2D4E0,
            0x00B353D0, 0x00B41F30, 0x00B41F60, 0x00B57390, 0x00B58320, 0x00BBF9F0, 0x00BD1300,
            0x00C11460, 0x00C11530, 0x00C1A9D0, 0x00C1AAE0, 0x00C52B60, 0x00C83030, 0x00CE6F60,
            0x00E01DE0, 0x00F6EB20, 0x00F6F040, 0x00F6F060, 0x00F70550, 0x00F70580, 0x00F750C0,
            0x00F81CC0, 0x0142FC60, 0x01574CD0, 0x01612BC0, 0x01619F30, 0x0161BC10, 0x0163FD00,
            0x018039F0, 0x0181E3C0, 0x01847630, 0x0184A250, 0x0184B520, 0x0184B910, 0x0184C6D0,
            0x0184F0F0, 0x018673A0, 0x01872F10, 0x01879FC0, 0x0187FCE0, 0x0187FD40, 0x01888B80,
            0x018C5910, 0x018CFA10, 0x018D3E60, 0x018D4260, 0x0197CA20, 0x0197F310, 0x0197F330,
            0x01980680, 0x019A7220, 0x01BE08F0, 0x01BE10E0,
        ],
    },
    Shims {
        target: 0x004AEBA0,
        members: &[
            0x00610EE0, 0x006114C0, 0x00744440, 0x00C1AB00, 0x01804370, 0x0181EB70,
        ],
    },
    Shims {
        target: 0x004AEBE0,
        members: &[0x00610EF0, 0x006114D0],
    },
    Shims {
        target: 0x004AEC30,
        members: &[0x00610F00, 0x006114E0, 0x00AFFD70, 0x00C1AB20],
    },
    Shims {
        target: 0x004AECF0,
        members: &[0x00610F10, 0x006114F0, 0x00C11540, 0x00C1AB40],
    },
    Shims {
        target: 0x004AED30,
        members: &[0x00C1AB60],
    },
    Shims {
        target: 0x004AEDB0,
        members: &[
            0x00610F90, 0x006115C0, 0x006EEBA0, 0x00AC53B0, 0x00BD1320, 0x00C11470, 0x00C1A9F0,
            0x00CE6F70, 0x01867610, 0x0197CA60, 0x0197F390, 0x0197F3B0,
        ],
    },
    Shims {
        target: 0x004AEE30,
        members: &[0x00F750D0, 0x01847440],
    },
    Shims {
        target: 0x004AEE50,
        members: &[
            0x004AEE30, 0x00610F60, 0x00610F80, 0x00611590, 0x006115B0, 0x00808250, 0x00C0F4B0,
            0x00C1AB80, 0x00D745C0, 0x019A4E10,
        ],
    },
    Shims {
        target: 0x004AF4A0,
        members: &[0x00B194F0],
    },
    Shims {
        target: 0x004AF5A0,
        members: &[
            0x004AF580, 0x00610DF0, 0x00610E10, 0x00611450, 0x00611470, 0x006114A0, 0x00C11550,
        ],
    },
    Shims {
        target: 0x004AFC10,
        members: &[0x00667A00],
    },
    Shims {
        target: 0x004AFD50,
        members: &[0x004AFD30, 0x00CC2640],
    },
    Shims {
        target: 0x004AFDC0,
        members: &[0x004B04A0],
    },
    Shims {
        target: 0x004B0260,
        members: &[0x004AFE80, 0x004B0240],
    },
    Shims {
        target: 0x004B04E0,
        members: &[0x004B04C0],
    },
    Shims {
        target: 0x004B0960,
        members: &[0x004B0940],
    },
    Shims {
        target: 0x004B1090,
        members: &[0x004B1190],
    },
    Shims {
        target: 0x004B17C0,
        members: &[0x00CE7150],
    },
    Shims {
        target: 0x004B1830,
        members: &[0x004B1A00],
    },
    Shims {
        target: 0x004B18B0,
        members: &[0x00F03130],
    },
    Shims {
        target: 0x004B1A10,
        members: &[0x00707C30],
    },
    Shims {
        target: 0x004B1A60,
        members: &[0x004B1FF0],
    },
    Shims {
        target: 0x004B1CA0,
        members: &[
            0x006D8700, 0x006EE140, 0x00726E20, 0x00727040, 0x0072A5D0, 0x007465C0, 0x00746840,
            0x00746A30, 0x00BD7240, 0x00C6FDA0, 0x00CBB1E0, 0x00CC3DF0, 0x00CE29D0, 0x00CE8D80,
            0x00CEB1B0, 0x00CF1490, 0x00F03850, 0x018163C0, 0x0196DC60, 0x01BFB5A0, 0x01BFB850,
        ],
    },
    Shims {
        target: 0x004B1E70,
        members: &[0x018A7610],
    },
    Shims {
        target: 0x004B2060,
        members: &[0x0195F540],
    },
    Shims {
        target: 0x004B2070,
        members: &[
            0x006A35D0, 0x006D8710, 0x006DA380, 0x006EDB10, 0x006EE150, 0x00707CD0, 0x00726EE0,
            0x00727070, 0x0072A770, 0x00746290, 0x00747090, 0x0089BCF0, 0x00BD7720, 0x00C6FE60,
            0x00CBB450, 0x00CC3EA0, 0x00CE29E0, 0x00CEB270, 0x00CF1550, 0x00F03860, 0x018163E0,
            0x01817000, 0x01881250, 0x01881590, 0x01881930, 0x0189D6B0, 0x018A4E90, 0x018B0AD0,
            0x0195E660, 0x0195E770, 0x0196D410, 0x0196DCF0, 0x01BF95E0, 0x01BF9610, 0x01BFB5F0,
            0x01BFB960,
        ],
    },
    Shims {
        target: 0x004B23B0,
        members: &[0x006EE1C0, 0x00C6FE80, 0x018163D0],
    },
    Shims {
        target: 0x004B2580,
        members: &[
            0x006D8730, 0x006DA3A0, 0x006EDB20, 0x00707CE0, 0x00726EF0, 0x00727080, 0x0072A830,
            0x007464B0, 0x00747330, 0x00BD87F0, 0x00C6FFC0, 0x00CBB460, 0x00CC3EB0, 0x00CE29F0,
            0x00CE8FF0, 0x00CEB280, 0x01BFBB30,
        ],
    },
    Shims {
        target: 0x004B25D0,
        members: &[0x006A3470, 0x00C6FFD0],
    },
    Shims {
        target: 0x004B25E0,
        members: &[0x00706490],
    },
    Shims {
        target: 0x004B2640,
        members: &[0x01BF95D0],
    },
    Shims {
        target: 0x004B2790,
        members: &[0x004B3CD0],
    },
    Shims {
        target: 0x004B3390,
        members: &[
            0x004AE660, 0x004B2EB0, 0x004B2F80, 0x004B30B0, 0x004B31C0, 0x004B3240, 0x004B36B0,
            0x004B4660, 0x004B4780, 0x004B48C0, 0x004B4EB0, 0x004B5320, 0x005DB4A0, 0x005DD190,
            0x005DD4F0, 0x005DD640, 0x005DD7B0, 0x005DE390, 0x005DE4E0, 0x005DE7B0, 0x0068AE90,
            0x00821C10, 0x008221D0, 0x0084CD10, 0x00895700, 0x0089C160, 0x0089C2D0, 0x009E7670,
            0x009FE190, 0x00A01470, 0x00B11F70, 0x00BCF2B0, 0x00BCF560, 0x00BD01F0, 0x00BD02D0,
            0x00BD0AC0, 0x00C0A930, 0x00CD8850, 0x00CD8B20, 0x00CD8E50, 0x00CD9130, 0x014C0950,
            0x01806E60, 0x0180D180,
        ],
    },
    Shims {
        target: 0x004B37D0,
        members: &[0x01B21440],
    },
    Shims {
        target: 0x004B3880,
        members: &[0x01B21460],
    },
    Shims {
        target: 0x004B3D70,
        members: &[0x005DC3B0],
    },
    Shims {
        target: 0x004B5390,
        members: &[0x005DC3D0, 0x00879940],
    },
    Shims {
        target: 0x004B5DA0,
        members: &[0x00A2A190, 0x00A75120],
    },
    Shims {
        target: 0x004B6930,
        members: &[0x0061D0F0],
    },
    Shims {
        target: 0x004B6D10,
        members: &[0x019797A0],
    },
    Shims {
        target: 0x004B6D40,
        members: &[0x004BDEE0],
    },
    Shims {
        target: 0x004B6DA0,
        members: &[
            0x004BEA20, 0x004C3810, 0x008F3840, 0x008F3BC0, 0x00C46A40, 0x01CC6540, 0x01CC80A0,
        ],
    },
    Shims {
        target: 0x004B6DC0,
        members: &[
            0x006063C0, 0x0060AAC0, 0x0060D180, 0x006E95E0, 0x008E6070, 0x008F9AA0, 0x00A0B800,
            0x00A3AEE0, 0x00C347F0, 0x00D02C30, 0x00DE69B0,
        ],
    },
    Shims {
        target: 0x004B6E40,
        members: &[0x01CC6560],
    },
    Shims {
        target: 0x004B8440,
        members: &[0x004B8420],
    },
    Shims {
        target: 0x004B89E0,
        members: &[0x00F60A20],
    },
    Shims {
        target: 0x004B8AA0,
        members: &[0x004B8A80],
    },
    Shims {
        target: 0x004B8D00,
        members: &[0x004D27E0],
    },
    Shims {
        target: 0x004B8DA0,
        members: &[0x004B8D80],
    },
    Shims {
        target: 0x004B9280,
        members: &[0x004B8E50],
    },
    Shims {
        target: 0x004BE030,
        members: &[0x004BF510, 0x004BF520],
    },
    Shims {
        target: 0x004BE2C0,
        members: &[0x004C1C40],
    },
    Shims {
        target: 0x004BE8E0,
        members: &[0x004BE7F0, 0x004C0160],
    },
    Shims {
        target: 0x004BEA90,
        members: &[0x004C23C0],
    },
    Shims {
        target: 0x004BF480,
        members: &[0x004BF500],
    },
    Shims {
        target: 0x004C00F0,
        members: &[0x004D3060],
    },
    Shims {
        target: 0x004C06C0,
        members: &[0x007079D0],
    },
    Shims {
        target: 0x004C1ED0,
        members: &[0x004C23A0],
    },
    Shims {
        target: 0x004C3930,
        members: &[0x004C80B0],
    },
    Shims {
        target: 0x004C3A60,
        members: &[0x004C38A0],
    },
    Shims {
        target: 0x004C4460,
        members: &[0x004C45C0],
    },
    Shims {
        target: 0x004C4790,
        members: &[0x006502F0, 0x00D77A50],
    },
    Shims {
        target: 0x004C5360,
        members: &[0x004C8090],
    },
    Shims {
        target: 0x004C57A0,
        members: &[
            0x004D2840, 0x004D2860, 0x004D6150, 0x004D6170, 0x004D6190, 0x004D61B0, 0x006526B0,
            0x006526D0, 0x006526F0, 0x00652730,
        ],
    },
    Shims {
        target: 0x004C81B0,
        members: &[0x004C8500],
    },
    Shims {
        target: 0x004C8510,
        members: &[0x004C4890, 0x004C48A0],
    },
    Shims {
        target: 0x004C9040,
        members: &[0x004C8FB0],
    },
    Shims {
        target: 0x004CE4B0,
        members: &[0x004D0E80],
    },
    Shims {
        target: 0x004D1280,
        members: &[0x004D1E30],
    },
    Shims {
        target: 0x004D1410,
        members: &[0x004DBF00, 0x00619E70],
    },
    Shims {
        target: 0x004D21B0,
        members: &[0x004D2FA0],
    },
    Shims {
        target: 0x004D29F0,
        members: &[0x00D774C0],
    },
    Shims {
        target: 0x004D2B10,
        members: &[0x00D774D0],
    },
    Shims {
        target: 0x004D2E60,
        members: &[0x00BC1C80],
    },
    Shims {
        target: 0x004D3040,
        members: &[0x0195F0D0],
    },
    Shims {
        target: 0x004D3DE0,
        members: &[0x00D77CA0],
    },
    Shims {
        target: 0x004D3E30,
        members: &[0x00D77C90],
    },
    Shims {
        target: 0x004D62F0,
        members: &[0x007F98D0],
    },
    Shims {
        target: 0x004D6550,
        members: &[0x007F9910],
    },
    Shims {
        target: 0x004DBE50,
        members: &[0x004DBEE0],
    },
    Shims {
        target: 0x004DC430,
        members: &[0x004DC3A0],
    },
    Shims {
        target: 0x004DC690,
        members: &[0x004D6CF0, 0x004D7080],
    },
    Shims {
        target: 0x004DCCC0,
        members: &[0x004B0C90],
    },
    Shims {
        target: 0x004DCD20,
        members: &[0x004DCD00],
    },
    Shims {
        target: 0x004DD770,
        members: &[0x004DD7A0],
    },
    Shims {
        target: 0x004DD7A0,
        members: &[0x004DD6B0],
    },
    Shims {
        target: 0x004DD7D0,
        members: &[0x004DD6E0],
    },
    Shims {
        target: 0x004DD8E0,
        members: &[0x004DD710],
    },
    Shims {
        target: 0x004DE390,
        members: &[0x004DD2B0, 0x004DE2A0],
    },
    Shims {
        target: 0x004DECE0,
        members: &[0x004DED10],
    },
    Shims {
        target: 0x004DED10,
        members: &[0x004DEC30],
    },
    Shims {
        target: 0x004DED40,
        members: &[0x004DEC60],
    },
    Shims {
        target: 0x004DEE30,
        members: &[0x004DEC90],
    },
    Shims {
        target: 0x004DF680,
        members: &[0x004DE840, 0x004DF600],
    },
    Shims {
        target: 0x004DFFD0,
        members: &[0x004E0000],
    },
    Shims {
        target: 0x004E0000,
        members: &[0x004DFF20],
    },
    Shims {
        target: 0x004E0030,
        members: &[0x004DFF50],
    },
    Shims {
        target: 0x004E0120,
        members: &[0x004DFF80],
    },
    Shims {
        target: 0x004E0970,
        members: &[0x004DFB30, 0x004E08F0],
    },
    Shims {
        target: 0x004E0A50,
        members: &[0x00DA0FD0],
    },
    Shims {
        target: 0x004E13A0,
        members: &[0x004E13D0],
    },
    Shims {
        target: 0x004E13D0,
        members: &[0x004E12F0],
    },
    Shims {
        target: 0x004E1400,
        members: &[0x004E1320],
    },
    Shims {
        target: 0x004E14F0,
        members: &[0x004E1350],
    },
    Shims {
        target: 0x004E1D40,
        members: &[0x004E0F00, 0x004E1CC0],
    },
    Shims {
        target: 0x004E1E40,
        members: &[0x004E34A0],
    },
    Shims {
        target: 0x004E2140,
        members: &[0x004E31F0],
    },
    Shims {
        target: 0x004E3530,
        members: &[0x004E28B0],
    },
    Shims {
        target: 0x004E3550,
        members: &[
            0x004E38A0, 0x005E1D60, 0x0078B7E0, 0x009A9730, 0x019B4030, 0x019B42A0,
        ],
    },
    Shims {
        target: 0x004E3880,
        members: &[0x004E37C0],
    },
    Shims {
        target: 0x004E38D0,
        members: &[0x004E38F0],
    },
    Shims {
        target: 0x004E3910,
        members: &[0x004E3880],
    },
    Shims {
        target: 0x004E3A20,
        members: &[0x004E3DE0],
    },
    Shims {
        target: 0x004E3DC0,
        members: &[0x004E3D00],
    },
    Shims {
        target: 0x004E3E10,
        members: &[0x004E3E40],
    },
    Shims {
        target: 0x004E3E70,
        members: &[0x004E3DC0],
    },
    Shims {
        target: 0x004E3F80,
        members: &[0x004E3FD0],
    },
    Shims {
        target: 0x004E4000,
        members: &[0x004E3530],
    },
    Shims {
        target: 0x004E4980,
        members: &[0x004E49B0],
    },
    Shims {
        target: 0x004E49B0,
        members: &[0x004E48D0],
    },
    Shims {
        target: 0x004E49E0,
        members: &[0x004E4900],
    },
    Shims {
        target: 0x004E4AD0,
        members: &[0x004E4930],
    },
    Shims {
        target: 0x004E5320,
        members: &[0x004E44E0, 0x004E52A0],
    },
    Shims {
        target: 0x004E5430,
        members: &[0x004E6A10],
    },
    Shims {
        target: 0x004E5730,
        members: &[0x004E6750],
    },
    Shims {
        target: 0x004E6AA0,
        members: &[0x004E5E80],
    },
    Shims {
        target: 0x004E6B90,
        members: &[0x004E6AD0],
    },
    Shims {
        target: 0x004E6BE0,
        members: &[0x004E6C20],
    },
    Shims {
        target: 0x004E6C50,
        members: &[0x004E6B90],
    },
    Shims {
        target: 0x004E6D60,
        members: &[0x004E70B0],
    },
    Shims {
        target: 0x004E7090,
        members: &[0x004E6FD0],
    },
    Shims {
        target: 0x004E70E0,
        members: &[0x004E7100],
    },
    Shims {
        target: 0x004E7120,
        members: &[0x004E7090],
    },
    Shims {
        target: 0x004E7230,
        members: &[0x004E7280],
    },
    Shims {
        target: 0x004E72B0,
        members: &[0x004E6AA0],
    },
    Shims {
        target: 0x004E7AB0,
        members: &[0x004E7AE0],
    },
    Shims {
        target: 0x004E7AE0,
        members: &[0x004E7A00],
    },
    Shims {
        target: 0x004E7B10,
        members: &[0x004E7A30],
    },
    Shims {
        target: 0x004E7C00,
        members: &[0x004E7A60],
    },
    Shims {
        target: 0x004E8450,
        members: &[0x004E7610, 0x004E83D0],
    },
    Shims {
        target: 0x004E8DA0,
        members: &[0x004E8DD0],
    },
    Shims {
        target: 0x004E8DD0,
        members: &[0x004E8CF0],
    },
    Shims {
        target: 0x004E8E00,
        members: &[0x004E8D20],
    },
    Shims {
        target: 0x004E8EF0,
        members: &[0x004E8D50],
    },
    Shims {
        target: 0x004E9740,
        members: &[0x004E8900, 0x004E96C0],
    },
    Shims {
        target: 0x004E9EC0,
        members: &[0x004E9EA0],
    },
    Shims {
        target: 0x004EA8A0,
        members: &[0x004EA8D0],
    },
    Shims {
        target: 0x004EA8D0,
        members: &[0x004EA7F0],
    },
    Shims {
        target: 0x004EA900,
        members: &[0x004EA820],
    },
    Shims {
        target: 0x004EA9F0,
        members: &[0x004EA850],
    },
    Shims {
        target: 0x004EB240,
        members: &[0x004EA400, 0x004EB1C0],
    },
    Shims {
        target: 0x004EBB90,
        members: &[0x004EBBC0],
    },
    Shims {
        target: 0x004EBBC0,
        members: &[0x004EBAE0],
    },
    Shims {
        target: 0x004EBBF0,
        members: &[0x004EBB10],
    },
    Shims {
        target: 0x004EBCE0,
        members: &[0x004EBB40],
    },
    Shims {
        target: 0x004EC530,
        members: &[0x004EB6F0, 0x004EC4B0],
    },
    Shims {
        target: 0x004EC640,
        members: &[0x004EDC10],
    },
    Shims {
        target: 0x004EC940,
        members: &[0x004ED950],
    },
    Shims {
        target: 0x004EDCA0,
        members: &[0x004ED080],
    },
    Shims {
        target: 0x004EDD90,
        members: &[0x004EDCD0],
    },
    Shims {
        target: 0x004EDDE0,
        members: &[0x004EDE20],
    },
    Shims {
        target: 0x004EDE50,
        members: &[0x004EDD90],
    },
    Shims {
        target: 0x004EE030,
        members: &[0x004EDF70],
    },
    Shims {
        target: 0x004EE080,
        members: &[0x004EE0A0],
    },
    Shims {
        target: 0x004EE0C0,
        members: &[0x004EE030],
    },
    Shims {
        target: 0x004EE1D0,
        members: &[0x004EE220],
    },
    Shims {
        target: 0x004EE250,
        members: &[0x004EDCA0],
    },
    Shims {
        target: 0x004EE370,
        members: &[0x004EF7B0],
    },
    Shims {
        target: 0x004EE600,
        members: &[0x004EF4F0],
    },
    Shims {
        target: 0x004EF840,
        members: &[0x004EECA0],
    },
    Shims {
        target: 0x004EF930,
        members: &[0x004EF870],
    },
    Shims {
        target: 0x004EF980,
        members: &[0x004EF9A0],
    },
    Shims {
        target: 0x004EF9C0,
        members: &[0x004EF930],
    },
    Shims {
        target: 0x004EFAD0,
        members: &[0x004EFE20],
    },
    Shims {
        target: 0x004EFE00,
        members: &[0x004EFD40],
    },
    Shims {
        target: 0x004EFE50,
        members: &[0x004EFE70],
    },
    Shims {
        target: 0x004EFE90,
        members: &[0x004EFE00],
    },
    Shims {
        target: 0x004EFFA0,
        members: &[0x004EFFE0],
    },
    Shims {
        target: 0x004F0010,
        members: &[0x004EF840],
    },
    Shims {
        target: 0x004F0B40,
        members: &[0x004F0B70],
    },
    Shims {
        target: 0x004F0B70,
        members: &[0x004F0A90],
    },
    Shims {
        target: 0x004F0BA0,
        members: &[0x004F0AC0],
    },
    Shims {
        target: 0x004F0C90,
        members: &[0x004F0AF0],
    },
    Shims {
        target: 0x004F14E0,
        members: &[0x004F06A0, 0x004F1460],
    },
    Shims {
        target: 0x004F1E30,
        members: &[0x004F1E60],
    },
    Shims {
        target: 0x004F1E60,
        members: &[0x004F1D80],
    },
    Shims {
        target: 0x004F1E90,
        members: &[0x004F1DB0],
    },
    Shims {
        target: 0x004F1F80,
        members: &[0x004F1DE0],
    },
    Shims {
        target: 0x004F27D0,
        members: &[0x004F1990, 0x004F2750],
    },
    Shims {
        target: 0x004F2CC0,
        members: &[0x004F2CA0],
    },
    Shims {
        target: 0x004F36A0,
        members: &[0x004F36D0],
    },
    Shims {
        target: 0x004F36D0,
        members: &[0x004F35F0],
    },
    Shims {
        target: 0x004F3700,
        members: &[0x004F3620],
    },
    Shims {
        target: 0x004F37F0,
        members: &[0x004F3650],
    },
    Shims {
        target: 0x004F4040,
        members: &[0x004F3200, 0x004F3FC0],
    },
    Shims {
        target: 0x004F4990,
        members: &[0x004F49C0],
    },
    Shims {
        target: 0x004F49C0,
        members: &[0x004F48E0],
    },
    Shims {
        target: 0x004F49F0,
        members: &[0x004F4910],
    },
    Shims {
        target: 0x004F4AE0,
        members: &[0x004F4940],
    },
    Shims {
        target: 0x004F5330,
        members: &[0x004F44F0, 0x004F52B0],
    },
    Shims {
        target: 0x004F5820,
        members: &[0x004F5800],
    },
    Shims {
        target: 0x004F6200,
        members: &[0x004F6230],
    },
    Shims {
        target: 0x004F6230,
        members: &[0x004F6150],
    },
    Shims {
        target: 0x004F6260,
        members: &[0x004F6180],
    },
    Shims {
        target: 0x004F6350,
        members: &[0x004F61B0],
    },
    Shims {
        target: 0x004F6BA0,
        members: &[0x004F5D60, 0x004F6B20],
    },
    Shims {
        target: 0x004F7B00,
        members: &[0x004F7B30],
    },
    Shims {
        target: 0x004F7B30,
        members: &[0x004F7A50],
    },
    Shims {
        target: 0x004F7B60,
        members: &[0x004F7A80],
    },
    Shims {
        target: 0x004F7C90,
        members: &[0x004F7AB0],
    },
    Shims {
        target: 0x004F8830,
        members: &[0x004F7660, 0x004F8710],
    },
    Shims {
        target: 0x004F9030,
        members: &[0x004F9060],
    },
    Shims {
        target: 0x004F9060,
        members: &[0x004F8F70],
    },
    Shims {
        target: 0x004F9090,
        members: &[0x004F8FA0],
    },
    Shims {
        target: 0x004F91A0,
        members: &[0x004F8FD0],
    },
    Shims {
        target: 0x004F9C50,
        members: &[0x004F8B70, 0x004F9B60],
    },
    Shims {
        target: 0x004FA610,
        members: &[0x004FA640],
    },
    Shims {
        target: 0x004FA640,
        members: &[0x004FA560],
    },
    Shims {
        target: 0x004FA670,
        members: &[0x004FA590],
    },
    Shims {
        target: 0x004FA7A0,
        members: &[0x004FA5C0],
    },
    Shims {
        target: 0x004FB340,
        members: &[0x004FA170, 0x004FB220],
    },
    Shims {
        target: 0x004FBB40,
        members: &[0x004FBB70],
    },
    Shims {
        target: 0x004FBB70,
        members: &[0x004FBA80],
    },
    Shims {
        target: 0x004FBBA0,
        members: &[0x004FBAB0],
    },
    Shims {
        target: 0x004FBCB0,
        members: &[0x004FBAE0],
    },
    Shims {
        target: 0x004FC740,
        members: &[0x004FB680, 0x004FC650],
    },
    Shims {
        target: 0x004FD6A0,
        members: &[0x004FD6D0],
    },
    Shims {
        target: 0x004FD6D0,
        members: &[0x004FD5F0],
    },
    Shims {
        target: 0x004FD700,
        members: &[0x004FD620],
    },
    Shims {
        target: 0x004FD830,
        members: &[0x004FD650],
    },
    Shims {
        target: 0x004FE3D0,
        members: &[0x004FD200, 0x004FE2B0],
    },
    Shims {
        target: 0x004FEBA0,
        members: &[0x004FEBD0],
    },
    Shims {
        target: 0x004FEBD0,
        members: &[0x004FEAF0],
    },
    Shims {
        target: 0x004FEC00,
        members: &[0x004FEB20],
    },
    Shims {
        target: 0x004FECF0,
        members: &[0x004FEB50],
    },
    Shims {
        target: 0x004FF510,
        members: &[0x004FE700, 0x004FF4B0],
    },
    Shims {
        target: 0x004FFCE0,
        members: &[0x004FFD10],
    },
    Shims {
        target: 0x004FFD10,
        members: &[0x004FFC30],
    },
    Shims {
        target: 0x004FFD40,
        members: &[0x004FFC60],
    },
    Shims {
        target: 0x004FFE40,
        members: &[0x004FFC90],
    },
    Shims {
        target: 0x005007A0,
        members: &[0x004FF840, 0x005006F0],
    },
    Shims {
        target: 0x00500F70,
        members: &[0x00500FA0],
    },
    Shims {
        target: 0x00500FA0,
        members: &[0x00500EC0],
    },
    Shims {
        target: 0x00500FD0,
        members: &[0x00500EF0],
    },
    Shims {
        target: 0x005010C0,
        members: &[0x00500F20],
    },
    Shims {
        target: 0x00501910,
        members: &[0x00500AD0, 0x00501890],
    },
    Shims {
        target: 0x00525420,
        members: &[0x00592EE0, 0x00593380, 0x005933D0, 0x00594090],
    },
    Shims {
        target: 0x00525D90,
        members: &[0x01236AD0],
    },
    Shims {
        target: 0x00526300,
        members: &[0x016A9D50],
    },
    Shims {
        target: 0x005263F0,
        members: &[0x016A9D70],
    },
    Shims {
        target: 0x00526DA0,
        members: &[0x016AA740],
    },
    Shims {
        target: 0x00526E00,
        members: &[0x016AA720],
    },
    Shims {
        target: 0x00526E50,
        members: &[0x016AA760],
    },
    Shims {
        target: 0x00527140,
        members: &[0x01D3A740],
    },
    Shims {
        target: 0x005274A0,
        members: &[0x005274E0],
    },
    Shims {
        target: 0x005274E0,
        members: &[
            0x0098A880, 0x00998C40, 0x00999410, 0x00999B30, 0x0099A250, 0x0099A970, 0x0099B090,
            0x0099B2F0, 0x0099B520, 0x0099B750, 0x0099B980, 0x0099BC00, 0x0099BDE0,
        ],
    },
    Shims {
        target: 0x00536090,
        members: &[0x00536400],
    },
    Shims {
        target: 0x00536A90,
        members: &[0x00541750],
    },
    Shims {
        target: 0x00537630,
        members: &[0x005601C0, 0x00560540],
    },
    Shims {
        target: 0x0053C450,
        members: &[0x0053C690],
    },
    Shims {
        target: 0x0053C470,
        members: &[0x0053C4A0, 0x0053C4C0, 0x0053C4F0, 0x0053C520],
    },
    Shims {
        target: 0x0053C590,
        members: &[0x00553710],
    },
    Shims {
        target: 0x0053C6D0,
        members: &[0x00553050],
    },
    Shims {
        target: 0x005425D0,
        members: &[0x00542610],
    },
    Shims {
        target: 0x00542630,
        members: &[0x005586C0, 0x00559C80],
    },
    Shims {
        target: 0x00542970,
        members: &[0x005527F0, 0x005598F0],
    },
    Shims {
        target: 0x00542EF0,
        members: &[0x00545CD0],
    },
    Shims {
        target: 0x00545CF0,
        members: &[0x004C5430, 0x004C5DF0, 0x0058ACC0],
    },
    Shims {
        target: 0x00545F10,
        members: &[0x00546050],
    },
    Shims {
        target: 0x00547190,
        members: &[
            0x0054C2B0, 0x0054C2D0, 0x0054C470, 0x00553D10, 0x00553D50, 0x00553F50, 0x00559610,
        ],
    },
    Shims {
        target: 0x005485A0,
        members: &[0x005486C0],
    },
    Shims {
        target: 0x005486C0,
        members: &[0x00548610],
    },
    Shims {
        target: 0x00548D90,
        members: &[0x00548C50],
    },
    Shims {
        target: 0x0054A0D0,
        members: &[0x0054A0C0],
    },
    Shims {
        target: 0x0054BFE0,
        members: &[0x0054BFF0],
    },
    Shims {
        target: 0x0054C150,
        members: &[0x0054C130],
    },
    Shims {
        target: 0x005521F0,
        members: &[0x00552FA0],
    },
    Shims {
        target: 0x00552420,
        members: &[0x00552F50],
    },
    Shims {
        target: 0x00552430,
        members: &[0x00552F70],
    },
    Shims {
        target: 0x00552470,
        members: &[0x00553670],
    },
    Shims {
        target: 0x00552B00,
        members: &[0x00552B30],
    },
    Shims {
        target: 0x005586E0,
        members: &[0x00558B70],
    },
    Shims {
        target: 0x00558CF0,
        members: &[0x00558D00],
    },
    Shims {
        target: 0x00559680,
        members: &[0x00559670],
    },
    Shims {
        target: 0x0055C290,
        members: &[0x0055C2C0, 0x0055C2E0],
    },
    Shims {
        target: 0x0055D440,
        members: &[0x0055D470],
    },
    Shims {
        target: 0x0055D470,
        members: &[0x0055D390],
    },
    Shims {
        target: 0x0055D4A0,
        members: &[0x0055D3C0],
    },
    Shims {
        target: 0x0055D5A0,
        members: &[0x0055D3F0],
    },
    Shims {
        target: 0x0055DF00,
        members: &[0x0055CFA0, 0x0055DE50],
    },
    Shims {
        target: 0x0055DFF0,
        members: &[0x0055F430],
    },
    Shims {
        target: 0x0055E280,
        members: &[0x0055F170],
    },
    Shims {
        target: 0x0055F4C0,
        members: &[0x0055E920],
    },
    Shims {
        target: 0x0055F4E0,
        members: &[0x0055F830],
    },
    Shims {
        target: 0x0055F810,
        members: &[0x0055F750],
    },
    Shims {
        target: 0x0055F860,
        members: &[0x0055F880],
    },
    Shims {
        target: 0x0055F8A0,
        members: &[0x0055F810],
    },
    Shims {
        target: 0x0055F9B0,
        members: &[0x0055FD00],
    },
    Shims {
        target: 0x0055FCE0,
        members: &[0x0055FC20],
    },
    Shims {
        target: 0x0055FD30,
        members: &[0x0055FD50],
    },
    Shims {
        target: 0x0055FD70,
        members: &[0x0055FCE0],
    },
    Shims {
        target: 0x0055FE80,
        members: &[0x0055FEC0],
    },
    Shims {
        target: 0x0055FEF0,
        members: &[0x0055F4C0],
    },
    Shims {
        target: 0x005601C0,
        members: &[0x00537460],
    },
    Shims {
        target: 0x005601F0,
        members: &[0x00537470],
    },
    Shims {
        target: 0x00560490,
        members: &[0x00537A50],
    },
    Shims {
        target: 0x00560570,
        members: &[0x00537D40],
    },
    Shims {
        target: 0x00560A00,
        members: &[0x005620E0],
    },
    Shims {
        target: 0x00560D00,
        members: &[0x00561E10],
    },
    Shims {
        target: 0x00562170,
        members: &[0x005614B0],
    },
    Shims {
        target: 0x00562190,
        members: &[0x005624E0, 0x005644E0],
    },
    Shims {
        target: 0x005624C0,
        members: &[0x00562400],
    },
    Shims {
        target: 0x00562510,
        members: &[0x00562530],
    },
    Shims {
        target: 0x00562550,
        members: &[0x005624C0],
    },
    Shims {
        target: 0x00562730,
        members: &[0x00562670],
    },
    Shims {
        target: 0x00562780,
        members: &[0x005627C0],
    },
    Shims {
        target: 0x005627F0,
        members: &[0x00562730],
    },
    Shims {
        target: 0x00562900,
        members: &[0x00562950],
    },
    Shims {
        target: 0x00562980,
        members: &[0x00562170],
    },
    Shims {
        target: 0x00562AC0,
        members: &[0x005640A0],
    },
    Shims {
        target: 0x00562DC0,
        members: &[0x00563DE0],
    },
    Shims {
        target: 0x00564130,
        members: &[0x00563510],
    },
    Shims {
        target: 0x00564220,
        members: &[0x00564160],
    },
    Shims {
        target: 0x00564270,
        members: &[0x005642B0],
    },
    Shims {
        target: 0x005642E0,
        members: &[0x00564220],
    },
    Shims {
        target: 0x005644C0,
        members: &[0x00564400],
    },
    Shims {
        target: 0x00564510,
        members: &[0x00564530],
    },
    Shims {
        target: 0x00564550,
        members: &[0x005644C0],
    },
    Shims {
        target: 0x00564660,
        members: &[0x005646B0],
    },
    Shims {
        target: 0x005646E0,
        members: &[0x00564130],
    },
    Shims {
        target: 0x00565270,
        members: &[0x005652A0],
    },
    Shims {
        target: 0x005652A0,
        members: &[0x005651C0],
    },
    Shims {
        target: 0x005652D0,
        members: &[0x005651F0],
    },
    Shims {
        target: 0x005653C0,
        members: &[0x00565220],
    },
    Shims {
        target: 0x00565C10,
        members: &[0x00564DD0, 0x00565B90],
    },
    Shims {
        target: 0x00566A10,
        members: &[0x00566A40],
    },
    Shims {
        target: 0x00566A40,
        members: &[0x00566960],
    },
    Shims {
        target: 0x00566A70,
        members: &[0x00566990],
    },
    Shims {
        target: 0x00566B60,
        members: &[0x005669C0],
    },
    Shims {
        target: 0x005673B0,
        members: &[0x00566570, 0x00567330],
    },
    Shims {
        target: 0x00567D80,
        members: &[0x00567DB0],
    },
    Shims {
        target: 0x00567DB0,
        members: &[0x00567CD0],
    },
    Shims {
        target: 0x00567DE0,
        members: &[0x00567D00],
    },
    Shims {
        target: 0x00567ED0,
        members: &[0x00567D30],
    },
    Shims {
        target: 0x00568720,
        members: &[0x005678E0, 0x005686A0],
    },
    Shims {
        target: 0x005691D0,
        members: &[0x00569200],
    },
    Shims {
        target: 0x00569200,
        members: &[0x00569120],
    },
    Shims {
        target: 0x00569230,
        members: &[0x00569150],
    },
    Shims {
        target: 0x00569320,
        members: &[0x00569180],
    },
    Shims {
        target: 0x00569B70,
        members: &[0x00568D30, 0x00569AF0],
    },
    Shims {
        target: 0x0056A540,
        members: &[0x0056A570],
    },
    Shims {
        target: 0x0056A570,
        members: &[0x0056A490],
    },
    Shims {
        target: 0x0056A5A0,
        members: &[0x0056A4C0],
    },
    Shims {
        target: 0x0056A690,
        members: &[0x0056A4F0],
    },
    Shims {
        target: 0x0056AEE0,
        members: &[0x0056A0A0, 0x0056AE60],
    },
    Shims {
        target: 0x0056BE60,
        members: &[0x0056BE90],
    },
    Shims {
        target: 0x0056BE90,
        members: &[0x0056BDB0],
    },
    Shims {
        target: 0x0056BEC0,
        members: &[0x0056BDE0],
    },
    Shims {
        target: 0x0056BFC0,
        members: &[0x0056BE10],
    },
    Shims {
        target: 0x0056C920,
        members: &[0x0056B9C0, 0x0056C870],
    },
    Shims {
        target: 0x0056D120,
        members: &[0x0056D150],
    },
    Shims {
        target: 0x0056D150,
        members: &[0x0056D070],
    },
    Shims {
        target: 0x0056D180,
        members: &[0x0056D0A0],
    },
    Shims {
        target: 0x0056D270,
        members: &[0x0056D0D0],
    },
    Shims {
        target: 0x0056DAC0,
        members: &[0x0056CC80, 0x0056DA40],
    },
    Shims {
        target: 0x0056EBD0,
        members: &[0x0056EC00],
    },
    Shims {
        target: 0x0056EC00,
        members: &[0x0056EB20],
    },
    Shims {
        target: 0x0056EC30,
        members: &[0x0056EB50],
    },
    Shims {
        target: 0x0056ED60,
        members: &[0x0056EB80],
    },
    Shims {
        target: 0x0056F900,
        members: &[0x0056E730, 0x0056F7E0],
    },
    Shims {
        target: 0x00570100,
        members: &[0x00570130],
    },
    Shims {
        target: 0x00570130,
        members: &[0x00570050],
    },
    Shims {
        target: 0x00570160,
        members: &[0x00570080],
    },
    Shims {
        target: 0x00570250,
        members: &[0x005700B0],
    },
    Shims {
        target: 0x00570AA0,
        members: &[0x0056FC60, 0x00570A20],
    },
    Shims {
        target: 0x00571280,
        members: &[0x005712B0],
    },
    Shims {
        target: 0x005712B0,
        members: &[0x005711D0],
    },
    Shims {
        target: 0x005712E0,
        members: &[0x00571200],
    },
    Shims {
        target: 0x00571410,
        members: &[0x00571230],
    },
    Shims {
        target: 0x00571FB0,
        members: &[0x00570DE0, 0x00571E90],
    },
    Shims {
        target: 0x00589CA0,
        members: &[0x00589EF0],
    },
    Shims {
        target: 0x0058AF20,
        members: &[0x004BD640],
    },
    Shims {
        target: 0x0058C3D0,
        members: &[0x0058C3B0],
    },
    Shims {
        target: 0x0058CE80,
        members: &[0x0058D330],
    },
    Shims {
        target: 0x0058CFC0,
        members: &[0x0058D350],
    },
    Shims {
        target: 0x00590FB0,
        members: &[0x0058CBB0],
    },
    Shims {
        target: 0x00591B70,
        members: &[0x0058D710],
    },
    Shims {
        target: 0x00591C30,
        members: &[0x0058D740],
    },
    Shims {
        target: 0x00591DA0,
        members: &[0x0058F3C0],
    },
    Shims {
        target: 0x00591E60,
        members: &[0x0058F3F0],
    },
    Shims {
        target: 0x00591F00,
        members: &[0x0058F420],
    },
    Shims {
        target: 0x00591FB0,
        members: &[0x0058F450],
    },
    Shims {
        target: 0x00592070,
        members: &[0x0058F480],
    },
    Shims {
        target: 0x005932E0,
        members: &[0x00593310],
    },
    Shims {
        target: 0x005952E0,
        members: &[0x0079B9A0, 0x0082DC30, 0x01A92BC0],
    },
    Shims {
        target: 0x00595470,
        members: &[
            0x004F74E0, 0x004F9FF0, 0x004FD080, 0x0056E5B0, 0x00570C60, 0x005A20E0, 0x005C4590,
            0x005C6CD0, 0x005DEC20, 0x005E2480, 0x00797D30, 0x007A1640, 0x007A9850, 0x00854C50,
            0x009B03B0, 0x009B1900, 0x00EB0E00, 0x00EEC3B0, 0x00F39270, 0x01143CC0, 0x01488A70,
            0x01585950, 0x01586EB0, 0x01589590, 0x0175B180, 0x019B03B0, 0x01B8CF10, 0x01CA76E0,
        ],
    },
    Shims {
        target: 0x005956A0,
        members: &[
            0x004FF6C0, 0x0055CE20, 0x0056B840, 0x005A5C90, 0x0079CB80, 0x0079F200, 0x007A3CE0,
            0x007A72C0, 0x007A85B0, 0x007AAD90, 0x0099E230, 0x00BE2330, 0x00BE3740, 0x00DA1870,
            0x01145200, 0x0167DDD0, 0x0171DB10, 0x01B17090,
        ],
    },
    Shims {
        target: 0x00595920,
        members: &[0x009B3BC0, 0x0148AB80, 0x01589000, 0x0171F9E0],
    },
    Shims {
        target: 0x00595950,
        members: &[0x005C6720],
    },
    Shims {
        target: 0x00595980,
        members: &[0x004FF150, 0x0082D6C0, 0x0178A0B0],
    },
    Shims {
        target: 0x005959A0,
        members: &[
            0x004DF2A0, 0x004E0590, 0x004E1960, 0x004E4F40, 0x004E8070, 0x004E9360, 0x004EAE60,
            0x004EC150, 0x004F1100, 0x004F23F0, 0x004F3C60, 0x004F4F50, 0x004F67C0, 0x00501530,
            0x00565830, 0x00566FD0, 0x00568340, 0x00569790, 0x0056AB00, 0x0056D6E0, 0x005706C0,
            0x005A7B30, 0x005B5C80, 0x00615900, 0x00717B90, 0x0078CDE0, 0x00799FA0, 0x0079B290,
            0x0079C590, 0x0079EA20, 0x007A10A0, 0x007A3750, 0x007A5BB0, 0x007A6D20, 0x0082E820,
            0x008BA0C0, 0x008BB3B0, 0x0099DB20, 0x009A0220, 0x009A1510, 0x009A2800, 0x009A3AF0,
            0x009A65E0, 0x009A78D0, 0x009AAE10, 0x009AD690, 0x009AE800, 0x009AF970, 0x009DE6B0,
            0x00C4F2E0, 0x00DA3740, 0x00EB2F10, 0x00F379E0, 0x00F38CD0, 0x011335D0, 0x0167FDC0,
            0x01681420, 0x01682710, 0x016D1040, 0x01720B60, 0x019B2620, 0x01A937B0, 0x01B11FE0,
            0x01B13560, 0x01B14850, 0x01B28A60, 0x01CA97F0, 0x01D6A040,
        ],
    },
    Shims {
        target: 0x005959C0,
        members: &[
            0x004F82B0, 0x004FADC0, 0x004FDE50, 0x00500330, 0x0055DA90, 0x0056C4B0, 0x0056F380,
            0x00571A30, 0x005A2EC0, 0x005A6900, 0x005C5370, 0x005C7AB0, 0x005DF9F0, 0x005E3250,
            0x00798B10, 0x0079D7F0, 0x0079FE70, 0x007A2410, 0x007A4950, 0x007A7F40, 0x007A9220,
            0x007AA630, 0x007ABA00, 0x00855A20, 0x0099EEA0, 0x009B1190, 0x009B26D0, 0x00BE2FA0,
            0x00BE43B0, 0x00DA24E0, 0x00EB1BD0, 0x00EED180, 0x00F3A040, 0x01144AA0, 0x01145E70,
            0x01489840, 0x01586750, 0x01587C90, 0x0158A360, 0x0167EA40, 0x0171E780, 0x0175BF50,
            0x019B1190, 0x01B17D00, 0x01B8DCF0, 0x01CA84B0,
        ],
    },
    Shims {
        target: 0x00595E20,
        members: &[0x004DDE80, 0x004F9740, 0x00BB5C00],
    },
    Shims {
        target: 0x00595EE0,
        members: &[0x004FC230],
    },
    Shims {
        target: 0x00595FA0,
        members: &[0x00EEE660],
    },
    Shims {
        target: 0x00596C80,
        members: &[
            0x004F84D0, 0x004FAFE0, 0x004FE070, 0x005004B0, 0x0055DC10, 0x0056C630, 0x0056F5A0,
            0x00571C50, 0x005A30E0, 0x005A6A80, 0x005C55A0, 0x005C7CD0, 0x005DFC10, 0x005E3470,
            0x00798D30, 0x0079D970, 0x0079FFF0, 0x007A2630, 0x007A4AD0, 0x007A80C0, 0x007A93A0,
            0x007AA850, 0x007ABB80, 0x00855C40, 0x0099F020, 0x009B13B0, 0x009B28F0, 0x00BE3120,
            0x00BE4530, 0x00DA2660, 0x00EB1DF0, 0x00EED3A0, 0x00F3A260, 0x01144CC0, 0x01145FF0,
            0x01489A60, 0x01586980, 0x01587EB0, 0x0158A580, 0x0167EBC0, 0x0171E900, 0x0175C170,
            0x019B13B0, 0x01B17E80, 0x01B8DF10, 0x01CA86D0,
        ],
    },
    Shims {
        target: 0x00597200,
        members: &[
            0x004F8540, 0x004FB050, 0x004FE0E0, 0x00500520, 0x0055DC80, 0x0056C6A0, 0x0056F610,
            0x00571CC0, 0x005A3150, 0x005A6AF0, 0x005C5610, 0x005C7D40, 0x005DFC80, 0x005E34E0,
            0x00798DA0, 0x0079D9E0, 0x007A0060, 0x007A26A0, 0x007A4B40, 0x007A8130, 0x007A9410,
            0x007AA8C0, 0x007ABBF0, 0x00855CB0, 0x0099F090, 0x009B1420, 0x009B2960, 0x00BE3190,
            0x00BE45A0, 0x00DA26D0, 0x00EB1E60, 0x00EED410, 0x00F3A2D0, 0x01144D30, 0x01146060,
            0x01489AD0, 0x015869F0, 0x01587F20, 0x0158A5F0, 0x0167EC30, 0x0171E970, 0x0175C1E0,
            0x019B1420, 0x01B17EF0, 0x01B8DF80, 0x01CA8740,
        ],
    },
    Shims {
        target: 0x00597580,
        members: &[
            0x004F7FF0, 0x004FAB00, 0x004FDB90, 0x0056F0C0, 0x00571770, 0x005A2BF0, 0x005C50A0,
            0x005C77E0, 0x005DF730, 0x005E2F90, 0x00798840, 0x007A2150, 0x007AA360, 0x00855760,
            0x009B0EC0, 0x009B2410, 0x00EB1910, 0x00EECEC0, 0x00F39D80, 0x011447D0, 0x01489580,
            0x01586480, 0x015879C0, 0x0158A0A0, 0x0175BC90, 0x019B0EC0, 0x01B8DA20, 0x01CA81F0,
        ],
    },
    Shims {
        target: 0x005975B0,
        members: &[
            0x00500160, 0x0055D8C0, 0x0056C2E0, 0x005A6730, 0x0079D620, 0x0079FCA0, 0x007A4780,
            0x007A7D60, 0x007A9050, 0x007AB830, 0x0099ECD0, 0x00BE2DD0, 0x00BE41E0, 0x00DA2310,
            0x01145CA0, 0x0167E870, 0x0171E5B0, 0x01B17B30,
        ],
    },
    Shims {
        target: 0x00597760,
        members: &[0x004FC4B0],
    },
    Shims {
        target: 0x00597940,
        members: &[0x004DE100, 0x004F99C0, 0x00BB5E80],
    },
    Shims {
        target: 0x00597B20,
        members: &[0x00EEE8E0],
    },
    Shims {
        target: 0x00597E50,
        members: &[0x0079BEF0, 0x0082E180, 0x01A93110],
    },
    Shims {
        target: 0x00597EC0,
        members: &[
            0x004F7A30, 0x004FA540, 0x004FD5D0, 0x0056EB00, 0x005711B0, 0x005A2630, 0x005C4AE0,
            0x005C7220, 0x005DF170, 0x005E29D0, 0x00798280, 0x007A1B90, 0x007A9DA0, 0x008551A0,
            0x009B0900, 0x009B1E50, 0x00EB1350, 0x00EEC900, 0x00F397C0, 0x01144210, 0x01488FC0,
            0x01585EA0, 0x01587400, 0x01589AE0, 0x0175B6D0, 0x019B0900, 0x01B8D460, 0x01CA7C30,
        ],
    },
    Shims {
        target: 0x00597F80,
        members: &[0x009B3C60, 0x0148AC20, 0x015890A0, 0x0171FA80],
    },
    Shims {
        target: 0x00597FB0,
        members: &[0x005C67C0],
    },
    Shims {
        target: 0x00597FE0,
        members: &[0x004FF1E0, 0x0082D750, 0x0178A140],
    },
    Shims {
        target: 0x00598010,
        members: &[
            0x004DF330, 0x004E0620, 0x004E19F0, 0x004E4FD0, 0x004E8100, 0x004E93F0, 0x004EAEF0,
            0x004EC1E0, 0x004F1190, 0x004F2480, 0x004F3CF0, 0x004F4FE0, 0x004F6850, 0x005015C0,
            0x005658C0, 0x00567060, 0x005683D0, 0x00569820, 0x0056AB90, 0x0056D770, 0x00570750,
            0x005A7BC0, 0x005B5D10, 0x00615990, 0x00717C20, 0x0078CE70, 0x0079A030, 0x0079B320,
            0x0079C660, 0x0079EAB0, 0x007A1130, 0x007A37E0, 0x007A5C40, 0x007A6DB0, 0x0082E8F0,
            0x008BA150, 0x008BB440, 0x00957290, 0x00957550, 0x0099DBB0, 0x009A02B0, 0x009A15A0,
            0x009A2890, 0x009A3B80, 0x009A6670, 0x009A7960, 0x009AAEA0, 0x009AD720, 0x009AE890,
            0x009AFA00, 0x009DE740, 0x00C4F370, 0x00DA37D0, 0x00EB2FA0, 0x00F37A70, 0x00F38D60,
            0x01133660, 0x0167FE50, 0x016814C0, 0x016827A0, 0x016D10D0, 0x01720BF0, 0x019B26B0,
            0x01A93880, 0x01B12070, 0x01B135F0, 0x01B148E0, 0x01B28AF0, 0x01CA9890, 0x01D6A0D0,
        ],
    },
    Shims {
        target: 0x00598040,
        members: &[
            0x004F8440, 0x004FAF50, 0x004FDFE0, 0x0056F510, 0x00571BC0, 0x005A3050, 0x005C5510,
            0x005C7C40, 0x005DFB80, 0x005E33E0, 0x00798CA0, 0x007A25A0, 0x007AA7C0, 0x00855BB0,
            0x009B1320, 0x009B2860, 0x00EB1D60, 0x00EED310, 0x00F3A1D0, 0x01144C30, 0x014899D0,
            0x015868F0, 0x01587E20, 0x0158A4F0, 0x0175C0E0, 0x019B1320, 0x01B8DE80, 0x01CA8640,
        ],
    },
    Shims {
        target: 0x00598070,
        members: &[
            0x004DDFD0, 0x004F9890, 0x004FC380, 0x00BADF90, 0x00BB5D50, 0x00EEE7B0,
        ],
    },
    Shims {
        target: 0x005980A0,
        members: &[
            0x00500420, 0x0055DB80, 0x0056C5A0, 0x005A69F0, 0x0079D8E0, 0x0079FF60, 0x007A4A40,
            0x007A8030, 0x007A9310, 0x007ABAF0, 0x0099EF90, 0x00BE3090, 0x00BE44A0, 0x00DA25D0,
            0x01145F60, 0x0167EB30, 0x0171E870, 0x01B17DF0,
        ],
    },
    Shims {
        target: 0x005980D0,
        members: &[
            0x004FFC10, 0x0055D370, 0x0056BD90, 0x005A61E0, 0x0079D0D0, 0x0079F750, 0x007A4230,
            0x007A7810, 0x007A8B00, 0x007AB2E0, 0x0099E780, 0x00BE2880, 0x00BE3C90, 0x00DA1DC0,
            0x01145750, 0x0167E320, 0x0171E060, 0x01B175E0,
        ],
    },
    Shims {
        target: 0x005981E0,
        members: &[0x009B3AD0, 0x0148AA90, 0x01588F10, 0x0171F8F0],
    },
    Shims {
        target: 0x00598420,
        members: &[0x005C6620],
    },
    Shims {
        target: 0x00598660,
        members: &[0x004FF070, 0x0082D5E0, 0x01789FD0],
    },
    Shims {
        target: 0x005988B0,
        members: &[
            0x004DF1B0, 0x004E04A0, 0x004E1870, 0x004E4E50, 0x004E7F80, 0x004E9270, 0x004EAD70,
            0x004EC060, 0x004F1010, 0x004F2300, 0x004F3B70, 0x004F4E60, 0x004F66D0, 0x00501440,
            0x00565740, 0x00566EE0, 0x00568250, 0x005696A0, 0x0056AA10, 0x0056D5F0, 0x005705D0,
            0x005A7A40, 0x005B5B90, 0x00615810, 0x00717AA0, 0x0078CCF0, 0x00799EB0, 0x0079B1A0,
            0x0079C490, 0x0079E930, 0x007A0FB0, 0x007A3660, 0x007A5AC0, 0x007A6C30, 0x0082E720,
            0x008B9FD0, 0x008BB2C0, 0x0099DA30, 0x009A0130, 0x009A1420, 0x009A2710, 0x009A3A00,
            0x009A64F0, 0x009A77E0, 0x009AAD20, 0x009AD5A0, 0x009AE710, 0x009AF880, 0x009DE5C0,
            0x00C4F1F0, 0x00DA3650, 0x00EB2E20, 0x00F378F0, 0x00F38BE0, 0x011334E0, 0x0167FCD0,
            0x01681310, 0x01682620, 0x016D0F50, 0x01720A70, 0x019B2530, 0x01A936B0, 0x01B11EF0,
            0x01B13470, 0x01B14760, 0x01B28970, 0x01CA96E0, 0x01D69F50,
        ],
    },
    Shims {
        target: 0x00598AA0,
        members: &[
            0x004F8080, 0x004FAB90, 0x004FDC20, 0x0056F150, 0x00571800, 0x005A2C80, 0x005C5130,
            0x005C7870, 0x005DF7C0, 0x005E3020, 0x007988D0, 0x007A21E0, 0x007AA3F0, 0x008557F0,
            0x009B0F50, 0x009B24A0, 0x00EB19A0, 0x00EECF50, 0x00F39E10, 0x01144860, 0x01489610,
            0x01586510, 0x01587A50, 0x0158A130, 0x0175BD20, 0x019B0F50, 0x01B8DAB0, 0x01CA8280,
        ],
    },
    Shims {
        target: 0x00598E40,
        members: &[0x004DDCA0, 0x004F9560, 0x004FC050, 0x00BB5A20, 0x00EEE480],
    },
    Shims {
        target: 0x005991C0,
        members: &[
            0x005001F0, 0x0055D950, 0x0056C370, 0x005A67C0, 0x0079D6B0, 0x0079FD30, 0x007A4810,
            0x007A7DF0, 0x007A90E0, 0x007AB8C0, 0x0099ED60, 0x00BE2E60, 0x00BE4270, 0x00DA23A0,
            0x01145D30, 0x0167E900, 0x0171E640, 0x01B17BC0,
        ],
    },
    Shims {
        target: 0x00599430,
        members: &[0x009B3AB0, 0x0148AA70, 0x01588EF0, 0x0171F8D0],
    },
    Shims {
        target: 0x005994F0,
        members: &[0x005C6600],
    },
    Shims {
        target: 0x005995B0,
        members: &[0x004FF050, 0x0082D5C0, 0x01789FB0],
    },
    Shims {
        target: 0x00599670,
        members: &[
            0x004DF190, 0x004E0480, 0x004E1850, 0x004E4E30, 0x004E7F60, 0x004E9250, 0x004EAD50,
            0x004EC040, 0x004F0FF0, 0x004F22E0, 0x004F3B50, 0x004F4E40, 0x004F66B0, 0x00501420,
            0x00565720, 0x00566EC0, 0x00568230, 0x00569680, 0x0056A9F0, 0x0056D5D0, 0x005705B0,
            0x005A7A20, 0x005B5B70, 0x006157F0, 0x00717A80, 0x0078CCD0, 0x00799E90, 0x0079B180,
            0x0079C470, 0x0079E910, 0x007A0F90, 0x007A3640, 0x007A5AA0, 0x007A6C10, 0x0082E700,
            0x008B9FB0, 0x008BB2A0, 0x009572E0, 0x0099DA10, 0x009A0110, 0x009A1400, 0x009A26F0,
            0x009A39E0, 0x009A64D0, 0x009A77C0, 0x009AAD00, 0x009AD580, 0x009AE6F0, 0x009AF860,
            0x009DE5A0, 0x00C4F1D0, 0x00DA3630, 0x00EB2E00, 0x00F378D0, 0x00F38BC0, 0x011334C0,
            0x0167FCB0, 0x016812F0, 0x01682600, 0x016D0F30, 0x01720A50, 0x019B2510, 0x01A93690,
            0x01B11ED0, 0x01B13450, 0x01B14740, 0x01B28950, 0x01CA96C0, 0x01D69F30,
        ],
    },
    Shims {
        target: 0x00599740,
        members: &[
            0x004F8060, 0x004FAB70, 0x004FDC00, 0x0056F130, 0x005717E0, 0x005A2C60, 0x005C5110,
            0x005C7850, 0x005DF7A0, 0x005E3000, 0x007988B0, 0x007A21C0, 0x007AA3D0, 0x008557D0,
            0x009B0F30, 0x009B2480, 0x00EB1980, 0x00EECF30, 0x00F39DF0, 0x01144840, 0x014895F0,
            0x015864F0, 0x01587A30, 0x0158A110, 0x0175BD00, 0x019B0F30, 0x01B8DA90, 0x01CA8260,
        ],
    },
    Shims {
        target: 0x005999B0,
        members: &[0x004DDC80, 0x004F9540, 0x004FC030, 0x00BB5A00, 0x00EEE460],
    },
    Shims {
        target: 0x00599AF0,
        members: &[
            0x005001D0, 0x0055D930, 0x0056C350, 0x005A67A0, 0x0079D690, 0x0079FD10, 0x007A47F0,
            0x007A7DD0, 0x007A90C0, 0x007AB8A0, 0x0099ED40, 0x00BE2E40, 0x00BE4250, 0x00DA2380,
            0x01145D10, 0x0167E8E0, 0x0171E620, 0x01B17BA0,
        ],
    },
    Shims {
        target: 0x00599F70,
        members: &[0x0079BFA0, 0x0082E230, 0x01A931C0],
    },
    Shims {
        target: 0x0059A060,
        members: &[
            0x004F7AE0, 0x004FA5F0, 0x004FD680, 0x0056EBB0, 0x00571260, 0x005A26E0, 0x005C4B90,
            0x005C72D0, 0x005DF220, 0x005E2A80, 0x00798330, 0x007A1C40, 0x007A9E50, 0x00855250,
            0x009B09B0, 0x009B1F00, 0x00EB1400, 0x00EEC9B0, 0x00F39870, 0x011442C0, 0x01489070,
            0x01585F50, 0x015874B0, 0x01589B90, 0x0175B780, 0x019B09B0, 0x01B8D510, 0x01CA7CE0,
        ],
    },
    Shims {
        target: 0x0059A1A0,
        members: &[
            0x004FFCC0, 0x0055D420, 0x0056BE40, 0x005A6290, 0x0079D180, 0x0079F800, 0x007A42E0,
            0x007A78C0, 0x007A8BB0, 0x007AB390, 0x0099E830, 0x00BE2930, 0x00BE3D40, 0x00DA1E70,
            0x01145800, 0x0167E3D0, 0x0171E110, 0x01B17690,
        ],
    },
    Shims {
        target: 0x0059A2B0,
        members: &[0x009B3600, 0x0148A5C0, 0x01588A40, 0x0171F420],
    },
    Shims {
        target: 0x0059A3A0,
        members: &[0x005C6150],
    },
    Shims {
        target: 0x0059A4A0,
        members: &[0x004FEBA0, 0x0082D110, 0x01789B00],
    },
    Shims {
        target: 0x0059A6A0,
        members: &[
            0x004DD770, 0x004F7B00, 0x004F9030, 0x004FA610, 0x004FBB40, 0x004FD6A0, 0x0056EBD0,
            0x00571280, 0x005A2700, 0x005C4BB0, 0x005C72F0, 0x005DF240, 0x005E2AA0, 0x00798350,
            0x007A1C60, 0x007A9E70, 0x00855270, 0x009B09D0, 0x009B1F20, 0x00BB54F0, 0x00EB1420,
            0x00EEC9D0, 0x00EEDF50, 0x00F39890, 0x011442E0, 0x01489090, 0x01585F70, 0x015874D0,
            0x01589BB0, 0x0175B7A0, 0x019B09D0, 0x01B8D530, 0x01CA7D00,
        ],
    },
    Shims {
        target: 0x0059A820,
        members: &[
            0x004FFCE0, 0x0055D440, 0x0056BE60, 0x005A62B0, 0x0079D1A0, 0x0079F820, 0x007A4300,
            0x007A78E0, 0x007A8BD0, 0x007AB3B0, 0x0099E850, 0x00BE2950, 0x00BE3D60, 0x00DA1E90,
            0x01145820, 0x0167E3F0, 0x0171E130, 0x01B176B0,
        ],
    },
    Shims {
        target: 0x0059A940,
        members: &[0x009B3BE0, 0x0148ABA0, 0x01589020, 0x0171FA00],
    },
    Shims {
        target: 0x0059AA10,
        members: &[0x005C6740],
    },
    Shims {
        target: 0x0059AAE0,
        members: &[0x004FF170, 0x0082D6E0, 0x0178A0D0],
    },
    Shims {
        target: 0x0059ABB0,
        members: &[
            0x004DF2C0, 0x004E05B0, 0x004E1980, 0x004E4F60, 0x004E8090, 0x004E9380, 0x004EAE80,
            0x004EC170, 0x004F1120, 0x004F2410, 0x004F3C80, 0x004F4F70, 0x004F67E0, 0x00501550,
            0x00565850, 0x00566FF0, 0x00568360, 0x005697B0, 0x0056AB20, 0x0056D700, 0x005706E0,
            0x005A7B50, 0x005B5CA0, 0x00615920, 0x00717BB0, 0x0078CE00, 0x00799FC0, 0x0079B2B0,
            0x0079C5B0, 0x0079EA40, 0x007A10C0, 0x007A3770, 0x007A5BD0, 0x007A6D40, 0x0082E840,
            0x008BA0E0, 0x008BB3D0, 0x0099DB40, 0x009A0240, 0x009A1530, 0x009A2820, 0x009A3B10,
            0x009A6600, 0x009A78F0, 0x009AAE30, 0x009AD6B0, 0x009AE820, 0x009AF990, 0x009DE6D0,
            0x00C4F300, 0x00DA3760, 0x00EB2F30, 0x00F37A00, 0x00F38CF0, 0x011335F0, 0x0167FDE0,
            0x01681440, 0x01682730, 0x016D1060, 0x01720B80, 0x019B2640, 0x01A937D0, 0x01B12000,
            0x01B13580, 0x01B14870, 0x01B28A80, 0x01CA9810, 0x01D6A060,
        ],
    },
    Shims {
        target: 0x0059AC90,
        members: &[0x004DDEA0, 0x004F9760, 0x004FC250, 0x00BB5C20, 0x00EEE680],
    },
    Shims {
        target: 0x0059AD80,
        members: &[
            0x004F82D0, 0x004FADE0, 0x004FDE70, 0x00500350, 0x0055DAB0, 0x0056C4D0, 0x0056F3A0,
            0x00571A50, 0x005A2EE0, 0x005A6920, 0x005C5390, 0x005C7AD0, 0x005DFA10, 0x005E3270,
            0x00798B30, 0x0079D810, 0x0079FE90, 0x007A2430, 0x007A4970, 0x007A7F60, 0x007A9240,
            0x007AA650, 0x007ABA20, 0x00855A40, 0x0099EEC0, 0x009B11B0, 0x009B26F0, 0x00BE2FC0,
            0x00BE43D0, 0x00DA2500, 0x00EB1BF0, 0x00EED1A0, 0x00F3A060, 0x01144AC0, 0x01145E90,
            0x01489860, 0x01586770, 0x01587CB0, 0x0158A380, 0x0167EA60, 0x0171E7A0, 0x0175BF70,
            0x019B11B0, 0x01B17D20, 0x01B8DD10, 0x01CA84D0,
        ],
    },
    Shims {
        target: 0x0059AF70,
        members: &[0x0059B0C0, 0x0059B0D0, 0x0059B0E0, 0x0059B0F0, 0x0059B280],
    },
    Shims {
        target: 0x0059B2B0,
        members: &[0x009B3D90, 0x0148AD50, 0x015891D0, 0x0171FBB0],
    },
    Shims {
        target: 0x0059B2F0,
        members: &[0x005C68F0],
    },
    Shims {
        target: 0x0059B340,
        members: &[0x004FF310, 0x0082D880, 0x0178A270],
    },
    Shims {
        target: 0x0059B380,
        members: &[
            0x004DF460, 0x004E0750, 0x004E1B20, 0x004E5100, 0x004E8230, 0x004E9520, 0x004EB020,
            0x004EC310, 0x004F12C0, 0x004F25B0, 0x004F3E20, 0x004F5110, 0x004F6980, 0x005016F0,
            0x005659F0, 0x00567190, 0x00568500, 0x00569950, 0x0056ACC0, 0x0056D8A0, 0x00570880,
            0x005A7CF0, 0x005B5E40, 0x00615AC0, 0x00717D50, 0x0078CFA0, 0x0079A160, 0x0079B450,
            0x0079C790, 0x0079EBE0, 0x007A1260, 0x007A3910, 0x007A5D70, 0x007A6EE0, 0x0082EA20,
            0x008BA280, 0x008BB570, 0x0099DCE0, 0x009A03E0, 0x009A16D0, 0x009A29C0, 0x009A3CB0,
            0x009A67A0, 0x009A7A90, 0x009AAFD0, 0x009AD850, 0x009AE9C0, 0x009AFB30, 0x009DE870,
            0x00C4F4A0, 0x00DA3900, 0x00EB30D0, 0x00F37BA0, 0x00F38E90, 0x01133790, 0x0167FF80,
            0x016815F0, 0x016828D0, 0x016D1200, 0x01720D20, 0x019B27E0, 0x01A939B0, 0x01B121A0,
            0x01B13720, 0x01B14A10, 0x01B28C20, 0x01CA99C0, 0x01D6A200,
        ],
    },
    Shims {
        target: 0x0059B3C0,
        members: &[
            0x004F8570, 0x004FB080, 0x004FE110, 0x00500550, 0x0055DCB0, 0x0056C6D0, 0x0056F640,
            0x00571CF0, 0x005A3180, 0x005A6B20, 0x005C5640, 0x005C7D70, 0x005DFCB0, 0x005E3510,
            0x00798DD0, 0x0079DA10, 0x007A0090, 0x007A26D0, 0x007A4B70, 0x007A8160, 0x007A9440,
            0x007AA8F0, 0x007ABC20, 0x00855CE0, 0x0099F0C0, 0x009B1450, 0x009B2990, 0x00BE31C0,
            0x00BE45D0, 0x00DA2700, 0x00EB1E90, 0x00EED440, 0x00F3A300, 0x01144D60, 0x01146090,
            0x01489B00, 0x01586A20, 0x01587F50, 0x0158A620, 0x0167EC60, 0x0171E9A0, 0x0175C210,
            0x019B1450, 0x01B17F20, 0x01B8DFB0, 0x01CA8770,
        ],
    },
    Shims {
        target: 0x0059B430,
        members: &[0x009B2F80, 0x01489F40, 0x015883C0, 0x0171EDA0],
    },
    Shims {
        target: 0x0059B490,
        members: &[0x005C5AD0],
    },
    Shims {
        target: 0x0059B4F0,
        members: &[0x004FE520, 0x0082CA90, 0x01789480],
    },
    Shims {
        target: 0x0059B550,
        members: &[
            0x004DE660, 0x004DF950, 0x004E0D20, 0x004E4300, 0x004E7430, 0x004E8720, 0x004EA1B0,
            0x004EB510, 0x004F04C0, 0x004F17B0, 0x004F2FB0, 0x004F4310, 0x004F5B10, 0x005008F0,
            0x00564BF0, 0x00566390, 0x00567700, 0x00568B50, 0x00569EC0, 0x0056CAA0, 0x0056FA80,
            0x005A6EF0, 0x005B5040, 0x00614CC0, 0x00716F50, 0x0078C1A0, 0x00799360, 0x0079A650,
            0x0079B940, 0x0079DDE0, 0x007A0460, 0x007A2B10, 0x007A4F70, 0x007A60E0, 0x0082DBD0,
            0x008B9480, 0x008BA770, 0x0099CEE0, 0x0099F5E0, 0x009A08D0, 0x009A1BC0, 0x009A2EB0,
            0x009A59A0, 0x009A6C90, 0x009AA1D0, 0x009ACA50, 0x009ADBC0, 0x009AED30, 0x009DDA70,
            0x00C4E6A0, 0x00DA2B00, 0x00EB22D0, 0x00F36DA0, 0x00F38090, 0x01132990, 0x0167F180,
            0x016807E0, 0x01681AD0, 0x016D0400, 0x0171FF20, 0x019B19E0, 0x01A92B60, 0x01B113A0,
            0x01B12920, 0x01B13C10, 0x01B27E20, 0x01CA8BB0, 0x01D69400,
        ],
    },
    Shims {
        target: 0x0059B5B0,
        members: &[
            0x004F7470, 0x004F9F80, 0x004FD010, 0x0056E540, 0x00570BF0, 0x005A2070, 0x005C4520,
            0x005C6C60, 0x005DEBB0, 0x005E2410, 0x00797CC0, 0x007A15D0, 0x007A97E0, 0x00854BE0,
            0x009B0340, 0x009B1890, 0x00EB0D90, 0x00EEC340, 0x00F39200, 0x01143C50, 0x01488A00,
            0x015858E0, 0x01586E40, 0x01589520, 0x0175B110, 0x019B0340, 0x01B8CEA0, 0x01CA7670,
        ],
    },
    Shims {
        target: 0x0059B610,
        members: &[0x004DD050, 0x004F8980, 0x004FB490, 0x00BB4E40, 0x00EED8B0],
    },
    Shims {
        target: 0x0059B670,
        members: &[
            0x004FF660, 0x0055CDC0, 0x0056B7E0, 0x005A5C30, 0x0079CB20, 0x0079F1A0, 0x007A3C80,
            0x007A7250, 0x007A8540, 0x007AAD30, 0x0099E1D0, 0x00BE22D0, 0x00BE36E0, 0x00DA1810,
            0x011451A0, 0x0167DD60, 0x0171DAB0, 0x01B17030,
        ],
    },
    Shims {
        target: 0x0059B6D0,
        members: &[
            0x004DF5D0, 0x004E08C0, 0x004E1C90, 0x004E5270, 0x004E83A0, 0x004E9690, 0x004EB190,
            0x004EC480, 0x004F1430, 0x004F2720, 0x004F3F90, 0x004F5280, 0x004F6AF0, 0x004FF480,
            0x005006C0, 0x00501860, 0x0055DE20, 0x00565B60, 0x00567300, 0x00568670, 0x00569AC0,
            0x0056AE30, 0x0056C840, 0x0056DA10, 0x005709F0, 0x005A6C90, 0x005A7E60, 0x005B5FB0,
            0x005C6A60, 0x00615C30, 0x00717EC0, 0x0078D110, 0x0079A2D0, 0x0079B5C0, 0x0079C900,
            0x0079DB80, 0x0079ED50, 0x007A0200, 0x007A13D0, 0x007A3A80, 0x007A4CE0, 0x007A5EE0,
            0x007A7050, 0x007A82D0, 0x007A95B0, 0x007ABD90, 0x0082D9F0, 0x0082EB90, 0x008BA3F0,
            0x008BB6E0, 0x0099DE50, 0x0099F230, 0x009A0550, 0x009A1840, 0x009A2B30, 0x009A3E20,
            0x009A6910, 0x009A7C00, 0x009AB140, 0x009AD9C0, 0x009AEB30, 0x009AFCA0, 0x009B3F00,
            0x009DE9E0, 0x00BE3330, 0x00BE4740, 0x00C4F610, 0x00DA2870, 0x00DA3A70, 0x00EB3240,
            0x00F37D10, 0x00F39000, 0x01133900, 0x01146200, 0x0148AEC0, 0x01589340, 0x0167EDD0,
            0x016800F0, 0x01681750, 0x01682A40, 0x016D1370, 0x0171EB10, 0x0171FD20, 0x01720E90,
            0x0178A3E0, 0x019B2950, 0x01A93B20, 0x01B12310, 0x01B13890, 0x01B14B80, 0x01B18090,
            0x01B28D90, 0x01CA9B20, 0x01D6A370,
        ],
    },
    Shims {
        target: 0x0059B740,
        members: &[
            0x004DE270, 0x004F86E0, 0x004F9B30, 0x004FB1F0, 0x004FC620, 0x004FE280, 0x0056F7B0,
            0x00571E60, 0x005A32F0, 0x005C57B0, 0x005C7EE0, 0x005DFE20, 0x005E3680, 0x00798F40,
            0x007A2840, 0x007AAA60, 0x00855E50, 0x009B15C0, 0x009B2B00, 0x00BB5FF0, 0x00EB2000,
            0x00EED5B0, 0x00EEEA50, 0x00F3A470, 0x01144ED0, 0x01489C70, 0x01586B90, 0x015880C0,
            0x0158A790, 0x0175C380, 0x019B15C0, 0x01B8E120, 0x01CA88E0,
        ],
    },
    Shims {
        target: 0x0059B7B0,
        members: &[0x009AB850],
    },
    Shims {
        target: 0x0059B7F0,
        members: &[0x009A4530, 0x009A4D30, 0x009A5530],
    },
    Shims {
        target: 0x0059B830,
        members: &[0x009AB890, 0x009AB8C0, 0x009AB8F0],
    },
    Shims {
        target: 0x0059B8C0,
        members: &[
            0x00966240, 0x009A4570, 0x009A45A0, 0x009A45D0, 0x009A4D70, 0x009A4DA0, 0x009A4DD0,
            0x009A5570, 0x009A55A0, 0x009A55D0,
        ],
    },
    Shims {
        target: 0x0059BAE0,
        members: &[0x009A4240, 0x009A4A40, 0x009A5240, 0x009AB560],
    },
    Shims {
        target: 0x005A1A00,
        members: &[0x005A1AB0],
    },
    Shims {
        target: 0x005A2700,
        members: &[0x005A2730],
    },
    Shims {
        target: 0x005A2730,
        members: &[0x005A2650],
    },
    Shims {
        target: 0x005A2760,
        members: &[0x005A2680],
    },
    Shims {
        target: 0x005A2890,
        members: &[0x005A26B0],
    },
    Shims {
        target: 0x005A3440,
        members: &[0x005A2260, 0x005A3320],
    },
    Shims {
        target: 0x005A3530,
        members: &[0x005A4970],
    },
    Shims {
        target: 0x005A37C0,
        members: &[0x005A46B0],
    },
    Shims {
        target: 0x005A4A00,
        members: &[0x005A3E60],
    },
    Shims {
        target: 0x005A4A20,
        members: &[0x004EF950, 0x005A4D70, 0x0078E890],
    },
    Shims {
        target: 0x005A4D50,
        members: &[0x005A4C90],
    },
    Shims {
        target: 0x005A4DA0,
        members: &[0x005A4DC0],
    },
    Shims {
        target: 0x005A4DE0,
        members: &[0x005A4D50],
    },
    Shims {
        target: 0x005A4EF0,
        members: &[0x005A5240],
    },
    Shims {
        target: 0x005A5220,
        members: &[0x005A5160],
    },
    Shims {
        target: 0x005A5270,
        members: &[0x005A5290],
    },
    Shims {
        target: 0x005A52B0,
        members: &[0x005A5220],
    },
    Shims {
        target: 0x005A53C0,
        members: &[0x005A5400],
    },
    Shims {
        target: 0x005A5430,
        members: &[0x005A4A00],
    },
    Shims {
        target: 0x005A62B0,
        members: &[0x005A62E0],
    },
    Shims {
        target: 0x005A62E0,
        members: &[0x005A6200],
    },
    Shims {
        target: 0x005A6310,
        members: &[0x005A6230],
    },
    Shims {
        target: 0x005A6410,
        members: &[0x005A6260],
    },
    Shims {
        target: 0x005A6D70,
        members: &[0x005A5E10, 0x005A6CC0],
    },
    Shims {
        target: 0x005A7570,
        members: &[0x005A75A0],
    },
    Shims {
        target: 0x005A75A0,
        members: &[0x005A74C0],
    },
    Shims {
        target: 0x005A75D0,
        members: &[0x005A74F0],
    },
    Shims {
        target: 0x005A76C0,
        members: &[0x005A7520],
    },
    Shims {
        target: 0x005A7F10,
        members: &[0x005A70D0, 0x005A7E90],
    },
    Shims {
        target: 0x005B2830,
        members: &[0x0061D2B0],
    },
    Shims {
        target: 0x005B34D0,
        members: &[0x005B4700],
    },
    Shims {
        target: 0x005B4350,
        members: &[0x005B3640],
    },
    Shims {
        target: 0x005B56C0,
        members: &[0x005B56F0],
    },
    Shims {
        target: 0x005B56F0,
        members: &[0x005B5610],
    },
    Shims {
        target: 0x005B5720,
        members: &[0x005B5640],
    },
    Shims {
        target: 0x005B5810,
        members: &[0x005B5670],
    },
    Shims {
        target: 0x005B6060,
        members: &[0x005B5220, 0x005B5FE0],
    },
    Shims {
        target: 0x005B8050,
        members: &[0x005B82E0],
    },
    Shims {
        target: 0x005BA1C0,
        members: &[0x005BA6D0],
    },
    Shims {
        target: 0x005BA2F0,
        members: &[0x005BA2C0],
    },
    Shims {
        target: 0x005BA3E0,
        members: &[0x005BA4A0],
    },
    Shims {
        target: 0x005BA4D0,
        members: &[0x005BA520],
    },
    Shims {
        target: 0x005BA850,
        members: &[0x005BA630, 0x005BA650, 0x005BA670, 0x005BA690, 0x005BA6B0],
    },
    Shims {
        target: 0x005BA9C0,
        members: &[0x005BAA60],
    },
    Shims {
        target: 0x005BAB70,
        members: &[0x005BAB40],
    },
    Shims {
        target: 0x005BAC30,
        members: &[0x005BA600, 0x005BA7E0],
    },
    Shims {
        target: 0x005BB9E0,
        members: &[0x0112A2A0],
    },
    Shims {
        target: 0x005BBC70,
        members: &[0x005BBC50],
    },
    Shims {
        target: 0x005BBC90,
        members: &[0x005BBC70],
    },
    Shims {
        target: 0x005BBCB0,
        members: &[0x005BBC90],
    },
    Shims {
        target: 0x005BBEB0,
        members: &[0x005BFEA0, 0x005BFF10],
    },
    Shims {
        target: 0x005C1DA0,
        members: &[0x005C3790],
    },
    Shims {
        target: 0x005C20D0,
        members: &[0x005C34A0],
    },
    Shims {
        target: 0x005C3820,
        members: &[0x005C2A50],
    },
    Shims {
        target: 0x005C3840,
        members: &[0x005C3B90],
    },
    Shims {
        target: 0x005C3B70,
        members: &[0x005C3AB0],
    },
    Shims {
        target: 0x005C3BC0,
        members: &[0x005C3BF0],
    },
    Shims {
        target: 0x005C3C10,
        members: &[0x005C3B70],
    },
    Shims {
        target: 0x005C3D20,
        members: &[0x005C4140],
    },
    Shims {
        target: 0x005C4120,
        members: &[0x005C4060],
    },
    Shims {
        target: 0x005C4170,
        members: &[0x005C41C0],
    },
    Shims {
        target: 0x005C41F0,
        members: &[0x005C4120],
    },
    Shims {
        target: 0x005C4300,
        members: &[0x005C4370],
    },
    Shims {
        target: 0x005C43A0,
        members: &[0x005C3820],
    },
    Shims {
        target: 0x005C4BB0,
        members: &[0x005C4BE0],
    },
    Shims {
        target: 0x005C4BE0,
        members: &[0x005C4B00],
    },
    Shims {
        target: 0x005C4C10,
        members: &[0x005C4B30],
    },
    Shims {
        target: 0x005C4D40,
        members: &[0x005C4B60],
    },
    Shims {
        target: 0x005C5920,
        members: &[0x005C4710, 0x005C57E0],
    },
    Shims {
        target: 0x005C6150,
        members: &[0x005C6180],
    },
    Shims {
        target: 0x005C6180,
        members: &[0x005C60A0],
    },
    Shims {
        target: 0x005C61B0,
        members: &[0x005C60D0],
    },
    Shims {
        target: 0x005C62A0,
        members: &[0x005C6100],
    },
    Shims {
        target: 0x005C6B10,
        members: &[0x005C5CB0, 0x005C6A90],
    },
    Shims {
        target: 0x005C72F0,
        members: &[0x005C7320],
    },
    Shims {
        target: 0x005C7320,
        members: &[0x005C7240],
    },
    Shims {
        target: 0x005C7350,
        members: &[0x005C7270],
    },
    Shims {
        target: 0x005C7480,
        members: &[0x005C72A0],
    },
    Shims {
        target: 0x005C8030,
        members: &[0x005C6E50, 0x005C7F10],
    },
    Shims {
        target: 0x005D2620,
        members: &[0x005D2D60],
    },
    Shims {
        target: 0x005D27E0,
        members: &[0x005D2850],
    },
    Shims {
        target: 0x005D2A90,
        members: &[0x005D2C40, 0x005D2C60, 0x005D2D00, 0x005D2D20],
    },
    Shims {
        target: 0x005DBF20,
        members: &[0x005DD960],
    },
    Shims {
        target: 0x005DBF60,
        members: &[0x005DDE30],
    },
    Shims {
        target: 0x005DBF90,
        members: &[0x005DBF60],
    },
    Shims {
        target: 0x005DC860,
        members: &[0x005DDFF0],
    },
    Shims {
        target: 0x005DF240,
        members: &[0x005DF270],
    },
    Shims {
        target: 0x005DF270,
        members: &[0x005DF190],
    },
    Shims {
        target: 0x005DF2A0,
        members: &[0x005DF1C0],
    },
    Shims {
        target: 0x005DF3D0,
        members: &[0x005DF1F0],
    },
    Shims {
        target: 0x005DFF70,
        members: &[0x005DEDA0, 0x005DFE50],
    },
    Shims {
        target: 0x005E0080,
        members: &[0x005E1650],
    },
    Shims {
        target: 0x005E0380,
        members: &[0x005E1390],
    },
    Shims {
        target: 0x005E16E0,
        members: &[0x005E0AC0],
    },
    Shims {
        target: 0x005E1700,
        members: &[
            0x004E6BB0, 0x004EDDB0, 0x00562750, 0x00564240, 0x005E1AC0, 0x00790820, 0x00797210,
            0x00854580, 0x00854820, 0x00EB0510, 0x00F36880, 0x01487B40, 0x01B165D0, 0x01B278F0,
            0x01CA71A0,
        ],
    },
    Shims {
        target: 0x005E1AA0,
        members: &[0x005E19E0],
    },
    Shims {
        target: 0x005E1AF0,
        members: &[0x005E1B30],
    },
    Shims {
        target: 0x005E1B60,
        members: &[0x005E1AA0],
    },
    Shims {
        target: 0x005E1D40,
        members: &[0x005E1C80],
    },
    Shims {
        target: 0x005E1D90,
        members: &[0x005E1DB0],
    },
    Shims {
        target: 0x005E1DD0,
        members: &[0x005E1D40],
    },
    Shims {
        target: 0x005E1EE0,
        members: &[0x005E1F30],
    },
    Shims {
        target: 0x005E1F60,
        members: &[0x005E16E0],
    },
    Shims {
        target: 0x005E2AA0,
        members: &[0x005E2AD0],
    },
    Shims {
        target: 0x005E2AD0,
        members: &[0x005E29F0],
    },
    Shims {
        target: 0x005E2B00,
        members: &[0x005E2A20],
    },
    Shims {
        target: 0x005E2C30,
        members: &[0x005E2A50],
    },
    Shims {
        target: 0x005E37D0,
        members: &[0x005E2600, 0x005E36B0],
    },
    Shims {
        target: 0x005EA630,
        members: &[0x00BC0250, 0x00BC08B0, 0x0106A450],
    },
    Shims {
        target: 0x005EA700,
        members: &[
            0x005ECFA0, 0x005ED070, 0x005ED160, 0x005ED270, 0x005ED3B0, 0x005ED470, 0x005ED660,
            0x005ED760, 0x005EDA50, 0x005EDB50, 0x005EDC50, 0x005EDDA0, 0x005EDEC0, 0x005EE1F0,
            0x005EE2D0, 0x005EE3B0, 0x005EE4E0, 0x005EE5E0, 0x005EE930,
        ],
    },
    Shims {
        target: 0x005EACF0,
        members: &[0x005ED6D0],
    },
    Shims {
        target: 0x005EB0D0,
        members: &[0x005ED4B0],
    },
    Shims {
        target: 0x005EBA20,
        members: &[0x005EBA90],
    },
    Shims {
        target: 0x005EBA50,
        members: &[0x005EBAB0],
    },
    Shims {
        target: 0x005EBBD0,
        members: &[0x005EBC50, 0x005EBC70],
    },
    Shims {
        target: 0x005EBC00,
        members: &[0x005EBC60, 0x005EBC80],
    },
    Shims {
        target: 0x005EBD40,
        members: &[0x005EBC90],
    },
    Shims {
        target: 0x005ECEE0,
        members: &[0x005ED960],
    },
    Shims {
        target: 0x005ECFE0,
        members: &[0x005EE820],
    },
    Shims {
        target: 0x005ED0B0,
        members: &[0x005ED2D0],
    },
    Shims {
        target: 0x005ED3F0,
        members: &[0x005EE840],
    },
    Shims {
        target: 0x005ED4B0,
        members: &[0x005EE860],
    },
    Shims {
        target: 0x005ED4C0,
        members: &[0x005EEC50],
    },
    Shims {
        target: 0x005ED6D0,
        members: &[0x005EEC70],
    },
    Shims {
        target: 0x005ED6E0,
        members: &[0x005EEC90],
    },
    Shims {
        target: 0x005EEFA0,
        members: &[0x006486B0],
    },
    Shims {
        target: 0x005EF040,
        members: &[0x00648700],
    },
    Shims {
        target: 0x005EF060,
        members: &[0x00648710],
    },
    Shims {
        target: 0x005EF7D0,
        members: &[0x005FBF40],
    },
    Shims {
        target: 0x005EF850,
        members: &[0x005FBF60],
    },
    Shims {
        target: 0x005EF8F0,
        members: &[0x005FBFA0],
    },
    Shims {
        target: 0x005F13D0,
        members: &[0x005F1400],
    },
    Shims {
        target: 0x005FBF20,
        members: &[0x0077BC10],
    },
    Shims {
        target: 0x005FC000,
        members: &[
            0x005FC790, 0x005FC7B0, 0x005FC840, 0x005FD400, 0x005FD420, 0x005FD4B0, 0x005FD970,
            0x005FD990, 0x005FDA30,
        ],
    },
    Shims {
        target: 0x005FD4E0,
        members: &[0x00F652E0],
    },
    Shims {
        target: 0x005FD640,
        members: &[0x00F652C0],
    },
    Shims {
        target: 0x005FD670,
        members: &[0x00F65320],
    },
    Shims {
        target: 0x005FD6D0,
        members: &[0x00F65300],
    },
    Shims {
        target: 0x005FDF10,
        members: &[0x018DC3D0],
    },
    Shims {
        target: 0x005FDF50,
        members: &[0x01C06990],
    },
    Shims {
        target: 0x005FE090,
        members: &[
            0x005FEA00, 0x00607710, 0x006079C0, 0x00607B10, 0x0064AF10, 0x0064AFE0, 0x006578B0,
            0x0065F2D0, 0x00660490, 0x00662AF0, 0x006E3A70, 0x006F5890, 0x00700070, 0x00802CE0,
            0x00DD9E10, 0x01859710, 0x01859740, 0x018D6FB0, 0x018D7490, 0x018D74B0, 0x018D8590,
            0x018D9D10, 0x018DB480, 0x018DB5F0, 0x018DB740, 0x018DBAD0, 0x018DBB90, 0x018DC120,
            0x018DC4A0, 0x018DC570, 0x019554C0, 0x01C01C30,
        ],
    },
    Shims {
        target: 0x005FE0D0,
        members: &[0x01171A00],
    },
    Shims {
        target: 0x005FF8A0,
        members: &[0x00842CC0],
    },
    Shims {
        target: 0x005FFA80,
        members: &[0x005FF350],
    },
    Shims {
        target: 0x005FFB10,
        members: &[
            0x0065F2B0, 0x00660470, 0x00662AD0, 0x006E39E0, 0x006E3A10, 0x006E3A40, 0x006F57E0,
            0x006FFFE0, 0x00700010, 0x00700040, 0x00802CB0, 0x01C01C10,
        ],
    },
    Shims {
        target: 0x005FFDF0,
        members: &[0x0060D580, 0x0060D5A0, 0x0060E5D0, 0x0060E5F0],
    },
    Shims {
        target: 0x005FFE20,
        members: &[0x005FFE50, 0x005FFE70, 0x005FFE90],
    },
    Shims {
        target: 0x00601790,
        members: &[0x00601800],
    },
    Shims {
        target: 0x00601820,
        members: &[0x00601960],
    },
    Shims {
        target: 0x00601E10,
        members: &[0x00A0A5A0],
    },
    Shims {
        target: 0x00603AA0,
        members: &[0x00603C60, 0x00603C90, 0x00603CC0],
    },
    Shims {
        target: 0x00603F70,
        members: &[0x00603CF0, 0x00603D00, 0x00603D10],
    },
    Shims {
        target: 0x00606460,
        members: &[0x00605E90],
    },
    Shims {
        target: 0x00609E10,
        members: &[0x018697F0],
    },
    Shims {
        target: 0x00609F90,
        members: &[0x00A3DD70],
    },
    Shims {
        target: 0x0060A050,
        members: &[0x00A3E6C0, 0x00C1B620],
    },
    Shims {
        target: 0x0060A330,
        members: &[0x01867C00],
    },
    Shims {
        target: 0x0060A6D0,
        members: &[0x00609F30],
    },
    Shims {
        target: 0x0060A750,
        members: &[0x00609F70],
    },
    Shims {
        target: 0x0060BBF0,
        members: &[0x00A3DD80, 0x00C1A6C0],
    },
    Shims {
        target: 0x0060BE30,
        members: &[0x01867D10],
    },
    Shims {
        target: 0x0060BF20,
        members: &[0x0060BF00, 0x0060C3B0],
    },
    Shims {
        target: 0x0060CE20,
        members: &[0x00C65A40],
    },
    Shims {
        target: 0x0060CEE0,
        members: &[0x0060CE20],
    },
    Shims {
        target: 0x0060F180,
        members: &[0x0060F280, 0x0060F4A0],
    },
    Shims {
        target: 0x00611650,
        members: &[0x00C5C850, 0x00C5C870, 0x0135B8E0, 0x0135B900],
    },
    Shims {
        target: 0x00611760,
        members: &[0x01BE0910],
    },
    Shims {
        target: 0x006145C0,
        members: &[0x007D7C70],
    },
    Shims {
        target: 0x00614650,
        members: &[0x007D7C60],
    },
    Shims {
        target: 0x006148C0,
        members: &[0x007D6520, 0x007D7140, 0x007D7310],
    },
    Shims {
        target: 0x00614A30,
        members: &[0x007D89A0],
    },
    Shims {
        target: 0x00615340,
        members: &[0x00615370],
    },
    Shims {
        target: 0x00615370,
        members: &[0x00615290],
    },
    Shims {
        target: 0x006153A0,
        members: &[0x006152C0],
    },
    Shims {
        target: 0x00615490,
        members: &[0x006152F0],
    },
    Shims {
        target: 0x00615CE0,
        members: &[0x00614EA0, 0x00615C60],
    },
    Shims {
        target: 0x00616DE0,
        members: &[0x00616E10],
    },
    Shims {
        target: 0x00618B70,
        members: &[0x00667A20],
    },
    Shims {
        target: 0x00618D20,
        members: &[0x018DC3B0],
    },
    Shims {
        target: 0x00618D40,
        members: &[0x01867670, 0x01887270, 0x018DC480],
    },
    Shims {
        target: 0x00619070,
        members: &[0x00618D90],
    },
    Shims {
        target: 0x006191B0,
        members: &[0x00618E00, 0x00618F50, 0x00619050, 0x00619250],
    },
    Shims {
        target: 0x006191C0,
        members: &[0x00618D70],
    },
    Shims {
        target: 0x006191E0,
        members: &[0x00618D80],
    },
    Shims {
        target: 0x00619680,
        members: &[0x00619EB0],
    },
    Shims {
        target: 0x00619730,
        members: &[0x00619660],
    },
    Shims {
        target: 0x00619D40,
        members: &[0x00619E50],
    },
    Shims {
        target: 0x0061D490,
        members: &[0x0061DAA0],
    },
    Shims {
        target: 0x00622560,
        members: &[0x01D85460],
    },
    Shims {
        target: 0x00622E80,
        members: &[0x00622CB0],
    },
    Shims {
        target: 0x00626630,
        members: &[0x00634F40, 0x00A0D6D0, 0x00A0D6F0],
    },
    Shims {
        target: 0x00626640,
        members: &[0x00A0D6E0, 0x00A0D700],
    },
    Shims {
        target: 0x00626670,
        members: &[0x00A1BD00],
    },
    Shims {
        target: 0x00626680,
        members: &[0x00A1BD20],
    },
    Shims {
        target: 0x00628310,
        members: &[0x0157ECC0],
    },
    Shims {
        target: 0x00629420,
        members: &[0x00627CA0, 0x006293E0],
    },
    Shims {
        target: 0x006297A0,
        members: &[0x00628750],
    },
    Shims {
        target: 0x0062D8B0,
        members: &[0x00627CE0],
    },
    Shims {
        target: 0x0062D9A0,
        members: &[0x00627C80],
    },
    Shims {
        target: 0x00634420,
        members: &[0x006347B0],
    },
    Shims {
        target: 0x00634950,
        members: &[0x00634C80],
    },
    Shims {
        target: 0x00635930,
        members: &[0x007017E0, 0x0083F6F0],
    },
    Shims {
        target: 0x00647F00,
        members: &[0x007899B0],
    },
    Shims {
        target: 0x00648930,
        members: &[0x0064E170],
    },
    Shims {
        target: 0x0064BA80,
        members: &[0x00652870],
    },
    Shims {
        target: 0x0064C450,
        members: &[0x01C060B0],
    },
    Shims {
        target: 0x0064C480,
        members: &[0x01C02B60],
    },
    Shims {
        target: 0x0064CBF0,
        members: &[0x00EBCAB0, 0x01117650, 0x011280F0, 0x01155C90],
    },
    Shims {
        target: 0x0064CF60,
        members: &[
            0x00C5BA50, 0x010B65F0, 0x010BA0D0, 0x011158F0, 0x01117390, 0x01155200,
        ],
    },
    Shims {
        target: 0x0064D0B0,
        members: &[0x0196A230],
    },
    Shims {
        target: 0x0064D120,
        members: &[0x0196A270],
    },
    Shims {
        target: 0x0064D620,
        members: &[0x0084DC90],
    },
    Shims {
        target: 0x0064DBE0,
        members: &[0x0064E6F0, 0x011A4A90, 0x018994C0, 0x01899910],
    },
    Shims {
        target: 0x0064DC60,
        members: &[0x01BE7640],
    },
    Shims {
        target: 0x0064DD90,
        members: &[
            0x0067ED20, 0x00682710, 0x008350C0, 0x00ACCCB0, 0x00ACE050, 0x0106C180, 0x0106E7B0,
            0x0106F140, 0x014BCAD0, 0x019554E0,
        ],
    },
    Shims {
        target: 0x0064DE00,
        members: &[0x00ACCCD0, 0x00ACE150, 0x0106BC30, 0x01955810],
    },
    Shims {
        target: 0x0064DFB0,
        members: &[0x019558D0],
    },
    Shims {
        target: 0x0064E030,
        members: &[0x01955830],
    },
    Shims {
        target: 0x0064E4C0,
        members: &[0x0064E5A0],
    },
    Shims {
        target: 0x0064E650,
        members: &[0x00806740],
    },
    Shims {
        target: 0x0064E770,
        members: &[0x0138BB30],
    },
    Shims {
        target: 0x0064E9E0,
        members: &[0x0064E9B0],
    },
    Shims {
        target: 0x0064F990,
        members: &[0x0065C360],
    },
    Shims {
        target: 0x0064FCA0,
        members: &[
            0x0064D480, 0x0064DC90, 0x0064FCE0, 0x0064FCF0, 0x00658280, 0x006582A0, 0x006582C0,
            0x0065B500, 0x0067FF70, 0x006FCA70, 0x006FD980, 0x007017D0, 0x007059A0, 0x0082BA20,
            0x00C74030, 0x01C8AB00,
        ],
    },
    Shims {
        target: 0x0064FCE0,
        members: &[0x0064DCB0],
    },
    Shims {
        target: 0x0064FCF0,
        members: &[0x0068BC00],
    },
    Shims {
        target: 0x0064FE60,
        members: &[0x01BD54F0],
    },
    Shims {
        target: 0x00650840,
        members: &[0x006F97F0, 0x0082A460],
    },
    Shims {
        target: 0x006508F0,
        members: &[0x00B0B570],
    },
    Shims {
        target: 0x00650D70,
        members: &[0x01BEAE30],
    },
    Shims {
        target: 0x00650EA0,
        members: &[0x00B05D10],
    },
    Shims {
        target: 0x00651660,
        members: &[0x00C74130],
    },
    Shims {
        target: 0x00654320,
        members: &[0x00654450, 0x0065ECE0],
    },
    Shims {
        target: 0x00654410,
        members: &[
            0x00652EF0, 0x006595F0, 0x0065AC90, 0x0065AFB0, 0x00745050, 0x0074C770, 0x0074C790,
            0x007FD530, 0x007FD5C0, 0x01BE2160, 0x01BE2B60, 0x01BFBC00, 0x01BFBD30, 0x01BFFB10,
            0x01BFFD00, 0x01BFFEB0, 0x01C020C0,
        ],
    },
    Shims {
        target: 0x00654C30,
        members: &[
            0x0065A1B0, 0x0065A1C0, 0x0065A1D0, 0x0065A540, 0x0065A550, 0x0065A560, 0x0065A5A0,
            0x0065A6C0,
        ],
    },
    Shims {
        target: 0x00655750,
        members: &[0x018DD060, 0x0194DE70],
    },
    Shims {
        target: 0x006558E0,
        members: &[0x018DD020, 0x0194DE40],
    },
    Shims {
        target: 0x00655B90,
        members: &[0x0065CC90, 0x00689F00, 0x0068A5C0],
    },
    Shims {
        target: 0x00656570,
        members: &[0x0068F9E0, 0x008101C0],
    },
    Shims {
        target: 0x006570A0,
        members: &[0x00850680],
    },
    Shims {
        target: 0x00658970,
        members: &[0x01AEBD60],
    },
    Shims {
        target: 0x00658B40,
        members: &[0x01C02B50],
    },
    Shims {
        target: 0x00659460,
        members: &[0x0196A320],
    },
    Shims {
        target: 0x00659710,
        members: &[0x00A77ED0],
    },
    Shims {
        target: 0x006598B0,
        members: &[0x00B0B5A0],
    },
    Shims {
        target: 0x00659E60,
        members: &[0x00682F70],
    },
    Shims {
        target: 0x0065AA90,
        members: &[0x0189A170],
    },
    Shims {
        target: 0x0065B830,
        members: &[0x0065B870],
    },
    Shims {
        target: 0x0065B870,
        members: &[0x006DECF0, 0x006EFC90],
    },
    Shims {
        target: 0x0065BCB0,
        members: &[0x00A9B420],
    },
    Shims {
        target: 0x0065CC90,
        members: &[0x00A77EC0],
    },
    Shims {
        target: 0x0065E550,
        members: &[0x00804230],
    },
    Shims {
        target: 0x0065EBD0,
        members: &[0x00666010],
    },
    Shims {
        target: 0x0065ED10,
        members: &[0x00655C50, 0x00656080],
    },
    Shims {
        target: 0x0065F000,
        members: &[0x006D9B10],
    },
    Shims {
        target: 0x0065F800,
        members: &[
            0x00EBC250, 0x00EBC590, 0x00EBD350, 0x00EBD3D0, 0x00EC8200, 0x00EC8220, 0x00ED5290,
            0x00ED52B0,
        ],
    },
    Shims {
        target: 0x006604C0,
        members: &[0x00660E20, 0x00660E70],
    },
    Shims {
        target: 0x006611A0,
        members: &[0x00661090],
    },
    Shims {
        target: 0x00665B50,
        members: &[0x00665CF0],
    },
    Shims {
        target: 0x006678F0,
        members: &[0x006679D0],
    },
    Shims {
        target: 0x006805F0,
        members: &[0x00B07C10],
    },
    Shims {
        target: 0x006806A0,
        members: &[0x00B07C30],
    },
    Shims {
        target: 0x006814B0,
        members: &[0x006813E0],
    },
    Shims {
        target: 0x00682F70,
        members: &[0x006EA890],
    },
    Shims {
        target: 0x006899A0,
        members: &[0x006898D0],
    },
    Shims {
        target: 0x0068B4C0,
        members: &[0x00821F10],
    },
    Shims {
        target: 0x0068B4F0,
        members: &[0x00821F20],
    },
    Shims {
        target: 0x0068C1B0,
        members: &[0x01B44940],
    },
    Shims {
        target: 0x0068E6F0,
        members: &[0x0068E980, 0x0068EA70, 0x0068EAA0],
    },
    Shims {
        target: 0x0068FF40,
        members: &[0x0068FC70, 0x0068FF60, 0x0068FF70],
    },
    Shims {
        target: 0x00691770,
        members: &[0x00691DE0],
    },
    Shims {
        target: 0x006930C0,
        members: &[0x0070F7B0],
    },
    Shims {
        target: 0x006993C0,
        members: &[0x006996B0],
    },
    Shims {
        target: 0x0069D2F0,
        members: &[0x0069DC70],
    },
    Shims {
        target: 0x0069D650,
        members: &[0x0069C7B0],
    },
    Shims {
        target: 0x006A33C0,
        members: &[0x00703C70],
    },
    Shims {
        target: 0x006A33E0,
        members: &[0x006A3610],
    },
    Shims {
        target: 0x006A35D0,
        members: &[0x00703D10, 0x007066E0],
    },
    Shims {
        target: 0x006A35E0,
        members: &[0x007068F0],
    },
    Shims {
        target: 0x006D67A0,
        members: &[0x006D7970],
    },
    Shims {
        target: 0x006D8620,
        members: &[0x006D9C50],
    },
    Shims {
        target: 0x006D8780,
        members: &[0x006D87F0],
    },
    Shims {
        target: 0x006D9FF0,
        members: &[0x006DA050],
    },
    Shims {
        target: 0x006DA2B0,
        members: &[0x006DC440],
    },
    Shims {
        target: 0x006DA3F0,
        members: &[0x006DA360, 0x006DA460],
    },
    Shims {
        target: 0x006DCA40,
        members: &[0x006DD0B0, 0x006DD100, 0x006DD200, 0x006DD240, 0x006DD330],
    },
    Shims {
        target: 0x006DCB10,
        members: &[0x006DD1E0],
    },
    Shims {
        target: 0x006DCF30,
        members: &[0x006DD070, 0x006DD090],
    },
    Shims {
        target: 0x006DE070,
        members: &[0x006DE050],
    },
    Shims {
        target: 0x006DE140,
        members: &[0x006DED10],
    },
    Shims {
        target: 0x006DEAA0,
        members: &[0x006DF4E0],
    },
    Shims {
        target: 0x006DEBB0,
        members: &[0x006E4260, 0x01898540],
    },
    Shims {
        target: 0x006DECB0,
        members: &[0x006E0580],
    },
    Shims {
        target: 0x006DED30,
        members: &[0x006E05A0],
    },
    Shims {
        target: 0x006DEFE0,
        members: &[
            0x006DEDE0, 0x006DEE10, 0x006DEE40, 0x006DEE70, 0x006DEEA0, 0x006DEED0, 0x006DEF00,
            0x006DEF30, 0x006DEF60, 0x006DEF90, 0x006DEFC0,
        ],
    },
    Shims {
        target: 0x006DF500,
        members: &[0x006DEB60, 0x006E0530],
    },
    Shims {
        target: 0x006DF710,
        members: &[0x006E18C0, 0x006E1B40, 0x01079D20, 0x018A50A0],
    },
    Shims {
        target: 0x006E1E40,
        members: &[0x006E0E40],
    },
    Shims {
        target: 0x006E1E60,
        members: &[0x006E0E60, 0x006E1E40],
    },
    Shims {
        target: 0x006E3F70,
        members: &[0x01898600],
    },
    Shims {
        target: 0x006E45C0,
        members: &[0x006E45A0],
    },
    Shims {
        target: 0x006E4750,
        members: &[0x006E4730],
    },
    Shims {
        target: 0x006E50B0,
        members: &[0x006E5500],
    },
    Shims {
        target: 0x006E5650,
        members: &[0x006E5040],
    },
    Shims {
        target: 0x006E65F0,
        members: &[0x00A78160],
    },
    Shims {
        target: 0x006E6660,
        members: &[0x006E6840, 0x006E6860],
    },
    Shims {
        target: 0x006E8C30,
        members: &[0x006E8CF0],
    },
    Shims {
        target: 0x006EAE90,
        members: &[0x006EA6F0, 0x006EA870],
    },
    Shims {
        target: 0x006EB6D0,
        members: &[0x006EB770],
    },
    Shims {
        target: 0x006EDB10,
        members: &[0x006F6CA0],
    },
    Shims {
        target: 0x006EEB80,
        members: &[0x006EF830],
    },
    Shims {
        target: 0x006EF710,
        members: &[0x006EEF60],
    },
    Shims {
        target: 0x006EF960,
        members: &[0x006EFC70],
    },
    Shims {
        target: 0x006EFA70,
        members: &[0x006F3C50],
    },
    Shims {
        target: 0x006EFBB0,
        members: &[0x006EFB70, 0x006EFB90],
    },
    Shims {
        target: 0x006EFC30,
        members: &[0x006F92C0],
    },
    Shims {
        target: 0x006EFC90,
        members: &[0x006EEA00],
    },
    Shims {
        target: 0x006EFCB0,
        members: &[0x006EFA20],
    },
    Shims {
        target: 0x006EFE80,
        members: &[0x006EEB60],
    },
    Shims {
        target: 0x006F0150,
        members: &[0x006F92A0, 0x006F9390],
    },
    Shims {
        target: 0x006F71F0,
        members: &[0x006F6FE0, 0x006F7130],
    },
    Shims {
        target: 0x006F97F0,
        members: &[0x00C6AB20],
    },
    Shims {
        target: 0x006FAC40,
        members: &[0x006FCA50],
    },
    Shims {
        target: 0x006FCA20,
        members: &[0x006FAD00],
    },
    Shims {
        target: 0x006FD910,
        members: &[
            0x006FA340, 0x006FB6F0, 0x006FB9A0, 0x006FC570, 0x006FC6D0, 0x006FC870, 0x006FDC50,
        ],
    },
    Shims {
        target: 0x006FEA10,
        members: &[0x006FED60],
    },
    Shims {
        target: 0x00703C80,
        members: &[0x007068B0],
    },
    Shims {
        target: 0x007086A0,
        members: &[0x00708830],
    },
    Shims {
        target: 0x00709B80,
        members: &[0x00709B70],
    },
    Shims {
        target: 0x007113B0,
        members: &[0x00711830],
    },
    Shims {
        target: 0x007175D0,
        members: &[0x00717600],
    },
    Shims {
        target: 0x00717600,
        members: &[0x00717520],
    },
    Shims {
        target: 0x00717630,
        members: &[0x00717550],
    },
    Shims {
        target: 0x00717720,
        members: &[0x00717580],
    },
    Shims {
        target: 0x00717F70,
        members: &[0x00717130, 0x00717EF0],
    },
    Shims {
        target: 0x00723D50,
        members: &[0x00C7A300],
    },
    Shims {
        target: 0x00724350,
        members: &[0x0177D540],
    },
    Shims {
        target: 0x007244A0,
        members: &[0x0177DA70],
    },
    Shims {
        target: 0x007245A0,
        members: &[0x00724500, 0x00724D50],
    },
    Shims {
        target: 0x007267E0,
        members: &[0x007267D0],
    },
    Shims {
        target: 0x00726F00,
        members: &[0x00727050],
    },
    Shims {
        target: 0x00727070,
        members: &[0x00726FC0],
    },
    Shims {
        target: 0x007278B0,
        members: &[0x007238A0],
    },
    Shims {
        target: 0x007287B0,
        members: &[0x00723510],
    },
    Shims {
        target: 0x0072A490,
        members: &[0x0072A750],
    },
    Shims {
        target: 0x0072A770,
        members: &[0x0072A550],
    },
    Shims {
        target: 0x0072D440,
        members: &[0x0149BC40],
    },
    Shims {
        target: 0x0072D5C0,
        members: &[0x0072D440, 0x0072D480, 0x0072D730],
    },
    Shims {
        target: 0x0072D730,
        members: &[0x0072D710],
    },
    Shims {
        target: 0x00741EA0,
        members: &[0x01221730],
    },
    Shims {
        target: 0x00742EB0,
        members: &[
            0x00C76C10, 0x0104E630, 0x0104E7B0, 0x01172850, 0x01172870, 0x01A2F9D0, 0x01A43010,
            0x01CA4310, 0x01CA4330,
        ],
    },
    Shims {
        target: 0x00742ED0,
        members: &[0x006E25C0, 0x0074DB80],
    },
    Shims {
        target: 0x007433D0,
        members: &[0x01819460, 0x0189A2F0],
    },
    Shims {
        target: 0x007496C0,
        members: &[0x00749760],
    },
    Shims {
        target: 0x0074B490,
        members: &[0x0106E8E0, 0x010C1E00],
    },
    Shims {
        target: 0x0074C7B0,
        members: &[0x0074C8E0],
    },
    Shims {
        target: 0x00778A40,
        members: &[0x00787C20],
    },
    Shims {
        target: 0x00778A80,
        members: &[0x00787F40],
    },
    Shims {
        target: 0x00778E90,
        members: &[0x00778E60, 0x00778EC0],
    },
    Shims {
        target: 0x007810F0,
        members: &[0x00779360],
    },
    Shims {
        target: 0x00781840,
        members: &[0x00777CD0],
    },
    Shims {
        target: 0x007818B0,
        members: &[0x00654590],
    },
    Shims {
        target: 0x00786890,
        members: &[
            0x00699A50, 0x0069A1B0, 0x0070BC60, 0x0070CAC0, 0x0070F530, 0x00786C80,
        ],
    },
    Shims {
        target: 0x00786C80,
        members: &[0x0068FD30, 0x006993C0, 0x0070EC90, 0x0070F3B0, 0x00813880],
    },
    Shims {
        target: 0x00787D50,
        members: &[0x00D41A80, 0x00D41B60],
    },
    Shims {
        target: 0x007885B0,
        members: &[0x007892C0],
    },
    Shims {
        target: 0x00788E40,
        members: &[0x00D395B0, 0x00D432C0],
    },
    Shims {
        target: 0x00788F40,
        members: &[0x00D3EF90, 0x00D44F00, 0x00D48570, 0x00D496D0, 0x00D49E70],
    },
    Shims {
        target: 0x007892B0,
        members: &[0x00D48580, 0x00D496E0],
    },
    Shims {
        target: 0x007899D0,
        members: &[0x00D48590, 0x00D496F0, 0x00D4B2B0, 0x00D4C7B0, 0x00D4CD30],
    },
    Shims {
        target: 0x0078A240,
        members: &[0x0078B640],
    },
    Shims {
        target: 0x0078A4D0,
        members: &[0x0078B3A0],
    },
    Shims {
        target: 0x0078B6D0,
        members: &[0x0078AB60],
    },
    Shims {
        target: 0x0078B7C0,
        members: &[0x0078B700],
    },
    Shims {
        target: 0x0078B810,
        members: &[0x0078B830],
    },
    Shims {
        target: 0x0078B850,
        members: &[0x0078B7C0],
    },
    Shims {
        target: 0x0078B960,
        members: &[0x0078BCB0],
    },
    Shims {
        target: 0x0078BC90,
        members: &[0x0078BBD0],
    },
    Shims {
        target: 0x0078BCE0,
        members: &[0x0078BD00],
    },
    Shims {
        target: 0x0078BD20,
        members: &[0x0078BC90],
    },
    Shims {
        target: 0x0078BE30,
        members: &[0x0078BE70],
    },
    Shims {
        target: 0x0078BEA0,
        members: &[0x0078B6D0],
    },
    Shims {
        target: 0x0078C820,
        members: &[0x0078C850],
    },
    Shims {
        target: 0x0078C850,
        members: &[0x0078C770],
    },
    Shims {
        target: 0x0078C880,
        members: &[0x0078C7A0],
    },
    Shims {
        target: 0x0078C970,
        members: &[0x0078C7D0],
    },
    Shims {
        target: 0x0078D1C0,
        members: &[0x0078C380, 0x0078D140],
    },
    Shims {
        target: 0x0078D2B0,
        members: &[0x0078E6F0],
    },
    Shims {
        target: 0x0078D540,
        members: &[0x0078E430],
    },
    Shims {
        target: 0x0078E780,
        members: &[0x0078DBE0],
    },
    Shims {
        target: 0x0078E870,
        members: &[0x0078E7B0],
    },
    Shims {
        target: 0x0078E8C0,
        members: &[0x0078E8E0],
    },
    Shims {
        target: 0x0078E900,
        members: &[0x0078E870],
    },
    Shims {
        target: 0x0078EA10,
        members: &[0x0078ED60],
    },
    Shims {
        target: 0x0078ED40,
        members: &[0x0078EC80],
    },
    Shims {
        target: 0x0078ED90,
        members: &[0x0078EDB0],
    },
    Shims {
        target: 0x0078EDD0,
        members: &[0x0078ED40],
    },
    Shims {
        target: 0x0078EEE0,
        members: &[0x0078EF20],
    },
    Shims {
        target: 0x0078EF50,
        members: &[0x0078E780],
    },
    Shims {
        target: 0x0078F0A0,
        members: &[0x00790680],
    },
    Shims {
        target: 0x0078F3A0,
        members: &[0x007903C0],
    },
    Shims {
        target: 0x00790710,
        members: &[0x0078FAF0],
    },
    Shims {
        target: 0x00790800,
        members: &[0x00790740],
    },
    Shims {
        target: 0x00790850,
        members: &[0x00790890],
    },
    Shims {
        target: 0x007908C0,
        members: &[0x00790800],
    },
    Shims {
        target: 0x007909D0,
        members: &[0x00790D20],
    },
    Shims {
        target: 0x00790D00,
        members: &[0x00790C40],
    },
    Shims {
        target: 0x00790D50,
        members: &[0x00790D70],
    },
    Shims {
        target: 0x00790D90,
        members: &[0x00790D00],
    },
    Shims {
        target: 0x00790EA0,
        members: &[0x00790EF0],
    },
    Shims {
        target: 0x00790F20,
        members: &[0x00790710],
    },
    Shims {
        target: 0x00791370,
        members: &[0x007927B0],
    },
    Shims {
        target: 0x00791600,
        members: &[0x007924F0],
    },
    Shims {
        target: 0x00792840,
        members: &[0x00791CA0],
    },
    Shims {
        target: 0x00792860,
        members: &[0x00792BB0, 0x00794DF0],
    },
    Shims {
        target: 0x00792B90,
        members: &[0x00792AD0],
    },
    Shims {
        target: 0x00792BE0,
        members: &[0x00792C00],
    },
    Shims {
        target: 0x00792C20,
        members: &[0x00792B90],
    },
    Shims {
        target: 0x00792D30,
        members: &[0x00793080],
    },
    Shims {
        target: 0x00793060,
        members: &[0x00792FA0],
    },
    Shims {
        target: 0x007930B0,
        members: &[0x007930D0],
    },
    Shims {
        target: 0x007930F0,
        members: &[0x00793060],
    },
    Shims {
        target: 0x00793200,
        members: &[0x00793240],
    },
    Shims {
        target: 0x00793270,
        members: &[0x00792840],
    },
    Shims {
        target: 0x007936D0,
        members: &[0x00794C50],
    },
    Shims {
        target: 0x00793980,
        members: &[0x00794990],
    },
    Shims {
        target: 0x00794CE0,
        members: &[0x007940B0],
    },
    Shims {
        target: 0x00794DD0,
        members: &[0x00794D10],
    },
    Shims {
        target: 0x00794E20,
        members: &[0x00794E40],
    },
    Shims {
        target: 0x00794E60,
        members: &[0x00794DD0],
    },
    Shims {
        target: 0x00794F70,
        members: &[0x00795300],
    },
    Shims {
        target: 0x007952E0,
        members: &[0x00795220],
    },
    Shims {
        target: 0x00795330,
        members: &[0x00795360],
    },
    Shims {
        target: 0x00795390,
        members: &[0x007952E0],
    },
    Shims {
        target: 0x007954A0,
        members: &[0x007954E0],
    },
    Shims {
        target: 0x00795510,
        members: &[0x00794CE0],
    },
    Shims {
        target: 0x00795980,
        members: &[0x00797070],
    },
    Shims {
        target: 0x00795C90,
        members: &[0x00796DB0],
    },
    Shims {
        target: 0x00797100,
        members: &[0x007964A0],
    },
    Shims {
        target: 0x007971F0,
        members: &[0x00797130],
    },
    Shims {
        target: 0x00797240,
        members: &[0x00797280],
    },
    Shims {
        target: 0x007972B0,
        members: &[0x007971F0],
    },
    Shims {
        target: 0x007973C0,
        members: &[0x00797740],
    },
    Shims {
        target: 0x00797720,
        members: &[0x00797660],
    },
    Shims {
        target: 0x00797770,
        members: &[0x007977A0],
    },
    Shims {
        target: 0x007977D0,
        members: &[0x00797720],
    },
    Shims {
        target: 0x007978E0,
        members: &[0x00797940],
    },
    Shims {
        target: 0x00797970,
        members: &[0x00797100],
    },
    Shims {
        target: 0x00798350,
        members: &[0x00798380],
    },
    Shims {
        target: 0x00798380,
        members: &[0x007982A0],
    },
    Shims {
        target: 0x007983B0,
        members: &[0x007982D0],
    },
    Shims {
        target: 0x007984E0,
        members: &[0x00798300],
    },
    Shims {
        target: 0x00799090,
        members: &[0x00797EB0, 0x00798F70],
    },
    Shims {
        target: 0x007999E0,
        members: &[0x00799A10],
    },
    Shims {
        target: 0x00799A10,
        members: &[0x00799930],
    },
    Shims {
        target: 0x00799A40,
        members: &[0x00799960],
    },
    Shims {
        target: 0x00799B30,
        members: &[0x00799990],
    },
    Shims {
        target: 0x0079A380,
        members: &[0x00799540, 0x0079A300],
    },
    Shims {
        target: 0x0079ACD0,
        members: &[0x0079AD00],
    },
    Shims {
        target: 0x0079AD00,
        members: &[0x0079AC20],
    },
    Shims {
        target: 0x0079AD30,
        members: &[0x0079AC50],
    },
    Shims {
        target: 0x0079AE20,
        members: &[0x0079AC80],
    },
    Shims {
        target: 0x0079B670,
        members: &[0x0079A830, 0x0079B5F0],
    },
    Shims {
        target: 0x0079BFC0,
        members: &[0x0079BFF0],
    },
    Shims {
        target: 0x0079BFF0,
        members: &[0x0079BF10],
    },
    Shims {
        target: 0x0079C020,
        members: &[0x0079BF40],
    },
    Shims {
        target: 0x0079C110,
        members: &[0x0079BF70],
    },
    Shims {
        target: 0x0079C9D0,
        members: &[0x0079BB20, 0x0079C930],
    },
    Shims {
        target: 0x0079D1A0,
        members: &[0x0079D1D0],
    },
    Shims {
        target: 0x0079D1D0,
        members: &[0x0079D0F0],
    },
    Shims {
        target: 0x0079D200,
        members: &[0x0079D120],
    },
    Shims {
        target: 0x0079D300,
        members: &[0x0079D150],
    },
    Shims {
        target: 0x0079DC60,
        members: &[0x0079CD00, 0x0079DBB0],
    },
    Shims {
        target: 0x0079E460,
        members: &[0x0079E490],
    },
    Shims {
        target: 0x0079E490,
        members: &[0x0079E3B0],
    },
    Shims {
        target: 0x0079E4C0,
        members: &[0x0079E3E0],
    },
    Shims {
        target: 0x0079E5B0,
        members: &[0x0079E410],
    },
    Shims {
        target: 0x0079EE00,
        members: &[0x0079DFC0, 0x0079ED80],
    },
    Shims {
        target: 0x0079F820,
        members: &[0x0079F850],
    },
    Shims {
        target: 0x0079F850,
        members: &[0x0079F770],
    },
    Shims {
        target: 0x0079F880,
        members: &[0x0079F7A0],
    },
    Shims {
        target: 0x0079F980,
        members: &[0x0079F7D0],
    },
    Shims {
        target: 0x007A02E0,
        members: &[0x0079F380, 0x007A0230],
    },
    Shims {
        target: 0x007A0AE0,
        members: &[0x007A0B10],
    },
    Shims {
        target: 0x007A0B10,
        members: &[0x007A0A30],
    },
    Shims {
        target: 0x007A0B40,
        members: &[0x007A0A60],
    },
    Shims {
        target: 0x007A0C30,
        members: &[0x007A0A90],
    },
    Shims {
        target: 0x007A1480,
        members: &[0x007A0640, 0x007A1400],
    },
    Shims {
        target: 0x007A1C60,
        members: &[0x007A1C90],
    },
    Shims {
        target: 0x007A1C90,
        members: &[0x007A1BB0],
    },
    Shims {
        target: 0x007A1CC0,
        members: &[0x007A1BE0],
    },
    Shims {
        target: 0x007A1DF0,
        members: &[0x007A1C10],
    },
    Shims {
        target: 0x007A2990,
        members: &[0x007A17C0, 0x007A2870],
    },
    Shims {
        target: 0x007A3190,
        members: &[0x007A31C0],
    },
    Shims {
        target: 0x007A31C0,
        members: &[0x007A30E0],
    },
    Shims {
        target: 0x007A31F0,
        members: &[0x007A3110],
    },
    Shims {
        target: 0x007A32E0,
        members: &[0x007A3140],
    },
    Shims {
        target: 0x007A3B30,
        members: &[0x007A2CF0, 0x007A3AB0],
    },
    Shims {
        target: 0x007A4300,
        members: &[0x007A4330],
    },
    Shims {
        target: 0x007A4330,
        members: &[0x007A4250],
    },
    Shims {
        target: 0x007A4360,
        members: &[0x007A4280],
    },
    Shims {
        target: 0x007A4460,
        members: &[0x007A42B0],
    },
    Shims {
        target: 0x007A4DC0,
        members: &[0x007A3E60, 0x007A4D10],
    },
    Shims {
        target: 0x007A55F0,
        members: &[0x007A5620],
    },
    Shims {
        target: 0x007A5620,
        members: &[0x007A5540],
    },
    Shims {
        target: 0x007A5650,
        members: &[0x007A5570],
    },
    Shims {
        target: 0x007A5740,
        members: &[0x007A55A0],
    },
    Shims {
        target: 0x007A5F90,
        members: &[0x007A5150, 0x007A5F10],
    },
    Shims {
        target: 0x007A6760,
        members: &[0x007A6790],
    },
    Shims {
        target: 0x007A6790,
        members: &[0x007A66B0],
    },
    Shims {
        target: 0x007A67C0,
        members: &[0x007A66E0],
    },
    Shims {
        target: 0x007A68B0,
        members: &[0x007A6710],
    },
    Shims {
        target: 0x007A7100,
        members: &[0x007A62C0, 0x007A7080],
    },
    Shims {
        target: 0x007A78E0,
        members: &[0x007A7910],
    },
    Shims {
        target: 0x007A7910,
        members: &[0x007A7830],
    },
    Shims {
        target: 0x007A7940,
        members: &[0x007A7860],
    },
    Shims {
        target: 0x007A7A40,
        members: &[0x007A7890],
    },
    Shims {
        target: 0x007A83C0,
        members: &[0x007A7440, 0x007A8300],
    },
    Shims {
        target: 0x007A8BD0,
        members: &[0x007A8C00],
    },
    Shims {
        target: 0x007A8C00,
        members: &[0x007A8B20],
    },
    Shims {
        target: 0x007A8C30,
        members: &[0x007A8B50],
    },
    Shims {
        target: 0x007A8D30,
        members: &[0x007A8B80],
    },
    Shims {
        target: 0x007A9690,
        members: &[0x007A8730, 0x007A95E0],
    },
    Shims {
        target: 0x007A9E70,
        members: &[0x007A9EA0],
    },
    Shims {
        target: 0x007A9EA0,
        members: &[0x007A9DC0],
    },
    Shims {
        target: 0x007A9ED0,
        members: &[0x007A9DF0],
    },
    Shims {
        target: 0x007AA000,
        members: &[0x007A9E20],
    },
    Shims {
        target: 0x007AABB0,
        members: &[0x007A99D0, 0x007AAA90],
    },
    Shims {
        target: 0x007AB3B0,
        members: &[0x007AB3E0],
    },
    Shims {
        target: 0x007AB3E0,
        members: &[0x007AB300],
    },
    Shims {
        target: 0x007AB410,
        members: &[0x007AB330],
    },
    Shims {
        target: 0x007AB510,
        members: &[0x007AB360],
    },
    Shims {
        target: 0x007ABE70,
        members: &[0x007AAF10, 0x007ABDC0],
    },
    Shims {
        target: 0x007D53C0,
        members: &[0x007D56E0],
    },
    Shims {
        target: 0x007D6390,
        members: &[0x007D6270, 0x007D6450],
    },
    Shims {
        target: 0x007D6CC0,
        members: &[0x007D6C70],
    },
    Shims {
        target: 0x007D6D80,
        members: &[0x007D6D40],
    },
    Shims {
        target: 0x007D7160,
        members: &[0x007D7350, 0x007D7370],
    },
    Shims {
        target: 0x007D78E0,
        members: &[0x007D7A10, 0x007D7A50],
    },
    Shims {
        target: 0x007D7940,
        members: &[0x007D78B0],
    },
    Shims {
        target: 0x007D7A10,
        members: &[0x007D7BB0],
    },
    Shims {
        target: 0x007DC5F0,
        members: &[0x00BD6E90, 0x00BD7120],
    },
    Shims {
        target: 0x007DD290,
        members: &[0x007E1EF0],
    },
    Shims {
        target: 0x007DD3A0,
        members: &[0x007E5720],
    },
    Shims {
        target: 0x007DD620,
        members: &[0x007DDC30],
    },
    Shims {
        target: 0x007DE060,
        members: &[0x007E57F0],
    },
    Shims {
        target: 0x007E2F10,
        members: &[0x007DD350],
    },
    Shims {
        target: 0x007E4040,
        members: &[0x007E40C0],
    },
    Shims {
        target: 0x007E4F50,
        members: &[0x007E50B0, 0x007E50D0],
    },
    Shims {
        target: 0x007F95C0,
        members: &[0x014B5E80, 0x0152FEA0, 0x01532F80],
    },
    Shims {
        target: 0x007FA0C0,
        members: &[0x007FA170],
    },
    Shims {
        target: 0x007FCBE0,
        members: &[0x01AEBE00],
    },
    Shims {
        target: 0x007FD000,
        members: &[0x007FCE60],
    },
    Shims {
        target: 0x007FDA20,
        members: &[0x007FDA00],
    },
    Shims {
        target: 0x007FDF10,
        members: &[0x01140E00],
    },
    Shims {
        target: 0x007FDF50,
        members: &[0x00805990, 0x01C3B3F0],
    },
    Shims {
        target: 0x007FFBE0,
        members: &[0x011981D0],
    },
    Shims {
        target: 0x007FFC60,
        members: &[0x0196B230],
    },
    Shims {
        target: 0x008005A0,
        members: &[0x0196A210],
    },
    Shims {
        target: 0x008005B0,
        members: &[0x0196A1F0],
    },
    Shims {
        target: 0x00800700,
        members: &[0x012368E0, 0x01236930],
    },
    Shims {
        target: 0x00800DC0,
        members: &[0x01C6CAD0],
    },
    Shims {
        target: 0x00801620,
        members: &[0x018DD030, 0x0194DE50],
    },
    Shims {
        target: 0x00801B50,
        members: &[0x018DD040],
    },
    Shims {
        target: 0x00801D40,
        members: &[0x018DD050, 0x0194DE60],
    },
    Shims {
        target: 0x00801DC0,
        members: &[0x01C6EC20],
    },
    Shims {
        target: 0x00802980,
        members: &[0x01AEBA70],
    },
    Shims {
        target: 0x00805200,
        members: &[
            0x00803820, 0x00C88100, 0x00F51340, 0x0104F580, 0x0106DD90, 0x0108BC00, 0x010A5AD0,
            0x010E1DC0, 0x011781D0, 0x01232E80, 0x01233020, 0x012368F0, 0x012B6310, 0x0146F480,
            0x0152FEC0,
        ],
    },
    Shims {
        target: 0x00805990,
        members: &[0x00805ED0, 0x011781B0, 0x011A4F10, 0x011ACCE0, 0x01232E60],
    },
    Shims {
        target: 0x008059A0,
        members: &[0x011A5060],
    },
    Shims {
        target: 0x00806F90,
        members: &[0x01C76B50],
    },
    Shims {
        target: 0x00806FD0,
        members: &[0x01C76B80],
    },
    Shims {
        target: 0x008088B0,
        members: &[
            0x01799630, 0x019A4FB0, 0x01B96070, 0x01B97B60, 0x01B988B0, 0x01C8F250, 0x01C8F320,
            0x01C9AFA0,
        ],
    },
    Shims {
        target: 0x00809420,
        members: &[0x00808DE0],
    },
    Shims {
        target: 0x00809D40,
        members: &[0x0080C5D0],
    },
    Shims {
        target: 0x00809DB0,
        members: &[0x0080C5F0],
    },
    Shims {
        target: 0x00809E70,
        members: &[0x0080F1F0],
    },
    Shims {
        target: 0x00809E90,
        members: &[0x0080F210],
    },
    Shims {
        target: 0x0080AA70,
        members: &[0x0080ABE0, 0x0080ABF0],
    },
    Shims {
        target: 0x0080ABA0,
        members: &[0x00806010],
    },
    Shims {
        target: 0x0080CC70,
        members: &[0x0069C3C0, 0x00D7C9A0],
    },
    Shims {
        target: 0x0080D240,
        members: &[0x00806750],
    },
    Shims {
        target: 0x0080D760,
        members: &[0x0080DB80],
    },
    Shims {
        target: 0x0080DAC0,
        members: &[0x0072C2A0],
    },
    Shims {
        target: 0x0080E110,
        members: &[0x0080DDB0],
    },
    Shims {
        target: 0x00812600,
        members: &[0x00812950],
    },
    Shims {
        target: 0x00813880,
        members: &[0x0070A520, 0x0070A850],
    },
    Shims {
        target: 0x00821E90,
        members: &[0x00821F80],
    },
    Shims {
        target: 0x0082A4A0,
        members: &[0x00C59AB0, 0x00C59BA0, 0x00F409C0, 0x00F40A70],
    },
    Shims {
        target: 0x0082A4E0,
        members: &[0x00C59B60, 0x00C59C50],
    },
    Shims {
        target: 0x0082A4F0,
        members: &[0x00C59B80, 0x00C59C70],
    },
    Shims {
        target: 0x0082A6C0,
        members: &[0x01794D60, 0x01C6D670],
    },
    Shims {
        target: 0x0082B200,
        members: &[0x0082B1E0],
    },
    Shims {
        target: 0x0082D110,
        members: &[0x0082D140],
    },
    Shims {
        target: 0x0082D140,
        members: &[0x0082D060],
    },
    Shims {
        target: 0x0082D170,
        members: &[0x0082D090],
    },
    Shims {
        target: 0x0082D260,
        members: &[0x0082D0C0],
    },
    Shims {
        target: 0x0082DA80,
        members: &[0x0082CC70, 0x0082DA20],
    },
    Shims {
        target: 0x0082E250,
        members: &[0x0082E280],
    },
    Shims {
        target: 0x0082E280,
        members: &[0x0082E1A0],
    },
    Shims {
        target: 0x0082E2B0,
        members: &[0x0082E1D0],
    },
    Shims {
        target: 0x0082E3A0,
        members: &[0x0082E200],
    },
    Shims {
        target: 0x0082EC60,
        members: &[0x0082DDB0, 0x0082EBC0],
    },
    Shims {
        target: 0x00835150,
        members: &[0x00B07A80],
    },
    Shims {
        target: 0x00835220,
        members: &[0x00835D10, 0x00B07AA0],
    },
    Shims {
        target: 0x0083D560,
        members: &[0x008482C0],
    },
    Shims {
        target: 0x0083DBE0,
        members: &[0x00845AA0],
    },
    Shims {
        target: 0x0083E760,
        members: &[0x0083E8E0, 0x0083E920],
    },
    Shims {
        target: 0x0083F200,
        members: &[0x0083F3F0],
    },
    Shims {
        target: 0x0083F3F0,
        members: &[0x00849E90],
    },
    Shims {
        target: 0x0083F420,
        members: &[0x00B0B5D0],
    },
    Shims {
        target: 0x0083F440,
        members: &[0x00B0B5E0],
    },
    Shims {
        target: 0x00841CF0,
        members: &[0x00841BB0],
    },
    Shims {
        target: 0x00841D00,
        members: &[0x00841B90],
    },
    Shims {
        target: 0x008447F0,
        members: &[0x00849510, 0x00849540],
    },
    Shims {
        target: 0x00845EA0,
        members: &[0x00B0B580],
    },
    Shims {
        target: 0x008468E0,
        members: &[0x00B0B5C0],
    },
    Shims {
        target: 0x00848870,
        members: &[0x00F02610],
    },
    Shims {
        target: 0x00848DB0,
        members: &[0x00B11770],
    },
    Shims {
        target: 0x0084A020,
        members: &[0x00F4A520],
    },
    Shims {
        target: 0x0084A280,
        members: &[0x0084CA70],
    },
    Shims {
        target: 0x0084BC70,
        members: &[0x0084C800],
    },
    Shims {
        target: 0x0084DC90,
        members: &[0x00B0B5F0, 0x00F02620, 0x00F4A6B0],
    },
    Shims {
        target: 0x0084E0E0,
        members: &[0x0084DDB0],
    },
    Shims {
        target: 0x0084E190,
        members: &[0x0084D400],
    },
    Shims {
        target: 0x0084E230,
        members: &[0x0084E370, 0x0084E3C0],
    },
    Shims {
        target: 0x0084E390,
        members: &[0x00B0ADD0],
    },
    Shims {
        target: 0x00852C70,
        members: &[0x008543E0],
    },
    Shims {
        target: 0x00852F70,
        members: &[0x00854110],
    },
    Shims {
        target: 0x00854470,
        members: &[0x008537B0],
    },
    Shims {
        target: 0x00854560,
        members: &[0x008544A0],
    },
    Shims {
        target: 0x008545B0,
        members: &[0x008545F0],
    },
    Shims {
        target: 0x00854620,
        members: &[0x00854560],
    },
    Shims {
        target: 0x00854800,
        members: &[0x00854740],
    },
    Shims {
        target: 0x00854850,
        members: &[0x00854890],
    },
    Shims {
        target: 0x008548C0,
        members: &[0x00854800],
    },
    Shims {
        target: 0x008549D0,
        members: &[0x00854A30],
    },
    Shims {
        target: 0x00854A60,
        members: &[0x00854470],
    },
    Shims {
        target: 0x00855270,
        members: &[0x008552A0],
    },
    Shims {
        target: 0x008552A0,
        members: &[0x008551C0],
    },
    Shims {
        target: 0x008552D0,
        members: &[0x008551F0],
    },
    Shims {
        target: 0x00855400,
        members: &[0x00855220],
    },
    Shims {
        target: 0x00855FA0,
        members: &[0x00854DD0, 0x00855E80],
    },
    Shims {
        target: 0x0086CCD0,
        members: &[0x00864600, 0x00864980, 0x009D6A50, 0x009D6B20, 0x009DD060],
    },
    Shims {
        target: 0x0086E810,
        members: &[0x00878880],
    },
    Shims {
        target: 0x0086E8C0,
        members: &[0x008788C0],
    },
    Shims {
        target: 0x008738A0,
        members: &[0x00873B50],
    },
    Shims {
        target: 0x008738F0,
        members: &[0x00873B60],
    },
    Shims {
        target: 0x00873940,
        members: &[0x00873B80],
    },
    Shims {
        target: 0x00873980,
        members: &[0x00873B90],
    },
    Shims {
        target: 0x00874C90,
        members: &[0x008B1640, 0x008B1820],
    },
    Shims {
        target: 0x00877CC0,
        members: &[0x00CBAF90],
    },
    Shims {
        target: 0x00878530,
        members: &[0x00C8C300],
    },
    Shims {
        target: 0x008786A0,
        members: &[0x00CEC260],
    },
    Shims {
        target: 0x008786C0,
        members: &[0x008786A0],
    },
    Shims {
        target: 0x00879070,
        members: &[0x00CECBF0],
    },
    Shims {
        target: 0x00882AA0,
        members: &[0x00CAC430],
    },
    Shims {
        target: 0x0089B920,
        members: &[
            0x008964A0, 0x00896520, 0x00896590, 0x008965F0, 0x008966B0, 0x008967A0, 0x00896B40,
            0x00896BB0, 0x00896C90,
        ],
    },
    Shims {
        target: 0x0089C9F0,
        members: &[0x00896CC0, 0x00CB9E10],
    },
    Shims {
        target: 0x008AFCA0,
        members: &[0x008B03D0],
    },
    Shims {
        target: 0x008B1530,
        members: &[0x008B1470],
    },
    Shims {
        target: 0x008B1640,
        members: &[0x008B2650],
    },
    Shims {
        target: 0x008B8510,
        members: &[0x008B83C0],
    },
    Shims {
        target: 0x008B8B30,
        members: &[0x0094EE90],
    },
    Shims {
        target: 0x008B9B00,
        members: &[0x008B9B30],
    },
    Shims {
        target: 0x008B9B30,
        members: &[0x008B9A50],
    },
    Shims {
        target: 0x008B9B60,
        members: &[0x008B9A80],
    },
    Shims {
        target: 0x008B9C50,
        members: &[0x008B9AB0],
    },
    Shims {
        target: 0x008BA4A0,
        members: &[0x008B9660, 0x008BA420],
    },
    Shims {
        target: 0x008BADF0,
        members: &[0x008BAE20],
    },
    Shims {
        target: 0x008BAE20,
        members: &[0x008BAD40],
    },
    Shims {
        target: 0x008BAE50,
        members: &[0x008BAD70],
    },
    Shims {
        target: 0x008BAF40,
        members: &[0x008BADA0],
    },
    Shims {
        target: 0x008BB790,
        members: &[0x008BA950, 0x008BB710],
    },
    Shims {
        target: 0x008E59A0,
        members: &[
            0x008ED230, 0x008ED2A0, 0x008ED300, 0x008ED370, 0x008ED3E0, 0x008ED450, 0x008ED4C0,
            0x008ED530, 0x008ED5A0, 0x008ED760, 0x008ED7D0, 0x008ED840, 0x008ED8B0, 0x008ED920,
            0x008ED990, 0x008EDA00, 0x008EDAE0, 0x008EE880, 0x008EE950, 0x008EE9C0, 0x008EEB80,
            0x008EEC40, 0x008EECF0, 0x008EEEC0, 0x008EEF30, 0x008EF600, 0x008EF6C0, 0x008EF780,
            0x008EF840, 0x008EF900, 0x008EF9C0, 0x008EFA80, 0x008EFB40, 0x008EFC00,
        ],
    },
    Shims {
        target: 0x008E5AF0,
        members: &[
            0x008EDA70, 0x008EDB40, 0x008EDC00, 0x008EDCC0, 0x008EDD90, 0x008EDE00, 0x008EDE70,
            0x008EDEE0, 0x008EE190, 0x008EE200, 0x008EE270, 0x008EE2E0, 0x008EE340, 0x008EE5C0,
            0x008EE630, 0x008EE6A0, 0x008EE820, 0x008EEA20, 0x008EEAE0, 0x008EFCD0, 0x008EFD50,
            0x008EFF40, 0x008EFFC0, 0x008F0040, 0x008F00C0, 0x008F0140, 0x008F01C0, 0x008F0230,
            0x008F02D0, 0x008F0370, 0x008F0430, 0x008F04D0, 0x008F0590, 0x008F11B0,
        ],
    },
    Shims {
        target: 0x008E5C60,
        members: &[
            0x008EC200, 0x008EC280, 0x008EC300, 0x008ECE70, 0x008ECEF0, 0x008ECF70,
        ],
    },
    Shims {
        target: 0x008F3840,
        members: &[0x008F46C0],
    },
    Shims {
        target: 0x008F3980,
        members: &[0x008F4700],
    },
    Shims {
        target: 0x008F4570,
        members: &[0x008F45F0],
    },
    Shims {
        target: 0x008F4720,
        members: &[0x008F4E40],
    },
    Shims {
        target: 0x008F9470,
        members: &[0x008F7910],
    },
    Shims {
        target: 0x008FDEC0,
        members: &[0x0096F600],
    },
    Shims {
        target: 0x008FF090,
        members: &[0x008FF300],
    },
    Shims {
        target: 0x008FF0B0,
        members: &[0x008FF320],
    },
    Shims {
        target: 0x009007E0,
        members: &[0x00900990, 0x009009A0],
    },
    Shims {
        target: 0x00949080,
        members: &[0x00949070],
    },
    Shims {
        target: 0x00953F10,
        members: &[0x0098D420],
    },
    Shims {
        target: 0x00966240,
        members: &[0x00966270],
    },
    Shims {
        target: 0x0098E3E0,
        members: &[0x00990100],
    },
    Shims {
        target: 0x0098E420,
        members: &[0x00990120],
    },
    Shims {
        target: 0x009906D0,
        members: &[0x0099BE50],
    },
    Shims {
        target: 0x0099D560,
        members: &[0x0099D590],
    },
    Shims {
        target: 0x0099D590,
        members: &[0x0099D4B0],
    },
    Shims {
        target: 0x0099D5C0,
        members: &[0x0099D4E0],
    },
    Shims {
        target: 0x0099D6B0,
        members: &[0x0099D510],
    },
    Shims {
        target: 0x0099DF00,
        members: &[0x0099D0C0, 0x0099DE80],
    },
    Shims {
        target: 0x0099E850,
        members: &[0x0099E880],
    },
    Shims {
        target: 0x0099E880,
        members: &[0x0099E7A0],
    },
    Shims {
        target: 0x0099E8B0,
        members: &[0x0099E7D0],
    },
    Shims {
        target: 0x0099E9B0,
        members: &[0x0099E800],
    },
    Shims {
        target: 0x0099F310,
        members: &[0x0099E3B0, 0x0099F260],
    },
    Shims {
        target: 0x0099FC60,
        members: &[0x0099FC90],
    },
    Shims {
        target: 0x0099FC90,
        members: &[0x0099FBB0],
    },
    Shims {
        target: 0x0099FCC0,
        members: &[0x0099FBE0],
    },
    Shims {
        target: 0x0099FDB0,
        members: &[0x0099FC10],
    },
    Shims {
        target: 0x009A0600,
        members: &[0x0099F7C0, 0x009A0580],
    },
    Shims {
        target: 0x009A0F50,
        members: &[0x009A0F80],
    },
    Shims {
        target: 0x009A0F80,
        members: &[0x009A0EA0],
    },
    Shims {
        target: 0x009A0FB0,
        members: &[0x009A0ED0],
    },
    Shims {
        target: 0x009A10A0,
        members: &[0x009A0F00],
    },
    Shims {
        target: 0x009A18F0,
        members: &[0x009A0AB0, 0x009A1870],
    },
    Shims {
        target: 0x009A2240,
        members: &[0x009A2270],
    },
    Shims {
        target: 0x009A2270,
        members: &[0x009A2190],
    },
    Shims {
        target: 0x009A22A0,
        members: &[0x009A21C0],
    },
    Shims {
        target: 0x009A2390,
        members: &[0x009A21F0],
    },
    Shims {
        target: 0x009A2BE0,
        members: &[0x009A1DA0, 0x009A2B60],
    },
    Shims {
        target: 0x009A3530,
        members: &[0x009A3560],
    },
    Shims {
        target: 0x009A3560,
        members: &[0x009A3480],
    },
    Shims {
        target: 0x009A3590,
        members: &[0x009A34B0],
    },
    Shims {
        target: 0x009A3680,
        members: &[0x009A34E0],
    },
    Shims {
        target: 0x009A3ED0,
        members: &[0x009A3090, 0x009A3E50],
    },
    Shims {
        target: 0x009A3FB0,
        members: &[0x009A4620],
    },
    Shims {
        target: 0x009A4650,
        members: &[0x009A4290],
    },
    Shims {
        target: 0x009A46D0,
        members: &[0x009A4650],
    },
    Shims {
        target: 0x009A47B0,
        members: &[0x009A4E20],
    },
    Shims {
        target: 0x009A4E50,
        members: &[0x009A4A90],
    },
    Shims {
        target: 0x009A4ED0,
        members: &[0x009A4E50],
    },
    Shims {
        target: 0x009A4FB0,
        members: &[0x009A5620],
    },
    Shims {
        target: 0x009A5650,
        members: &[0x009A5290],
    },
    Shims {
        target: 0x009A56D0,
        members: &[0x009A5650],
    },
    Shims {
        target: 0x009A6020,
        members: &[0x009A6050],
    },
    Shims {
        target: 0x009A6050,
        members: &[0x009A5F70],
    },
    Shims {
        target: 0x009A6080,
        members: &[0x009A5FA0],
    },
    Shims {
        target: 0x009A6170,
        members: &[0x009A5FD0],
    },
    Shims {
        target: 0x009A69C0,
        members: &[0x009A5B80, 0x009A6940],
    },
    Shims {
        target: 0x009A7310,
        members: &[0x009A7340],
    },
    Shims {
        target: 0x009A7340,
        members: &[0x009A7260],
    },
    Shims {
        target: 0x009A7370,
        members: &[0x009A7290],
    },
    Shims {
        target: 0x009A7460,
        members: &[0x009A72C0],
    },
    Shims {
        target: 0x009A7CB0,
        members: &[0x009A6E70, 0x009A7C30],
    },
    Shims {
        target: 0x009A7DF0,
        members: &[0x009A9590],
    },
    Shims {
        target: 0x009A8100,
        members: &[0x009A92C0],
    },
    Shims {
        target: 0x009A91A0,
        members: &[0x009766F0],
    },
    Shims {
        target: 0x009A9620,
        members: &[0x009A8920],
    },
    Shims {
        target: 0x009A9710,
        members: &[0x009A9650],
    },
    Shims {
        target: 0x009A9760,
        members: &[0x009A9780],
    },
    Shims {
        target: 0x009A97A0,
        members: &[0x009A9710],
    },
    Shims {
        target: 0x009A98B0,
        members: &[0x009A9CA0],
    },
    Shims {
        target: 0x009A9C80,
        members: &[0x009A9BC0],
    },
    Shims {
        target: 0x009A9CD0,
        members: &[0x009A9D10],
    },
    Shims {
        target: 0x009A9D40,
        members: &[0x009A9C80],
    },
    Shims {
        target: 0x009A9E50,
        members: &[0x009A9EA0],
    },
    Shims {
        target: 0x009A9ED0,
        members: &[0x009A9620],
    },
    Shims {
        target: 0x009AA850,
        members: &[0x009AA880],
    },
    Shims {
        target: 0x009AA880,
        members: &[0x009AA7A0],
    },
    Shims {
        target: 0x009AA8B0,
        members: &[0x009AA7D0],
    },
    Shims {
        target: 0x009AA9A0,
        members: &[0x009AA800],
    },
    Shims {
        target: 0x009AB1F0,
        members: &[0x009AA3B0, 0x009AB170],
    },
    Shims {
        target: 0x009AB2D0,
        members: &[0x009AB940],
    },
    Shims {
        target: 0x009AB970,
        members: &[0x009AB5B0],
    },
    Shims {
        target: 0x009AB9F0,
        members: &[0x009AB970],
    },
    Shims {
        target: 0x009AD0D0,
        members: &[0x009AD100],
    },
    Shims {
        target: 0x009AD100,
        members: &[0x009AD020],
    },
    Shims {
        target: 0x009AD130,
        members: &[0x009AD050],
    },
    Shims {
        target: 0x009AD220,
        members: &[0x009AD080],
    },
    Shims {
        target: 0x009ADA70,
        members: &[0x009ACC30, 0x009AD9F0],
    },
    Shims {
        target: 0x009AE240,
        members: &[0x009AE270],
    },
    Shims {
        target: 0x009AE270,
        members: &[0x009AE190],
    },
    Shims {
        target: 0x009AE2A0,
        members: &[0x009AE1C0],
    },
    Shims {
        target: 0x009AE390,
        members: &[0x009AE1F0],
    },
    Shims {
        target: 0x009AEBE0,
        members: &[0x009ADDA0, 0x009AEB60],
    },
    Shims {
        target: 0x009AF3B0,
        members: &[0x009AF3E0],
    },
    Shims {
        target: 0x009AF3E0,
        members: &[0x009AF300],
    },
    Shims {
        target: 0x009AF410,
        members: &[0x009AF330],
    },
    Shims {
        target: 0x009AF500,
        members: &[0x009AF360],
    },
    Shims {
        target: 0x009AFD50,
        members: &[0x009AEF10, 0x009AFCD0],
    },
    Shims {
        target: 0x009B09D0,
        members: &[0x009B0A00],
    },
    Shims {
        target: 0x009B0A00,
        members: &[0x009B0920],
    },
    Shims {
        target: 0x009B0A30,
        members: &[0x009B0950],
    },
    Shims {
        target: 0x009B0B60,
        members: &[0x009B0980],
    },
    Shims {
        target: 0x009B1710,
        members: &[0x009B0530, 0x009B15F0],
    },
    Shims {
        target: 0x009B1F20,
        members: &[0x009B1F50],
    },
    Shims {
        target: 0x009B1F50,
        members: &[0x009B1E70],
    },
    Shims {
        target: 0x009B1F80,
        members: &[0x009B1EA0],
    },
    Shims {
        target: 0x009B20B0,
        members: &[0x009B1ED0],
    },
    Shims {
        target: 0x009B2C50,
        members: &[0x009B1A80, 0x009B2B30],
    },
    Shims {
        target: 0x009B3600,
        members: &[0x009B3630],
    },
    Shims {
        target: 0x009B3630,
        members: &[0x009B3550],
    },
    Shims {
        target: 0x009B3660,
        members: &[0x009B3580],
    },
    Shims {
        target: 0x009B3750,
        members: &[0x009B35B0],
    },
    Shims {
        target: 0x009B3FB0,
        members: &[0x009B3160, 0x009B3F30],
    },
    Shims {
        target: 0x009D31D0,
        members: &[0x009D65C0, 0x009D66F0],
    },
    Shims {
        target: 0x009D36E0,
        members: &[0x009D9500],
    },
    Shims {
        target: 0x009D36F0,
        members: &[0x009D9510],
    },
    Shims {
        target: 0x009DE0F0,
        members: &[0x009DE120],
    },
    Shims {
        target: 0x009DE120,
        members: &[0x009DE040],
    },
    Shims {
        target: 0x009DE150,
        members: &[0x009DE070],
    },
    Shims {
        target: 0x009DE240,
        members: &[0x009DE0A0],
    },
    Shims {
        target: 0x009DEA90,
        members: &[0x009DDC50, 0x009DEA10],
    },
    Shims {
        target: 0x009E6EA0,
        members: &[0x009E7F90],
    },
    Shims {
        target: 0x009E77F0,
        members: &[
            0x009E7170, 0x009E7270, 0x009E7430, 0x009E7450, 0x009E7AA0, 0x009E8780, 0x009E88E0,
            0x009E8F80, 0x009E9460, 0x009E9B90,
        ],
    },
    Shims {
        target: 0x009EC7C0,
        members: &[0x00A48D70],
    },
    Shims {
        target: 0x009EFC70,
        members: &[0x009F1350],
    },
    Shims {
        target: 0x00A01900,
        members: &[0x00A01980],
    },
    Shims {
        target: 0x00A01990,
        members: &[0x00A02A10],
    },
    Shims {
        target: 0x00A02B70,
        members: &[0x00A029D0],
    },
    Shims {
        target: 0x00A061C0,
        members: &[0x00A06350, 0x00A06370, 0x00A06390, 0x00A063B0],
    },
    Shims {
        target: 0x00A089F0,
        members: &[0x00A48DA0],
    },
    Shims {
        target: 0x00A0A230,
        members: &[0x00A0A580, 0x00A0AAF0, 0x00A0B570],
    },
    Shims {
        target: 0x00A0ADE0,
        members: &[0x00A0AB10],
    },
    Shims {
        target: 0x00A1BCA0,
        members: &[0x00A11AC0],
    },
    Shims {
        target: 0x00A29F70,
        members: &[0x00A49320],
    },
    Shims {
        target: 0x00A29F90,
        members: &[0x00AFE240],
    },
    Shims {
        target: 0x00A338F0,
        members: &[0x00A33E20],
    },
    Shims {
        target: 0x00A33E30,
        members: &[0x00A39E20],
    },
    Shims {
        target: 0x00A34370,
        members: &[0x00A34420],
    },
    Shims {
        target: 0x00A39E90,
        members: &[0x00A3D390],
    },
    Shims {
        target: 0x00A3C2E0,
        members: &[0x00A3B6D0, 0x00A3C290],
    },
    Shims {
        target: 0x00A3D510,
        members: &[0x00A3D5B0],
    },
    Shims {
        target: 0x00A48EC0,
        members: &[0x00A491B0, 0x00A49220],
    },
    Shims {
        target: 0x00A4DDC0,
        members: &[0x00A5C040],
    },
    Shims {
        target: 0x00A5B160,
        members: &[0x00A54390, 0x00A543B0],
    },
    Shims {
        target: 0x00A5C060,
        members: &[0x00A5C200],
    },
    Shims {
        target: 0x00A5C750,
        members: &[0x00A68B60],
    },
    Shims {
        target: 0x00A72640,
        members: &[0x00A72620],
    },
    Shims {
        target: 0x00A73E00,
        members: &[0x00A73EB0],
    },
    Shims {
        target: 0x00A73ED0,
        members: &[0x00A73FA0],
    },
    Shims {
        target: 0x00A7A360,
        members: &[0x00A7A740],
    },
    Shims {
        target: 0x00A92C20,
        members: &[0x00A9D800],
    },
    Shims {
        target: 0x00A9B310,
        members: &[0x00A9AC30],
    },
    Shims {
        target: 0x00A9BE10,
        members: &[0x00A9D6A0],
    },
    Shims {
        target: 0x00A9BF40,
        members: &[0x00AFE5B0],
    },
    Shims {
        target: 0x00A9E080,
        members: &[0x00A9FCB0],
    },
    Shims {
        target: 0x00A9FFF0,
        members: &[0x00AA0610],
    },
    Shims {
        target: 0x00AA0630,
        members: &[0x00AA38E0],
    },
    Shims {
        target: 0x00AA6DF0,
        members: &[0x00AC37C0],
    },
    Shims {
        target: 0x00AA8E90,
        members: &[0x00AACBB0],
    },
    Shims {
        target: 0x00AB99F0,
        members: &[0x00AB9A60],
    },
    Shims {
        target: 0x00ABD400,
        members: &[0x00AB5600],
    },
    Shims {
        target: 0x00AC0A90,
        members: &[0x00AD47C0],
    },
    Shims {
        target: 0x00AC1910,
        members: &[0x00ACD650],
    },
    Shims {
        target: 0x00AC28E0,
        members: &[0x00A9A280],
    },
    Shims {
        target: 0x00AC5660,
        members: &[0x00AB4030],
    },
    Shims {
        target: 0x00ACCCD0,
        members: &[0x00ACCEA0],
    },
    Shims {
        target: 0x00ACE150,
        members: &[0x00ACDCC0, 0x00ACE070],
    },
    Shims {
        target: 0x00AF0BD0,
        members: &[0x00AF5B80],
    },
    Shims {
        target: 0x00AF0C00,
        members: &[0x00AF0BE0],
    },
    Shims {
        target: 0x00AF0D00,
        members: &[0x00AF0BC0],
    },
    Shims {
        target: 0x00AF1460,
        members: &[0x00AF0BD0],
    },
    Shims {
        target: 0x00AF18A0,
        members: &[0x00AF14C0],
    },
    Shims {
        target: 0x00AF2A90,
        members: &[0x00AF2A80],
    },
    Shims {
        target: 0x00AFC380,
        members: &[0x00AFC360],
    },
    Shims {
        target: 0x00AFE640,
        members: &[0x00AF1290, 0x00AF55C0, 0x00AF5760, 0x00AF59F0, 0x00AFE4A0],
    },
    Shims {
        target: 0x00AFFD00,
        members: &[0x00AFFD90],
    },
    Shims {
        target: 0x00B064B0,
        members: &[0x00B07B20],
    },
    Shims {
        target: 0x00B0C6F0,
        members: &[0x00B0C7F0],
    },
    Shims {
        target: 0x00B0CB40,
        members: &[0x00B0CC40],
    },
    Shims {
        target: 0x00B11870,
        members: &[0x00B11D20],
    },
    Shims {
        target: 0x00B13190,
        members: &[0x00B13470],
    },
    Shims {
        target: 0x00B13470,
        members: &[0x00B11160],
    },
    Shims {
        target: 0x00B13580,
        members: &[0x00B11180],
    },
    Shims {
        target: 0x00B14D70,
        members: &[0x00B14E80],
    },
    Shims {
        target: 0x00B15900,
        members: &[0x00B4F280, 0x00B4F740],
    },
    Shims {
        target: 0x00B17250,
        members: &[0x00B172D0],
    },
    Shims {
        target: 0x00B17280,
        members: &[0x00B5AD20],
    },
    Shims {
        target: 0x00B172D0,
        members: &[0x00B5AD40],
    },
    Shims {
        target: 0x00B172F0,
        members: &[0x00B5B550],
    },
    Shims {
        target: 0x00B19370,
        members: &[0x00B19710, 0x00B1B130, 0x00B286F0],
    },
    Shims {
        target: 0x00B19380,
        members: &[0x00B1B150],
    },
    Shims {
        target: 0x00B1AE60,
        members: &[0x00B39EB0, 0x00B4E330],
    },
    Shims {
        target: 0x00B1AE70,
        members: &[0x00B39DE0],
    },
    Shims {
        target: 0x00B1AFD0,
        members: &[0x00B22C60],
    },
    Shims {
        target: 0x00B1B130,
        members: &[0x00B22C20],
    },
    Shims {
        target: 0x00B1B150,
        members: &[0x00B22C40],
    },
    Shims {
        target: 0x00B1BBD0,
        members: &[0x00B1BC80],
    },
    Shims {
        target: 0x00B22360,
        members: &[0x00B54290],
    },
    Shims {
        target: 0x00B22C20,
        members: &[0x00B23CF0, 0x00B24EC0],
    },
    Shims {
        target: 0x00B23D20,
        members: &[0x00B23D10],
    },
    Shims {
        target: 0x00B24EF0,
        members: &[0x00B24EE0],
    },
    Shims {
        target: 0x00B250D0,
        members: &[0x00B60E50],
    },
    Shims {
        target: 0x00B310B0,
        members: &[0x00B31090],
    },
    Shims {
        target: 0x00B39C90,
        members: &[0x00B39C60],
    },
    Shims {
        target: 0x00B3C7A0,
        members: &[0x00B3D620],
    },
    Shims {
        target: 0x00B4D470,
        members: &[0x00B50E50, 0x00B52010],
    },
    Shims {
        target: 0x00B4E350,
        members: &[0x00B4FC70, 0x00B52D40, 0x00B53890],
    },
    Shims {
        target: 0x00B4F9E0,
        members: &[0x00B4FA50],
    },
    Shims {
        target: 0x00B50230,
        members: &[0x00B50530, 0x00B50570],
    },
    Shims {
        target: 0x00B52C00,
        members: &[0x00B52C40],
    },
    Shims {
        target: 0x00B52C60,
        members: &[0x00B52D50, 0x00B538A0],
    },
    Shims {
        target: 0x00B53150,
        members: &[0x00B534F0, 0x00B53510],
    },
    Shims {
        target: 0x00B53530,
        members: &[0x00B537B0, 0x00B537E0, 0x00B53800],
    },
    Shims {
        target: 0x00B53CA0,
        members: &[0x00B53FA0, 0x00B53FC0],
    },
    Shims {
        target: 0x00B58350,
        members: &[0x00B58460],
    },
    Shims {
        target: 0x00B58480,
        members: &[0x00B58520],
    },
    Shims {
        target: 0x00B58580,
        members: &[0x00B58550],
    },
    Shims {
        target: 0x00B58640,
        members: &[0x00B585F0],
    },
    Shims {
        target: 0x00B58F80,
        members: &[0x00B59030],
    },
    Shims {
        target: 0x00B591E0,
        members: &[0x00B591C0],
    },
    Shims {
        target: 0x00B59A20,
        members: &[0x00B5A100],
    },
    Shims {
        target: 0x00B62FB0,
        members: &[0x00B62F90],
    },
    Shims {
        target: 0x00B64230,
        members: &[0x00B62D50],
    },
    Shims {
        target: 0x00B68FF0,
        members: &[0x00B68FD0],
    },
    Shims {
        target: 0x00B690E0,
        members: &[0x00B690C0],
    },
    Shims {
        target: 0x00B691D0,
        members: &[0x00B691B0],
    },
    Shims {
        target: 0x00B692B0,
        members: &[0x00B69290],
    },
    Shims {
        target: 0x00B84A60,
        members: &[0x00B84AB0],
    },
    Shims {
        target: 0x00B8FD60,
        members: &[0x010CB760, 0x01192EB0],
    },
    Shims {
        target: 0x00B8FEC0,
        members: &[0x01AC70B0],
    },
    Shims {
        target: 0x00B90440,
        members: &[
            0x00E80A30, 0x01027560, 0x010A0E90, 0x011783A0, 0x01178430, 0x01233290, 0x01233830,
            0x012B12C0, 0x01D837C0,
        ],
    },
    Shims {
        target: 0x00B94E30,
        members: &[0x01D32D50],
    },
    Shims {
        target: 0x00B94E60,
        members: &[
            0x00C53140, 0x00C53160, 0x013B4B50, 0x0198D420, 0x01996B70, 0x01D3A410, 0x01D3A780,
            0x01D3AAB0, 0x01D3C000, 0x01D3C210,
        ],
    },
    Shims {
        target: 0x00B94F10,
        members: &[0x00C53170, 0x01D3BAC0, 0x01D3C270],
    },
    Shims {
        target: 0x00B95310,
        members: &[0x0198B690],
    },
    Shims {
        target: 0x00B95710,
        members: &[0x01A98060, 0x01A98210],
    },
    Shims {
        target: 0x00B959C0,
        members: &[0x00B95A20, 0x00B95A40],
    },
    Shims {
        target: 0x00B96EB0,
        members: &[0x00B96950],
    },
    Shims {
        target: 0x00B9BAF0,
        members: &[0x00BAD670],
    },
    Shims {
        target: 0x00B9BE50,
        members: &[0x00B9B410],
    },
    Shims {
        target: 0x00B9BE80,
        members: &[0x00BAD6B0],
    },
    Shims {
        target: 0x00B9C0E0,
        members: &[0x00B9C1E0],
    },
    Shims {
        target: 0x00B9C2D0,
        members: &[0x00BAD720],
    },
    Shims {
        target: 0x00B9C9F0,
        members: &[0x00BB03A0],
    },
    Shims {
        target: 0x00B9EAC0,
        members: &[0x00B9EAA0],
    },
    Shims {
        target: 0x00BB03A0,
        members: &[0x00BB0380],
    },
    Shims {
        target: 0x00BB08C0,
        members: &[0x01268400],
    },
    Shims {
        target: 0x00BB1560,
        members: &[0x00BB15A0],
    },
    Shims {
        target: 0x00BB2CA0,
        members: &[0x00BB34E0],
    },
    Shims {
        target: 0x00BB54F0,
        members: &[0x00BB5520],
    },
    Shims {
        target: 0x00BB5520,
        members: &[0x00BB5430],
    },
    Shims {
        target: 0x00BB5550,
        members: &[0x00BB5460],
    },
    Shims {
        target: 0x00BB5660,
        members: &[0x00BB5490],
    },
    Shims {
        target: 0x00BB6110,
        members: &[0x00BB5030, 0x00BB6020],
    },
    Shims {
        target: 0x00BC1CF0,
        members: &[0x0106AAD0],
    },
    Shims {
        target: 0x00BC5E20,
        members: &[0x00BC70D0],
    },
    Shims {
        target: 0x00BC9E50,
        members: &[0x00BC9D70, 0x00BC9D90, 0x00BC9DA0],
    },
    Shims {
        target: 0x00BD0F90,
        members: &[0x00C08780],
    },
    Shims {
        target: 0x00BD1000,
        members: &[0x00C07E40, 0x00C087B0, 0x00C0BB70, 0x00C0CC60],
    },
    Shims {
        target: 0x00BD77A0,
        members: &[0x00C03960],
    },
    Shims {
        target: 0x00BE07E0,
        members: &[0x00BDFA60, 0x00BE07C0, 0x00BE0900],
    },
    Shims {
        target: 0x00BE0E90,
        members: &[0x00BE1B30, 0x00BE1B60],
    },
    Shims {
        target: 0x00BE2950,
        members: &[0x00BE2980],
    },
    Shims {
        target: 0x00BE2980,
        members: &[0x00BE28A0],
    },
    Shims {
        target: 0x00BE29B0,
        members: &[0x00BE28D0],
    },
    Shims {
        target: 0x00BE2AB0,
        members: &[0x00BE2900],
    },
    Shims {
        target: 0x00BE3410,
        members: &[0x00BE24B0, 0x00BE3360],
    },
    Shims {
        target: 0x00BE3D60,
        members: &[0x00BE3D90],
    },
    Shims {
        target: 0x00BE3D90,
        members: &[0x00BE3CB0],
    },
    Shims {
        target: 0x00BE3DC0,
        members: &[0x00BE3CE0],
    },
    Shims {
        target: 0x00BE3EC0,
        members: &[0x00BE3D10],
    },
    Shims {
        target: 0x00BE4820,
        members: &[0x00BE38C0, 0x00BE4770],
    },
    Shims {
        target: 0x00BF1D60,
        members: &[0x0108A8E0, 0x010A5AB0],
    },
    Shims {
        target: 0x00BF1E50,
        members: &[0x0108A8C0],
    },
    Shims {
        target: 0x00BF28A0,
        members: &[
            0x00BF4A30, 0x00BFABC0, 0x00BFAED0, 0x00C031A0, 0x00C03910, 0x00C07F30, 0x00C087D0,
        ],
    },
    Shims {
        target: 0x00BF3750,
        members: &[0x00C087A0],
    },
    Shims {
        target: 0x00BF3760,
        members: &[0x00C08850, 0x00C09DE0],
    },
    Shims {
        target: 0x00BF37C0,
        members: &[0x00BF3760],
    },
    Shims {
        target: 0x00BF3BB0,
        members: &[0x00C09060],
    },
    Shims {
        target: 0x00BF3E90,
        members: &[0x00BFD9D0],
    },
    Shims {
        target: 0x00BF3FD0,
        members: &[0x00BF3FB0],
    },
    Shims {
        target: 0x00BF9D90,
        members: &[0x0108A900],
    },
    Shims {
        target: 0x00BFA390,
        members: &[0x0108A940],
    },
    Shims {
        target: 0x00BFAA90,
        members: &[0x00BFAA40],
    },
    Shims {
        target: 0x00BFCFD0,
        members: &[0x00C0E8B0],
    },
    Shims {
        target: 0x00BFD020,
        members: &[0x00BF5130],
    },
    Shims {
        target: 0x00C00FF0,
        members: &[0x00BFE6E0, 0x0108A8A0],
    },
    Shims {
        target: 0x00C03730,
        members: &[0x00C03710],
    },
    Shims {
        target: 0x00C080A0,
        members: &[0x00C0FAE0],
    },
    Shims {
        target: 0x00C087B0,
        members: &[
            0x00BF1EE0, 0x00C03180, 0x00C07E70, 0x00C07E90, 0x00C07EE0, 0x00C08D30, 0x00C0B0B0,
            0x01114EC0,
        ],
    },
    Shims {
        target: 0x00C08BE0,
        members: &[0x0108A920],
    },
    Shims {
        target: 0x00C08EB0,
        members: &[0x00C03130, 0x01114EA0],
    },
    Shims {
        target: 0x00C0DAD0,
        members: &[0x01114A20],
    },
    Shims {
        target: 0x00C0E260,
        members: &[0x00C0E230],
    },
    Shims {
        target: 0x00C1A350,
        members: &[0x00C239C0],
    },
    Shims {
        target: 0x00C1A380,
        members: &[0x00C2D7B0],
    },
    Shims {
        target: 0x00C1A3E0,
        members: &[0x00C2F6D0],
    },
    Shims {
        target: 0x00C1A9D0,
        members: &[0x00C28360, 0x00C2FCE0],
    },
    Shims {
        target: 0x00C1A9F0,
        members: &[0x00C28370, 0x00C2FCF0],
    },
    Shims {
        target: 0x00C1AA10,
        members: &[0x00C35070],
    },
    Shims {
        target: 0x00C23510,
        members: &[0x00C24600],
    },
    Shims {
        target: 0x00C237C0,
        members: &[0x00C24BD0],
    },
    Shims {
        target: 0x00C239C0,
        members: &[0x00C24700, 0x00C24720, 0x00C29E40, 0x00C29E60],
    },
    Shims {
        target: 0x00C24600,
        members: &[0x00C32F20],
    },
    Shims {
        target: 0x00C28940,
        members: &[0x00C24BE0],
    },
    Shims {
        target: 0x00C2F2F0,
        members: &[0x00C2F3C0, 0x00C2F410],
    },
    Shims {
        target: 0x00C318A0,
        members: &[0x00C31D30],
    },
    Shims {
        target: 0x00C326D0,
        members: &[0x00C32050],
    },
    Shims {
        target: 0x00C32D00,
        members: &[0x00C32D60],
    },
    Shims {
        target: 0x00C34470,
        members: &[0x00C31880, 0x00C33110, 0x00C34350],
    },
    Shims {
        target: 0x00C39530,
        members: &[0x01AF0F20],
    },
    Shims {
        target: 0x00C3D880,
        members: &[0x00C3D9C0, 0x00C3D9F0],
    },
    Shims {
        target: 0x00C3F0D0,
        members: &[0x00C3F530],
    },
    Shims {
        target: 0x00C42630,
        members: &[0x016AA2A0],
    },
    Shims {
        target: 0x00C42670,
        members: &[0x00C42750],
    },
    Shims {
        target: 0x00C42750,
        members: &[0x00C43D20],
    },
    Shims {
        target: 0x00C42780,
        members: &[0x00C42800],
    },
    Shims {
        target: 0x00C42800,
        members: &[0x00C43D10],
    },
    Shims {
        target: 0x00C42960,
        members: &[0x016A9DD0],
    },
    Shims {
        target: 0x00C429E0,
        members: &[0x016AA9E0],
    },
    Shims {
        target: 0x00C42A20,
        members: &[0x016A9DB0],
    },
    Shims {
        target: 0x00C42A70,
        members: &[0x016AA900],
    },
    Shims {
        target: 0x00C43AD0,
        members: &[0x00C43B50],
    },
    Shims {
        target: 0x00C43D20,
        members: &[0x00C43D30],
    },
    Shims {
        target: 0x00C44090,
        members: &[0x016AA570],
    },
    Shims {
        target: 0x00C44110,
        members: &[0x016AA590],
    },
    Shims {
        target: 0x00C44190,
        members: &[0x016AA9C0],
    },
    Shims {
        target: 0x00C44210,
        members: &[0x016AA9A0],
    },
    Shims {
        target: 0x00C444B0,
        members: &[0x016AB250],
    },
    Shims {
        target: 0x00C44500,
        members: &[0x016AB270],
    },
    Shims {
        target: 0x00C44720,
        members: &[0x016AB290],
    },
    Shims {
        target: 0x00C44790,
        members: &[0x016AB2B0],
    },
    Shims {
        target: 0x00C449C0,
        members: &[0x016AAD00],
    },
    Shims {
        target: 0x00C4C8C0,
        members: &[0x00C4CB00],
    },
    Shims {
        target: 0x00C4ED20,
        members: &[0x00C4ED50],
    },
    Shims {
        target: 0x00C4ED50,
        members: &[0x00C4EC70],
    },
    Shims {
        target: 0x00C4ED80,
        members: &[0x00C4ECA0],
    },
    Shims {
        target: 0x00C4EE70,
        members: &[0x00C4ECD0],
    },
    Shims {
        target: 0x00C4F6C0,
        members: &[0x00C4E880, 0x00C4F640],
    },
    Shims {
        target: 0x00C52AC0,
        members: &[
            0x00C521B0, 0x00C52250, 0x00C522F0, 0x00C52390, 0x00C52570, 0x00C52610, 0x00C526B0,
            0x00C52750, 0x00C527F0, 0x00C52890, 0x00C52930, 0x00C529E0, 0x00C52AA0, 0x00C52C10,
            0x00C52CB0,
        ],
    },
    Shims {
        target: 0x00C53190,
        members: &[0x010D18D0],
    },
    Shims {
        target: 0x00C5FC40,
        members: &[0x00C5FD40],
    },
    Shims {
        target: 0x00C6FA30,
        members: &[0x00C6FA10],
    },
    Shims {
        target: 0x00C73A30,
        members: &[0x00C73A10],
    },
    Shims {
        target: 0x00C7B080,
        members: &[0x00C7B190],
    },
    Shims {
        target: 0x00C7B4F0,
        members: &[0x00C7B690],
    },
    Shims {
        target: 0x00C7BA40,
        members: &[0x00C7BB20],
    },
    Shims {
        target: 0x00C7D630,
        members: &[0x00C7D640, 0x00C7D670, 0x00C7D6A0, 0x00C7D6D0],
    },
    Shims {
        target: 0x00C8B2A0,
        members: &[0x00CB0700],
    },
    Shims {
        target: 0x00C8BD70,
        members: &[0x00C8BDD0],
    },
    Shims {
        target: 0x00C8BDE0,
        members: &[0x00C8BE40],
    },
    Shims {
        target: 0x00C8BE50,
        members: &[0x00C8BE90],
    },
    Shims {
        target: 0x00C8D310,
        members: &[0x00C8D2F0],
    },
    Shims {
        target: 0x00C8EF30,
        members: &[0x00CB45C0],
    },
    Shims {
        target: 0x00C8F010,
        members: &[0x00CB45A0],
    },
    Shims {
        target: 0x00C8F190,
        members: &[0x00C8F160],
    },
    Shims {
        target: 0x00C8F700,
        members: &[0x00C8F660],
    },
    Shims {
        target: 0x00C8FA10,
        members: &[0x00CB4580],
    },
    Shims {
        target: 0x00C99200,
        members: &[0x00C98650],
    },
    Shims {
        target: 0x00CA5420,
        members: &[0x00CD3220],
    },
    Shims {
        target: 0x00CA5440,
        members: &[0x00CD2C60],
    },
    Shims {
        target: 0x00CAC430,
        members: &[0x00CB3840],
    },
    Shims {
        target: 0x00CAD2F0,
        members: &[0x00CAD3A0],
    },
    Shims {
        target: 0x00CAD3B0,
        members: &[0x00CAD460],
    },
    Shims {
        target: 0x00CAD710,
        members: &[0x00CAD7C0],
    },
    Shims {
        target: 0x00CAD930,
        members: &[0x00CAD9E0],
    },
    Shims {
        target: 0x00CB9A40,
        members: &[0x00CB9E00],
    },
    Shims {
        target: 0x00CBDF10,
        members: &[0x00CB3450],
    },
    Shims {
        target: 0x00CBF450,
        members: &[
            0x00CBF4C0, 0x00CBF530, 0x00CBF590, 0x00CBF600, 0x00CBF670, 0x00CBF6D0, 0x00CBFC60,
            0x00CBFCC0, 0x00CBFD30, 0x00CCDC30,
        ],
    },
    Shims {
        target: 0x00CBF6F0,
        members: &[0x00CBF710],
    },
    Shims {
        target: 0x00CC16E0,
        members: &[0x00CC17E0, 0x00CC1930],
    },
    Shims {
        target: 0x00CC1710,
        members: &[0x00CC1910],
    },
    Shims {
        target: 0x00CCD770,
        members: &[0x00CD0E00],
    },
    Shims {
        target: 0x00CD19A0,
        members: &[0x00CCF0A0],
    },
    Shims {
        target: 0x00CD1A00,
        members: &[0x00CCF0C0],
    },
    Shims {
        target: 0x00CD79E0,
        members: &[0x00D0D310, 0x00D0D380, 0x00D21350],
    },
    Shims {
        target: 0x00CD9270,
        members: &[0x00CDDBA0, 0x00CDDBF0, 0x00CFB0A0],
    },
    Shims {
        target: 0x00CD98B0,
        members: &[0x00CDDC40, 0x00CDDC80, 0x00CFB060],
    },
    Shims {
        target: 0x00CE2A00,
        members: &[0x00CE3570],
    },
    Shims {
        target: 0x00CE2B20,
        members: &[0x00CE3590],
    },
    Shims {
        target: 0x00CE98A0,
        members: &[
            0x00CE7130, 0x00CE8F10, 0x00CE8FB0, 0x00CE90B0, 0x00CE9620, 0x00CE9640, 0x00CE9840,
            0x00CEA340, 0x00CEA820,
        ],
    },
    Shims {
        target: 0x00CF9450,
        members: &[0x00CF94E0],
    },
    Shims {
        target: 0x00CF98D0,
        members: &[0x00CF9C70],
    },
    Shims {
        target: 0x00CF9D10,
        members: &[0x00CFAA30],
    },
    Shims {
        target: 0x00CF9D30,
        members: &[0x00CF9D10, 0x00CFAA00],
    },
    Shims {
        target: 0x00CF9F70,
        members: &[0x00CFA7F0],
    },
    Shims {
        target: 0x00CFA190,
        members: &[0x00CFA2A0, 0x00CFA2D0, 0x00CFA310],
    },
    Shims {
        target: 0x00CFA330,
        members: &[0x00CFAA70],
    },
    Shims {
        target: 0x00CFA830,
        members: &[0x00CFAA50],
    },
    Shims {
        target: 0x00D03CF0,
        members: &[0x00D03D90],
    },
    Shims {
        target: 0x00D05DF0,
        members: &[0x00D05E10],
    },
    Shims {
        target: 0x00D068B0,
        members: &[0x00D07840],
    },
    Shims {
        target: 0x00D0D260,
        members: &[0x00D0D240, 0x00D0D300],
    },
    Shims {
        target: 0x00D21AF0,
        members: &[0x00D220E0, 0x00D22100],
    },
    Shims {
        target: 0x00D21DF0,
        members: &[0x00D22120, 0x00D22140],
    },
    Shims {
        target: 0x00D23E70,
        members: &[0x00D23FC0, 0x00D23FE0],
    },
    Shims {
        target: 0x00D24D10,
        members: &[
            0x00D24900, 0x00D24E10, 0x00D24E40, 0x00D24E90, 0x00D24EC0, 0x00D24F10, 0x00D24F40,
        ],
    },
    Shims {
        target: 0x00D3DFA0,
        members: &[0x00D45530, 0x00D4A560],
    },
    Shims {
        target: 0x00D77610,
        members: &[0x00D897D0],
    },
    Shims {
        target: 0x00D77B90,
        members: &[0x00D7A020],
    },
    Shims {
        target: 0x00D7AFE0,
        members: &[0x00D7AF00],
    },
    Shims {
        target: 0x00D98B50,
        members: &[0x00D98A40, 0x00D98A50],
    },
    Shims {
        target: 0x00D9F9F0,
        members: &[0x00DA0E30],
    },
    Shims {
        target: 0x00D9FC80,
        members: &[0x00DA0B70],
    },
    Shims {
        target: 0x00DA0EC0,
        members: &[0x00DA0320],
    },
    Shims {
        target: 0x00DA0FB0,
        members: &[0x00DA0EF0],
    },
    Shims {
        target: 0x00DA1000,
        members: &[0x00DA1020],
    },
    Shims {
        target: 0x00DA1040,
        members: &[0x00DA0FB0],
    },
    Shims {
        target: 0x00DA1150,
        members: &[0x00DA14A0],
    },
    Shims {
        target: 0x00DA1480,
        members: &[0x00DA13C0],
    },
    Shims {
        target: 0x00DA14D0,
        members: &[0x00DA14F0],
    },
    Shims {
        target: 0x00DA1510,
        members: &[0x00DA1480],
    },
    Shims {
        target: 0x00DA1620,
        members: &[0x00DA1660],
    },
    Shims {
        target: 0x00DA1690,
        members: &[0x00DA0EC0],
    },
    Shims {
        target: 0x00DA1E90,
        members: &[0x00DA1EC0],
    },
    Shims {
        target: 0x00DA1EC0,
        members: &[0x00DA1DE0],
    },
    Shims {
        target: 0x00DA1EF0,
        members: &[0x00DA1E10],
    },
    Shims {
        target: 0x00DA1FF0,
        members: &[0x00DA1E40],
    },
    Shims {
        target: 0x00DA2950,
        members: &[0x00DA19F0, 0x00DA28A0],
    },
    Shims {
        target: 0x00DA3180,
        members: &[0x00DA31B0],
    },
    Shims {
        target: 0x00DA31B0,
        members: &[0x00DA30D0],
    },
    Shims {
        target: 0x00DA31E0,
        members: &[0x00DA3100],
    },
    Shims {
        target: 0x00DA32D0,
        members: &[0x00DA3130],
    },
    Shims {
        target: 0x00DA3B20,
        members: &[0x00DA2CE0, 0x00DA3AA0],
    },
    Shims {
        target: 0x00DB1260,
        members: &[0x01D5BCC0, 0x01D5CEC0],
    },
    Shims {
        target: 0x00DB18C0,
        members: &[0x01D5BC80, 0x01D5CE80],
    },
    Shims {
        target: 0x00DB1E00,
        members: &[0x01D5BCA0, 0x01D5CEA0],
    },
    Shims {
        target: 0x00DB7730,
        members: &[0x00DB7780, 0x00DB79D0, 0x00DB79E0],
    },
    Shims {
        target: 0x00DDE700,
        members: &[0x00DDD3B0],
    },
    Shims {
        target: 0x00DDEE20,
        members: &[0x00DDF010],
    },
    Shims {
        target: 0x00DDF100,
        members: &[0x00DDF520],
    },
    Shims {
        target: 0x00DDF580,
        members: &[0x00DE1350],
    },
    Shims {
        target: 0x00DDF920,
        members: &[0x00DE06F0],
    },
    Shims {
        target: 0x00DDFE60,
        members: &[0x00DDFE20],
    },
    Shims {
        target: 0x00DE0420,
        members: &[0x00DDFFE0],
    },
    Shims {
        target: 0x00DE05B0,
        members: &[0x00DE1660],
    },
    Shims {
        target: 0x00DE12C0,
        members: &[0x00DDC750],
    },
    Shims {
        target: 0x00DE12E0,
        members: &[0x00DDC770],
    },
    Shims {
        target: 0x00DE9B20,
        members: &[0x00DE9B70],
    },
    Shims {
        target: 0x00E0BF30,
        members: &[0x00E0BF10, 0x00E0BF20],
    },
    Shims {
        target: 0x00E0C170,
        members: &[0x014328D0],
    },
    Shims {
        target: 0x00E0E000,
        members: &[0x00E0FA20],
    },
    Shims {
        target: 0x00E10880,
        members: &[0x00E0FA90],
    },
    Shims {
        target: 0x00E13F10,
        members: &[0x00E145D0],
    },
    Shims {
        target: 0x00E16350,
        members: &[0x010E4590],
    },
    Shims {
        target: 0x00E165D0,
        members: &[0x010DC230],
    },
    Shims {
        target: 0x00E166C0,
        members: &[0x010DC280],
    },
    Shims {
        target: 0x00E16730,
        members: &[0x010DC6A0],
    },
    Shims {
        target: 0x00E16830,
        members: &[0x010DC6C0],
    },
    Shims {
        target: 0x00E16940,
        members: &[0x010DC770],
    },
    Shims {
        target: 0x00E169D0,
        members: &[0x010DC790],
    },
    Shims {
        target: 0x00E16BE0,
        members: &[0x010DC7E0],
    },
    Shims {
        target: 0x00E16CF0,
        members: &[0x012A3220],
    },
    Shims {
        target: 0x00E16DD0,
        members: &[0x012A33A0],
    },
    Shims {
        target: 0x00E16EC0,
        members: &[0x012A3740],
    },
    Shims {
        target: 0x00E16F50,
        members: &[0x012A3760],
    },
    Shims {
        target: 0x00E16FC0,
        members: &[0x012A3770],
    },
    Shims {
        target: 0x00E17060,
        members: &[0x012A3780],
    },
    Shims {
        target: 0x00E170F0,
        members: &[0x012A37A0],
    },
    Shims {
        target: 0x00E17230,
        members: &[0x012A37D0],
    },
    Shims {
        target: 0x00E172B0,
        members: &[0x012A37F0],
    },
    Shims {
        target: 0x00E17320,
        members: &[0x012A3800],
    },
    Shims {
        target: 0x00E173A0,
        members: &[0x012A3820],
    },
    Shims {
        target: 0x00E17420,
        members: &[0x012A3840],
    },
    Shims {
        target: 0x00E17580,
        members: &[0x012A3870],
    },
    Shims {
        target: 0x00E17680,
        members: &[0x012A3890],
    },
    Shims {
        target: 0x00E17700,
        members: &[0x012A38B0],
    },
    Shims {
        target: 0x00E17810,
        members: &[0x012A38F0],
    },
    Shims {
        target: 0x00E17B30,
        members: &[0x012A3BA0],
    },
    Shims {
        target: 0x00E17BA0,
        members: &[0x012A3BC0],
    },
    Shims {
        target: 0x00E17CA0,
        members: &[0x012A3BE0],
    },
    Shims {
        target: 0x00E17D20,
        members: &[0x012A3C50],
    },
    Shims {
        target: 0x00E181C0,
        members: &[0x0110C4F0],
    },
    Shims {
        target: 0x00E18300,
        members: &[0x0110C4A0],
    },
    Shims {
        target: 0x00E18520,
        members: &[0x0110C6E0],
    },
    Shims {
        target: 0x00E18590,
        members: &[0x0110C700],
    },
    Shims {
        target: 0x00E188A0,
        members: &[0x0110CE70],
    },
    Shims {
        target: 0x00E18AD0,
        members: &[0x0110CE10],
    },
    Shims {
        target: 0x00E18BA0,
        members: &[0x0110CE30],
    },
    Shims {
        target: 0x00E18C80,
        members: &[0x0110CE50],
    },
    Shims {
        target: 0x00E18D50,
        members: &[0x0110CE90],
    },
    Shims {
        target: 0x00E18E40,
        members: &[0x0110CEB0],
    },
    Shims {
        target: 0x00E18F20,
        members: &[0x0110CED0],
    },
    Shims {
        target: 0x00E19160,
        members: &[0x0110D750],
    },
    Shims {
        target: 0x00E19450,
        members: &[0x0110DA40],
    },
    Shims {
        target: 0x00E194C0,
        members: &[0x0110DA60],
    },
    Shims {
        target: 0x00E19530,
        members: &[0x01379580],
    },
    Shims {
        target: 0x00E19610,
        members: &[0x0137A130],
    },
    Shims {
        target: 0x00E19670,
        members: &[0x0137A150],
    },
    Shims {
        target: 0x00E19750,
        members: &[0x0137A170],
    },
    Shims {
        target: 0x00E197E0,
        members: &[0x0137A1F0],
    },
    Shims {
        target: 0x00E198E0,
        members: &[0x0137A260],
    },
    Shims {
        target: 0x00E19AE0,
        members: &[0x0137A2C0],
    },
    Shims {
        target: 0x00E19B50,
        members: &[0x0137A310],
    },
    Shims {
        target: 0x00E19C50,
        members: &[0x0137A360],
    },
    Shims {
        target: 0x00E19CD0,
        members: &[0x0137A390],
    },
    Shims {
        target: 0x00E19EA0,
        members: &[0x0137A3B0],
    },
    Shims {
        target: 0x00E19F10,
        members: &[0x0137A400],
    },
    Shims {
        target: 0x00E1A020,
        members: &[0x0137A420],
    },
    Shims {
        target: 0x00E1A120,
        members: &[0x0137A4B0],
    },
    Shims {
        target: 0x00E1A1B0,
        members: &[0x0137A500],
    },
    Shims {
        target: 0x00E1A3A0,
        members: &[0x0137A590],
    },
    Shims {
        target: 0x00E1A500,
        members: &[0x0137A600],
    },
    Shims {
        target: 0x00E1A660,
        members: &[0x0137A680],
    },
    Shims {
        target: 0x00E1A850,
        members: &[0x0137A8F0],
    },
    Shims {
        target: 0x00E1AA90,
        members: &[0x01518DD0],
    },
    Shims {
        target: 0x00E1AB70,
        members: &[0x01519020],
    },
    Shims {
        target: 0x00E1AC60,
        members: &[0x01519070],
    },
    Shims {
        target: 0x00E1ACD0,
        members: &[0x01519050],
    },
    Shims {
        target: 0x00E1ADE0,
        members: &[0x015190B0],
    },
    Shims {
        target: 0x00E1AE50,
        members: &[0x01519090],
    },
    Shims {
        target: 0x00E1AED0,
        members: &[0x015190C0],
    },
    Shims {
        target: 0x00E1AF50,
        members: &[0x01519100],
    },
    Shims {
        target: 0x00E1AFC0,
        members: &[0x015190E0],
    },
    Shims {
        target: 0x00E1B040,
        members: &[0x01519110],
    },
    Shims {
        target: 0x00E1B0C0,
        members: &[0x01519150],
    },
    Shims {
        target: 0x00E1B140,
        members: &[0x01519130],
    },
    Shims {
        target: 0x00E1B1C0,
        members: &[0x01519160],
    },
    Shims {
        target: 0x00E1B240,
        members: &[0x01519180],
    },
    Shims {
        target: 0x00E1B360,
        members: &[0x015191D0],
    },
    Shims {
        target: 0x00E1B3E0,
        members: &[0x015191B0],
    },
    Shims {
        target: 0x00E1B460,
        members: &[0x015191E0],
    },
    Shims {
        target: 0x00E1B4E0,
        members: &[0x01519240],
    },
    Shims {
        target: 0x00E1B560,
        members: &[0x01519220],
    },
    Shims {
        target: 0x00E1B5E0,
        members: &[0x01519230],
    },
    Shims {
        target: 0x00E1B660,
        members: &[0x01519200],
    },
    Shims {
        target: 0x00E1B6E0,
        members: &[0x01519260],
    },
    Shims {
        target: 0x00E1B760,
        members: &[0x015192A0],
    },
    Shims {
        target: 0x00E1B7D0,
        members: &[0x01519280],
    },
    Shims {
        target: 0x00E1B850,
        members: &[0x015192B0],
    },
    Shims {
        target: 0x00E1B8D0,
        members: &[0x015192D0],
    },
    Shims {
        target: 0x00E1B940,
        members: &[0x015192F0],
    },
    Shims {
        target: 0x00E1BA40,
        members: &[0x01519330],
    },
    Shims {
        target: 0x00E1BAC0,
        members: &[0x01519310],
    },
    Shims {
        target: 0x00E1BBC0,
        members: &[0x01519360],
    },
    Shims {
        target: 0x00E1BCC0,
        members: &[0x01503C50],
    },
    Shims {
        target: 0x00E1BDA0,
        members: &[0x01503EC0],
    },
    Shims {
        target: 0x00E1BEA0,
        members: &[0x01503F10],
    },
    Shims {
        target: 0x00E1BF20,
        members: &[0x01503EF0],
    },
    Shims {
        target: 0x00E1C440,
        members: &[0x01504020],
    },
    Shims {
        target: 0x00E1C4C0,
        members: &[0x01504030],
    },
    Shims {
        target: 0x00E1C540,
        members: &[0x01503FD0],
    },
    Shims {
        target: 0x00E1C5C0,
        members: &[0x01504040],
    },
    Shims {
        target: 0x00E1C640,
        members: &[0x01504080],
    },
    Shims {
        target: 0x00E1C6C0,
        members: &[0x01504060],
    },
    Shims {
        target: 0x00E1CB10,
        members: &[0x01B5D220],
    },
    Shims {
        target: 0x00E1CBF0,
        members: &[0x01B5D390],
    },
    Shims {
        target: 0x00E1CC60,
        members: &[0x01B5DA80],
    },
    Shims {
        target: 0x00E1CCE0,
        members: &[0x01B5DAA0],
    },
    Shims {
        target: 0x00E1CD70,
        members: &[0x01B5DAC0],
    },
    Shims {
        target: 0x00E1CE00,
        members: &[0x01B5DAE0],
    },
    Shims {
        target: 0x00E1CE90,
        members: &[0x01B5DB00],
    },
    Shims {
        target: 0x00E1CF20,
        members: &[0x01B5DB20],
    },
    Shims {
        target: 0x00E1CFA0,
        members: &[0x01B5DB30],
    },
    Shims {
        target: 0x00E1D220,
        members: &[0x01B5DBF0],
    },
    Shims {
        target: 0x00E1D4C0,
        members: &[0x01B5DB50],
    },
    Shims {
        target: 0x00E1D540,
        members: &[0x01B5DB70],
    },
    Shims {
        target: 0x00E1D5C0,
        members: &[0x01B5DB80],
    },
    Shims {
        target: 0x00E1D650,
        members: &[0x01B5DBA0],
    },
    Shims {
        target: 0x00E1D700,
        members: &[0x01B5DBB0],
    },
    Shims {
        target: 0x00E1E0B0,
        members: &[0x010DB9E0],
    },
    Shims {
        target: 0x00E7AB80,
        members: &[0x00E7AD00, 0x00E7AD20],
    },
    Shims {
        target: 0x00E7BFF0,
        members: &[
            0x01D4A180, 0x01D4B440, 0x01D4BD30, 0x01D4C490, 0x01D4D3C0, 0x01D4DC60, 0x01D517E0,
        ],
    },
    Shims {
        target: 0x00E80BF0,
        members: &[0x00E80A10],
    },
    Shims {
        target: 0x00E83830,
        members: &[0x00E83800],
    },
    Shims {
        target: 0x00EA4460,
        members: &[0x00EA43D0],
    },
    Shims {
        target: 0x00EA4500,
        members: &[0x00EA4410],
    },
    Shims {
        target: 0x00EA4E90,
        members: &[0x00EA4EE0],
    },
    Shims {
        target: 0x00EA5080,
        members: &[0x00EA53C0],
    },
    Shims {
        target: 0x00EA6CE0,
        members: &[0x00EA7500],
    },
    Shims {
        target: 0x00EA7200,
        members: &[0x00EA6F90],
    },
    Shims {
        target: 0x00EA7670,
        members: &[0x00EA8240],
    },
    Shims {
        target: 0x00EA7860,
        members: &[0x00EA79B0],
    },
    Shims {
        target: 0x00EA78F0,
        members: &[0x00EA7840],
    },
    Shims {
        target: 0x00EA90F0,
        members: &[0x00EA9090, 0x00EA90C0],
    },
    Shims {
        target: 0x00EAEB60,
        members: &[0x00EC64D0, 0x00ED25B0],
    },
    Shims {
        target: 0x00EAED90,
        members: &[0x00EB0370],
    },
    Shims {
        target: 0x00EAF090,
        members: &[0x00EB00B0],
    },
    Shims {
        target: 0x00EAF870,
        members: &[0x00EADC60],
    },
    Shims {
        target: 0x00EB0400,
        members: &[0x00EAF7E0],
    },
    Shims {
        target: 0x00EB04F0,
        members: &[0x00EB0430],
    },
    Shims {
        target: 0x00EB0540,
        members: &[0x00EB0580],
    },
    Shims {
        target: 0x00EB05B0,
        members: &[0x00EB04F0],
    },
    Shims {
        target: 0x00EB06C0,
        members: &[0x00EB0A10],
    },
    Shims {
        target: 0x00EB09F0,
        members: &[0x00EB0930],
    },
    Shims {
        target: 0x00EB0A40,
        members: &[0x00EB0A60],
    },
    Shims {
        target: 0x00EB0A80,
        members: &[0x00EB09F0],
    },
    Shims {
        target: 0x00EB0B90,
        members: &[0x00EB0BE0],
    },
    Shims {
        target: 0x00EB0C10,
        members: &[0x00EB0400],
    },
    Shims {
        target: 0x00EB1420,
        members: &[0x00EB1450],
    },
    Shims {
        target: 0x00EB1450,
        members: &[0x00EB1370],
    },
    Shims {
        target: 0x00EB1480,
        members: &[0x00EB13A0],
    },
    Shims {
        target: 0x00EB15B0,
        members: &[0x00EB13D0],
    },
    Shims {
        target: 0x00EB2150,
        members: &[0x00EB0F80, 0x00EB2030],
    },
    Shims {
        target: 0x00EB2950,
        members: &[0x00EB2980],
    },
    Shims {
        target: 0x00EB2980,
        members: &[0x00EB28A0],
    },
    Shims {
        target: 0x00EB29B0,
        members: &[0x00EB28D0],
    },
    Shims {
        target: 0x00EB2AA0,
        members: &[0x00EB2900],
    },
    Shims {
        target: 0x00EB32F0,
        members: &[0x00EB24B0, 0x00EB3270],
    },
    Shims {
        target: 0x00EBC110,
        members: &[0x00EBC6F0],
    },
    Shims {
        target: 0x00EEC9D0,
        members: &[0x00EECA00],
    },
    Shims {
        target: 0x00EECA00,
        members: &[0x00EEC920],
    },
    Shims {
        target: 0x00EECA30,
        members: &[0x00EEC950],
    },
    Shims {
        target: 0x00EECB60,
        members: &[0x00EEC980],
    },
    Shims {
        target: 0x00EED700,
        members: &[0x00EEC530, 0x00EED5E0],
    },
    Shims {
        target: 0x00EEDF50,
        members: &[0x00EEDF80],
    },
    Shims {
        target: 0x00EEDF80,
        members: &[0x00EEDE90],
    },
    Shims {
        target: 0x00EEDFB0,
        members: &[0x00EEDEC0],
    },
    Shims {
        target: 0x00EEE0C0,
        members: &[0x00EEDEF0],
    },
    Shims {
        target: 0x00EEEB70,
        members: &[0x00EEDA90, 0x00EEEA80],
    },
    Shims {
        target: 0x00F01120,
        members: &[0x00F02590],
    },
    Shims {
        target: 0x00F03870,
        members: &[0x00F03890],
    },
    Shims {
        target: 0x00F03D50,
        members: &[0x00F02EB0],
    },
    Shims {
        target: 0x00F07C40,
        members: &[0x00F08190, 0x00F081B0],
    },
    Shims {
        target: 0x00F09F30,
        members: &[0x00F09C80, 0x00F09DA0, 0x00F0B4E0],
    },
    Shims {
        target: 0x00F12100,
        members: &[0x00F12170],
    },
    Shims {
        target: 0x00F12170,
        members: &[0x00F121A0],
    },
    Shims {
        target: 0x00F1E090,
        members: &[0x01ADA580],
    },
    Shims {
        target: 0x00F2BB80,
        members: &[0x00F2FC90],
    },
    Shims {
        target: 0x00F2CC40,
        members: &[0x00F2CC20],
    },
    Shims {
        target: 0x00F2CEF0,
        members: &[0x00F33020],
    },
    Shims {
        target: 0x00F2E870,
        members: &[0x00F2E910],
    },
    Shims {
        target: 0x00F30220,
        members: &[0x00F30410, 0x00F304D0, 0x00F30650],
    },
    Shims {
        target: 0x00F30BD0,
        members: &[0x00F30CA0],
    },
    Shims {
        target: 0x00F30CB0,
        members: &[0x0147CFB0],
    },
    Shims {
        target: 0x00F32D30,
        members: &[0x00F32E40],
    },
    Shims {
        target: 0x00F33040,
        members: &[0x00F330E0],
    },
    Shims {
        target: 0x00F335B0,
        members: &[0x00F331B0, 0x00F33750],
    },
    Shims {
        target: 0x00F335F0,
        members: &[0x00F335E0],
    },
    Shims {
        target: 0x00F34430,
        members: &[0x00F34540],
    },
    Shims {
        target: 0x00F34790,
        members: &[0x00F34770],
    },
    Shims {
        target: 0x00F34BB0,
        members: &[0x00F36210],
    },
    Shims {
        target: 0x00F34EB0,
        members: &[0x00F35F60],
    },
    Shims {
        target: 0x00F362A0,
        members: &[0x00F35620],
    },
    Shims {
        target: 0x00F362C0,
        members: &[0x004EE050, 0x00F36610],
    },
    Shims {
        target: 0x00F365F0,
        members: &[0x00F36530],
    },
    Shims {
        target: 0x00F36640,
        members: &[0x00F36660],
    },
    Shims {
        target: 0x00F36680,
        members: &[0x00F365F0],
    },
    Shims {
        target: 0x00F36860,
        members: &[0x00F367A0],
    },
    Shims {
        target: 0x00F368B0,
        members: &[0x00F368E0],
    },
    Shims {
        target: 0x00F36910,
        members: &[0x00F36860],
    },
    Shims {
        target: 0x00F36A20,
        members: &[0x00F36A70],
    },
    Shims {
        target: 0x00F36AA0,
        members: &[0x00F362A0],
    },
    Shims {
        target: 0x00F37420,
        members: &[0x00F37450],
    },
    Shims {
        target: 0x00F37450,
        members: &[0x00F37370],
    },
    Shims {
        target: 0x00F37480,
        members: &[0x00F373A0],
    },
    Shims {
        target: 0x00F37570,
        members: &[0x00F373D0],
    },
    Shims {
        target: 0x00F37DC0,
        members: &[0x00F36F80, 0x00F37D40],
    },
    Shims {
        target: 0x00F38710,
        members: &[0x00F38740],
    },
    Shims {
        target: 0x00F38740,
        members: &[0x00F38660],
    },
    Shims {
        target: 0x00F38770,
        members: &[0x00F38690],
    },
    Shims {
        target: 0x00F38860,
        members: &[0x00F386C0],
    },
    Shims {
        target: 0x00F390B0,
        members: &[0x00F38270, 0x00F39030],
    },
    Shims {
        target: 0x00F39890,
        members: &[0x00F398C0],
    },
    Shims {
        target: 0x00F398C0,
        members: &[0x00F397E0],
    },
    Shims {
        target: 0x00F398F0,
        members: &[0x00F39810],
    },
    Shims {
        target: 0x00F39A20,
        members: &[0x00F39840],
    },
    Shims {
        target: 0x00F3A5C0,
        members: &[0x00F393F0, 0x00F3A4A0],
    },
    Shims {
        target: 0x00F48BB0,
        members: &[0x014A86F0],
    },
    Shims {
        target: 0x00F51380,
        members: &[0x00F52FB0],
    },
    Shims {
        target: 0x00F53490,
        members: &[0x00F53970],
    },
    Shims {
        target: 0x00F5D220,
        members: &[0x00F5D6B0],
    },
    Shims {
        target: 0x00F5D4A0,
        members: &[0x00F5E000],
    },
    Shims {
        target: 0x00F5F250,
        members: &[0x00F5FA20, 0x00F5FA40],
    },
    Shims {
        target: 0x00F606D0,
        members: &[0x00F6F770],
    },
    Shims {
        target: 0x00F63B50,
        members: &[0x010508E0],
    },
    Shims {
        target: 0x00F63F40,
        members: &[0x0104E8A0],
    },
    Shims {
        target: 0x00F6F040,
        members: &[0x00F70520],
    },
    Shims {
        target: 0x00F6F3C0,
        members: &[0x00F6F3B0],
    },
    Shims {
        target: 0x00F751A0,
        members: &[0x00F65130],
    },
    Shims {
        target: 0x00F7D120,
        members: &[0x0109F2A0],
    },
    Shims {
        target: 0x00F7D140,
        members: &[0x0109F330],
    },
    Shims {
        target: 0x00F7D2B0,
        members: &[0x00F7D400],
    },
    Shims {
        target: 0x00F832E0,
        members: &[0x00F83670],
    },
    Shims {
        target: 0x00F84AF0,
        members: &[0x00F8E6B0],
    },
    Shims {
        target: 0x00F8A840,
        members: &[0x00F8A800],
    },
    Shims {
        target: 0x00F8AC70,
        members: &[0x00F8A810],
    },
    Shims {
        target: 0x00F8AE10,
        members: &[0x00F8A7F0],
    },
    Shims {
        target: 0x00F8D060,
        members: &[0x01052170],
    },
    Shims {
        target: 0x00F8D130,
        members: &[0x010521B0],
    },
    Shims {
        target: 0x00F8D150,
        members: &[0x01052270],
    },
    Shims {
        target: 0x00F8D2E0,
        members: &[0x01052190],
    },
    Shims {
        target: 0x00F8E3F0,
        members: &[0x01052450],
    },
    Shims {
        target: 0x00F8E610,
        members: &[0x010525C0],
    },
    Shims {
        target: 0x00F8E620,
        members: &[0x01052350],
    },
    Shims {
        target: 0x00F8E660,
        members: &[0x01052650],
    },
    Shims {
        target: 0x00F8E670,
        members: &[0x01052670],
    },
    Shims {
        target: 0x00F8F610,
        members: &[0x010544F0],
    },
    Shims {
        target: 0x00F8F620,
        members: &[0x010544C0],
    },
    Shims {
        target: 0x00F8F630,
        members: &[0x010536E0],
    },
    Shims {
        target: 0x00F8F8A0,
        members: &[0x01053700],
    },
    Shims {
        target: 0x00F8F980,
        members: &[0x01053CA0],
    },
    Shims {
        target: 0x00F953A0,
        members: &[0x00F955C0],
    },
    Shims {
        target: 0x00F9E4A0,
        members: &[0x00F9F990],
    },
    Shims {
        target: 0x00FA2870,
        members: &[0x00FA5570],
    },
    Shims {
        target: 0x00FACA70,
        members: &[0x00FACC80],
    },
    Shims {
        target: 0x00FB1510,
        members: &[0x00FB2580],
    },
    Shims {
        target: 0x00FB54D0,
        members: &[0x00FB5A80, 0x00FB9320, 0x00FB9340],
    },
    Shims {
        target: 0x00FBAF60,
        members: &[0x00FBCF90],
    },
    Shims {
        target: 0x00FBE410,
        members: &[0x00FBF290],
    },
    Shims {
        target: 0x00FC2A60,
        members: &[0x00FC3880],
    },
    Shims {
        target: 0x00FC51B0,
        members: &[0x00FC61D0],
    },
    Shims {
        target: 0x00FC79D0,
        members: &[0x00FC8320],
    },
    Shims {
        target: 0x00FC9420,
        members: &[0x00FC94B0],
    },
    Shims {
        target: 0x00FD8100,
        members: &[0x00FD8160],
    },
    Shims {
        target: 0x01027580,
        members: &[0x01027510],
    },
    Shims {
        target: 0x0104E680,
        members: &[0x0104E770, 0x0104E790],
    },
    Shims {
        target: 0x0104F160,
        members: &[0x0104F100],
    },
    Shims {
        target: 0x0104F1E0,
        members: &[0x0104F110],
    },
    Shims {
        target: 0x0104F270,
        members: &[0x0104F120],
    },
    Shims {
        target: 0x0104F430,
        members: &[0x0104F130],
    },
    Shims {
        target: 0x0104F500,
        members: &[0x0104F140],
    },
    Shims {
        target: 0x0104F590,
        members: &[0x0104F150],
    },
    Shims {
        target: 0x0104F660,
        members: &[0x0104F600],
    },
    Shims {
        target: 0x010508E0,
        members: &[0x0104F430],
    },
    Shims {
        target: 0x01050AF0,
        members: &[0x0104F590],
    },
    Shims {
        target: 0x01053CE0,
        members: &[0x01053CC0, 0x01053CD0],
    },
    Shims {
        target: 0x0106A1C0,
        members: &[0x0106A390],
    },
    Shims {
        target: 0x0106A4D0,
        members: &[0x0106A9C0],
    },
    Shims {
        target: 0x01081B00,
        members: &[0x01085460, 0x01085480],
    },
    Shims {
        target: 0x01083FB0,
        members: &[0x01084560],
    },
    Shims {
        target: 0x010856D0,
        members: &[0x01085900],
    },
    Shims {
        target: 0x0108AFF0,
        members: &[0x0108B490, 0x0108B4A0],
    },
    Shims {
        target: 0x0108B330,
        members: &[0x0108B4B0],
    },
    Shims {
        target: 0x0108BC10,
        members: &[0x0108BCF0],
    },
    Shims {
        target: 0x0108CB20,
        members: &[0x0108CEF0],
    },
    Shims {
        target: 0x0108FC80,
        members: &[0x0108A990],
    },
    Shims {
        target: 0x01090040,
        members: &[0x0108A9A0],
    },
    Shims {
        target: 0x0109DDD0,
        members: &[0x0109DF90, 0x0109DFA0],
    },
    Shims {
        target: 0x0109E250,
        members: &[0x0109F860],
    },
    Shims {
        target: 0x0109E760,
        members: &[0x0109E830],
    },
    Shims {
        target: 0x0109E840,
        members: &[0x0109ED50, 0x0109ED70],
    },
    Shims {
        target: 0x0109F780,
        members: &[0x0109F850],
    },
    Shims {
        target: 0x010A0DC0,
        members: &[0x010A0E50],
    },
    Shims {
        target: 0x010A38B0,
        members: &[0x010A3AC0],
    },
    Shims {
        target: 0x010A3B00,
        members: &[0x010A5AE0],
    },
    Shims {
        target: 0x010A66C0,
        members: &[0x010A5640],
    },
    Shims {
        target: 0x010A8640,
        members: &[0x01412EB0],
    },
    Shims {
        target: 0x010AF040,
        members: &[0x0107A2F0],
    },
    Shims {
        target: 0x010B10B0,
        members: &[0x010B12D0],
    },
    Shims {
        target: 0x010B21E0,
        members: &[0x00F7D420],
    },
    Shims {
        target: 0x010B67F0,
        members: &[0x010B68A0, 0x010B68C0],
    },
    Shims {
        target: 0x010BE0C0,
        members: &[0x010BED50, 0x010BED70],
    },
    Shims {
        target: 0x010BE740,
        members: &[0x012B32D0],
    },
    Shims {
        target: 0x010C0D70,
        members: &[
            0x012A4C10, 0x012A5120, 0x01503790, 0x01B5E570, 0x01B5E5A0, 0x01B5E5D0, 0x01B5E660,
            0x01B5E6A0,
        ],
    },
    Shims {
        target: 0x010CD0B0,
        members: &[0x017E2520],
    },
    Shims {
        target: 0x010CD0D0,
        members: &[0x017E2540],
    },
    Shims {
        target: 0x010D6760,
        members: &[0x010D6700],
    },
    Shims {
        target: 0x010DBD40,
        members: &[
            0x010DCD40, 0x0110E0F0, 0x0137C8B0, 0x01503930, 0x015040D0, 0x015178F0, 0x01519340,
            0x01B5E550,
        ],
    },
    Shims {
        target: 0x010E2340,
        members: &[0x010F9770, 0x01D81640],
    },
    Shims {
        target: 0x010E2B80,
        members: &[0x010D9860, 0x0113DF70, 0x012B2000, 0x01D83DE0],
    },
    Shims {
        target: 0x010E2BF0,
        members: &[0x010D9840, 0x01D81650],
    },
    Shims {
        target: 0x010E3C60,
        members: &[0x010D9850, 0x012B1CB0, 0x01D83C20],
    },
    Shims {
        target: 0x010E3D20,
        members: &[0x01D83CD0],
    },
    Shims {
        target: 0x010E3DF0,
        members: &[0x010D9900, 0x0113DF50, 0x012B1E10, 0x01D83D00],
    },
    Shims {
        target: 0x010E3F30,
        members: &[0x01D84070],
    },
    Shims {
        target: 0x010E4010,
        members: &[0x010FC140],
    },
    Shims {
        target: 0x010F6C40,
        members: &[0x012B0630],
    },
    Shims {
        target: 0x010F6D10,
        members: &[0x012B16B0, 0x01512540],
    },
    Shims {
        target: 0x010F6D40,
        members: &[0x012B16A0, 0x01512530],
    },
    Shims {
        target: 0x010F6EF0,
        members: &[0x010F6DE0],
    },
    Shims {
        target: 0x010F7860,
        members: &[0x012B1670, 0x01509020, 0x01509050],
    },
    Shims {
        target: 0x010F79A0,
        members: &[0x012B1640, 0x01509080, 0x015090B0],
    },
    Shims {
        target: 0x010F7AE0,
        members: &[0x012B1610],
    },
    Shims {
        target: 0x010F7B70,
        members: &[0x012B15E0],
    },
    Shims {
        target: 0x010F7C00,
        members: &[0x012B16C0],
    },
    Shims {
        target: 0x010F7E00,
        members: &[0x012B16D0],
    },
    Shims {
        target: 0x010F7E40,
        members: &[0x012B16E0],
    },
    Shims {
        target: 0x010F7E80,
        members: &[0x012B1C90],
    },
    Shims {
        target: 0x010F7EA0,
        members: &[0x012B1CA0],
    },
    Shims {
        target: 0x010F7FB0,
        members: &[0x012B2020],
    },
    Shims {
        target: 0x010F9770,
        members: &[0x01508E70],
    },
    Shims {
        target: 0x010F9780,
        members: &[0x012B1DA0],
    },
    Shims {
        target: 0x010F9C80,
        members: &[0x012B2010],
    },
    Shims {
        target: 0x010FAF40,
        members: &[0x012B2080],
    },
    Shims {
        target: 0x010FBE80,
        members: &[0x012B23A0],
    },
    Shims {
        target: 0x01101640,
        members: &[0x01101620],
    },
    Shims {
        target: 0x011072D0,
        members: &[0x01107480],
    },
    Shims {
        target: 0x01112210,
        members: &[0x01112370, 0x01112390],
    },
    Shims {
        target: 0x01117330,
        members: &[0x01117610, 0x01117630],
    },
    Shims {
        target: 0x01123220,
        members: &[0x01123590],
    },
    Shims {
        target: 0x01123250,
        members: &[0x01125620],
    },
    Shims {
        target: 0x011254A0,
        members: &[0x011254E0],
    },
    Shims {
        target: 0x01125630,
        members: &[0x01125490],
    },
    Shims {
        target: 0x01125A60,
        members: &[0x01125460],
    },
    Shims {
        target: 0x01125CD0,
        members: &[0x01125480],
    },
    Shims {
        target: 0x01125DF0,
        members: &[0x01125470],
    },
    Shims {
        target: 0x01126110,
        members: &[0x011255F0, 0x01125600],
    },
    Shims {
        target: 0x01126A70,
        members: &[0x01126B20],
    },
    Shims {
        target: 0x0112B0F0,
        members: &[0x0112A430],
    },
    Shims {
        target: 0x0112B910,
        members: &[0x0112A460],
    },
    Shims {
        target: 0x0112BB70,
        members: &[0x0112CFC0],
    },
    Shims {
        target: 0x0112CE60,
        members: &[0x0112D090],
    },
    Shims {
        target: 0x0112D020,
        members: &[0x0112CF80],
    },
    Shims {
        target: 0x0112E4E0,
        members: &[0x0112E380],
    },
    Shims {
        target: 0x0112E5C0,
        members: &[0x0112E3A0],
    },
    Shims {
        target: 0x0112E600,
        members: &[0x0112E3C0],
    },
    Shims {
        target: 0x0112E920,
        members: &[0x0112E3E0],
    },
    Shims {
        target: 0x0112EF90,
        members: &[
            0x0112E400, 0x0112E440, 0x0112E460, 0x0112E480, 0x0112E4A0, 0x0112E4C0, 0x01130D90,
        ],
    },
    Shims {
        target: 0x0112F010,
        members: &[0x0112E2F0, 0x0112EFE0],
    },
    Shims {
        target: 0x0112F390,
        members: &[0x0112F340],
    },
    Shims {
        target: 0x01133010,
        members: &[0x01133040],
    },
    Shims {
        target: 0x01133040,
        members: &[0x01132F60],
    },
    Shims {
        target: 0x01133070,
        members: &[0x01132F90],
    },
    Shims {
        target: 0x01133160,
        members: &[0x01132FC0],
    },
    Shims {
        target: 0x011339B0,
        members: &[0x01132B70, 0x01133930],
    },
    Shims {
        target: 0x01140A40,
        members: &[0x01141150],
    },
    Shims {
        target: 0x011413D0,
        members: &[0x01141470],
    },
    Shims {
        target: 0x011442E0,
        members: &[0x01144310],
    },
    Shims {
        target: 0x01144310,
        members: &[0x01144230],
    },
    Shims {
        target: 0x01144340,
        members: &[0x01144260],
    },
    Shims {
        target: 0x01144470,
        members: &[0x01144290],
    },
    Shims {
        target: 0x01145020,
        members: &[0x01143E40, 0x01144F00],
    },
    Shims {
        target: 0x01145820,
        members: &[0x01145850],
    },
    Shims {
        target: 0x01145850,
        members: &[0x01145770],
    },
    Shims {
        target: 0x01145880,
        members: &[0x011457A0],
    },
    Shims {
        target: 0x01145980,
        members: &[0x011457D0],
    },
    Shims {
        target: 0x011462E0,
        members: &[0x01145380, 0x01146230],
    },
    Shims {
        target: 0x0114C790,
        members: &[0x0114D210],
    },
    Shims {
        target: 0x01152490,
        members: &[0x011537E0],
    },
    Shims {
        target: 0x01155400,
        members: &[0x01155C50, 0x01155C70],
    },
    Shims {
        target: 0x0117AE30,
        members: &[0x0117AE20],
    },
    Shims {
        target: 0x0117B260,
        members: &[0x0117B220, 0x0117B230, 0x0117B240, 0x0117B250],
    },
    Shims {
        target: 0x01195840,
        members: &[0x011962D0, 0x011962F0],
    },
    Shims {
        target: 0x01195850,
        members: &[0x01195840],
    },
    Shims {
        target: 0x01196F70,
        members: &[0x01197690],
    },
    Shims {
        target: 0x01196FB0,
        members: &[0x01197750],
    },
    Shims {
        target: 0x011A6000,
        members: &[0x011A5FF0],
    },
    Shims {
        target: 0x011ABDE0,
        members: &[0x011ABDD0],
    },
    Shims {
        target: 0x011ABDF0,
        members: &[0x011ABDE0],
    },
    Shims {
        target: 0x011AE560,
        members: &[0x011D2720],
    },
    Shims {
        target: 0x012281F0,
        members: &[0x0115DCC0],
    },
    Shims {
        target: 0x0122B3A0,
        members: &[0x01232E40],
    },
    Shims {
        target: 0x0122DB90,
        members: &[0x01179330],
    },
    Shims {
        target: 0x01238BC0,
        members: &[0x01238FB0],
    },
    Shims {
        target: 0x01239900,
        members: &[0x01239E70, 0x01239E80, 0x01239E90, 0x01239EA0],
    },
    Shims {
        target: 0x012ADDA0,
        members: &[0x012ADD80],
    },
    Shims {
        target: 0x012B04E0,
        members: &[0x012B04A0, 0x012B04C0],
    },
    Shims {
        target: 0x012B3CC0,
        members: &[0x012B3F60, 0x012B3F80],
    },
    Shims {
        target: 0x012B6470,
        members: &[0x012B8950],
    },
    Shims {
        target: 0x012C4640,
        members: &[0x01C890D0],
    },
    Shims {
        target: 0x012C8AE0,
        members: &[0x012C4FA0, 0x012C4FB0],
    },
    Shims {
        target: 0x01365020,
        members: &[0x0136D9E0],
    },
    Shims {
        target: 0x01367550,
        members: &[0x013675A0],
    },
    Shims {
        target: 0x013689B0,
        members: &[0x01369400],
    },
    Shims {
        target: 0x01369FE0,
        members: &[0x0136A030],
    },
    Shims {
        target: 0x013737C0,
        members: &[0x013738B0],
    },
    Shims {
        target: 0x013AE7B0,
        members: &[0x01CFD000],
    },
    Shims {
        target: 0x013B2E80,
        members: &[0x017E2480],
    },
    Shims {
        target: 0x013B2EA0,
        members: &[0x017E24A0],
    },
    Shims {
        target: 0x013B2EB0,
        members: &[0x017E24C0],
    },
    Shims {
        target: 0x0140A5B0,
        members: &[0x0140A5C0, 0x0140A660],
    },
    Shims {
        target: 0x0140BED0,
        members: &[0x0140BF30],
    },
    Shims {
        target: 0x0140E8D0,
        members: &[0x0140E950],
    },
    Shims {
        target: 0x0141D8F0,
        members: &[0x01427A60],
    },
    Shims {
        target: 0x0141DE10,
        members: &[0x01427A70],
    },
    Shims {
        target: 0x0141E1F0,
        members: &[0x01427A80],
    },
    Shims {
        target: 0x0141E4E0,
        members: &[0x01427AA0],
    },
    Shims {
        target: 0x0141E760,
        members: &[0x01427AB0],
    },
    Shims {
        target: 0x0141F000,
        members: &[0x01427AC0],
    },
    Shims {
        target: 0x01422990,
        members: &[
            0x01424D50, 0x01428050, 0x01428070, 0x01428090, 0x014280B0, 0x014280F0, 0x01428130,
        ],
    },
    Shims {
        target: 0x01424EF0,
        members: &[0x01425740, 0x014280D0, 0x01428110, 0x01428150, 0x01428170],
    },
    Shims {
        target: 0x01427B70,
        members: &[0x014281B0],
    },
    Shims {
        target: 0x01427E30,
        members: &[0x01427F70, 0x01427F90],
    },
    Shims {
        target: 0x01430070,
        members: &[0x014300D0],
    },
    Shims {
        target: 0x01430090,
        members: &[0x014300F0],
    },
    Shims {
        target: 0x01430700,
        members: &[0x014306C0],
    },
    Shims {
        target: 0x01434E10,
        members: &[0x01435E00],
    },
    Shims {
        target: 0x01435F60,
        members: &[0x01435FB0],
    },
    Shims {
        target: 0x01435F90,
        members: &[0x01435FD0],
    },
    Shims {
        target: 0x014366A0,
        members: &[0x01432DD0],
    },
    Shims {
        target: 0x01447520,
        members: &[0x0145E6E0, 0x0145E700],
    },
    Shims {
        target: 0x01447630,
        members: &[0x0145EC70, 0x0145EC90],
    },
    Shims {
        target: 0x014487F0,
        members: &[0x0145EF10, 0x0145EF30],
    },
    Shims {
        target: 0x014863C0,
        members: &[0x014879A0],
    },
    Shims {
        target: 0x014866C0,
        members: &[0x014876E0],
    },
    Shims {
        target: 0x01487A30,
        members: &[0x01486E10],
    },
    Shims {
        target: 0x01487B20,
        members: &[0x01487A60],
    },
    Shims {
        target: 0x01487B70,
        members: &[0x01487BB0],
    },
    Shims {
        target: 0x01487BE0,
        members: &[0x01487B20],
    },
    Shims {
        target: 0x01487CF0,
        members: &[0x01488040],
    },
    Shims {
        target: 0x01488020,
        members: &[0x01487F60],
    },
    Shims {
        target: 0x01488070,
        members: &[0x01488090],
    },
    Shims {
        target: 0x014880B0,
        members: &[0x01488020],
    },
    Shims {
        target: 0x014881C0,
        members: &[0x01488210],
    },
    Shims {
        target: 0x01488240,
        members: &[0x01487A30],
    },
    Shims {
        target: 0x01488350,
        members: &[0x019BF100],
    },
    Shims {
        target: 0x01489090,
        members: &[0x014890C0],
    },
    Shims {
        target: 0x014890C0,
        members: &[0x01488FE0],
    },
    Shims {
        target: 0x014890F0,
        members: &[0x01489010],
    },
    Shims {
        target: 0x01489220,
        members: &[0x01489040],
    },
    Shims {
        target: 0x01489DC0,
        members: &[0x01488BF0, 0x01489CA0],
    },
    Shims {
        target: 0x0148A5C0,
        members: &[0x0148A5F0],
    },
    Shims {
        target: 0x0148A5F0,
        members: &[0x0148A510],
    },
    Shims {
        target: 0x0148A620,
        members: &[0x0148A540],
    },
    Shims {
        target: 0x0148A710,
        members: &[0x0148A570],
    },
    Shims {
        target: 0x0148AF70,
        members: &[0x0148A120, 0x0148AEF0],
    },
    Shims {
        target: 0x01493C70,
        members: &[0x01498170, 0x01498CD0],
    },
    Shims {
        target: 0x01498900,
        members: &[0x0149A5D0],
    },
    Shims {
        target: 0x014A1260,
        members: &[0x014A1560],
    },
    Shims {
        target: 0x014D0980,
        members: &[0x014D6CB0, 0x014D7C80],
    },
    Shims {
        target: 0x014F83F0,
        members: &[0x014F84E0],
    },
    Shims {
        target: 0x014FAD50,
        members: &[0x014FADE0],
    },
    Shims {
        target: 0x014FB2E0,
        members: &[0x014FB4E0],
    },
    Shims {
        target: 0x014FB390,
        members: &[0x014FB4F0],
    },
    Shims {
        target: 0x014FB960,
        members: &[0x014FBC00, 0x014FBC30, 0x014FBC60, 0x014FBC90, 0x014FBCC0],
    },
    Shims {
        target: 0x014FB9E0,
        members: &[0x014FBD50, 0x014FBD80],
    },
    Shims {
        target: 0x014FBA60,
        members: &[0x014FBD60, 0x014FBD90],
    },
    Shims {
        target: 0x014FBB20,
        members: &[0x014FBC10, 0x014FBC40, 0x014FBC70, 0x014FBCA0],
    },
    Shims {
        target: 0x01507110,
        members: &[0x015072C0, 0x015072D0],
    },
    Shims {
        target: 0x0151F860,
        members: &[0x0151F980, 0x0151F990],
    },
    Shims {
        target: 0x0152FB90,
        members: &[0x01533D40],
    },
    Shims {
        target: 0x01535350,
        members: &[0x01535DC0, 0x01535DE0],
    },
    Shims {
        target: 0x0153FAA0,
        members: &[0x0153FA60],
    },
    Shims {
        target: 0x015429B0,
        members: &[0x0153F7B0],
    },
    Shims {
        target: 0x015442B0,
        members: &[0x01544410, 0x01544430],
    },
    Shims {
        target: 0x0154CFF0,
        members: &[0x0154D030],
    },
    Shims {
        target: 0x015665C0,
        members: &[0x01566860],
    },
    Shims {
        target: 0x0156C8C0,
        members: &[0x0160F290],
    },
    Shims {
        target: 0x01571A60,
        members: &[0x01550B90],
    },
    Shims {
        target: 0x01571EB0,
        members: &[0x0156F740],
    },
    Shims {
        target: 0x01571EE0,
        members: &[0x015720C0],
    },
    Shims {
        target: 0x01575270,
        members: &[0x01575200, 0x01575240],
    },
    Shims {
        target: 0x01575770,
        members: &[0x0156B160],
    },
    Shims {
        target: 0x0157CF70,
        members: &[0x0157EC80, 0x0157ECA0],
    },
    Shims {
        target: 0x015831D0,
        members: &[0x015849A0],
    },
    Shims {
        target: 0x015834E0,
        members: &[0x015846B0],
    },
    Shims {
        target: 0x01584A30,
        members: &[0x01583D00],
    },
    Shims {
        target: 0x01584A50,
        members: &[0x01584DA0],
    },
    Shims {
        target: 0x01584D80,
        members: &[0x01584CC0],
    },
    Shims {
        target: 0x01584DD0,
        members: &[0x01584DF0],
    },
    Shims {
        target: 0x01584E10,
        members: &[0x01584D80],
    },
    Shims {
        target: 0x01584F20,
        members: &[0x01585310],
    },
    Shims {
        target: 0x015852F0,
        members: &[0x01585230],
    },
    Shims {
        target: 0x01585340,
        members: &[0x01585380],
    },
    Shims {
        target: 0x015853B0,
        members: &[0x015852F0],
    },
    Shims {
        target: 0x015854C0,
        members: &[0x01585520],
    },
    Shims {
        target: 0x01585550,
        members: &[0x01584A30],
    },
    Shims {
        target: 0x01585F70,
        members: &[0x01585FA0],
    },
    Shims {
        target: 0x01585FA0,
        members: &[0x01585EC0],
    },
    Shims {
        target: 0x01585FD0,
        members: &[0x01585EF0],
    },
    Shims {
        target: 0x01586120,
        members: &[0x01585F20],
    },
    Shims {
        target: 0x01586CF0,
        members: &[0x01585AD0, 0x01586BC0],
    },
    Shims {
        target: 0x015874D0,
        members: &[0x01587500],
    },
    Shims {
        target: 0x01587500,
        members: &[0x01587420],
    },
    Shims {
        target: 0x01587530,
        members: &[0x01587450],
    },
    Shims {
        target: 0x01587660,
        members: &[0x01587480],
    },
    Shims {
        target: 0x01588210,
        members: &[0x01587030, 0x015880F0],
    },
    Shims {
        target: 0x01588A40,
        members: &[0x01588A70],
    },
    Shims {
        target: 0x01588A70,
        members: &[0x01588990],
    },
    Shims {
        target: 0x01588AA0,
        members: &[0x015889C0],
    },
    Shims {
        target: 0x01588B90,
        members: &[0x015889F0],
    },
    Shims {
        target: 0x015893D0,
        members: &[0x015885A0, 0x01589370],
    },
    Shims {
        target: 0x01589BB0,
        members: &[0x01589BE0],
    },
    Shims {
        target: 0x01589BE0,
        members: &[0x01589B00],
    },
    Shims {
        target: 0x01589C10,
        members: &[0x01589B30],
    },
    Shims {
        target: 0x01589D40,
        members: &[0x01589B60],
    },
    Shims {
        target: 0x0158A8E0,
        members: &[0x01589710, 0x0158A7C0],
    },
    Shims {
        target: 0x01598DC0,
        members: &[0x01598D60],
    },
    Shims {
        target: 0x0159FF10,
        members: &[0x0159FED0],
    },
    Shims {
        target: 0x015A54C0,
        members: &[0x015A2050],
    },
    Shims {
        target: 0x015A5F60,
        members: &[0x015A5F20, 0x015A6090],
    },
    Shims {
        target: 0x015A7590,
        members: &[0x015A6430, 0x015A7720],
    },
    Shims {
        target: 0x015ABDC0,
        members: &[0x015ADDD0, 0x015B3C70, 0x015B3D10],
    },
    Shims {
        target: 0x015B3C40,
        members: &[0x015B3C10, 0x015B3C50],
    },
    Shims {
        target: 0x015B6150,
        members: &[0x015BF330],
    },
    Shims {
        target: 0x015BF1B0,
        members: &[0x015CA300],
    },
    Shims {
        target: 0x015BF620,
        members: &[0x015C0AA0, 0x015D8370, 0x015D8390, 0x015D83B0],
    },
    Shims {
        target: 0x015CA1A0,
        members: &[0x015D5FF0, 0x015D8650],
    },
    Shims {
        target: 0x015D3B80,
        members: &[0x015D60A0],
    },
    Shims {
        target: 0x015DCD20,
        members: &[0x015E1BA0],
    },
    Shims {
        target: 0x015DCFC0,
        members: &[0x015DD840],
    },
    Shims {
        target: 0x015DD390,
        members: &[0x015DD860],
    },
    Shims {
        target: 0x015E1BA0,
        members: &[0x015E1C90],
    },
    Shims {
        target: 0x015E1BC0,
        members: &[0x015E1CB0],
    },
    Shims {
        target: 0x015E31B0,
        members: &[0x015E3480],
    },
    Shims {
        target: 0x015EBC30,
        members: &[0x015EC190],
    },
    Shims {
        target: 0x015F6420,
        members: &[0x015F6440],
    },
    Shims {
        target: 0x015FC280,
        members: &[0x013B9740],
    },
    Shims {
        target: 0x015FC680,
        members: &[0x015FC7A0],
    },
    Shims {
        target: 0x015FD3F0,
        members: &[0x00E0FA70],
    },
    Shims {
        target: 0x01610CC0,
        members: &[0x01603250, 0x01C76A70],
    },
    Shims {
        target: 0x016135E0,
        members: &[0x016262B0],
    },
    Shims {
        target: 0x01615B20,
        members: &[0x0162F1B0],
    },
    Shims {
        target: 0x016192E0,
        members: &[0x01619430],
    },
    Shims {
        target: 0x01619AC0,
        members: &[0x01649550],
    },
    Shims {
        target: 0x0161C2E0,
        members: &[0x0161C550],
    },
    Shims {
        target: 0x0162AB40,
        members: &[0x0162AB70],
    },
    Shims {
        target: 0x0162E1D0,
        members: &[0x016342A0],
    },
    Shims {
        target: 0x0162F2C0,
        members: &[0x0162F1F0],
    },
    Shims {
        target: 0x01648B90,
        members: &[0x01649060],
    },
    Shims {
        target: 0x0167E3F0,
        members: &[0x0167E420],
    },
    Shims {
        target: 0x0167E420,
        members: &[0x0167E340],
    },
    Shims {
        target: 0x0167E450,
        members: &[0x0167E370],
    },
    Shims {
        target: 0x0167E550,
        members: &[0x0167E3A0],
    },
    Shims {
        target: 0x0167EEB0,
        members: &[0x0167DF50, 0x0167EE00],
    },
    Shims {
        target: 0x0167F800,
        members: &[0x0167F830],
    },
    Shims {
        target: 0x0167F830,
        members: &[0x0167F750],
    },
    Shims {
        target: 0x0167F860,
        members: &[0x0167F780],
    },
    Shims {
        target: 0x0167F950,
        members: &[0x0167F7B0],
    },
    Shims {
        target: 0x016801A0,
        members: &[0x0167F360, 0x01680120],
    },
    Shims {
        target: 0x01680510,
        members: &[0x0177B150, 0x01B27680],
    },
    Shims {
        target: 0x01680E40,
        members: &[0x01680E70],
    },
    Shims {
        target: 0x01680E70,
        members: &[0x01680D90],
    },
    Shims {
        target: 0x01680EA0,
        members: &[0x01680DC0],
    },
    Shims {
        target: 0x01680F90,
        members: &[0x01680DF0],
    },
    Shims {
        target: 0x01681800,
        members: &[0x016809B0, 0x01681780],
    },
    Shims {
        target: 0x01682150,
        members: &[0x01682180],
    },
    Shims {
        target: 0x01682180,
        members: &[0x016820A0],
    },
    Shims {
        target: 0x016821B0,
        members: &[0x016820D0],
    },
    Shims {
        target: 0x016822A0,
        members: &[0x01682100],
    },
    Shims {
        target: 0x01682AF0,
        members: &[0x01681CB0, 0x01682A70],
    },
    Shims {
        target: 0x01684670,
        members: &[0x01D5C520],
    },
    Shims {
        target: 0x01684EF0,
        members: &[0x01D5C540],
    },
    Shims {
        target: 0x01695540,
        members: &[0x01698480, 0x016B16D0],
    },
    Shims {
        target: 0x01697B90,
        members: &[0x01697C10],
    },
    Shims {
        target: 0x01698500,
        members: &[0x0161DDE0],
    },
    Shims {
        target: 0x016AA270,
        members: &[0x016AA6D0],
    },
    Shims {
        target: 0x016BA220,
        members: &[0x016BAD90],
    },
    Shims {
        target: 0x016BA960,
        members: &[0x016BAF80],
    },
    Shims {
        target: 0x016BBCA0,
        members: &[0x00EE37E0],
    },
    Shims {
        target: 0x016CCD20,
        members: &[0x016D7170],
    },
    Shims {
        target: 0x016D0A80,
        members: &[0x016D0AB0],
    },
    Shims {
        target: 0x016D0AB0,
        members: &[0x016D09D0],
    },
    Shims {
        target: 0x016D0AE0,
        members: &[0x016D0A00],
    },
    Shims {
        target: 0x016D0BD0,
        members: &[0x016D0A30],
    },
    Shims {
        target: 0x016D1420,
        members: &[0x016D05E0, 0x016D13A0],
    },
    Shims {
        target: 0x016D4E50,
        members: &[0x016D45C0],
    },
    Shims {
        target: 0x016E34C0,
        members: &[0x01164E10, 0x016E3F80],
    },
    Shims {
        target: 0x016E3F80,
        members: &[0x00E7B2A0],
    },
    Shims {
        target: 0x016E6F30,
        members: &[0x016E72C0],
    },
    Shims {
        target: 0x016EBDD0,
        members: &[0x00DD3660],
    },
    Shims {
        target: 0x016ED780,
        members: &[0x0161B950, 0x016290E0],
    },
    Shims {
        target: 0x016ED7B0,
        members: &[0x01629100],
    },
    Shims {
        target: 0x016F1650,
        members: &[0x016F1AB0],
    },
    Shims {
        target: 0x016F9900,
        members: &[0x016F98E0],
    },
    Shims {
        target: 0x017088A0,
        members: &[0x01708880],
    },
    Shims {
        target: 0x01708D00,
        members: &[0x01708CE0],
    },
    Shims {
        target: 0x01710E80,
        members: &[0x01710730],
    },
    Shims {
        target: 0x0171BA40,
        members: &[0x0171CE70],
    },
    Shims {
        target: 0x0171BCD0,
        members: &[0x0171CBB0],
    },
    Shims {
        target: 0x0171BFE0,
        members: &[0x0171A900],
    },
    Shims {
        target: 0x0171CF00,
        members: &[0x0171C360],
    },
    Shims {
        target: 0x0171CF20,
        members: &[0x0171D270],
    },
    Shims {
        target: 0x0171D250,
        members: &[0x0171D190],
    },
    Shims {
        target: 0x0171D2A0,
        members: &[0x0171D2C0],
    },
    Shims {
        target: 0x0171D2E0,
        members: &[0x0171D250],
    },
    Shims {
        target: 0x0171D3F0,
        members: &[0x0171D740],
    },
    Shims {
        target: 0x0171D720,
        members: &[0x0171D660],
    },
    Shims {
        target: 0x0171D770,
        members: &[0x0171D790],
    },
    Shims {
        target: 0x0171D7B0,
        members: &[0x0171D720],
    },
    Shims {
        target: 0x0171D8C0,
        members: &[0x0171D900],
    },
    Shims {
        target: 0x0171D930,
        members: &[0x0171CF00],
    },
    Shims {
        target: 0x0171E130,
        members: &[0x0171E160],
    },
    Shims {
        target: 0x0171E160,
        members: &[0x0171E080],
    },
    Shims {
        target: 0x0171E190,
        members: &[0x0171E0B0],
    },
    Shims {
        target: 0x0171E290,
        members: &[0x0171E0E0],
    },
    Shims {
        target: 0x0171EBF0,
        members: &[0x0171DC90, 0x0171EB40],
    },
    Shims {
        target: 0x0171F420,
        members: &[0x0171F450],
    },
    Shims {
        target: 0x0171F450,
        members: &[0x0171F370],
    },
    Shims {
        target: 0x0171F480,
        members: &[0x0171F3A0],
    },
    Shims {
        target: 0x0171F570,
        members: &[0x0171F3D0],
    },
    Shims {
        target: 0x0171FDD0,
        members: &[0x0171EF80, 0x0171FD50],
    },
    Shims {
        target: 0x017205A0,
        members: &[0x017205D0],
    },
    Shims {
        target: 0x017205D0,
        members: &[0x017204F0],
    },
    Shims {
        target: 0x01720600,
        members: &[0x01720520],
    },
    Shims {
        target: 0x017206F0,
        members: &[0x01720550],
    },
    Shims {
        target: 0x01720F40,
        members: &[0x01720100, 0x01720EC0],
    },
    Shims {
        target: 0x0173D100,
        members: &[0x0174BDC0, 0x0174EE90, 0x01759510, 0x01759540, 0x0175AAF0],
    },
    Shims {
        target: 0x0173D1E0,
        members: &[0x0173D2C0],
    },
    Shims {
        target: 0x0175B7A0,
        members: &[0x0175B7D0],
    },
    Shims {
        target: 0x0175B7D0,
        members: &[0x0175B6F0],
    },
    Shims {
        target: 0x0175B800,
        members: &[0x0175B720],
    },
    Shims {
        target: 0x0175B930,
        members: &[0x0175B750],
    },
    Shims {
        target: 0x0175C4D0,
        members: &[0x0175B300, 0x0175C3B0],
    },
    Shims {
        target: 0x0176A580,
        members: &[0x0176C960],
    },
    Shims {
        target: 0x01779410,
        members: &[0x0177AA40],
    },
    Shims {
        target: 0x01779710,
        members: &[0x0177A780],
    },
    Shims {
        target: 0x0177AAD0,
        members: &[0x01779EB0],
    },
    Shims {
        target: 0x0177AAF0,
        members: &[0x0177AEB0],
    },
    Shims {
        target: 0x0177AE90,
        members: &[0x0177ADD0],
    },
    Shims {
        target: 0x0177AEE0,
        members: &[0x0177AF20],
    },
    Shims {
        target: 0x0177AF50,
        members: &[0x0177AE90],
    },
    Shims {
        target: 0x0177B130,
        members: &[0x0177B070],
    },
    Shims {
        target: 0x0177B180,
        members: &[0x0177B1A0],
    },
    Shims {
        target: 0x0177B1C0,
        members: &[0x0177B130],
    },
    Shims {
        target: 0x0177B2D0,
        members: &[0x0177B320],
    },
    Shims {
        target: 0x0177B350,
        members: &[0x0177AAD0],
    },
    Shims {
        target: 0x017891B0,
        members: &[0x01A92580, 0x01A927F0],
    },
    Shims {
        target: 0x01789B00,
        members: &[0x01789B30],
    },
    Shims {
        target: 0x01789B30,
        members: &[0x01789A50],
    },
    Shims {
        target: 0x01789B60,
        members: &[0x01789A80],
    },
    Shims {
        target: 0x01789C50,
        members: &[0x01789AB0],
    },
    Shims {
        target: 0x0178A470,
        members: &[0x01789660, 0x0178A410],
    },
    Shims {
        target: 0x017B1C70,
        members: &[0x017B1CE0],
    },
    Shims {
        target: 0x017BDD00,
        members: &[0x017BCE70],
    },
    Shims {
        target: 0x017C2460,
        members: &[0x017C25C0],
    },
    Shims {
        target: 0x017C3740,
        members: &[0x017C2350],
    },
    Shims {
        target: 0x017D9E00,
        members: &[0x017C5870],
    },
    Shims {
        target: 0x017DA090,
        members: &[0x017C58C0],
    },
    Shims {
        target: 0x017DB330,
        members: &[0x00DCFAD0],
    },
    Shims {
        target: 0x017DBF50,
        members: &[0x00DCF730],
    },
    Shims {
        target: 0x017DE1E0,
        members: &[0x017DE380, 0x017DE530],
    },
    Shims {
        target: 0x017DE5F0,
        members: &[0x017DE700],
    },
    Shims {
        target: 0x017E1AA0,
        members: &[0x017E26A0],
    },
    Shims {
        target: 0x017E3010,
        members: &[0x013C43A0],
    },
    Shims {
        target: 0x017E3230,
        members: &[0x010D6BF0],
    },
    Shims {
        target: 0x017F0DF0,
        members: &[0x017F0DB0],
    },
    Shims {
        target: 0x017FEA70,
        members: &[0x015FA5E0],
    },
    Shims {
        target: 0x017FED50,
        members: &[0x017C43E0],
    },
    Shims {
        target: 0x017FF4A0,
        members: &[0x0154B5F0],
    },
    Shims {
        target: 0x017FF4F0,
        members: &[0x0163DD20],
    },
    Shims {
        target: 0x01803BF0,
        members: &[0x018B87B0],
    },
    Shims {
        target: 0x018055C0,
        members: &[0x01805690],
    },
    Shims {
        target: 0x0180BFE0,
        members: &[0x0189DD30, 0x0197B0E0],
    },
    Shims {
        target: 0x0180D9D0,
        members: &[0x019539A0],
    },
    Shims {
        target: 0x0180F080,
        members: &[0x0195F280, 0x0195F2A0, 0x0196F480, 0x0196F4A0, 0x0196F4C0],
    },
    Shims {
        target: 0x0180F630,
        members: &[0x0195F2C0, 0x0195F2E0, 0x0196F270, 0x0196F290, 0x0196F2B0],
    },
    Shims {
        target: 0x0180FF80,
        members: &[0x01810010],
    },
    Shims {
        target: 0x018172B0,
        members: &[0x018805F0, 0x018808D0],
    },
    Shims {
        target: 0x0181C960,
        members: &[0x0181C950],
    },
    Shims {
        target: 0x0181E370,
        members: &[0x0181ED70],
    },
    Shims {
        target: 0x0181E5F0,
        members: &[0x01836FD0],
    },
    Shims {
        target: 0x0181F800,
        members: &[0x0181F8D0],
    },
    Shims {
        target: 0x01821560,
        members: &[0x018217D0],
    },
    Shims {
        target: 0x01823580,
        members: &[0x01824560],
    },
    Shims {
        target: 0x01847410,
        members: &[0x0184A270],
    },
    Shims {
        target: 0x01848710,
        members: &[0x0184E070, 0x0184E2E0, 0x0184E480],
    },
    Shims {
        target: 0x0184C560,
        members: &[0x018505E0],
    },
    Shims {
        target: 0x0184F250,
        members: &[0x0184FFB0],
    },
    Shims {
        target: 0x0185DC60,
        members: &[0x01861DD0],
    },
    Shims {
        target: 0x0185F2E0,
        members: &[0x0185F470, 0x0185F490, 0x0185F4B0, 0x0185F4D0],
    },
    Shims {
        target: 0x0185F420,
        members: &[0x01861E30],
    },
    Shims {
        target: 0x01861E30,
        members: &[0x01862B50],
    },
    Shims {
        target: 0x018688E0,
        members: &[0x01857F50, 0x01869810],
    },
    Shims {
        target: 0x0186FB30,
        members: &[0x0186FA00, 0x0186FD80],
    },
    Shims {
        target: 0x018733B0,
        members: &[0x01872DD0, 0x01873010, 0x018730E0, 0x01873390, 0x01873480],
    },
    Shims {
        target: 0x0187FE10,
        members: &[0x01880380],
    },
    Shims {
        target: 0x0187FFB0,
        members: &[0x018803A0],
    },
    Shims {
        target: 0x018812E0,
        members: &[0x01881260, 0x018812A0],
    },
    Shims {
        target: 0x01886F90,
        members: &[0x018889A0],
    },
    Shims {
        target: 0x01886FB0,
        members: &[0x018885E0],
    },
    Shims {
        target: 0x01886FD0,
        members: &[0x01888620],
    },
    Shims {
        target: 0x01887000,
        members: &[0x01886F90, 0x01886FB0, 0x018872D0, 0x01888600],
    },
    Shims {
        target: 0x018872D0,
        members: &[0x018886A0],
    },
    Shims {
        target: 0x018873C0,
        members: &[0x01888650],
    },
    Shims {
        target: 0x018879E0,
        members: &[0x018888F0],
    },
    Shims {
        target: 0x01887A00,
        members: &[0x01888910],
    },
    Shims {
        target: 0x01887DB0,
        members: &[0x018BD8D0],
    },
    Shims {
        target: 0x018883F0,
        members: &[0x018BCF80],
    },
    Shims {
        target: 0x01888A70,
        members: &[0x018873C0],
    },
    Shims {
        target: 0x01888BA0,
        members: &[0x01886FD0],
    },
    Shims {
        target: 0x0188CDA0,
        members: &[0x0188D900],
    },
    Shims {
        target: 0x0188D030,
        members: &[0x0188D190],
    },
    Shims {
        target: 0x01893120,
        members: &[0x018A9100],
    },
    Shims {
        target: 0x01898B70,
        members: &[0x01898C60],
    },
    Shims {
        target: 0x0189A500,
        members: &[0x01899220],
    },
    Shims {
        target: 0x018A4EA0,
        members: &[0x018A74B0],
    },
    Shims {
        target: 0x018A4EF0,
        members: &[0x018A74D0],
    },
    Shims {
        target: 0x018A73D0,
        members: &[0x018A90D0],
    },
    Shims {
        target: 0x018A73E0,
        members: &[0x018AB5B0],
    },
    Shims {
        target: 0x018A9020,
        members: &[0x018A9E90, 0x018A9EB0, 0x018A9ED0],
    },
    Shims {
        target: 0x018A9FE0,
        members: &[0x018AF1A0],
    },
    Shims {
        target: 0x018AAA40,
        members: &[0x018AA8D0],
    },
    Shims {
        target: 0x018AB320,
        members: &[0x018AFC70],
    },
    Shims {
        target: 0x018AB370,
        members: &[0x018AFC90],
    },
    Shims {
        target: 0x018ABA70,
        members: &[0x018A8C60],
    },
    Shims {
        target: 0x018AF2E0,
        members: &[0x018AF6A0],
    },
    Shims {
        target: 0x018B7950,
        members: &[0x018BC4B0],
    },
    Shims {
        target: 0x018BB310,
        members: &[0x018BB390],
    },
    Shims {
        target: 0x018C0780,
        members: &[0x018C0880],
    },
    Shims {
        target: 0x018C60F0,
        members: &[0x018C6610],
    },
    Shims {
        target: 0x018CFD40,
        members: &[0x018C7950],
    },
    Shims {
        target: 0x018DC480,
        members: &[0x01960470, 0x01960900, 0x01960F70, 0x01961210],
    },
    Shims {
        target: 0x0194E190,
        members: &[0x0195CE10, 0x0195E4F0, 0x0196D800],
    },
    Shims {
        target: 0x01950AC0,
        members: &[0x018CC260],
    },
    Shims {
        target: 0x01952340,
        members: &[0x019623F0],
    },
    Shims {
        target: 0x01952350,
        members: &[0x01962400],
    },
    Shims {
        target: 0x019525A0,
        members: &[0x01951D20],
    },
    Shims {
        target: 0x01957EB0,
        members: &[0x019586A0],
    },
    Shims {
        target: 0x0195A6C0,
        members: &[0x0196BC60],
    },
    Shims {
        target: 0x0195CEA0,
        members: &[0x0196BD20],
    },
    Shims {
        target: 0x0195CEF0,
        members: &[0x0196BD00],
    },
    Shims {
        target: 0x01966AD0,
        members: &[0x0196BD40],
    },
    Shims {
        target: 0x01966BD0,
        members: &[0x0196BD70],
    },
    Shims {
        target: 0x0196BB80,
        members: &[0x018CB270],
    },
    Shims {
        target: 0x0196EA10,
        members: &[0x0196ED80],
    },
    Shims {
        target: 0x01972940,
        members: &[0x01972AE0],
    },
    Shims {
        target: 0x01972960,
        members: &[0x01972B00],
    },
    Shims {
        target: 0x01977180,
        members: &[0x01972E70],
    },
    Shims {
        target: 0x01977630,
        members: &[0x019789F0],
    },
    Shims {
        target: 0x01979790,
        members: &[0x019776D0],
    },
    Shims {
        target: 0x019797A0,
        members: &[0x01977720],
    },
    Shims {
        target: 0x019798B0,
        members: &[0x0197AE00],
    },
    Shims {
        target: 0x0197C140,
        members: &[0x01870510],
    },
    Shims {
        target: 0x0197C4A0,
        members: &[0x018A9B80],
    },
    Shims {
        target: 0x01980680,
        members: &[0x0196F540],
    },
    Shims {
        target: 0x019806A0,
        members: &[0x019774D0],
    },
    Shims {
        target: 0x019806C0,
        members: &[0x01977FF0],
    },
    Shims {
        target: 0x01980760,
        members: &[0x01977590],
    },
    Shims {
        target: 0x01980B20,
        members: &[0x0196F460],
    },
    Shims {
        target: 0x019815B0,
        members: &[0x0195F5A0, 0x01966A90],
    },
    Shims {
        target: 0x01981620,
        members: &[0x0195F510, 0x019675C0],
    },
    Shims {
        target: 0x01981650,
        members: &[0x0195F340, 0x019676B0],
    },
    Shims {
        target: 0x01992120,
        members: &[0x019921C0],
    },
    Shims {
        target: 0x019A24F0,
        members: &[0x019A2640, 0x019A2670],
    },
    Shims {
        target: 0x019B09D0,
        members: &[0x019B0A00],
    },
    Shims {
        target: 0x019B0A00,
        members: &[0x019B0920],
    },
    Shims {
        target: 0x019B0A30,
        members: &[0x019B0950],
    },
    Shims {
        target: 0x019B0B60,
        members: &[0x019B0980],
    },
    Shims {
        target: 0x019B1710,
        members: &[0x019B0530, 0x019B15F0],
    },
    Shims {
        target: 0x019B2060,
        members: &[0x019B2090],
    },
    Shims {
        target: 0x019B2090,
        members: &[0x019B1FB0],
    },
    Shims {
        target: 0x019B20C0,
        members: &[0x019B1FE0],
    },
    Shims {
        target: 0x019B21B0,
        members: &[0x019B2010],
    },
    Shims {
        target: 0x019B2A00,
        members: &[0x019B1BC0, 0x019B2980],
    },
    Shims {
        target: 0x019B2AF0,
        members: &[0x019B3E90],
    },
    Shims {
        target: 0x019B2D50,
        members: &[0x019B3BF0],
    },
    Shims {
        target: 0x019B3F20,
        members: &[0x019B33D0],
    },
    Shims {
        target: 0x019B4010,
        members: &[0x019B3F50],
    },
    Shims {
        target: 0x019B4060,
        members: &[0x019B4080],
    },
    Shims {
        target: 0x019B40A0,
        members: &[0x019B4010],
    },
    Shims {
        target: 0x019B4280,
        members: &[0x019B41C0],
    },
    Shims {
        target: 0x019B42D0,
        members: &[0x019B42F0],
    },
    Shims {
        target: 0x019B4310,
        members: &[0x019B4280],
    },
    Shims {
        target: 0x019B4420,
        members: &[0x019B4460],
    },
    Shims {
        target: 0x019B4490,
        members: &[0x019B3F20],
    },
    Shims {
        target: 0x019BB4E0,
        members: &[0x019BB4C0, 0x019BB4D0],
    },
    Shims {
        target: 0x01A24FD0,
        members: &[0x01B86BB0],
    },
    Shims {
        target: 0x01A3EFA0,
        members: &[0x01A3EF90],
    },
    Shims {
        target: 0x01A456E0,
        members: &[0x019CF2B0],
    },
    Shims {
        target: 0x01A90EE0,
        members: &[0x01CDF670],
    },
    Shims {
        target: 0x01A91040,
        members: &[0x01A923E0],
    },
    Shims {
        target: 0x01A912A0,
        members: &[0x01A92140],
    },
    Shims {
        target: 0x01A92470,
        members: &[0x01A91920],
    },
    Shims {
        target: 0x01A92560,
        members: &[0x01A924A0],
    },
    Shims {
        target: 0x01A925B0,
        members: &[0x01A925D0],
    },
    Shims {
        target: 0x01A925F0,
        members: &[0x01A92560],
    },
    Shims {
        target: 0x01A927D0,
        members: &[0x01A92710],
    },
    Shims {
        target: 0x01A92820,
        members: &[0x01A92840],
    },
    Shims {
        target: 0x01A92860,
        members: &[0x01A927D0],
    },
    Shims {
        target: 0x01A92970,
        members: &[0x01A929B0],
    },
    Shims {
        target: 0x01A929E0,
        members: &[0x01A92470],
    },
    Shims {
        target: 0x01A931E0,
        members: &[0x01A93210],
    },
    Shims {
        target: 0x01A93210,
        members: &[0x01A93130],
    },
    Shims {
        target: 0x01A93240,
        members: &[0x01A93160],
    },
    Shims {
        target: 0x01A93330,
        members: &[0x01A93190],
    },
    Shims {
        target: 0x01A93BF0,
        members: &[0x01A92D40, 0x01A93B50],
    },
    Shims {
        target: 0x01A9E8F0,
        members: &[0x01A9EE60],
    },
    Shims {
        target: 0x01A9F060,
        members: &[0x01A9F1E0],
    },
    Shims {
        target: 0x01AA44F0,
        members: &[0x01AA47B0, 0x01AA47D0, 0x01AA47F0],
    },
    Shims {
        target: 0x01AA45E0,
        members: &[0x01AA47C0, 0x01AA47E0, 0x01AA4800],
    },
    Shims {
        target: 0x01AA4810,
        members: &[0x01AA4AD0, 0x01AA4AF0, 0x01AA4B10],
    },
    Shims {
        target: 0x01AA4900,
        members: &[0x01AA4AE0, 0x01AA4B00, 0x01AA4B20],
    },
    Shims {
        target: 0x01AA4F60,
        members: &[0x01AA5240, 0x01AA5260, 0x01AA5280],
    },
    Shims {
        target: 0x01AA5060,
        members: &[0x01AA5250, 0x01AA5270, 0x01AA5290],
    },
    Shims {
        target: 0x01AA52A0,
        members: &[0x01AA5580, 0x01AA55B0, 0x01AA55D0],
    },
    Shims {
        target: 0x01AA53A0,
        members: &[0x01AA5590, 0x01AA55C0, 0x01AA55E0],
    },
    Shims {
        target: 0x01AA8E20,
        members: &[0x01AA8E90],
    },
    Shims {
        target: 0x01AB2CD0,
        members: &[0x01101540],
    },
    Shims {
        target: 0x01AC1CF0,
        members: &[0x01AC31C0],
    },
    Shims {
        target: 0x01AD1480,
        members: &[0x010EB680],
    },
    Shims {
        target: 0x01AD1550,
        members: &[0x010EB6A0],
    },
    Shims {
        target: 0x01AD4310,
        members: &[0x010F9A20],
    },
    Shims {
        target: 0x01AD6030,
        members: &[0x010F9980, 0x010F99A0],
    },
    Shims {
        target: 0x01AD6320,
        members: &[0x010F9880],
    },
    Shims {
        target: 0x01AD6C70,
        members: &[0x010F98F0],
    },
    Shims {
        target: 0x01AD72B0,
        members: &[0x010F98B0],
    },
    Shims {
        target: 0x01AD78B0,
        members: &[0x010F98D0],
    },
    Shims {
        target: 0x01AD8540,
        members: &[0x010F9910],
    },
    Shims {
        target: 0x01AE28B0,
        members: &[0x010F99E0],
    },
    Shims {
        target: 0x01AE2AB0,
        members: &[0x010EB6E0],
    },
    Shims {
        target: 0x01AE2E30,
        members: &[0x010EB6C0],
    },
    Shims {
        target: 0x01AE3E90,
        members: &[0x010F9A00],
    },
    Shims {
        target: 0x01AE67F0,
        members: &[0x010F9960],
    },
    Shims {
        target: 0x01AEBA30,
        members: &[0x01A730C0],
    },
    Shims {
        target: 0x01AEBA70,
        members: &[0x01A730D0],
    },
    Shims {
        target: 0x01AEBE00,
        members: &[0x01C75520],
    },
    Shims {
        target: 0x01B057C0,
        members: &[0x016EE570],
    },
    Shims {
        target: 0x01B058D0,
        members: &[0x01B05C20],
    },
    Shims {
        target: 0x01B05C40,
        members: &[0x01B05FA0],
    },
    Shims {
        target: 0x01B0FAF0,
        members: &[0x00DB39F0, 0x0168C3B0, 0x01B0F9F0],
    },
    Shims {
        target: 0x01B11A20,
        members: &[0x01B11A50],
    },
    Shims {
        target: 0x01B11A50,
        members: &[0x01B11970],
    },
    Shims {
        target: 0x01B11A80,
        members: &[0x01B119A0],
    },
    Shims {
        target: 0x01B11B70,
        members: &[0x01B119D0],
    },
    Shims {
        target: 0x01B123C0,
        members: &[0x01B11580, 0x01B12340],
    },
    Shims {
        target: 0x01B12FA0,
        members: &[0x01B12FD0],
    },
    Shims {
        target: 0x01B12FD0,
        members: &[0x01B12EF0],
    },
    Shims {
        target: 0x01B13000,
        members: &[0x01B12F20],
    },
    Shims {
        target: 0x01B130F0,
        members: &[0x01B12F50],
    },
    Shims {
        target: 0x01B13940,
        members: &[0x01B12B00, 0x01B138C0],
    },
    Shims {
        target: 0x01B14290,
        members: &[0x01B142C0],
    },
    Shims {
        target: 0x01B142C0,
        members: &[0x01B141E0],
    },
    Shims {
        target: 0x01B142F0,
        members: &[0x01B14210],
    },
    Shims {
        target: 0x01B143E0,
        members: &[0x01B14240],
    },
    Shims {
        target: 0x01B14C30,
        members: &[0x01B13DF0, 0x01B14BB0],
    },
    Shims {
        target: 0x01B14D40,
        members: &[0x01B16430],
    },
    Shims {
        target: 0x01B15050,
        members: &[0x01B16170],
    },
    Shims {
        target: 0x01B164C0,
        members: &[0x01B15860],
    },
    Shims {
        target: 0x01B165B0,
        members: &[0x01B164F0],
    },
    Shims {
        target: 0x01B16600,
        members: &[0x01B16640],
    },
    Shims {
        target: 0x01B16670,
        members: &[0x01B165B0],
    },
    Shims {
        target: 0x01B16780,
        members: &[0x01B16B00],
    },
    Shims {
        target: 0x01B16AE0,
        members: &[0x01B16A20],
    },
    Shims {
        target: 0x01B16B30,
        members: &[0x01B16B60],
    },
    Shims {
        target: 0x01B16B90,
        members: &[0x01B16AE0],
    },
    Shims {
        target: 0x01B16CA0,
        members: &[0x01B16D00],
    },
    Shims {
        target: 0x01B16D30,
        members: &[0x01B164C0],
    },
    Shims {
        target: 0x01B176B0,
        members: &[0x01B176E0],
    },
    Shims {
        target: 0x01B176E0,
        members: &[0x01B17600],
    },
    Shims {
        target: 0x01B17710,
        members: &[0x01B17630],
    },
    Shims {
        target: 0x01B17810,
        members: &[0x01B17660],
    },
    Shims {
        target: 0x01B18170,
        members: &[0x01B17210, 0x01B180C0],
    },
    Shims {
        target: 0x01B1F9A0,
        members: &[0x013AB2F0],
    },
    Shims {
        target: 0x01B25C70,
        members: &[0x01A41FD0, 0x01A5A9D0],
    },
    Shims {
        target: 0x01B25DB0,
        members: &[0x01B274E0],
    },
    Shims {
        target: 0x01B260B0,
        members: &[0x01B27200],
    },
    Shims {
        target: 0x01B27570,
        members: &[0x01B268A0],
    },
    Shims {
        target: 0x01B27660,
        members: &[0x01B275A0],
    },
    Shims {
        target: 0x01B276B0,
        members: &[0x01B276D0],
    },
    Shims {
        target: 0x01B276F0,
        members: &[0x01B27660],
    },
    Shims {
        target: 0x01B278D0,
        members: &[0x01B27810],
    },
    Shims {
        target: 0x01B27920,
        members: &[0x01B27960],
    },
    Shims {
        target: 0x01B27990,
        members: &[0x01B278D0],
    },
    Shims {
        target: 0x01B27AA0,
        members: &[0x01B27AF0],
    },
    Shims {
        target: 0x01B27B20,
        members: &[0x01B27570],
    },
    Shims {
        target: 0x01B284A0,
        members: &[0x01B284D0],
    },
    Shims {
        target: 0x01B284D0,
        members: &[0x01B283F0],
    },
    Shims {
        target: 0x01B28500,
        members: &[0x01B28420],
    },
    Shims {
        target: 0x01B285F0,
        members: &[0x01B28450],
    },
    Shims {
        target: 0x01B28E40,
        members: &[0x01B28000, 0x01B28DC0],
    },
    Shims {
        target: 0x01B39C60,
        members: &[0x01B3A970, 0x01B3A980],
    },
    Shims {
        target: 0x01B4A5D0,
        members: &[0x01B4AD40],
    },
    Shims {
        target: 0x01B8D530,
        members: &[0x01B8D560],
    },
    Shims {
        target: 0x01B8D560,
        members: &[0x01B8D480],
    },
    Shims {
        target: 0x01B8D590,
        members: &[0x01B8D4B0],
    },
    Shims {
        target: 0x01B8D6C0,
        members: &[0x01B8D4E0],
    },
    Shims {
        target: 0x01B8E270,
        members: &[0x01B8D090, 0x01B8E150],
    },
    Shims {
        target: 0x01B91530,
        members: &[0x01C78510, 0x01C792E0, 0x01C79650],
    },
    Shims {
        target: 0x01B96AE0,
        members: &[0x01B96A50],
    },
    Shims {
        target: 0x01BA2E80,
        members: &[0x01BA41F0],
    },
    Shims {
        target: 0x01BAA090,
        members: &[0x01BA9560],
    },
    Shims {
        target: 0x01BB0040,
        members: &[0x01BB0490],
    },
    Shims {
        target: 0x01BBBA20,
        members: &[0x01BBBA40],
    },
    Shims {
        target: 0x01BBED00,
        members: &[0x01BBEE00],
    },
    Shims {
        target: 0x01BCB060,
        members: &[0x01BCBA10, 0x01BCBA20, 0x01BCBA30, 0x01BCC280],
    },
    Shims {
        target: 0x01BD6080,
        members: &[0x01BD5C50],
    },
    Shims {
        target: 0x01BD7110,
        members: &[0x01BD77A0, 0x01BD79C0],
    },
    Shims {
        target: 0x01BE6190,
        members: &[0x01C12300],
    },
    Shims {
        target: 0x01BE7770,
        members: &[0x01C11F30],
    },
    Shims {
        target: 0x01C268A0,
        members: &[0x01C26920],
    },
    Shims {
        target: 0x01C27400,
        members: &[0x01C28500, 0x01C28520, 0x01C28560],
    },
    Shims {
        target: 0x01C32DF0,
        members: &[0x01C32E80],
    },
    Shims {
        target: 0x01C38160,
        members: &[0x01C3F7F0],
    },
    Shims {
        target: 0x01C6D670,
        members: &[0x01C6D010, 0x01C6D030],
    },
    Shims {
        target: 0x01C740C0,
        members: &[0x01C772F0],
    },
    Shims {
        target: 0x01C75BB0,
        members: &[0x01C8EB20],
    },
    Shims {
        target: 0x01C76290,
        members: &[0x01A5B260],
    },
    Shims {
        target: 0x01C7B040,
        members: &[0x01C7CEE0],
    },
    Shims {
        target: 0x01C8A9A0,
        members: &[0x01C94C50, 0x01C94CA0],
    },
    Shims {
        target: 0x01CA40E0,
        members: &[0x0108E1C0],
    },
    Shims {
        target: 0x01CA5400,
        members: &[0x01CA6B30],
    },
    Shims {
        target: 0x01CA5700,
        members: &[0x01CA6850],
    },
    Shims {
        target: 0x01CA6BC0,
        members: &[0x01CA5EF0],
    },
    Shims {
        target: 0x01CA6BE0,
        members: &[0x01CA6F30],
    },
    Shims {
        target: 0x01CA6F10,
        members: &[0x01CA6E50],
    },
    Shims {
        target: 0x01CA6F60,
        members: &[0x01CA6F80],
    },
    Shims {
        target: 0x01CA6FA0,
        members: &[0x01CA6F10],
    },
    Shims {
        target: 0x01CA7180,
        members: &[0x01CA70C0],
    },
    Shims {
        target: 0x01CA71D0,
        members: &[0x01CA7210],
    },
    Shims {
        target: 0x01CA7240,
        members: &[0x01CA7180],
    },
    Shims {
        target: 0x01CA7350,
        members: &[0x01CA73A0],
    },
    Shims {
        target: 0x01CA73D0,
        members: &[0x01CA6BC0],
    },
    Shims {
        target: 0x01CA7D00,
        members: &[0x01CA7D30],
    },
    Shims {
        target: 0x01CA7D30,
        members: &[0x01CA7C50],
    },
    Shims {
        target: 0x01CA7D60,
        members: &[0x01CA7C80],
    },
    Shims {
        target: 0x01CA7E90,
        members: &[0x01CA7CB0],
    },
    Shims {
        target: 0x01CA8A30,
        members: &[0x01CA7860, 0x01CA8910],
    },
    Shims {
        target: 0x01CA9210,
        members: &[0x01CA9240],
    },
    Shims {
        target: 0x01CA9240,
        members: &[0x01CA9160],
    },
    Shims {
        target: 0x01CA9270,
        members: &[0x01CA9190],
    },
    Shims {
        target: 0x01CA9360,
        members: &[0x01CA91C0],
    },
    Shims {
        target: 0x01CA9BD0,
        members: &[0x01CA8D80, 0x01CA9B50],
    },
    Shims {
        target: 0x01CC0690,
        members: &[0x01CC17A0],
    },
    Shims {
        target: 0x01CC52F0,
        members: &[0x01CC52D0],
    },
    Shims {
        target: 0x01CC5A50,
        members: &[0x01CCA370],
    },
    Shims {
        target: 0x01CE0100,
        members: &[0x01CEA900],
    },
    Shims {
        target: 0x01CE3940,
        members: &[0x01CE4CB0, 0x01CE4CD0],
    },
    Shims {
        target: 0x01CF0700,
        members: &[0x00C54740],
    },
    Shims {
        target: 0x01CF0710,
        members: &[0x00C54750],
    },
    Shims {
        target: 0x01CF0EE0,
        members: &[0x010B93B0, 0x017B9550],
    },
    Shims {
        target: 0x01CF1750,
        members: &[0x014DB750],
    },
    Shims {
        target: 0x01CFB4E0,
        members: &[0x01CFB4B0],
    },
    Shims {
        target: 0x01CFC7B0,
        members: &[0x01CFC780],
    },
    Shims {
        target: 0x01CFCA80,
        members: &[0x01CFCA50],
    },
    Shims {
        target: 0x01CFDE70,
        members: &[0x01602090, 0x0175AB20, 0x019F31F0],
    },
    Shims {
        target: 0x01D01940,
        members: &[0x01D01970],
    },
    Shims {
        target: 0x01D01970,
        members: &[0x01D3F2C0],
    },
    Shims {
        target: 0x01D03160,
        members: &[0x014F9C80, 0x014F9CA0, 0x014F9CC0, 0x01AA8090],
    },
    Shims {
        target: 0x01D03590,
        members: &[0x01D3EE20],
    },
    Shims {
        target: 0x01D06FB0,
        members: &[0x01D06FE0],
    },
    Shims {
        target: 0x01D11EF0,
        members: &[0x01A5DAB0],
    },
    Shims {
        target: 0x01D1AED0,
        members: &[0x01A5DAD0],
    },
    Shims {
        target: 0x01D1BFB0,
        members: &[0x01A5EED0],
    },
    Shims {
        target: 0x01D2B0E0,
        members: &[0x010F0A00],
    },
    Shims {
        target: 0x01D2B960,
        members: &[0x00F11210],
    },
    Shims {
        target: 0x01D2C5E0,
        members: &[0x00F11120],
    },
    Shims {
        target: 0x01D2D340,
        members: &[0x01CCE270, 0x01CD9D90],
    },
    Shims {
        target: 0x01D2D540,
        members: &[0x01AB6F50, 0x01CCDFA0],
    },
    Shims {
        target: 0x01D2D7C0,
        members: &[0x01AB70D0, 0x01CCE250],
    },
    Shims {
        target: 0x01D2D8C0,
        members: &[0x01AB70E0, 0x01CCE260],
    },
    Shims {
        target: 0x01D2D9D0,
        members: &[0x01AB6F40],
    },
    Shims {
        target: 0x01D30F00,
        members: &[0x01D31720],
    },
    Shims {
        target: 0x01D31350,
        members: &[0x01AE5F70],
    },
    Shims {
        target: 0x01D31A70,
        members: &[0x01D31A50, 0x01D31A90],
    },
    Shims {
        target: 0x01D347D0,
        members: &[
            0x00DAE940, 0x00DAEDF0, 0x01408CA0, 0x0140E880, 0x014F9500, 0x01571EE0, 0x01CAFF80,
            0x01CAFFA0, 0x01CAFFC0,
        ],
    },
    Shims {
        target: 0x01D34D40,
        members: &[0x014F97D0],
    },
    Shims {
        target: 0x01D34DB0,
        members: &[0x01D351A0],
    },
    Shims {
        target: 0x01D36C80,
        members: &[0x01CFD270],
    },
    Shims {
        target: 0x01D3A780,
        members: &[0x01CFCDB0, 0x01CFD2D0, 0x01D01910, 0x01D01940],
    },
    Shims {
        target: 0x01D3D400,
        members: &[0x01D3D440],
    },
    Shims {
        target: 0x01D3D650,
        members: &[0x01D3D6E0],
    },
    Shims {
        target: 0x01D3D700,
        members: &[0x01D3D820],
    },
    Shims {
        target: 0x01D3D750,
        members: &[0x01D3D840],
    },
    Shims {
        target: 0x01D3D7A0,
        members: &[0x01D3D860],
    },
    Shims {
        target: 0x01D591B0,
        members: &[0x01D59310, 0x01D59330],
    },
    Shims {
        target: 0x01D69A80,
        members: &[0x01D69AB0],
    },
    Shims {
        target: 0x01D69AB0,
        members: &[0x01D699D0],
    },
    Shims {
        target: 0x01D69AE0,
        members: &[0x01D69A00],
    },
    Shims {
        target: 0x01D69BD0,
        members: &[0x01D69A30],
    },
    Shims {
        target: 0x01D6A420,
        members: &[0x01D695E0, 0x01D6A3A0],
    },
    Shims {
        target: 0x01D80D40,
        members: &[0x01D83800, 0x01D83820],
    },
    Shims {
        target: 0x01D80DA0,
        members: &[0x01D83C30, 0x01D83C50, 0x01D83DC0],
    },
    Shims {
        target: 0x01D82A90,
        members: &[0x01D82A50, 0x01D82A70],
    },
    Shims {
        target: 0x01D849E0,
        members: &[0x01D854D0],
    },
    Shims {
        target: 0x04205F08,
        members: &[0x0131D4E0],
    },
    Shims {
        target: 0x0421AF6A,
        members: &[0x01340600],
    },
    Shims {
        target: 0x0421D817,
        members: &[0x01320320],
    },
    Shims {
        target: 0x0422742D,
        members: &[0x0133FF40],
    },
    Shims {
        target: 0x0422818A,
        members: &[0x0131FC60],
    },
    Shims {
        target: 0x0423DD90,
        members: &[0x017C99B0],
    },
    Shims {
        target: 0x0423E06B,
        members: &[0x01C75BB0],
    },
    Shims {
        target: 0x04258ADE,
        members: &[0x0176D320],
    },
    Shims {
        target: 0x04259448,
        members: &[0x016AD3F0],
    },
    Shims {
        target: 0x0426688C,
        members: &[0x01602F00],
    },
    Shims {
        target: 0x04276971,
        members: &[0x0176B4D0],
    },
    Shims {
        target: 0x0427C2A3,
        members: &[0x017CA500],
    },
    Shims {
        target: 0x0427CD60,
        members: &[0x01B1EE10],
    },
    Shims {
        target: 0x04282007,
        members: &[0x01770BA0],
    },
    Shims {
        target: 0x042A1586,
        members: &[0x0176C240],
    },
    Shims {
        target: 0x042CE2C7,
        members: &[0x01B23030],
    },
    Shims {
        target: 0x042DCDEF,
        members: &[0x01C659B0],
    },
    Shims {
        target: 0x042FBC61,
        members: &[0x01B23010],
    },
];

/// How many such routines there are.
pub const SHIM_COUNT: usize = 7139;

/// Implements part of the shim family.
///
/// The routines standing in front of one target.
#[must_use]
pub fn shims_for(target: u32) -> Option<&'static Shims> {
    SHIMS.iter().find(|group| group.target == target)
}

/// Implements part of the shim family.
///
/// What a shim calls, if this address is one.
#[must_use]
pub fn target_of(routine: u32) -> Option<u32> {
    SHIMS
        .iter()
        .find(|group| group.members.binary_search(&routine).is_ok())
        .map(|group| group.target)
}

/// Implements part of the shim family.
///
/// How many shims there are altogether.
#[must_use]
pub fn counted() -> usize {
    SHIMS.iter().map(|group| group.members.len()).sum()
}

/// Implements part of the shim family.
///
/// The targets with the most routines standing in front of them.
///
/// These are the routines the whole program leans on. A target needing many
/// shims is not a sign of anything wrong — it is a sign of how widely it is
/// used from places that cannot call it directly.
#[must_use]
pub fn most_stood_in_front_of(how_many: usize) -> Vec<(u32, usize)> {
    let mut counted: Vec<(u32, usize)> = SHIMS
        .iter()
        .map(|group| (group.target, group.members.len()))
        .collect();
    counted.sort_by(|left, right| right.1.cmp(&left.1).then(left.0.cmp(&right.0)));
    counted.truncate(how_many);
    counted
}

/// Implements part of the shim family.
///
/// How many targets are stood in front of by exactly one routine.
///
/// The large majority — which says these are emitted per call site and not per
/// routine.
#[must_use]
pub fn targets_with_one_shim() -> usize {
    SHIMS
        .iter()
        .filter(|group| group.members.len() == 1)
        .count()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn the_count_is_what_the_groups_hold() {
        assert_eq!(counted(), SHIM_COUNT);
    }

    #[test]
    fn no_shim_is_listed_twice() {
        let mut routines: Vec<u32> = SHIMS
            .iter()
            .flat_map(|group| group.members.iter().copied())
            .collect();
        let before = routines.len();
        routines.sort_unstable();
        routines.dedup();

        assert_eq!(routines.len(), before);
    }

    #[test]
    fn no_target_is_listed_twice() {
        let mut targets: Vec<u32> = SHIMS.iter().map(|group| group.target).collect();
        let before = targets.len();
        targets.sort_unstable();
        targets.dedup();

        assert_eq!(targets.len(), before);
    }

    #[test]
    fn every_group_is_sorted_so_it_can_be_searched() {
        for group in SHIMS {
            assert!(
                group.members.windows(2).all(|pair| pair[0] < pair[1]),
                "{:#010X}",
                group.target
            );
        }
    }

    #[test]
    fn no_group_is_empty() {
        for group in SHIMS {
            assert!(!group.members.is_empty(), "{:#010X}", group.target);
        }
    }

    #[test]
    fn a_shim_never_stands_in_front_of_itself() {
        for group in SHIMS {
            assert!(
                !group.members.contains(&group.target),
                "{:#010X}",
                group.target
            );
        }
    }

    #[test]
    fn most_targets_are_stood_in_front_of_by_exactly_one() {
        // Which says these are emitted per call site and not per routine.
        let alone = targets_with_one_shim();

        assert!(alone * 2 > SHIMS.len(), "{alone} of {}", SHIMS.len());
    }

    #[test]
    fn but_a_few_are_stood_in_front_of_by_many() {
        let busiest = most_stood_in_front_of(5);

        assert_eq!(busiest.len(), 5);
        assert!(busiest[0].1 > 50, "{busiest:?}");
        assert!(busiest[0].1 > busiest[4].1);
    }

    #[test]
    fn the_busiest_are_the_routines_the_program_leans_on() {
        // Assigning a string is the one with the most, which is what a program
        // built out of strings looks like from underneath.
        let busiest = most_stood_in_front_of(1);

        assert_eq!(busiest[0].0, 0x00414AD0);
    }

    #[test]
    fn a_shim_can_be_found_by_its_address() {
        let known = SHIMS[0].members[0];

        assert_eq!(target_of(known), Some(SHIMS[0].target));
        assert_eq!(target_of(0), None);
        assert_eq!(target_of(0xFFFF_FFFF), None);
    }

    #[test]
    fn and_a_target_by_its_own() {
        for group in SHIMS.iter().take(20) {
            let found = shims_for(group.target).expect("it is listed");

            assert_eq!(found.members.len(), group.members.len());
        }
        assert!(shims_for(0).is_none());
    }

    #[test]
    fn none_of_these_is_already_spoken_for_as_a_landing_pad() {
        // The two sweeps are of one population and must not overlap.
        for group in SHIMS.iter().take(200) {
            for routine in group.members {
                assert!(
                    crate::frame_pads::pad_at(*routine).is_none(),
                    "{routine:#010X}"
                );
            }
        }
    }
}
