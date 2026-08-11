/* Ghidra address: 017b59b0 */
/* Ghidra symbol: FUN_017b59b0 */


void FUN_017b59b0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_00411a80(param_1,param_2);
  iVar1 = FUN_00611650();
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x30) + 8))(*(longlong **)(param_1 + 0x30));
      FUN_004095f0(uVar2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x30));
  iVar1 = FUN_00611650();
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 8))(*(longlong **)(param_1 + 0x38));
      FUN_004095f0(uVar2);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x38));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

