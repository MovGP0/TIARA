/* Ghidra address: 018072e0 */
/* Ghidra symbol: FUN_018072e0 */


void FUN_018072e0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_40 [2];
  short local_2a;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  iVar1 = (**(code **)*param_2)(param_2);
  iVar2 = FUN_004b6da0(param_2);
  iVar1 = iVar1 - iVar2;
  local_2a = 0;
  if (2 < iVar1) {
    (**(code **)(*param_2 + 0x18))(param_2,&local_2a,2);
  }
  if (local_2a == -0x101) {
    FUN_00416660(local_20,(longlong)(iVar1 + -2) / 2 & 0xffffffff);
    uVar3 = FUN_00415f70(local_20[0]);
    (**(code **)(*param_2 + 0x18))(param_2,uVar3,iVar1 + -2);
    (**(code **)(*param_1 + 0x58))(param_1,local_20[0]);
  }
  else {
    (**(code **)(*param_2 + 0x48))(param_2,0xfffffffe,1);
    FUN_004169f0(&local_28,iVar1);
    uVar3 = FUN_00414de0(&local_28);
    (**(code **)(*param_2 + 0x18))(param_2,uVar3,iVar1);
    FUN_004168e0(local_40,local_28);
    (**(code **)(*param_1 + 0x58))(param_1,local_40[0]);
  }
  FUN_00414520(local_40);
  FUN_00414480(&local_28);
  FUN_00414520(local_20);
  return;
}

