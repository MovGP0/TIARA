/* Ghidra address: 01807450 */
/* Ghidra symbol: FUN_01807450 */


void FUN_01807450(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = (**(code **)*param_2)(param_2);
  iVar2 = FUN_004b6da0(param_2);
  FUN_00416660(local_20,(longlong)(iVar1 - iVar2) / 2 & 0xffffffff);
  uVar3 = FUN_00415f70(local_20[0]);
  (**(code **)(*param_2 + 0x18))(param_2,uVar3,iVar1 - iVar2);
  (**(code **)(*param_1 + 0x58))(param_1,local_20[0]);
  FUN_00414520(local_20);
  return;
}

