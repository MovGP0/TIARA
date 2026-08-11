/* Ghidra address: 00d30ed0 */
/* Ghidra symbol: FUN_00d30ed0 */


void FUN_00d30ed0(void)

{
  undefined8 uVar1;
  
  DAT_0201a170 = DAT_0201a170 + 1;
  if (DAT_0201a170 == 0) {
    uVar1 = FUN_00808880(*(undefined8 *)PTR_DAT_02005950,0xffffffe9);
    thunk_FUN_0416e0df(uVar1);
  }
  return;
}

