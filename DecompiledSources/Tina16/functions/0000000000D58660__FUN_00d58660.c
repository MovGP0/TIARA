/* Ghidra address: 00d58660 */
/* Ghidra symbol: FUN_00d58660 */


void FUN_00d58660(longlong *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  uVar3 = FUN_0060a050(param_1,iVar1 + -1);
  iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00d58600(uVar3,iVar1 * iVar2,param_2);
  return;
}

