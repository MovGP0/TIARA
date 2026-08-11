/* Ghidra address: 0068fcf0 */
/* Ghidra symbol: FUN_0068fcf0 */


void FUN_0068fcf0(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  FUN_00785c20(param_1);
  uVar1 = FUN_0065b870(*(undefined8 *)(param_1 + 0x10));
  iVar2 = thunk_FUN_0419e3da(uVar1);
  if (iVar2 != 0) {
    FUN_0068fe80(param_1);
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}

