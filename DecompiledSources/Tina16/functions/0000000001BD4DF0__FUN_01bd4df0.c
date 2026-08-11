/* Ghidra address: 01bd4df0 */
/* Ghidra symbol: FUN_01bd4df0 */


void FUN_01bd4df0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  iVar1 = FUN_0064d0b0(param_1);
  iVar2 = (**(code **)(*param_1 + 0x280))(param_1);
  uVar3 = FUN_0064d0b0(param_1);
  uVar4 = FUN_0064d120(param_1);
  FUN_004238d0(local_38,iVar1 - iVar2,0,uVar3,uVar4);
  local_40 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
  local_40 = FUN_0064d3a0(param_1,&local_40);
  FUN_00423210(local_38,&local_40);
  return;
}

