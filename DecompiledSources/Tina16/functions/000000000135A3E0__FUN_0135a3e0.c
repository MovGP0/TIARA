/* Ghidra address: 0135a3e0 */
/* Ghidra symbol: FUN_0135a3e0 */


void FUN_0135a3e0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))(*(longlong **)(param_1 + 8),iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 8));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

