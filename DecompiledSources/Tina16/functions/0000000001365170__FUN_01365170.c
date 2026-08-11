/* Ghidra address: 01365170 */
/* Ghidra symbol: FUN_01365170 */


void FUN_01365170(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = FUN_0065b870(*(longlong *)(param_1 + 0x10));
    thunk_FUN_040dee27(uVar1,(longlong)param_2);
  }
  return;
}

