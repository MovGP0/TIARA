/* Ghidra address: 01710d40 */
/* Ghidra symbol: FUN_01710d40 */


void FUN_01710d40(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  iVar1 = (**(code **)(*(longlong *)*param_1 + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = (**(code **)(*(longlong *)*param_1 + 0x30))((longlong *)*param_1,iVar4);
      FUN_00410f20(*(undefined8 *)(lVar2 + 8));
      lVar2 = (**(code **)(*(longlong *)*param_1 + 0x30))((longlong *)*param_1,iVar4);
      FUN_00410f20(*(undefined8 *)(lVar2 + 0x10));
      uVar3 = (**(code **)(*(longlong *)*param_1 + 0x30))((longlong *)*param_1,iVar4);
      FUN_00418590(uVar3,&DAT_0170b9c8);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(*param_1);
  return;
}

