/* Ghidra address: 00d59220 */
/* Ghidra symbol: FUN_00d59220 */


void FUN_00d59220(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_2c = (**(code **)(*param_1 + 0x60))(param_1);
  local_30 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00d574e0(param_2,param_1[0xe]);
  (**(code **)(*param_2 + 0x20))(param_2,&local_2c,4);
  (**(code **)(*param_2 + 0x20))(param_2,&local_30,4);
  iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
  uVar3 = FUN_0060a050(param_1,iVar1 + -1);
  iVar1 = (**(code **)(*param_1 + 0x60))(param_1);
  iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_2 + 0x20))(param_2,uVar3,iVar1 * iVar2 * 4);
  return;
}

