/* Ghidra address: 0170a7d0 */
/* Ghidra symbol: FUN_0170a7d0 */


void FUN_0170a7d0(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar1 = (**(code **)(*(longlong *)*param_2 + 0x28))();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = (**(code **)(*(longlong *)*param_2 + 0x30))((longlong *)*param_2,iVar3);
      FUN_004095f0(uVar2);
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(*param_2);
  return;
}

