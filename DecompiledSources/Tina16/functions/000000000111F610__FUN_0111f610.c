/* Ghidra address: 0111f610 */
/* Ghidra symbol: FUN_0111f610 */


void FUN_0111f610(void)

{
  DAT_02030160 = DAT_02030160 + 1;
  if (DAT_02030160 == 0) {
    FUN_00410f20(DAT_02030168);
    FUN_00417840(&PTR_DAT_01f23528,&DAT_00401390,0x20);
    FUN_00417840(&PTR_u___future___01f23628,&DAT_00401390,0x41);
  }
  return;
}

