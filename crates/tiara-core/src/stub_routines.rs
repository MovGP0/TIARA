//! Routines that do nothing, and routines that are exactly two calls.
//!
//! Two families that are left when everything with a body of its own has been
//! accounted for.
//!
//! The first is 1015 routines whose body is empty. A routine that does nothing is
//! not a mistake — it is what a slot looks like when a base class declares
//! something every kind of thing must answer and one kind has nothing to say. So
//! this list is a measure of how much of the program's shape is declared rather
//! than used.
//!
//! The second is 801 routines that are two calls and nothing else, in 340 distinct
//! combinations. Nearly all of the calls are the run time's releases, so these
//! are frames letting go of two things — the same job as the landing pads, but
//! reached with the thing to release named differently, which is why they were
//! not caught with those. Counting which releases appear together says which
//! kinds of thing tend to be held side by side.
//!
//! The calls are concentrated without being few. Four hundred and twenty-eight
//! distinct routines are called between them, but ten of those account for three
//! calls in five. And the more often one is called, the likelier it is to appear
//! on both sides of a pair: of the fourteen called ten times or more, twelve turn
//! up first in one routine and second in another. So position in a pair follows
//! where the thing sits in the frame, not what is being released.

// The addresses are written without separators so the port-mapping importer can
// match them against the recovered functions.
#![allow(clippy::unreadable_literal)]

/// Every routine whose body is empty.
pub static EMPTY: [u32; 1015] = [
    0x00410D10, 0x00410D20, 0x00410D30, 0x004115E0, 0x004115F0, 0x00411600, 0x00412720, 0x00414E10,
    0x0041F6F0, 0x0041F7F0, 0x0041F9B0, 0x00432A30, 0x0044C450, 0x00450020, 0x0045D410, 0x0045D500,
    0x00460DE0, 0x00460DF0, 0x0046F6B0, 0x0046F7A0, 0x004AF600, 0x004B11B0, 0x004B25C0, 0x004B25D0,
    0x004B2660, 0x004B2670, 0x004B4140, 0x004B4810, 0x004B4B00, 0x004B4F00, 0x004B6E30, 0x004CE4A0,
    0x004D0FB0, 0x004D0FC0, 0x004D1150, 0x004D2F60, 0x004D2FF0, 0x004D3010, 0x004D3050, 0x004D31A0,
    0x004D3DC0, 0x004D4570, 0x004D46D0, 0x004D49C0, 0x004D4AD0, 0x004D4CB0, 0x004D4D50, 0x004D72C0,
    0x004D7500, 0x004DC830, 0x004DC8F0, 0x0055AC30, 0x0055CB50, 0x0055CBC0, 0x0058F760, 0x005948A8,
    0x00595ED0, 0x00595F90, 0x00596050, 0x00597930, 0x00597B10, 0x00597CF0, 0x005B4D10, 0x005B4D20,
    0x005B4D30, 0x005B4D40, 0x005B4D50, 0x005B4D60, 0x005B4D70, 0x005B4D80, 0x005B4D90, 0x005B4DA0,
    0x005B4DB0, 0x005B4DC0, 0x005B4DD0, 0x005C1D30, 0x005EECB0, 0x005FBBD0, 0x005FFB00, 0x00601980,
    0x00602330, 0x006056D0, 0x00606C70, 0x0060D500, 0x006183F0, 0x00619EA0, 0x00619ED0, 0x006219E0,
    0x00623CE0, 0x00625BF0, 0x00625C00, 0x00648EE0, 0x006490E0, 0x00649100, 0x006491B0, 0x00649420,
    0x006497D0, 0x0064B8C0, 0x0064B910, 0x0064EB40, 0x0064FE60, 0x00658E90, 0x00659240, 0x0065F2F0,
    0x006604B0, 0x00665FD0, 0x006667B0, 0x00668160, 0x00668210, 0x00687900, 0x0068D150, 0x0069FF20,
    0x006A3C70, 0x006A4590, 0x006A4760, 0x006D6590, 0x006E9970, 0x006E9BF0, 0x006F6DE0, 0x006FC3D0,
    0x007006F0, 0x00716D40, 0x007227D0, 0x007306F0, 0x00749D20, 0x0074AFE0, 0x0074B7C0, 0x007861F0,
    0x00786260, 0x00786C60, 0x00786C70, 0x00788F30, 0x007892B0, 0x0078A1F0, 0x0078A200, 0x007E66A0,
    0x007E9200, 0x007FB600, 0x007FBC00, 0x007FD860, 0x00802540, 0x00818470, 0x0083DCF0, 0x0083F760,
    0x0083FCF0, 0x0083FDC0, 0x0083FE60, 0x00841D00, 0x0085D960, 0x0085DBE0, 0x0086D0D0, 0x0086D100,
    0x0086D1E0, 0x00879A60, 0x00879FC0, 0x0087A020, 0x00882A80, 0x008B0740, 0x008B3AF0, 0x008B3C80,
    0x008B8430, 0x008B89E0, 0x008B89F0, 0x008B8A00, 0x008B8A10, 0x008B8A20, 0x008B8A30, 0x00952D00,
    0x00953C00, 0x00953DA0, 0x00953F00, 0x00956170, 0x0097A180, 0x0098CD90, 0x0099CCB0, 0x009DFC30,
    0x009DFC60, 0x009E04E0, 0x009E8340, 0x009E8810, 0x009E8B80, 0x009E9000, 0x00A07670, 0x00A09D70,
    0x00A09D80, 0x00A09D90, 0x00A09E10, 0x00A0D740, 0x00A22040, 0x00A2C980, 0x00A3D690, 0x00A47430,
    0x00A477F0, 0x00A4D4B0, 0x00A4D4F0, 0x00A623E0, 0x00A68BE0, 0x00A98430, 0x00A99C30, 0x00A99CC0,
    0x00A99E00, 0x00A99F50, 0x00A99F60, 0x00A99FA0, 0x00AA8F40, 0x00AA8F50, 0x00AAC490, 0x00AC28B0,
    0x00AC3550, 0x00AC5760, 0x00ACD630, 0x00ACD670, 0x00ACD680, 0x00ACD690, 0x00ACD6A0, 0x00ACD6B0,
    0x00ACD6C0, 0x00ACD6D0, 0x00AD3150, 0x00AFFE20, 0x00B0CE90, 0x00B14A80, 0x00B18670, 0x00B1FAA0,
    0x00B20270, 0x00B23F80, 0x00B6BBF0, 0x00B6BD10, 0x00B6BD20, 0x00B6BD30, 0x00B6BD40, 0x00B6BF00,
    0x00B6C4F0, 0x00B6C500, 0x00B6C510, 0x00B6CB10, 0x00B6CB50, 0x00B6CB60, 0x00B6CF20, 0x00B6CF30,
    0x00B6CF40, 0x00B6CF50, 0x00B6CF60, 0x00B6CF70, 0x00B6CF80, 0x00B6CF90, 0x00B6CFA0, 0x00B6CFB0,
    0x00B6CFC0, 0x00B6CFD0, 0x00B8E760, 0x00B93E40, 0x00B975A0, 0x00B975D0, 0x00B97D40, 0x00B99C20,
    0x00B9CC80, 0x00B9CCC0, 0x00BAF690, 0x00BB03F0, 0x00BB0400, 0x00BB1CB0, 0x00BB1CC0, 0x00BB1D70,
    0x00BB1D80, 0x00BB1E70, 0x00BB4C00, 0x00BC22B0, 0x00BC25A0, 0x00BCBDA0, 0x00BD88C0, 0x00BE1B50,
    0x00BE1EE0, 0x00BF3E80, 0x00BFCAE0, 0x00BFE120, 0x00BFE560, 0x00C31B00, 0x00C31B80, 0x00C3EB00,
    0x00C42610, 0x00C48C30, 0x00C493E0, 0x00C49420, 0x00C4C410, 0x00C4C7A0, 0x00C4CAF0, 0x00C4D460,
    0x00C4D470, 0x00C4D480, 0x00C4E460, 0x00C547A0, 0x00C54920, 0x00C54930, 0x00C59EC0, 0x00C5F030,
    0x00C5F120, 0x00C5F130, 0x00C5F280, 0x00C5F4F0, 0x00C62B20, 0x00C69AD0, 0x00C6AD80, 0x00C70620,
    0x00C81980, 0x00C8D780, 0x00CA5740, 0x00CAC2B0, 0x00CB1CD0, 0x00CBDF30, 0x00CBDF40, 0x00CBE490,
    0x00CBE4A0, 0x00CBE4B0, 0x00CC1110, 0x00CC1120, 0x00CC1130, 0x00CC1140, 0x00CC2600, 0x00CC2B40,
    0x00CC2BF0, 0x00CD6850, 0x00CD7130, 0x00CD71C0, 0x00CD7270, 0x00CD7280, 0x00CD7310, 0x00CD7320,
    0x00CD7330, 0x00CD7950, 0x00CD7960, 0x00CD79D0, 0x00CD79E0, 0x00CD7D70, 0x00CD7DA0, 0x00CDDB90,
    0x00CE4690, 0x00D0D250, 0x00D0DF40, 0x00D0EEC0, 0x00D0FBB0, 0x00D11490, 0x00D14240, 0x00D15780,
    0x00D18360, 0x00D18370, 0x00D18380, 0x00D19950, 0x00D19980, 0x00D1ABC0, 0x00D1ABE0, 0x00D1AC00,
    0x00D1AC20, 0x00D1AC60, 0x00D1B000, 0x00D1C240, 0x00D1C4F0, 0x00D1C510, 0x00D1C530, 0x00D1C550,
    0x00D1C570, 0x00D1C590, 0x00D1C5B0, 0x00D1CDA0, 0x00D1CDE0, 0x00D1CE00, 0x00D1CE40, 0x00D1CE60,
    0x00D1CE90, 0x00D1CEC0, 0x00D1CEF0, 0x00D1CF00, 0x00D21360, 0x00D21370, 0x00D217D0, 0x00D23580,
    0x00D239C0, 0x00D23E50, 0x00D23E60, 0x00D24350, 0x00D24980, 0x00D24990, 0x00D24E00, 0x00D24E30,
    0x00D24E80, 0x00D24EB0, 0x00D24F00, 0x00D24F30, 0x00D24FA0, 0x00D25110, 0x00D25270, 0x00D25730,
    0x00D25AD0, 0x00D26460, 0x00D274C0, 0x00D28240, 0x00D2F280, 0x00D2FC70, 0x00D302D0, 0x00D30E80,
    0x00D3E540, 0x00D41C40, 0x00D46C40, 0x00D46C50, 0x00D46C60, 0x00D4D150, 0x00D4D850, 0x00D773D0,
    0x00D773E0, 0x00D773F0, 0x00D77400, 0x00D77410, 0x00D77420, 0x00D81020, 0x00D81160, 0x00D81190,
    0x00D81210, 0x00D81340, 0x00D81360, 0x00D81440, 0x00D81590, 0x00D816A0, 0x00D81790, 0x00D817B0,
    0x00D817D0, 0x00D81840, 0x00D818D0, 0x00D818F0, 0x00D81930, 0x00D819C0, 0x00D819E0, 0x00D81A00,
    0x00D81A20, 0x00D81B20, 0x00D81B40, 0x00D81B60, 0x00D81BA0, 0x00D81BC0, 0x00D81D40, 0x00D81D60,
    0x00D81EC0, 0x00D81EE0, 0x00D81FF0, 0x00D82020, 0x00D820E0, 0x00D82100, 0x00D82130, 0x00D82150,
    0x00D82270, 0x00D827A0, 0x00D82850, 0x00D82870, 0x00D82C30, 0x00D82C50, 0x00D82C70, 0x00D82D70,
    0x00D82D90, 0x00D82DB0, 0x00D82F30, 0x00D82F90, 0x00D88850, 0x00D8F240, 0x00D8F250, 0x00D8F270,
    0x00DA94A0, 0x00DD1C20, 0x00DD2BF0, 0x00DD2D60, 0x00DD7040, 0x00DD9C00, 0x00DDA120, 0x00DDF910,
    0x00DE5070, 0x00DE7230, 0x00DE9BE0, 0x00DFF780, 0x00E025A0, 0x00E06BF0, 0x00E07B70, 0x00E086E0,
    0x00E0B160, 0x00E16490, 0x00E81DE0, 0x00EA98F0, 0x00EA9950, 0x00EAED30, 0x00EF4840, 0x00F025F0,
    0x00F02BF0, 0x00F03B30, 0x00F03BE0, 0x00F03D40, 0x00F07300, 0x00F11520, 0x00F305F0, 0x00F34AF0,
    0x00F42D30, 0x00F51480, 0x00F5FE80, 0x00F612D0, 0x00F6F080, 0x00F758B0, 0x00F872E0, 0x00F8A820,
    0x00FAE6B0, 0x00FB7B00, 0x00FB7B10, 0x00FB7B20, 0x00FCE580, 0x00FD8180, 0x00FD81C0, 0x00FD81F0,
    0x01065750, 0x0106AEA0, 0x01073860, 0x0108A6D0, 0x0108B860, 0x0108B880, 0x0108B910, 0x01090550,
    0x01094DE0, 0x010997C0, 0x0109D690, 0x0109D6A0, 0x010B47A0, 0x010B4800, 0x010B5820, 0x010B5830,
    0x010D5910, 0x010DC850, 0x010DC890, 0x010DCD50, 0x010E4120, 0x010E4130, 0x010ED960, 0x010EE0B0,
    0x010F0630, 0x010F0900, 0x010F0AC0, 0x010F9930, 0x010F9940, 0x010F9950, 0x010F9A40, 0x010FC8A0,
    0x010FCDC0, 0x010FF9C0, 0x010FFA50, 0x0110DA00, 0x0110DA10, 0x0110DA20, 0x0110DA30, 0x0110EB60,
    0x0110EDB0, 0x0110EDC0, 0x0110EDD0, 0x0110EDE0, 0x0110EDF0, 0x0110EE00, 0x011158E0, 0x0111A920,
    0x0111F670, 0x011327F0, 0x01132870, 0x011328F0, 0x0115DDE0, 0x01160B40, 0x01171FE0, 0x01178190,
    0x011781A0, 0x011781F0, 0x01178D00, 0x01178E50, 0x01179480, 0x011794D0, 0x011794E0, 0x011794F0,
    0x01196350, 0x01198230, 0x011A4A80, 0x011A51D0, 0x011A97E0, 0x011A9A70, 0x011AC740, 0x011AD510,
    0x011D2FD0, 0x01220D00, 0x012212F0, 0x01221300, 0x012218E0, 0x01233860, 0x01233AD0, 0x01233AE0,
    0x012340B0, 0x012340C0, 0x01234580, 0x01234970, 0x01234980, 0x01235720, 0x01236A50, 0x0123BD40,
    0x0123BEB0, 0x01245C00, 0x012A4850, 0x012A4C40, 0x012A5330, 0x012F51F0, 0x013028A0, 0x01304210,
    0x01305380, 0x01337A20, 0x0133D840, 0x0133DEB0, 0x0133DEC0, 0x0133DED0, 0x013410D0, 0x0134F930,
    0x01364F60, 0x01365050, 0x01365060, 0x013651A0, 0x01366220, 0x0136A160, 0x0137C1D0, 0x0137C1E0,
    0x0137C240, 0x0137C280, 0x0137C8C0, 0x0138BB20, 0x0138D850, 0x013A9A90, 0x013AA330, 0x013AE1A0,
    0x013B8560, 0x013B99E0, 0x013BA1D0, 0x013BA590, 0x013C0810, 0x013C2070, 0x013C77F0, 0x013CF710,
    0x013D0EE0, 0x013D1BA0, 0x01408910, 0x01432780, 0x014328F0, 0x01432E30, 0x01433430, 0x01433540,
    0x014338F0, 0x01433A80, 0x01433C20, 0x01433DB0, 0x01434370, 0x01434D90, 0x01436780, 0x01447730,
    0x0145C5C0, 0x0145E570, 0x0146CAA0, 0x0147B6E0, 0x01496C50, 0x0149C0D0, 0x0149C110, 0x014A80B0,
    0x014AF650, 0x014B20C0, 0x014BA180, 0x014BA190, 0x014BA670, 0x014C4F80, 0x014E5280, 0x01500880,
    0x015036F0, 0x015038D0, 0x01503940, 0x01503AE0, 0x015040E0, 0x01506AB0, 0x01508250, 0x01509180,
    0x01517520, 0x01517590, 0x015175C0, 0x01517900, 0x01519350, 0x0153DBF0, 0x0153DC60, 0x01567740,
    0x0156CC50, 0x0156D4B0, 0x015724A0, 0x01595A70, 0x01596410, 0x01596420, 0x015A2510, 0x015ADDF0,
    0x015ADE00, 0x015AE470, 0x015B3C30, 0x015B3C40, 0x015B5730, 0x015E2D90, 0x015E2DA0, 0x015E43D0,
    0x015E7EE0, 0x015E9F60, 0x015F42D0, 0x015FF1E0, 0x01601A90, 0x0160CD60, 0x0160D250, 0x0161E010,
    0x0161F2F0, 0x0163D240, 0x0163D250, 0x0163F3E0, 0x016419E0, 0x016419F0, 0x0164AE40, 0x01664530,
    0x016645D0, 0x016ABB50, 0x016AC180, 0x016B1540, 0x016E2F20, 0x016F8FB0, 0x016F9070, 0x016F90E0,
    0x016F9140, 0x016FEB30, 0x01703D60, 0x01710700, 0x0171B9F0, 0x0172C2E0, 0x0173CF70, 0x0173CF80,
    0x0173CF90, 0x0173D2D0, 0x0173D370, 0x0173D6F0, 0x0173D710, 0x0174BDF0, 0x01750730, 0x017566D0,
    0x017566E0, 0x0175ADB0, 0x01769020, 0x0176A3B0, 0x017748F0, 0x01776180, 0x01776910, 0x01781010,
    0x01798F40, 0x017A0C00, 0x017AFCB0, 0x017AFCE0, 0x017AFCF0, 0x017AFD40, 0x017AFD50, 0x017AFD60,
    0x017AFD70, 0x017B0110, 0x017B9BC0, 0x017B9BD0, 0x017BB3F0, 0x017BD8A0, 0x017C51A0, 0x017DCDB0,
    0x017E1700, 0x017E9EC0, 0x017EA280, 0x017F1770, 0x017F3430, 0x017F3470, 0x017FF120, 0x017FFFA0,
    0x018080A0, 0x01808240, 0x01809600, 0x0180AE10, 0x0180C0C0, 0x01815170, 0x018152B0, 0x01818D80,
    0x0181A4F0, 0x0181A8D0, 0x0181A8E0, 0x0181B2F0, 0x0181B940, 0x01860D40, 0x018695B0, 0x018697E0,
    0x0186AEF0, 0x0186B910, 0x0186B9A0, 0x0186FDF0, 0x0186FE00, 0x0186FE70, 0x01877C80, 0x0187FDA0,
    0x01881D10, 0x018883E0, 0x01888930, 0x01888DA0, 0x0188BA40, 0x0188BA50, 0x0188BA60, 0x0188BA70,
    0x0188BA80, 0x0188BA90, 0x0188BAA0, 0x0188BAB0, 0x0188BBE0, 0x0188D9C0, 0x01893080, 0x01893100,
    0x018938C0, 0x018938D0, 0x0189AD30, 0x018A8990, 0x018B1A50, 0x018D8CB0, 0x018DC600, 0x0194E460,
    0x0194E470, 0x0194E830, 0x0194F1B0, 0x0194F1C0, 0x0194F1D0, 0x0194F200, 0x0194F210, 0x0194F220,
    0x0194FB40, 0x0194FBA0, 0x01950D20, 0x01952320, 0x01952340, 0x01952350, 0x01952360, 0x01952370,
    0x01952FC0, 0x019539F0, 0x01953B60, 0x01953B70, 0x01953F60, 0x019541D0, 0x019546B0, 0x01955970,
    0x0195BBC0, 0x0195CE30, 0x0195D080, 0x0195E880, 0x01969E60, 0x0196A690, 0x01973030, 0x01973040,
    0x01976CA0, 0x01976CB0, 0x01978660, 0x01978870, 0x01978C10, 0x019798A0, 0x01979EF0, 0x0197A0A0,
    0x0197B130, 0x0197B3A0, 0x0197B740, 0x0197B7C0, 0x0197B7D0, 0x0197B950, 0x0197BDF0, 0x0197BE00,
    0x0197BE10, 0x0197C0A0, 0x0197C0C0, 0x0197C100, 0x0197C190, 0x01981790, 0x019A4C90, 0x019B0090,
    0x019BE8D0, 0x019C5250, 0x01A2C420, 0x01A2DDB0, 0x01A361A0, 0x01A36990, 0x01A38BC0, 0x01A39040,
    0x01A39760, 0x01A3D850, 0x01A3EE40, 0x01A402E0, 0x01A456E0, 0x01A49530, 0x01A49E50, 0x01A560E0,
    0x01A599F0, 0x01A68E50, 0x01A8DC20, 0x01A8DC50, 0x01A99C20, 0x01A9FC20, 0x01AA07B0, 0x01AA0810,
    0x01AAE080, 0x01AAE0D0, 0x01AE67E0, 0x01AEBC30, 0x01AECD60, 0x01B0FB00, 0x01B10620, 0x01B10630,
    0x01B10640, 0x01B106F0, 0x01B11190, 0x01B366F0, 0x01B44130, 0x01B49DA0, 0x01B4EDE0, 0x01B53330,
    0x01B5E2F0, 0x01B5E600, 0x01B5E610, 0x01B5E640, 0x01B5E6E0, 0x01B8CC40, 0x01B8FF70, 0x01B90360,
    0x01B9B090, 0x01B9E840, 0x01B9FAF0, 0x01BA3200, 0x01BBFE00, 0x01BC4940, 0x01BD3670, 0x01BE3DE0,
    0x01BE5C80, 0x01BE77B0, 0x01BEA6C0, 0x01BFA900, 0x01BFAD30, 0x01BFC590, 0x01BFD0A0, 0x01BFF8D0,
    0x01C07CC0, 0x01C07D30, 0x01C0B330, 0x01C0E190, 0x01C173E0, 0x01C18AE0, 0x01C1B1F0, 0x01C28580,
    0x01C318E0, 0x01C31A50, 0x01C345A0, 0x01C345D0, 0x01C3F0D0, 0x01C4B200, 0x01C4D000, 0x01C76BA0,
    0x01C93890, 0x01C974F0, 0x01C97910, 0x01C97920, 0x01C97930, 0x01C97940, 0x01C97950, 0x01C97960,
    0x01C97970, 0x01C97980, 0x01C97990, 0x01C979A0, 0x01CA49F0, 0x01CA4F20, 0x01CA5360, 0x01CA53B0,
    0x01CAFD20, 0x01CF0C50, 0x01CF0CB0, 0x01CF0E90, 0x01CF0EE0, 0x01CF0EF0, 0x01CF0F80, 0x01CF0F90,
    0x01CF0FE0, 0x01CF1030, 0x01CF1040, 0x01D0A6C0, 0x01D106B0, 0x01D10740, 0x01D120B0, 0x01D2E4B0,
    0x01D2E4C0, 0x01D2E560, 0x01D33360, 0x01D33370, 0x01D3CBB0, 0x01D40A60, 0x01D41F90, 0x01D41FA0,
    0x01D44D40, 0x01D44D90, 0x01D46F50, 0x01D46F60, 0x01D473A0, 0x01D47410, 0x01D4A170, 0x01D4BA70,
    0x01D4D990, 0x01D4F470, 0x01D51D90, 0x01D6EC40, 0x01D83B00, 0x01D876A0, 0x01D87780,
];

/// How many do nothing at all.
pub const EMPTY_COUNT: usize = 1015;

/// A routine that is two calls and nothing else.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Pair {
    /// Where it sits.
    pub routine: u32,
    /// What it calls first.
    pub first: u32,
    /// What it calls second.
    pub second: u32,
    /// Whether both calls are given the same thing.
    pub same_argument: bool,
}

/// Every routine that is exactly two calls.
pub static PAIRS: [Pair; 801] = [
    Pair {
        routine: 0x00410CF0,
        first: 0x00411000,
        second: 0x004095F0,
        same_argument: true,
    },
    Pair {
        routine: 0x00418590,
        first: 0x004179B0,
        second: 0x004095F0,
        same_argument: true,
    },
    Pair {
        routine: 0x00423400,
        first: 0x00422E20,
        second: 0x00422E20,
        same_argument: false,
    },
    Pair {
        routine: 0x00423440,
        first: 0x00422E30,
        second: 0x00422E30,
        same_argument: false,
    },
    Pair {
        routine: 0x004234C0,
        first: 0x00422E20,
        second: 0x00422E20,
        same_argument: false,
    },
    Pair {
        routine: 0x00423500,
        first: 0x00422E20,
        second: 0x00422E20,
        same_argument: false,
    },
    Pair {
        routine: 0x00447900,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x0044BC20,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x0044E9E0,
        first: 0x0044D280,
        second: 0x00414140,
        same_argument: false,
    },
    Pair {
        routine: 0x00453A80,
        first: 0x00455960,
        second: 0x00455840,
        same_argument: false,
    },
    Pair {
        routine: 0x00459190,
        first: 0x00417840,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x004AE840,
        first: 0x004AEF90,
        second: 0x004AEF40,
        same_argument: true,
    },
    Pair {
        routine: 0x004AF230,
        first: 0x00419430,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x004AFBE0,
        first: 0x00412130,
        second: 0x00410F20,
        same_argument: true,
    },
    Pair {
        routine: 0x004B4680,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x004B8E20,
        first: 0x004B9400,
        second: 0x004B8D00,
        same_argument: false,
    },
    Pair {
        routine: 0x004B9170,
        first: 0x00414560,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x004BEA70,
        first: 0x004C25A0,
        second: 0x004BDF00,
        same_argument: false,
    },
    Pair {
        routine: 0x004C0930,
        first: 0x004C25A0,
        second: 0x004B6D40,
        same_argument: false,
    },
    Pair {
        routine: 0x004C2360,
        first: 0x00419430,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x004C24C0,
        first: 0x004BEA90,
        second: 0x004C3080,
        same_argument: false,
    },
    Pair {
        routine: 0x004C3680,
        first: 0x00460BA0,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x004C5450,
        first: 0x00417740,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x004C5F70,
        first: 0x00460BA0,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x004C60D0,
        first: 0x00460BA0,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x004C6210,
        first: 0x00460BA0,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x004C8180,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x004C9F50,
        first: 0x004C9D80,
        second: 0x004C9BF0,
        same_argument: false,
    },
    Pair {
        routine: 0x004CE030,
        first: 0x00417740,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x004CE060,
        first: 0x004B9400,
        second: 0x004CB4C0,
        same_argument: false,
    },
    Pair {
        routine: 0x004D1B80,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x004D2180,
        first: 0x00417740,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x004D2D90,
        first: 0x004D2CE0,
        second: 0x004D2CE0,
        same_argument: false,
    },
    Pair {
        routine: 0x004D8F80,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x004D9350,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x004DCA50,
        first: 0x00412130,
        second: 0x00410F20,
        same_argument: true,
    },
    Pair {
        routine: 0x004E9C00,
        first: 0x00412130,
        second: 0x00410F20,
        same_argument: true,
    },
    Pair {
        routine: 0x004F2A00,
        first: 0x00412130,
        second: 0x00410F20,
        same_argument: true,
    },
    Pair {
        routine: 0x004F5560,
        first: 0x00412130,
        second: 0x00410F20,
        same_argument: true,
    },
    Pair {
        routine: 0x004F7C60,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x004FA770,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x004FD800,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x00545B60,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00545D00,
        first: 0x00542EF0,
        second: 0x00542630,
        same_argument: false,
    },
    Pair {
        routine: 0x00545D80,
        first: 0x00542EF0,
        second: 0x00542880,
        same_argument: false,
    },
    Pair {
        routine: 0x00545DB0,
        first: 0x00542EF0,
        second: 0x00542660,
        same_argument: false,
    },
    Pair {
        routine: 0x00546530,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00546660,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x005467B0,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x005468E0,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00546AD0,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00546CF0,
        first: 0x00414560,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x00546E30,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00546FB0,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x005470E0,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00548630,
        first: 0x005485A0,
        second: 0x00542630,
        same_argument: false,
    },
    Pair {
        routine: 0x0054AD80,
        first: 0x00417840,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x0054AF70,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x0054B400,
        first: 0x00417840,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x0054BA00,
        first: 0x00417840,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x005523A0,
        first: 0x00414560,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x0055AE60,
        first: 0x00417740,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x0055BC30,
        first: 0x00417740,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x0056ED30,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x005713E0,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x0058A7F0,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00594300,
        first: 0x00417840,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x00597F80,
        first: 0x0059B430,
        second: 0x0059B400,
        same_argument: true,
    },
    Pair {
        routine: 0x00597FB0,
        first: 0x0059B490,
        second: 0x0059B400,
        same_argument: true,
    },
    Pair {
        routine: 0x00597FE0,
        first: 0x0059B4F0,
        second: 0x0059B400,
        same_argument: true,
    },
    Pair {
        routine: 0x00598010,
        first: 0x0059B550,
        second: 0x0059B400,
        same_argument: true,
    },
    Pair {
        routine: 0x00598040,
        first: 0x0059B5B0,
        second: 0x0059B400,
        same_argument: true,
    },
    Pair {
        routine: 0x00598070,
        first: 0x0059B610,
        second: 0x0059B400,
        same_argument: true,
    },
    Pair {
        routine: 0x005980A0,
        first: 0x0059B670,
        second: 0x0059B400,
        same_argument: true,
    },
    Pair {
        routine: 0x005A2860,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x005BC460,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x005C1790,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x005C4D10,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x005C7450,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x005DB060,
        first: 0x00419430,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x005DE3D0,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x005DF3A0,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x005E2C00,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x005EB9C0,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x005ED630,
        first: 0x004B3390,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x005EEC20,
        first: 0x00410F20,
        second: 0x004B3390,
        same_argument: false,
    },
    Pair {
        routine: 0x00604910,
        first: 0x0041B800,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x00604D10,
        first: 0x0041B800,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x006054D0,
        first: 0x00419430,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0060E900,
        first: 0x00419430,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x0061D170,
        first: 0x005B23C0,
        second: 0x004113D0,
        same_argument: false,
    },
    Pair {
        routine: 0x00624B20,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x00626170,
        first: 0x00419430,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x0064C8E0,
        first: 0x0064FCE0,
        second: 0x0064FCA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00656100,
        first: 0x0064AF50,
        second: 0x00607680,
        same_argument: true,
    },
    Pair {
        routine: 0x00658250,
        first: 0x005FBDF0,
        second: 0x0064FCA0,
        same_argument: false,
    },
    Pair {
        routine: 0x0065A690,
        first: 0x00651610,
        second: 0x00654C30,
        same_argument: true,
    },
    Pair {
        routine: 0x0065CC30,
        first: 0x0065C460,
        second: 0x0064FAE0,
        same_argument: true,
    },
    Pair {
        routine: 0x0065FF10,
        first: 0x007D52B0,
        second: 0x0065FFA0,
        same_argument: false,
    },
    Pair {
        routine: 0x006639A0,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00682EA0,
        first: 0x00651DA0,
        second: 0x006806A0,
        same_argument: false,
    },
    Pair {
        routine: 0x00689D30,
        first: 0x0064D480,
        second: 0x00650840,
        same_argument: true,
    },
    Pair {
        routine: 0x0068D1A0,
        first: 0x006586F0,
        second: 0x0068B940,
        same_argument: true,
    },
    Pair {
        routine: 0x0068DFC0,
        first: 0x00414560,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x0068F170,
        first: 0x0065A330,
        second: 0x0068F1E0,
        same_argument: true,
    },
    Pair {
        routine: 0x0068F1C0,
        first: 0x00651DA0,
        second: 0x0068F1E0,
        same_argument: true,
    },
    Pair {
        routine: 0x00697040,
        first: 0x005FFB10,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x0069E8D0,
        first: 0x0069E870,
        second: 0x0069E7F0,
        same_argument: true,
    },
    Pair {
        routine: 0x0069FD70,
        first: 0x00655B90,
        second: 0x0065A3E0,
        same_argument: false,
    },
    Pair {
        routine: 0x006A3320,
        first: 0x00414AD0,
        second: 0x006A3200,
        same_argument: false,
    },
    Pair {
        routine: 0x006AB530,
        first: 0x00414480,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x006D7000,
        first: 0x006D5150,
        second: 0x006D6F90,
        same_argument: true,
    },
    Pair {
        routine: 0x006D9870,
        first: 0x0065A2F0,
        second: 0x00655B90,
        same_argument: true,
    },
    Pair {
        routine: 0x006D9970,
        first: 0x0065A540,
        second: 0x00655B90,
        same_argument: true,
    },
    Pair {
        routine: 0x006D9990,
        first: 0x0065A690,
        second: 0x006D91B0,
        same_argument: true,
    },
    Pair {
        routine: 0x006D9AE0,
        first: 0x0065AA90,
        second: 0x006D9B20,
        same_argument: false,
    },
    Pair {
        routine: 0x006DAB40,
        first: 0x00410F20,
        second: 0x004B6DC0,
        same_argument: false,
    },
    Pair {
        routine: 0x006E0AF0,
        first: 0x006DF710,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x006E0DF0,
        first: 0x00414560,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x006E5070,
        first: 0x006E5380,
        second: 0x00658EA0,
        same_argument: true,
    },
    Pair {
        routine: 0x006E5090,
        first: 0x00658ED0,
        second: 0x006E5380,
        same_argument: true,
    },
    Pair {
        routine: 0x006E90B0,
        first: 0x00417840,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x006E9470,
        first: 0x00417840,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x006E9600,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x006E99B0,
        first: 0x00414480,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x006E9C30,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x006EA450,
        first: 0x00680980,
        second: 0x006806A0,
        same_argument: false,
    },
    Pair {
        routine: 0x006ED530,
        first: 0x00410F20,
        second: 0x004B6DC0,
        same_argument: false,
    },
    Pair {
        routine: 0x006EDF60,
        first: 0x00414AD0,
        second: 0x004B1830,
        same_argument: false,
    },
    Pair {
        routine: 0x006EEAE0,
        first: 0x004B6530,
        second: 0x006EEB10,
        same_argument: false,
    },
    Pair {
        routine: 0x006F78D0,
        first: 0x00414560,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x006FEFD0,
        first: 0x0065A280,
        second: 0x00654C30,
        same_argument: true,
    },
    Pair {
        routine: 0x006FF000,
        first: 0x0065A2F0,
        second: 0x00655B90,
        same_argument: true,
    },
    Pair {
        routine: 0x006FF0D0,
        first: 0x0065A6C0,
        second: 0x00655B90,
        same_argument: true,
    },
    Pair {
        routine: 0x0070AFB0,
        first: 0x005FFB10,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x0070B010,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00710EC0,
        first: 0x005FFB10,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x0072E030,
        first: 0x00410F20,
        second: 0x0080ABA0,
        same_argument: false,
    },
    Pair {
        routine: 0x0072EB80,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x0072FD80,
        first: 0x00414480,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x00730320,
        first: 0x00414480,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x0074B3D0,
        first: 0x00655080,
        second: 0x0074B570,
        same_argument: true,
    },
    Pair {
        routine: 0x0074CFA0,
        first: 0x0065AA90,
        second: 0x0074CFD0,
        same_argument: false,
    },
    Pair {
        routine: 0x00777DD0,
        first: 0x005FFB10,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x00780990,
        first: 0x00417740,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x00781080,
        first: 0x00417740,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x00781810,
        first: 0x00414480,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x00781CA0,
        first: 0x00417740,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x00781E30,
        first: 0x00414480,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x00782D40,
        first: 0x00414480,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x007830F0,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x007837B0,
        first: 0x00414480,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x00786500,
        first: 0x005FFB10,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x007984B0,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x007A1DC0,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x007A9FD0,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x007FADC0,
        first: 0x007FB090,
        second: 0x00654090,
        same_argument: false,
    },
    Pair {
        routine: 0x007FB5C0,
        first: 0x007FB540,
        second: 0x0065AEC0,
        same_argument: false,
    },
    Pair {
        routine: 0x007FBF90,
        first: 0x007FB920,
        second: 0x007FB5C0,
        same_argument: false,
    },
    Pair {
        routine: 0x008006D0,
        first: 0x007FFF00,
        second: 0x00800030,
        same_argument: false,
    },
    Pair {
        routine: 0x008059A0,
        first: 0x007FDF50,
        second: 0x0064E1D0,
        same_argument: false,
    },
    Pair {
        routine: 0x008076F0,
        first: 0x00659610,
        second: 0x0064C650,
        same_argument: false,
    },
    Pair {
        routine: 0x0080F1B0,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x00820690,
        first: 0x0068C510,
        second: 0x008207D0,
        same_argument: true,
    },
    Pair {
        routine: 0x008207B0,
        first: 0x0065A330,
        second: 0x008207D0,
        same_argument: true,
    },
    Pair {
        routine: 0x00849720,
        first: 0x00651120,
        second: 0x00849640,
        same_argument: true,
    },
    Pair {
        routine: 0x00849820,
        first: 0x0065A450,
        second: 0x00655B90,
        same_argument: true,
    },
    Pair {
        routine: 0x00849BC0,
        first: 0x0083FBD0,
        second: 0x008483E0,
        same_argument: false,
    },
    Pair {
        routine: 0x00849C00,
        first: 0x0083FD00,
        second: 0x00848A70,
        same_argument: false,
    },
    Pair {
        routine: 0x00850210,
        first: 0x005FFB10,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x00850240,
        first: 0x005FFB10,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x00850290,
        first: 0x005FFB10,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x00850460,
        first: 0x008502C0,
        second: 0x00651120,
        same_argument: false,
    },
    Pair {
        routine: 0x008553D0,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x00876190,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00878090,
        first: 0x00419430,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x00878A50,
        first: 0x00419430,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x00878F60,
        first: 0x00419430,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x008B1300,
        first: 0x00419430,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x00947440,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x009475E0,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x0095BA00,
        first: 0x004145C0,
        second: 0x00414520,
        same_argument: false,
    },
    Pair {
        routine: 0x00975180,
        first: 0x00417840,
        second: 0x00414520,
        same_argument: false,
    },
    Pair {
        routine: 0x0097F8D0,
        first: 0x004145C0,
        second: 0x00414520,
        same_argument: false,
    },
    Pair {
        routine: 0x00985920,
        first: 0x009785E0,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x00990260,
        first: 0x0041B800,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x009B0B30,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x009B2080,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x009DFBC0,
        first: 0x0041B800,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x009E2D50,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x009E3480,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x009F01B0,
        first: 0x004115F0,
        second: 0x009F0220,
        same_argument: true,
    },
    Pair {
        routine: 0x009F01D0,
        first: 0x00A015F0,
        second: 0x009F0220,
        same_argument: true,
    },
    Pair {
        routine: 0x009F0370,
        first: 0x004115F0,
        second: 0x009F0410,
        same_argument: true,
    },
    Pair {
        routine: 0x009F0390,
        first: 0x00A015F0,
        second: 0x009F0410,
        same_argument: true,
    },
    Pair {
        routine: 0x009F06F0,
        first: 0x004115F0,
        second: 0x009F0750,
        same_argument: true,
    },
    Pair {
        routine: 0x009F0710,
        first: 0x00A015F0,
        second: 0x009F0750,
        same_argument: true,
    },
    Pair {
        routine: 0x009F0780,
        first: 0x004115F0,
        second: 0x009F0800,
        same_argument: true,
    },
    Pair {
        routine: 0x009F07A0,
        first: 0x00A015F0,
        second: 0x009F0800,
        same_argument: true,
    },
    Pair {
        routine: 0x009F0DE0,
        first: 0x004115F0,
        second: 0x009F0E60,
        same_argument: true,
    },
    Pair {
        routine: 0x009F0E00,
        first: 0x00A015F0,
        second: 0x009F0E60,
        same_argument: true,
    },
    Pair {
        routine: 0x00A33350,
        first: 0x006297A0,
        second: 0x004095F0,
        same_argument: false,
    },
    Pair {
        routine: 0x00A33370,
        first: 0x00630390,
        second: 0x004095F0,
        same_argument: false,
    },
    Pair {
        routine: 0x00A33850,
        first: 0x00A339B0,
        second: 0x00A33990,
        same_argument: false,
    },
    Pair {
        routine: 0x00A34A10,
        first: 0x00414BF0,
        second: 0x00414BF0,
        same_argument: false,
    },
    Pair {
        routine: 0x00A523C0,
        first: 0x00414480,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00A53370,
        first: 0x00414480,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00A533C0,
        first: 0x00460BA0,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00A546E0,
        first: 0x00414480,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00A553C0,
        first: 0x00417840,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00A559A0,
        first: 0x00460BA0,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00A55D80,
        first: 0x00460BA0,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00A575E0,
        first: 0x00460BA0,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00A59AF0,
        first: 0x00414480,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x00A5ACC0,
        first: 0x00414560,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00A63CC0,
        first: 0x00414560,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00A64B00,
        first: 0x00417840,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00A679F0,
        first: 0x00419430,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00A72600,
        first: 0x004AE840,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00A7A000,
        first: 0x00A7A360,
        second: 0x005FFB10,
        same_argument: false,
    },
    Pair {
        routine: 0x00A7A040,
        first: 0x00A799B0,
        second: 0x005FDEA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00A943C0,
        first: 0x00A4DE90,
        second: 0x00A947A0,
        same_argument: false,
    },
    Pair {
        routine: 0x00A99B40,
        first: 0x00414480,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x00A9AC00,
        first: 0x00A98710,
        second: 0x00A99E30,
        same_argument: false,
    },
    Pair {
        routine: 0x00A9B330,
        first: 0x00A99F70,
        second: 0x0064CC50,
        same_argument: false,
    },
    Pair {
        routine: 0x00A9B360,
        first: 0x0064CB30,
        second: 0x0064CB30,
        same_argument: false,
    },
    Pair {
        routine: 0x00A9B390,
        first: 0x0064CB90,
        second: 0x0064CB90,
        same_argument: false,
    },
    Pair {
        routine: 0x00A9B3C0,
        first: 0x00AC1930,
        second: 0x0064CBF0,
        same_argument: false,
    },
    Pair {
        routine: 0x00A9B3F0,
        first: 0x0064E030,
        second: 0x0064E030,
        same_argument: false,
    },
    Pair {
        routine: 0x00A9B440,
        first: 0x00A9A010,
        second: 0x0065BCE0,
        same_argument: false,
    },
    Pair {
        routine: 0x00A9C990,
        first: 0x00417840,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00A9E040,
        first: 0x00414560,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00AA3010,
        first: 0x00414480,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x00AA40D0,
        first: 0x00417840,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00AB0870,
        first: 0x00419430,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x00AC2040,
        first: 0x00414560,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x00AC2CC0,
        first: 0x00414560,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x00AC3F20,
        first: 0x005FF880,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x00AD46F0,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00AD5030,
        first: 0x00460BA0,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00AD7790,
        first: 0x00460BA0,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00ADADD0,
        first: 0x00ADAD70,
        second: 0x00AD4730,
        same_argument: false,
    },
    Pair {
        routine: 0x00ADD3D0,
        first: 0x00AC0AB0,
        second: 0x00A74CD0,
        same_argument: false,
    },
    Pair {
        routine: 0x00ADF710,
        first: 0x00AC0AB0,
        second: 0x00AD4730,
        same_argument: false,
    },
    Pair {
        routine: 0x00AE13E0,
        first: 0x00460BA0,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00AE54A0,
        first: 0x00417840,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00AF29D0,
        first: 0x00AFF1C0,
        second: 0x00AFE640,
        same_argument: false,
    },
    Pair {
        routine: 0x00AF4590,
        first: 0x00742EB0,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x00AF5440,
        first: 0x008088B0,
        second: 0x00AFE640,
        same_argument: false,
    },
    Pair {
        routine: 0x00AF6690,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x00AF6DC0,
        first: 0x00742EB0,
        second: 0x00742EB0,
        same_argument: false,
    },
    Pair {
        routine: 0x00AFE3D0,
        first: 0x00658EA0,
        second: 0x00AFE370,
        same_argument: true,
    },
    Pair {
        routine: 0x00AFE3F0,
        first: 0x00658ED0,
        second: 0x00AFE370,
        same_argument: true,
    },
    Pair {
        routine: 0x00B01150,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00B065A0,
        first: 0x0065F800,
        second: 0x00834D30,
        same_argument: false,
    },
    Pair {
        routine: 0x00B0A860,
        first: 0x0084A190,
        second: 0x00B0A730,
        same_argument: false,
    },
    Pair {
        routine: 0x00B11480,
        first: 0x00460BA0,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00B12E10,
        first: 0x004B5980,
        second: 0x00B135B0,
        same_argument: true,
    },
    Pair {
        routine: 0x00B13030,
        first: 0x00414560,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00B137E0,
        first: 0x00414AD0,
        second: 0x00B13920,
        same_argument: false,
    },
    Pair {
        routine: 0x00B1AC10,
        first: 0x004AE7E0,
        second: 0x00B1A7F0,
        same_argument: false,
    },
    Pair {
        routine: 0x00B1AFD0,
        first: 0x00B19300,
        second: 0x00B1A680,
        same_argument: false,
    },
    Pair {
        routine: 0x00B23CD0,
        first: 0x00B22C60,
        second: 0x00B23F00,
        same_argument: false,
    },
    Pair {
        routine: 0x00B24EA0,
        first: 0x00B22C60,
        second: 0x00B24E70,
        same_argument: false,
    },
    Pair {
        routine: 0x00B329A0,
        first: 0x00417740,
        second: 0x00414520,
        same_argument: false,
    },
    Pair {
        routine: 0x00B32B00,
        first: 0x00417740,
        second: 0x00414520,
        same_argument: false,
    },
    Pair {
        routine: 0x00B533D0,
        first: 0x00B53450,
        second: 0x00B53150,
        same_argument: false,
    },
    Pair {
        routine: 0x00B53F20,
        first: 0x00B53FE0,
        second: 0x00B53CA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00B64420,
        first: 0x00B636E0,
        second: 0x00B64200,
        same_argument: true,
    },
    Pair {
        routine: 0x00B672E0,
        first: 0x00460BA0,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00B675E0,
        first: 0x00460BA0,
        second: 0x00414590,
        same_argument: false,
    },
    Pair {
        routine: 0x00B67E40,
        first: 0x00417740,
        second: 0x004144D0,
        same_argument: false,
    },
    Pair {
        routine: 0x00B76860,
        first: 0x0040D200,
        second: 0x00B6E6C0,
        same_argument: false,
    },
    Pair {
        routine: 0x00B79DC0,
        first: 0x0040D200,
        second: 0x00B6F870,
        same_argument: false,
    },
    Pair {
        routine: 0x00B7D190,
        first: 0x0040D200,
        second: 0x00B6E6C0,
        same_argument: false,
    },
    Pair {
        routine: 0x00B7DC00,
        first: 0x0040D200,
        second: 0x00B6E6C0,
        same_argument: false,
    },
    Pair {
        routine: 0x00B7E8E0,
        first: 0x0040D200,
        second: 0x00B6E6C0,
        same_argument: false,
    },
    Pair {
        routine: 0x00B7F370,
        first: 0x0040D200,
        second: 0x00B6F870,
        same_argument: false,
    },
    Pair {
        routine: 0x00B81BE0,
        first: 0x0040D200,
        second: 0x00B6F870,
        same_argument: false,
    },
    Pair {
        routine: 0x00B83FC0,
        first: 0x0040D200,
        second: 0x00B6E6C0,
        same_argument: false,
    },
    Pair {
        routine: 0x00B88920,
        first: 0x00414560,
        second: 0x004144D0,
        same_argument: false,
    },
    Pair {
        routine: 0x00B9BA40,
        first: 0x00419430,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00B9D4B0,
        first: 0x0041B800,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x00BB21C0,
        first: 0x00417840,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x00BB2390,
        first: 0x00BB2320,
        second: 0x00414AD0,
        same_argument: false,
    },
    Pair {
        routine: 0x00BB2620,
        first: 0x00BB2320,
        second: 0x00BB1D90,
        same_argument: true,
    },
    Pair {
        routine: 0x00BB30E0,
        first: 0x00417840,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x00BC26B0,
        first: 0x004D3040,
        second: 0x00BC1C40,
        same_argument: false,
    },
    Pair {
        routine: 0x00BC9D40,
        first: 0x00BCA100,
        second: 0x00BC9E50,
        same_argument: false,
    },
    Pair {
        routine: 0x00BD4800,
        first: 0x0040D200,
        second: 0x0040D200,
        same_argument: false,
    },
    Pair {
        routine: 0x00BF2BF0,
        first: 0x00C0A6B0,
        second: 0x00C09F90,
        same_argument: false,
    },
    Pair {
        routine: 0x00BF9D40,
        first: 0x00414480,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x00BFCBE0,
        first: 0x004B3390,
        second: 0x00BF28A0,
        same_argument: false,
    },
    Pair {
        routine: 0x00BFE6C0,
        first: 0x006586F0,
        second: 0x00C09F90,
        same_argument: false,
    },
    Pair {
        routine: 0x00C02B40,
        first: 0x00742EB0,
        second: 0x0064EB40,
        same_argument: false,
    },
    Pair {
        routine: 0x00C08BB0,
        first: 0x00BD0FA0,
        second: 0x00BD0FA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00C08E80,
        first: 0x00BD10E0,
        second: 0x00BD10E0,
        same_argument: false,
    },
    Pair {
        routine: 0x00C08EB0,
        first: 0x00BD11D0,
        second: 0x00BD11D0,
        same_argument: false,
    },
    Pair {
        routine: 0x00C0A680,
        first: 0x00C086E0,
        second: 0x00BF28A0,
        same_argument: false,
    },
    Pair {
        routine: 0x00C0BBD0,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x00C294A0,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00C2B250,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00C2EA00,
        first: 0x00C2E030,
        second: 0x00C1A470,
        same_argument: false,
    },
    Pair {
        routine: 0x00C2EA30,
        first: 0x00C2E100,
        second: 0x00C1A570,
        same_argument: false,
    },
    Pair {
        routine: 0x00C32070,
        first: 0x00C31B00,
        second: 0x00C32AC0,
        same_argument: true,
    },
    Pair {
        routine: 0x00C377A0,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00C39590,
        first: 0x00C39530,
        second: 0x0064E770,
        same_argument: false,
    },
    Pair {
        routine: 0x00C3EB20,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x00C40CF0,
        first: 0x00414480,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00C569E0,
        first: 0x006586F0,
        second: 0x00C56F60,
        same_argument: false,
    },
    Pair {
        routine: 0x00C59670,
        first: 0x005FFB10,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x00C5A070,
        first: 0x00681790,
        second: 0x00C5A090,
        same_argument: true,
    },
    Pair {
        routine: 0x00C5FE20,
        first: 0x00C5FC40,
        second: 0x00C5F0F0,
        same_argument: true,
    },
    Pair {
        routine: 0x00C60F30,
        first: 0x00C5F0F0,
        second: 0x0064E770,
        same_argument: false,
    },
    Pair {
        routine: 0x00C62380,
        first: 0x00722840,
        second: 0x0080E790,
        same_argument: false,
    },
    Pair {
        routine: 0x00C6ECE0,
        first: 0x005EA630,
        second: 0x00410F20,
        same_argument: true,
    },
    Pair {
        routine: 0x00C86EE0,
        first: 0x005FC860,
        second: 0x0064DE00,
        same_argument: false,
    },
    Pair {
        routine: 0x00C86F20,
        first: 0x005FC860,
        second: 0x0064DE00,
        same_argument: false,
    },
    Pair {
        routine: 0x00C87550,
        first: 0x0065F800,
        second: 0x00410F20,
        same_argument: true,
    },
    Pair {
        routine: 0x00C8B670,
        first: 0x00419430,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x00C8D5D0,
        first: 0x00882A80,
        second: 0x0089C870,
        same_argument: false,
    },
    Pair {
        routine: 0x00C8F130,
        first: 0x00419430,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x00C8F4C0,
        first: 0x00419430,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x00CAE7E0,
        first: 0x00414560,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00CAEB70,
        first: 0x00414560,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00CAF510,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00CB4080,
        first: 0x00CAE370,
        second: 0x00CB9680,
        same_argument: false,
    },
    Pair {
        routine: 0x00CB47C0,
        first: 0x004D1F00,
        second: 0x004D1120,
        same_argument: true,
    },
    Pair {
        routine: 0x00CB5780,
        first: 0x00414560,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00CB63E0,
        first: 0x00414560,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00CB6910,
        first: 0x00414560,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x00CB7170,
        first: 0x00414560,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00CB7750,
        first: 0x00414560,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00CB79A0,
        first: 0x00414560,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00CB8090,
        first: 0x00414560,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00CB8A70,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00CBDB50,
        first: 0x00CBDE70,
        second: 0x00CB07D0,
        same_argument: false,
    },
    Pair {
        routine: 0x00CC1E70,
        first: 0x00CBE5D0,
        second: 0x00CC1120,
        same_argument: false,
    },
    Pair {
        routine: 0x00CC1EA0,
        first: 0x00CC1110,
        second: 0x00CBE5F0,
        same_argument: false,
    },
    Pair {
        routine: 0x00CC1ED0,
        first: 0x00CC1BC0,
        second: 0x00CBE630,
        same_argument: false,
    },
    Pair {
        routine: 0x00CDC0E0,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00CDC4D0,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00CDE180,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00CE1590,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x00CE2210,
        first: 0x004115F0,
        second: 0x00CE2300,
        same_argument: true,
    },
    Pair {
        routine: 0x00CF1F80,
        first: 0x00417840,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00CF2FE0,
        first: 0x0041B800,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00CF3F80,
        first: 0x00414560,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00CFA5D0,
        first: 0x00419430,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00CFBB60,
        first: 0x00414AD0,
        second: 0x00414AD0,
        same_argument: false,
    },
    Pair {
        routine: 0x00CFC350,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x00D037A0,
        first: 0x00414560,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x00D21DC0,
        first: 0x00CD7390,
        second: 0x00409620,
        same_argument: false,
    },
    Pair {
        routine: 0x00D78400,
        first: 0x00D77430,
        second: 0x005FCFA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00D7A330,
        first: 0x00D77430,
        second: 0x005FCFA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00D7AF20,
        first: 0x00D77F50,
        second: 0x00D7AFE0,
        same_argument: false,
    },
    Pair {
        routine: 0x00D7AF80,
        first: 0x00D7AFE0,
        second: 0x00D77F50,
        same_argument: false,
    },
    Pair {
        routine: 0x00D81120,
        first: 0x00417740,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x00DD1CD0,
        first: 0x016EBE60,
        second: 0x016ED320,
        same_argument: false,
    },
    Pair {
        routine: 0x00DD3C00,
        first: 0x00DD3B10,
        second: 0x016EBDD0,
        same_argument: false,
    },
    Pair {
        routine: 0x00DD41D0,
        first: 0x00DD4140,
        second: 0x016EBDD0,
        same_argument: false,
    },
    Pair {
        routine: 0x00DD8D00,
        first: 0x00624DD0,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x00DE03F0,
        first: 0x00414480,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00DEE400,
        first: 0x016E9E20,
        second: 0x016EC580,
        same_argument: false,
    },
    Pair {
        routine: 0x00DF0FF0,
        first: 0x004095F0,
        second: 0x004095F0,
        same_argument: false,
    },
    Pair {
        routine: 0x00E01F20,
        first: 0x00E01E10,
        second: 0x004B84C0,
        same_argument: false,
    },
    Pair {
        routine: 0x00E02040,
        first: 0x00E01E10,
        second: 0x00E01D50,
        same_argument: false,
    },
    Pair {
        routine: 0x00E0ED40,
        first: 0x00E0EAB0,
        second: 0x00E0E8E0,
        same_argument: false,
    },
    Pair {
        routine: 0x00EA7460,
        first: 0x00417740,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x00EA7D40,
        first: 0x00EA4EE0,
        second: 0x00EA4860,
        same_argument: true,
    },
    Pair {
        routine: 0x00EA8000,
        first: 0x00414480,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x00EAAB20,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x00EB1580,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x00EBA410,
        first: 0x00417740,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00EBD3A0,
        first: 0x0065F800,
        second: 0x00410F20,
        same_argument: true,
    },
    Pair {
        routine: 0x00EC9470,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00ECCB80,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x00ED3670,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x00EEB030,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x00EECB30,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x00F02030,
        first: 0x00F01EB0,
        second: 0x00651120,
        same_argument: false,
    },
    Pair {
        routine: 0x00F03FF0,
        first: 0x00F03100,
        second: 0x00F03060,
        same_argument: true,
    },
    Pair {
        routine: 0x00F0D560,
        first: 0x00410F20,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x00F13E00,
        first: 0x00F11210,
        second: 0x00F130F0,
        same_argument: true,
    },
    Pair {
        routine: 0x00F1AC80,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00F2D1A0,
        first: 0x00419430,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00F399F0,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x00F42D40,
        first: 0x00F42CE0,
        second: 0x00F42D30,
        same_argument: true,
    },
    Pair {
        routine: 0x00F53E10,
        first: 0x017CC8F0,
        second: 0x00F513F0,
        same_argument: false,
    },
    Pair {
        routine: 0x00F5F6B0,
        first: 0x00414480,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x00F5F980,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x00F608A0,
        first: 0x004B84C0,
        second: 0x004B84C0,
        same_argument: false,
    },
    Pair {
        routine: 0x00F62AC0,
        first: 0x005FDCB0,
        second: 0x005FDAB0,
        same_argument: false,
    },
    Pair {
        routine: 0x00F62B60,
        first: 0x005FDCB0,
        second: 0x005FDAB0,
        same_argument: false,
    },
    Pair {
        routine: 0x00F6E180,
        first: 0x00F6E130,
        second: 0x00F6E170,
        same_argument: true,
    },
    Pair {
        routine: 0x00F71EB0,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00F76080,
        first: 0x00F760B0,
        second: 0x00805990,
        same_argument: true,
    },
    Pair {
        routine: 0x00F79BB0,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x00F85010,
        first: 0x00417740,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00F8A700,
        first: 0x00F8AE10,
        second: 0x00F8A840,
        same_argument: true,
    },
    Pair {
        routine: 0x00F8E3C0,
        first: 0x00F8D0E0,
        second: 0x00F8D2F0,
        same_argument: false,
    },
    Pair {
        routine: 0x00F98C10,
        first: 0x0064DBE0,
        second: 0x0064DBE0,
        same_argument: false,
    },
    Pair {
        routine: 0x00F98C40,
        first: 0x0064DBE0,
        second: 0x0064DBE0,
        same_argument: false,
    },
    Pair {
        routine: 0x00F9FDD0,
        first: 0x00414560,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00FA5C80,
        first: 0x00414560,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00FC3110,
        first: 0x00414560,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00FC5860,
        first: 0x00414560,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00FC5B80,
        first: 0x00414560,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00FC7980,
        first: 0x00414480,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00FCC470,
        first: 0x00414560,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00FCC610,
        first: 0x00414560,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x00FF2420,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x00FF91E0,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01026A40,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01038C60,
        first: 0x00414480,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x0103F910,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0104A550,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01050340,
        first: 0x007E2DA0,
        second: 0x007E2F80,
        same_argument: true,
    },
    Pair {
        routine: 0x01053CE0,
        first: 0x00F6F920,
        second: 0x010508E0,
        same_argument: false,
    },
    Pair {
        routine: 0x01059C70,
        first: 0x00414480,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x0105E220,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01061F50,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01063F80,
        first: 0x00414AD0,
        second: 0x00414AD0,
        same_argument: false,
    },
    Pair {
        routine: 0x010643B0,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x01070270,
        first: 0x00410F20,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x0107F320,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01081D50,
        first: 0x007E2DA0,
        second: 0x007E2F80,
        same_argument: true,
    },
    Pair {
        routine: 0x0108A960,
        first: 0x007E2DA0,
        second: 0x0108FC80,
        same_argument: false,
    },
    Pair {
        routine: 0x0108C340,
        first: 0x00414480,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x0109DF70,
        first: 0x0109DE30,
        second: 0x0109DDD0,
        same_argument: true,
    },
    Pair {
        routine: 0x0109F310,
        first: 0x0109F2C0,
        second: 0x0109D420,
        same_argument: true,
    },
    Pair {
        routine: 0x0109F780,
        first: 0x00F7D290,
        second: 0x0109D7C0,
        same_argument: false,
    },
    Pair {
        routine: 0x010B0E40,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x010B2000,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x010BAB40,
        first: 0x00417740,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x010BBB10,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x010BE700,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x010CDCA0,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x010D9600,
        first: 0x00E1D930,
        second: 0x010E2C30,
        same_argument: false,
    },
    Pair {
        routine: 0x010DC7B0,
        first: 0x010DBD40,
        second: 0x00E16B60,
        same_argument: false,
    },
    Pair {
        routine: 0x010E6ED0,
        first: 0x01CC8320,
        second: 0x010E6DF0,
        same_argument: false,
    },
    Pair {
        routine: 0x010E6F00,
        first: 0x01CC8330,
        second: 0x010E6DF0,
        same_argument: false,
    },
    Pair {
        routine: 0x010E8C90,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x010F2780,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x010FC5F0,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x0110C430,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0110C4C0,
        first: 0x00E18380,
        second: 0x010DBE70,
        same_argument: false,
    },
    Pair {
        routine: 0x0110C600,
        first: 0x010DBD40,
        second: 0x00E193E0,
        same_argument: false,
    },
    Pair {
        routine: 0x01112950,
        first: 0x004D3030,
        second: 0x011115D0,
        same_argument: true,
    },
    Pair {
        routine: 0x011149F0,
        first: 0x00C08950,
        second: 0x00C08A10,
        same_argument: false,
    },
    Pair {
        routine: 0x011235A0,
        first: 0x00B0B020,
        second: 0x01112DB0,
        same_argument: false,
    },
    Pair {
        routine: 0x01124290,
        first: 0x011235A0,
        second: 0x01123730,
        same_argument: false,
    },
    Pair {
        routine: 0x011242C0,
        first: 0x011235A0,
        second: 0x01123730,
        same_argument: false,
    },
    Pair {
        routine: 0x011242F0,
        first: 0x011235A0,
        second: 0x01123730,
        same_argument: false,
    },
    Pair {
        routine: 0x01124320,
        first: 0x011235A0,
        second: 0x01123730,
        same_argument: false,
    },
    Pair {
        routine: 0x01124350,
        first: 0x011235A0,
        second: 0x01123730,
        same_argument: false,
    },
    Pair {
        routine: 0x01124380,
        first: 0x011235A0,
        second: 0x01123730,
        same_argument: false,
    },
    Pair {
        routine: 0x011243B0,
        first: 0x011235A0,
        second: 0x01123730,
        same_argument: false,
    },
    Pair {
        routine: 0x011243E0,
        first: 0x011235A0,
        second: 0x01123730,
        same_argument: false,
    },
    Pair {
        routine: 0x01124410,
        first: 0x011235A0,
        second: 0x01123730,
        same_argument: false,
    },
    Pair {
        routine: 0x01124440,
        first: 0x011235A0,
        second: 0x01123730,
        same_argument: false,
    },
    Pair {
        routine: 0x01124470,
        first: 0x011235A0,
        second: 0x01123730,
        same_argument: false,
    },
    Pair {
        routine: 0x011254C0,
        first: 0x011254A0,
        second: 0x01125620,
        same_argument: true,
    },
    Pair {
        routine: 0x011254F0,
        first: 0x011254A0,
        second: 0x01125620,
        same_argument: true,
    },
    Pair {
        routine: 0x01142160,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01144440,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x01153D40,
        first: 0x00410F20,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x011568B0,
        first: 0x00414480,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x01160430,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01163EF0,
        first: 0x004095F0,
        second: 0x004095F0,
        same_argument: false,
    },
    Pair {
        routine: 0x01178460,
        first: 0x00B90440,
        second: 0x01178150,
        same_argument: false,
    },
    Pair {
        routine: 0x0117FE60,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x011A0B80,
        first: 0x00417840,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x011A4F30,
        first: 0x01199B90,
        second: 0x0064DBE0,
        same_argument: false,
    },
    Pair {
        routine: 0x01221310,
        first: 0x008059A0,
        second: 0x008059A0,
        same_argument: false,
    },
    Pair {
        routine: 0x01236900,
        first: 0x01C98BF0,
        second: 0x00805200,
        same_argument: false,
    },
    Pair {
        routine: 0x0123D070,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01247D30,
        first: 0x0041B800,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x012AF9F0,
        first: 0x010F9770,
        second: 0x012AB400,
        same_argument: true,
    },
    Pair {
        routine: 0x012B13B0,
        first: 0x0064DBE0,
        second: 0x0064DBE0,
        same_argument: false,
    },
    Pair {
        routine: 0x012B13E0,
        first: 0x0064DBE0,
        second: 0x0064DBE0,
        same_argument: false,
    },
    Pair {
        routine: 0x012B1F70,
        first: 0x012AE910,
        second: 0x010E8E30,
        same_argument: false,
    },
    Pair {
        routine: 0x012B85A0,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x012EB180,
        first: 0x0064DE00,
        second: 0x0064DE00,
        same_argument: false,
    },
    Pair {
        routine: 0x01304A40,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0130B2B0,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0132C6D0,
        first: 0x004095F0,
        second: 0x004095F0,
        same_argument: false,
    },
    Pair {
        routine: 0x0133EC00,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0134F800,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x01367800,
        first: 0x01367550,
        second: 0x01365020,
        same_argument: true,
    },
    Pair {
        routine: 0x0136A140,
        first: 0x01369FE0,
        second: 0x01365020,
        same_argument: true,
    },
    Pair {
        routine: 0x01374360,
        first: 0x00F53490,
        second: 0x00F53FB0,
        same_argument: false,
    },
    Pair {
        routine: 0x013747D0,
        first: 0x00F53970,
        second: 0x00F53FB0,
        same_argument: false,
    },
    Pair {
        routine: 0x01374C50,
        first: 0x00F53E10,
        second: 0x00F53FB0,
        same_argument: false,
    },
    Pair {
        routine: 0x0137A4D0,
        first: 0x00E1A0A0,
        second: 0x00E1A1B0,
        same_argument: false,
    },
    Pair {
        routine: 0x0137A650,
        first: 0x00E1A570,
        second: 0x010DBD40,
        same_argument: false,
    },
    Pair {
        routine: 0x0137DCC0,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0138E0E0,
        first: 0x01B07800,
        second: 0x01B079D0,
        same_argument: false,
    },
    Pair {
        routine: 0x0138E110,
        first: 0x01B07AE0,
        second: 0x017C52B0,
        same_argument: false,
    },
    Pair {
        routine: 0x0138E140,
        first: 0x01B07C00,
        second: 0x01B07820,
        same_argument: false,
    },
    Pair {
        routine: 0x013BD820,
        first: 0x00419430,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x013E17D0,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x013F3160,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x014262A0,
        first: 0x004095F0,
        second: 0x004095F0,
        same_argument: false,
    },
    Pair {
        routine: 0x01434C20,
        first: 0x01434B80,
        second: 0x01434B90,
        same_argument: false,
    },
    Pair {
        routine: 0x01435BC0,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x014445D0,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01445910,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01457CC0,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0145E620,
        first: 0x0145E590,
        second: 0x008059A0,
        same_argument: false,
    },
    Pair {
        routine: 0x01464CD0,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x0146B720,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01471040,
        first: 0x007E2F80,
        second: 0x007E2DA0,
        same_argument: true,
    },
    Pair {
        routine: 0x01477C30,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01479370,
        first: 0x00414480,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0147CC00,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01482430,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x014891F0,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x01494BD0,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x0149DCD0,
        first: 0x01CF0770,
        second: 0x01A5EB60,
        same_argument: false,
    },
    Pair {
        routine: 0x014A1CD0,
        first: 0x00417740,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x014A28E0,
        first: 0x004145C0,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x014AF5F0,
        first: 0x00417740,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x014BCA80,
        first: 0x0064DE00,
        second: 0x0064DE00,
        same_argument: false,
    },
    Pair {
        routine: 0x014DDD60,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x014E9210,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x014EBEC0,
        first: 0x006E6920,
        second: 0x0080CC70,
        same_argument: false,
    },
    Pair {
        routine: 0x014EBEF0,
        first: 0x006E6920,
        second: 0x0080CC70,
        same_argument: false,
    },
    Pair {
        routine: 0x014ED7F0,
        first: 0x005EA630,
        second: 0x00410F20,
        same_argument: true,
    },
    Pair {
        routine: 0x014ED910,
        first: 0x005EA630,
        second: 0x00410F20,
        same_argument: true,
    },
    Pair {
        routine: 0x014F5150,
        first: 0x01B07AE0,
        second: 0x017C52B0,
        same_argument: false,
    },
    Pair {
        routine: 0x014F5180,
        first: 0x01B07C00,
        second: 0x01B07820,
        same_argument: false,
    },
    Pair {
        routine: 0x014F6530,
        first: 0x00414560,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x014F9600,
        first: 0x01D34D40,
        second: 0x01D34D40,
        same_argument: false,
    },
    Pair {
        routine: 0x014FF100,
        first: 0x014FF200,
        second: 0x015F79C0,
        same_argument: false,
    },
    Pair {
        routine: 0x014FF310,
        first: 0x00417740,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01508EE0,
        first: 0x0082A6C0,
        second: 0x010F7B70,
        same_argument: false,
    },
    Pair {
        routine: 0x01508F30,
        first: 0x0082A6C0,
        second: 0x010F7B70,
        same_argument: false,
    },
    Pair {
        routine: 0x01508F80,
        first: 0x0082A6C0,
        second: 0x010F7AE0,
        same_argument: false,
    },
    Pair {
        routine: 0x01508FD0,
        first: 0x0082A6C0,
        second: 0x010F7AE0,
        same_argument: false,
    },
    Pair {
        routine: 0x01528700,
        first: 0x01B07800,
        second: 0x01B079D0,
        same_argument: false,
    },
    Pair {
        routine: 0x01528730,
        first: 0x01B07AE0,
        second: 0x017C52B0,
        same_argument: false,
    },
    Pair {
        routine: 0x01528760,
        first: 0x01B07C00,
        second: 0x01B07820,
        same_argument: false,
    },
    Pair {
        routine: 0x0152A6F0,
        first: 0x01B07800,
        second: 0x01B079D0,
        same_argument: false,
    },
    Pair {
        routine: 0x0152A720,
        first: 0x01B07AE0,
        second: 0x017C52B0,
        same_argument: false,
    },
    Pair {
        routine: 0x0152A750,
        first: 0x01B07C00,
        second: 0x01B07820,
        same_argument: false,
    },
    Pair {
        routine: 0x01530B30,
        first: 0x00417C40,
        second: 0x00417C40,
        same_argument: false,
    },
    Pair {
        routine: 0x0153BDF0,
        first: 0x00410F20,
        second: 0x0153AF00,
        same_argument: false,
    },
    Pair {
        routine: 0x015414D0,
        first: 0x01541180,
        second: 0x01541240,
        same_argument: false,
    },
    Pair {
        routine: 0x0154E5B0,
        first: 0x00410F20,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x0157E4A0,
        first: 0x00419430,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0157EF70,
        first: 0x00417740,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x01580380,
        first: 0x00417740,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x01580F30,
        first: 0x00410F20,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x015815C0,
        first: 0x00417740,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x01581C20,
        first: 0x00417740,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x01582960,
        first: 0x00410F20,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01582B80,
        first: 0x00414480,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x01583110,
        first: 0x00417840,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x015860F0,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x01587630,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x01589D10,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x015C4680,
        first: 0x004095F0,
        second: 0x004B6DC0,
        same_argument: false,
    },
    Pair {
        routine: 0x015CDEE0,
        first: 0x00417840,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x015D5810,
        first: 0x00417740,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x015D78B0,
        first: 0x00414480,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x015DF4D0,
        first: 0x00414480,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x015E2730,
        first: 0x00417840,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x015E2D60,
        first: 0x00417740,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x015F4DF0,
        first: 0x00417740,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x015F4FA0,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x015F56A0,
        first: 0x00417740,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x015FE160,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x016027E0,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01603710,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x01605CB0,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x0161C250,
        first: 0x01614C70,
        second: 0x01698550,
        same_argument: false,
    },
    Pair {
        routine: 0x0162A470,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x0162B920,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x0162D530,
        first: 0x00419430,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x0162D570,
        first: 0x00414560,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x01637F90,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x0163BB30,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x016431D0,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01650470,
        first: 0x016EE260,
        second: 0x0164D870,
        same_argument: false,
    },
    Pair {
        routine: 0x01678DE0,
        first: 0x00417840,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x01697AD0,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x016A9ED0,
        first: 0x00C43C40,
        second: 0x0040BDD0,
        same_argument: false,
    },
    Pair {
        routine: 0x016A9F00,
        first: 0x00C43C40,
        second: 0x0040BCD0,
        same_argument: false,
    },
    Pair {
        routine: 0x016BB4F0,
        first: 0x00414610,
        second: 0x0427146A,
        same_argument: false,
    },
    Pair {
        routine: 0x016C08E0,
        first: 0x004095F0,
        second: 0x004095F0,
        same_argument: false,
    },
    Pair {
        routine: 0x016F05A0,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x016F3090,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x016F35F0,
        first: 0x00DCF670,
        second: 0x017D9AB0,
        same_argument: false,
    },
    Pair {
        routine: 0x017054C0,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01709D90,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0170ACE0,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x01710E30,
        first: 0x01710D40,
        second: 0x01710D00,
        same_argument: true,
    },
    Pair {
        routine: 0x017188D0,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0172BEF0,
        first: 0x00417740,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01753390,
        first: 0x0041B800,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x0175B900,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x0176AD50,
        first: 0x00417740,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0176B5B0,
        first: 0x0176B4D0,
        second: 0x0176B300,
        same_argument: false,
    },
    Pair {
        routine: 0x0176C330,
        first: 0x0176C1A0,
        second: 0x0176C240,
        same_argument: false,
    },
    Pair {
        routine: 0x017965C0,
        first: 0x00417740,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0179B5D0,
        first: 0x01794150,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x0179F610,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x017A6AA0,
        first: 0x0064DBE0,
        second: 0x0064DBE0,
        same_argument: false,
    },
    Pair {
        routine: 0x017B9630,
        first: 0x00410F20,
        second: 0x004095F0,
        same_argument: false,
    },
    Pair {
        routine: 0x017BB750,
        first: 0x017BB800,
        second: 0x017BB310,
        same_argument: false,
    },
    Pair {
        routine: 0x017CC920,
        first: 0x017CC6F0,
        second: 0x017CC7E0,
        same_argument: true,
    },
    Pair {
        routine: 0x017E24E0,
        first: 0x013B2E90,
        second: 0x013B2E90,
        same_argument: false,
    },
    Pair {
        routine: 0x017EA750,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01803850,
        first: 0x00460BA0,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01804490,
        first: 0x018039A0,
        second: 0x018046A0,
        same_argument: false,
    },
    Pair {
        routine: 0x0180EF40,
        first: 0x00414560,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x0180F1C0,
        first: 0x004C48A0,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x01812930,
        first: 0x00414560,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01824580,
        first: 0x00460BA0,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x018271E0,
        first: 0x00417840,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x01830810,
        first: 0x00417840,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01837950,
        first: 0x00417840,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x01839EA0,
        first: 0x00460BA0,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x0183A760,
        first: 0x00460BA0,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0183A950,
        first: 0x00460BA0,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x018475B0,
        first: 0x00414480,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x018489F0,
        first: 0x00460BA0,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x0184C260,
        first: 0x00414480,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x0184C330,
        first: 0x00460BA0,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0184C800,
        first: 0x00460BA0,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x0184D640,
        first: 0x00460BA0,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x0184D840,
        first: 0x00460BA0,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x0184DA60,
        first: 0x00460BA0,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0184E300,
        first: 0x00460BA0,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01850BA0,
        first: 0x00417840,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01856B40,
        first: 0x00452320,
        second: 0x018697E0,
        same_argument: false,
    },
    Pair {
        routine: 0x0185A4A0,
        first: 0x005FE090,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x01869560,
        first: 0x005FE090,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x01873B30,
        first: 0x004B6DC0,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x01877B30,
        first: 0x01877790,
        second: 0x00419260,
        same_argument: false,
    },
    Pair {
        routine: 0x0188B550,
        first: 0x005FDEA0,
        second: 0x0188B570,
        same_argument: true,
    },
    Pair {
        routine: 0x01891C60,
        first: 0x006586F0,
        second: 0x01891A50,
        same_argument: true,
    },
    Pair {
        routine: 0x01899080,
        first: 0x01898CA0,
        second: 0x006582E0,
        same_argument: false,
    },
    Pair {
        routine: 0x018990B0,
        first: 0x01898CA0,
        second: 0x006510A0,
        same_argument: false,
    },
    Pair {
        routine: 0x018990E0,
        first: 0x01898CA0,
        second: 0x00658310,
        same_argument: false,
    },
    Pair {
        routine: 0x01899770,
        first: 0x0064DBE0,
        second: 0x0064DBE0,
        same_argument: false,
    },
    Pair {
        routine: 0x0189C0E0,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x018A8580,
        first: 0x00417840,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x018A9E60,
        first: 0x0064E6F0,
        second: 0x0064E6F0,
        same_argument: false,
    },
    Pair {
        routine: 0x018C0780,
        first: 0x00410F20,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x018C9B80,
        first: 0x00417840,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x018CF4E0,
        first: 0x00460BA0,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x018CF5E0,
        first: 0x00460BA0,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x018D1130,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x018E11B0,
        first: 0x00414480,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x018E7590,
        first: 0x00414560,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x018EE0F0,
        first: 0x00417840,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x0194EBB0,
        first: 0x00460BA0,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01955730,
        first: 0x019512E0,
        second: 0x0064DBE0,
        same_argument: false,
    },
    Pair {
        routine: 0x01955CC0,
        first: 0x00460BA0,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01956BD0,
        first: 0x00460BA0,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01957CD0,
        first: 0x00460BA0,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x0195E170,
        first: 0x00460BA0,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01966590,
        first: 0x01981670,
        second: 0x0195CD00,
        same_argument: false,
    },
    Pair {
        routine: 0x019665C0,
        first: 0x0195C180,
        second: 0x019816A0,
        same_argument: false,
    },
    Pair {
        routine: 0x0196A2C0,
        first: 0x00414AD0,
        second: 0x0064DE00,
        same_argument: false,
    },
    Pair {
        routine: 0x0196A390,
        first: 0x019512F0,
        second: 0x0064DF10,
        same_argument: false,
    },
    Pair {
        routine: 0x0196AA20,
        first: 0x00417840,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x0196ACA0,
        first: 0x00417840,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x0196B0F0,
        first: 0x00417840,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01973370,
        first: 0x00417840,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01978190,
        first: 0x00417840,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01978370,
        first: 0x00417840,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01978620,
        first: 0x00417840,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x019807D0,
        first: 0x01981220,
        second: 0x01976A20,
        same_argument: false,
    },
    Pair {
        routine: 0x01980E30,
        first: 0x01981220,
        second: 0x01976270,
        same_argument: false,
    },
    Pair {
        routine: 0x01981260,
        first: 0x01981220,
        second: 0x0196F2D0,
        same_argument: false,
    },
    Pair {
        routine: 0x01983F40,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0198AC80,
        first: 0x00419430,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x0199E4A0,
        first: 0x017FF8E0,
        second: 0x0199E510,
        same_argument: false,
    },
    Pair {
        routine: 0x019A3940,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x019AE5C0,
        first: 0x004144D0,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x019AE7A0,
        first: 0x00F20250,
        second: 0x004AE7E0,
        same_argument: false,
    },
    Pair {
        routine: 0x019B0B30,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x019BCFC0,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x019C2F30,
        first: 0x00417740,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x019C5430,
        first: 0x00419430,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x019DD630,
        first: 0x00414480,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x019EB0A0,
        first: 0x00417740,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01A003F0,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01A00DB0,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01A02010,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01A03E30,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01A048D0,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01A09640,
        first: 0x00414480,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01A26CF0,
        first: 0x00C3FE50,
        second: 0x00410F20,
        same_argument: true,
    },
    Pair {
        routine: 0x01A2BEB0,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x01A2F3B0,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01A32670,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x01A33280,
        first: 0x005EA630,
        second: 0x00410F20,
        same_argument: true,
    },
    Pair {
        routine: 0x01A33A60,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x01A3CAD0,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x01A54830,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01A57190,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01A58D20,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01A5A0E0,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01A5C000,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x01A64180,
        first: 0x0064DBE0,
        second: 0x0065F800,
        same_argument: false,
    },
    Pair {
        routine: 0x01A68E60,
        first: 0x00414480,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01A77130,
        first: 0x00414480,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01A7C830,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01A87700,
        first: 0x00410F20,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x01A87730,
        first: 0x00410F20,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x01A87760,
        first: 0x00410F20,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x01AC1CB0,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01AD3C30,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01ADD560,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01AEE460,
        first: 0x00414480,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01B10500,
        first: 0x00598010,
        second: 0x01B103C0,
        same_argument: false,
    },
    Pair {
        routine: 0x01B1CFA0,
        first: 0x01B1CFE0,
        second: 0x01B1D080,
        same_argument: false,
    },
    Pair {
        routine: 0x01B1E290,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x01B35010,
        first: 0x00414480,
        second: 0x00417840,
        same_argument: false,
    },
    Pair {
        routine: 0x01B3A890,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01B46300,
        first: 0x004A0A40,
        second: 0x004A0A40,
        same_argument: false,
    },
    Pair {
        routine: 0x01B490C0,
        first: 0x004A0A40,
        second: 0x004A0A40,
        same_argument: false,
    },
    Pair {
        routine: 0x01B5DA60,
        first: 0x010DBD40,
        second: 0x00E1D1A0,
        same_argument: false,
    },
    Pair {
        routine: 0x01B87FF0,
        first: 0x00417740,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01B8D690,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x01B95CE0,
        first: 0x006DF710,
        second: 0x006E23C0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BA6E50,
        first: 0x00414480,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01BAB0A0,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01BB1C70,
        first: 0x00414480,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x01BBE820,
        first: 0x00414480,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01BCA020,
        first: 0x006586F0,
        second: 0x01BCB060,
        same_argument: true,
    },
    Pair {
        routine: 0x01BCC930,
        first: 0x00417840,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x01BCCA20,
        first: 0x00651DA0,
        second: 0x01BCB060,
        same_argument: true,
    },
    Pair {
        routine: 0x01BCCAC0,
        first: 0x0041B800,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BCCF20,
        first: 0x0041B800,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BCCFE0,
        first: 0x0041B800,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BCD0B0,
        first: 0x0041B800,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BCD180,
        first: 0x0041B800,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BCD330,
        first: 0x0041B800,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BCD5B0,
        first: 0x0041B800,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BCD700,
        first: 0x0041B800,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BCD7C0,
        first: 0x0041B800,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BCD890,
        first: 0x0041B800,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BCD960,
        first: 0x0041B800,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BCDB40,
        first: 0x0041B800,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BCDC00,
        first: 0x0041B800,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BCDD40,
        first: 0x0041B800,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BCDDF0,
        first: 0x0041B800,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BD3410,
        first: 0x01C07350,
        second: 0x0064CBF0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BD3CC0,
        first: 0x01C06870,
        second: 0x01C06820,
        same_argument: false,
    },
    Pair {
        routine: 0x01BD3F50,
        first: 0x01BD3590,
        second: 0x00742EB0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BD4730,
        first: 0x005FFB10,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x01BD4AB0,
        first: 0x005FFB10,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x01BD5210,
        first: 0x00651270,
        second: 0x0064DBE0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BD9BC0,
        first: 0x00417840,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BD9F40,
        first: 0x00417840,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BDA400,
        first: 0x00460BA0,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BDAB30,
        first: 0x00460BA0,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BDAFD0,
        first: 0x00417840,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BDB310,
        first: 0x00417840,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BDB570,
        first: 0x00460BA0,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BDBA60,
        first: 0x00417840,
        second: 0x00460BA0,
        same_argument: false,
    },
    Pair {
        routine: 0x01BE5DF0,
        first: 0x0064E6F0,
        second: 0x01BE2260,
        same_argument: false,
    },
    Pair {
        routine: 0x01BE8540,
        first: 0x01BE1B80,
        second: 0x01BE1BF0,
        same_argument: true,
    },
    Pair {
        routine: 0x01BF6B10,
        first: 0x00419430,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01BFFB30,
        first: 0x0065A280,
        second: 0x00654C30,
        same_argument: true,
    },
    Pair {
        routine: 0x01C1F2D0,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01C34240,
        first: 0x00414560,
        second: 0x00419430,
        same_argument: false,
    },
    Pair {
        routine: 0x01C3CD40,
        first: 0x00410F20,
        second: 0x01C38160,
        same_argument: false,
    },
    Pair {
        routine: 0x01C40320,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01C7A980,
        first: 0x0040D150,
        second: 0x00409900,
        same_argument: false,
    },
    Pair {
        routine: 0x01C818A0,
        first: 0x00414480,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01C82AB0,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01C833D0,
        first: 0x00414560,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01C8C650,
        first: 0x00414560,
        second: 0x00414560,
        same_argument: false,
    },
    Pair {
        routine: 0x01CA0DB0,
        first: 0x01CA0CF0,
        second: 0x01CA0E10,
        same_argument: true,
    },
    Pair {
        routine: 0x01CA0DD0,
        first: 0x01CA0D40,
        second: 0x01CA0E10,
        same_argument: true,
    },
    Pair {
        routine: 0x01CA1EC0,
        first: 0x00410F20,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x01CA7E60,
        first: 0x00417740,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x01CC34A0,
        first: 0x00414480,
        second: 0x00414480,
        same_argument: false,
    },
    Pair {
        routine: 0x01CFAC30,
        first: 0x00414480,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x01D237E0,
        first: 0x00414560,
        second: 0x00417740,
        same_argument: false,
    },
    Pair {
        routine: 0x01D351C0,
        first: 0x01D34DC0,
        second: 0x01D30F00,
        same_argument: false,
    },
    Pair {
        routine: 0x01D351F0,
        first: 0x01D34E10,
        second: 0x01D311C0,
        same_argument: false,
    },
    Pair {
        routine: 0x01D48F30,
        first: 0x004095F0,
        second: 0x004095F0,
        same_argument: false,
    },
    Pair {
        routine: 0x01D48F70,
        first: 0x004095F0,
        second: 0x004095F0,
        same_argument: false,
    },
    Pair {
        routine: 0x01D4A880,
        first: 0x00E7BFF0,
        second: 0x00E7BFF0,
        same_argument: false,
    },
    Pair {
        routine: 0x01D4A8D0,
        first: 0x00E7BFB0,
        second: 0x00E7BFB0,
        same_argument: false,
    },
    Pair {
        routine: 0x01D4F420,
        first: 0x00E7BFF0,
        second: 0x00E7BFF0,
        same_argument: false,
    },
    Pair {
        routine: 0x01D4FE60,
        first: 0x00E7BFF0,
        second: 0x00E7BFF0,
        same_argument: false,
    },
    Pair {
        routine: 0x01D50AB0,
        first: 0x00E7BFF0,
        second: 0x00E7BFF0,
        same_argument: false,
    },
    Pair {
        routine: 0x01D746C0,
        first: 0x016EBE60,
        second: 0x016ED320,
        same_argument: false,
    },
    Pair {
        routine: 0x01D761C0,
        first: 0x016EBE60,
        second: 0x016ED320,
        same_argument: false,
    },
    Pair {
        routine: 0x01D77930,
        first: 0x004095F0,
        second: 0x00410F20,
        same_argument: false,
    },
    Pair {
        routine: 0x01D7C520,
        first: 0x0041B800,
        second: 0x0041B800,
        same_argument: false,
    },
    Pair {
        routine: 0x01D83840,
        first: 0x0064DBE0,
        second: 0x0064DBE0,
        same_argument: false,
    },
    Pair {
        routine: 0x01D83870,
        first: 0x0064DBE0,
        second: 0x0064DBE0,
        same_argument: false,
    },
];

/// How many there are.
pub const PAIR_COUNT: usize = 801;

/// Implements part of the two-call family.
///
/// Whether a routine does nothing at all.
#[must_use]
pub fn does_nothing(routine: u32) -> bool {
    EMPTY.binary_search(&routine).is_ok()
}

/// Implements part of the two-call family.
///
/// What a routine calls, if it is one of the pairs.
#[must_use]
pub fn pair_at(routine: u32) -> Option<&'static Pair> {
    PAIRS
        .binary_search_by_key(&routine, |held| held.routine)
        .ok()
        .map(|at| &PAIRS[at])
}

/// Implements part of the two-call family.
///
/// Which two things are called together, and how often, commonest first.
#[must_use]
pub fn combinations() -> Vec<((u32, u32), usize)> {
    let mut counted: Vec<((u32, u32), usize)> = Vec::new();
    for held in &PAIRS {
        let key = (held.first, held.second);
        match counted.iter_mut().find(|(seen, _)| *seen == key) {
            Some((_, times)) => *times += 1,
            None => counted.push((key, 1)),
        }
    }
    counted.sort_by(|left, right| right.1.cmp(&left.1).then(left.0.cmp(&right.0)));
    counted
}

/// Implements part of the two-call family.
///
/// Everything that is ever called by one of these routines.
#[must_use]
pub fn everything_called() -> Vec<u32> {
    let mut found: Vec<u32> = PAIRS
        .iter()
        .flat_map(|held| [held.first, held.second])
        .collect();
    found.sort_unstable();
    found.dedup();
    found
}

/// Implements part of the two-call family.
///
/// The routines that are called both first and second by different pairs.
///
/// Fifty of the four hundred and twenty-eight, but that count is held down by a
/// long tail: most of what is called here is called once or twice, and a routine
/// called once cannot appear on both sides. Among the ones called often enough
/// for it to mean anything, appearing on both sides is the rule — see
/// [`called_often`].
#[must_use]
pub fn called_on_either_side() -> Vec<u32> {
    let mut found: Vec<u32> = PAIRS
        .iter()
        .map(|held| held.first)
        .filter(|first| PAIRS.iter().any(|held| held.second == *first))
        .collect();
    found.sort_unstable();
    found.dedup();
    found
}

/// Implements part of the two-call family.
///
/// The routines these pairs call at least so many times.
#[must_use]
pub fn called_often(times: usize) -> Vec<u32> {
    let mut counted: Vec<(u32, usize)> = Vec::new();
    for held in PAIRS.iter().flat_map(|held| [held.first, held.second]) {
        match counted.iter_mut().find(|(at, _)| *at == held) {
            Some((_, seen)) => *seen += 1,
            None => counted.push((held, 1)),
        }
    }
    let mut found: Vec<u32> = counted
        .into_iter()
        .filter(|(_, seen)| *seen >= times)
        .map(|(at, _)| at)
        .collect();
    found.sort_unstable();
    found
}

/// Implements part of the two-call family.
///
/// The pairs that call one thing twice.
///
/// Letting go of two things of one kind, at two places in the frame. Where both
/// calls are also given the same thing, the routine releases one thing twice —
/// see [`releases_one_thing_twice`].
#[must_use]
pub fn calls_one_thing_twice() -> Vec<&'static Pair> {
    PAIRS
        .iter()
        .filter(|held| held.first == held.second)
        .collect()
}

/// Implements part of the two-call family.
///
/// The pairs that call one thing twice with the same argument.
///
/// Reading a frame's contents twice over is not in itself wrong — the run time's
/// releases empty what they are given — but it is worth knowing which routines
/// do it, because a release that did not empty its argument would be releasing
/// the same thing twice.
#[must_use]
pub fn releases_one_thing_twice() -> Vec<&'static Pair> {
    PAIRS
        .iter()
        .filter(|held| held.first == held.second && held.same_argument)
        .collect()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn the_counts_are_what_the_tables_hold() {
        assert_eq!(EMPTY.len(), EMPTY_COUNT);
        assert_eq!(PAIRS.len(), PAIR_COUNT);
    }

    #[test]
    fn both_tables_are_sorted_so_they_can_be_searched() {
        assert!(EMPTY.windows(2).all(|pair| pair[0] < pair[1]));
        assert!(
            PAIRS
                .windows(2)
                .all(|pair| pair[0].routine < pair[1].routine)
        );
    }

    #[test]
    fn the_two_families_do_not_overlap() {
        for held in PAIRS.iter().take(300) {
            assert!(!does_nothing(held.routine), "{:#010X}", held.routine);
        }
    }

    #[test]
    fn a_routine_that_does_nothing_can_be_recognised() {
        assert!(does_nothing(EMPTY[0]));
        assert!(!does_nothing(0));
        assert!(!does_nothing(0xFFFF_FFFF));
    }

    #[test]
    fn a_pair_can_be_found_by_its_address() {
        let known = PAIRS[0].routine;

        assert!(pair_at(known).is_some());
        assert!(pair_at(0).is_none());
    }

    #[test]
    fn there_are_many_routines_that_do_nothing_at_all() {
        // Which is a measure of how much of the program's shape is declared
        // rather than used.
        assert!(EMPTY.len() > PAIRS.len());
    }

    #[test]
    fn no_pair_calls_itself() {
        for held in &PAIRS {
            assert_ne!(held.routine, held.first, "{:#010X}", held.routine);
            assert_ne!(held.routine, held.second, "{:#010X}", held.routine);
        }
    }

    #[test]
    fn the_same_two_things_are_called_together_again_and_again() {
        let counted = combinations();

        assert!(counted[0].1 > 10, "{:?}", &counted[..3.min(counted.len())]);
        assert!(counted.len() < PAIRS.len());
    }

    #[test]
    fn the_calls_are_concentrated_without_being_few() {
        // Four hundred and more distinct routines are called, but a handful
        // of them account for most of the calls.
        let called = everything_called();
        let busiest = combinations();

        assert!(called.len() > 100, "{} called", called.len());
        assert!(busiest[0].1 > 20, "{:?}", busiest[0]);
    }

    #[test]
    fn most_of_what_is_called_is_called_only_once_or_twice() {
        let called = everything_called().len();
        let often = called_often(5).len();

        assert!(often * 10 < called, "{often} of {called}");
    }

    #[test]
    fn but_what_is_called_often_turns_up_on_both_sides() {
        // So position in a pair follows where the thing sits in the frame, not
        // what is being released.
        let often = called_often(10);
        let either = called_on_either_side();
        let both = often.iter().filter(|held| either.contains(held)).count();

        assert!(both * 4 > often.len() * 3, "{both} of {}", often.len());
    }

    #[test]
    fn and_the_ones_that_never_do_are_the_rarely_called_ones() {
        let either = called_on_either_side();
        let rare = everything_called()
            .into_iter()
            .filter(|held| !either.contains(held))
            .count();

        assert!(rare > either.len());
    }

    #[test]
    fn some_pairs_call_one_thing_twice() {
        // Letting go of two things of one kind, at two places in the frame.
        assert!(!calls_one_thing_twice().is_empty());
    }

    #[test]
    fn and_a_few_of_those_are_given_the_same_thing_both_times() {
        let twice = releases_one_thing_twice();

        assert!(twice.len() <= calls_one_thing_twice().len());
        for held in twice {
            assert_eq!(held.first, held.second);
            assert!(held.same_argument);
        }
    }

    #[test]
    fn most_pairs_are_given_two_different_things() {
        let same = PAIRS.iter().filter(|held| held.same_argument).count();

        assert!(same * 2 < PAIRS.len(), "{same} of {}", PAIRS.len());
    }

    #[test]
    fn none_of_these_is_already_spoken_for_by_another_sweep() {
        for held in PAIRS.iter().take(200) {
            assert!(crate::frame_pads::pad_at(held.routine).is_none());
            assert!(crate::frame_pads_many::pad_at(held.routine).is_none());
            assert!(crate::shim_routines::target_of(held.routine).is_none());
        }
    }

    #[test]
    fn nor_is_any_of_the_empty_ones() {
        for routine in EMPTY.iter().take(200) {
            assert!(crate::frame_pads::pad_at(*routine).is_none());
            assert!(crate::trivial_routines::trivial_at(*routine).is_none());
        }
    }
}
