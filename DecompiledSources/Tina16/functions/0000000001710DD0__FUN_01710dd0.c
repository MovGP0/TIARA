/* Ghidra address: 01710dd0 */
/* Ghidra symbol: FUN_01710dd0 */


void FUN_01710dd0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(*(longlong *)*param_1 + 0x30))((longlong *)*param_1,iVar3);
      FUN_00410f20(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(*param_1);
  return;
}

