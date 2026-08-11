/* Ghidra address: 00a622f0 */
/* Ghidra symbol: FUN_00a622f0 */


void FUN_00a622f0(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_02014700;
  DAT_020144e8 = DAT_020144e8 + 1;
  if (DAT_020144e8 == 0) {
    DAT_02014700 = 0;
    FUN_00410f20(uVar1);
    uVar1 = DAT_020146f0;
    DAT_020146f0 = 0;
    FUN_00410f20(uVar1);
    FUN_00417840(&PTR_u_font_family_01e75688,&DAT_00401390,0x51);
    FUN_00417840(&PTR_u_serif_01e75948,&DAT_00401390,5);
    FUN_00417840(&PTR_u_Times_New_Roman_01e75970,&DAT_00401390,5);
    FUN_00417840(&PTR_PTR_01e75998,&DAT_00401390,7);
    FUN_00417840(&PTR_u_none_01e759d0,&DAT_00401390,0xb2);
    FUN_00414480(&PTR_u______01e77178);
  }
  return;
}

