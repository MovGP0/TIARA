/* Ghidra address: 01b440d0 */
/* Ghidra symbol: FUN_01b440d0 */


void FUN_01b440d0(void)

{
  DAT_02110d2c = DAT_02110d2c + 1;
  if (DAT_02110d2c == 0) {
    FUN_00417840(&PTR_DAT_01fd6d68,&DAT_00401390,4);
    FUN_00417840(&PTR_DAT_01fd6d88,&DAT_00401390,3);
  }
  return;
}

