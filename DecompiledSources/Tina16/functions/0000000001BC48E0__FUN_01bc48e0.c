/* Ghidra address: 01bc48e0 */
/* Ghidra symbol: FUN_01bc48e0 */


void FUN_01bc48e0(void)

{
  DAT_02111410 = DAT_02111410 + 1;
  if (DAT_02111410 == 0) {
    if (DAT_02111418 != 0) {
      thunk_FUN_041c8c2f(DAT_02111418);
    }
    FUN_00410f20(DAT_02111420);
    FUN_00417840(&PTR_DAT_01fdf810,&DAT_00401390,8);
  }
  return;
}

