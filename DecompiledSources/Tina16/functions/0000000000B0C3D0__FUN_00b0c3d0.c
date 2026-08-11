/* Ghidra address: 00b0c3d0 */
/* Ghidra symbol: FUN_00b0c3d0 */


void FUN_00b0c3d0(longlong *param_1,int param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  int local_40;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_30[0] = 0;
  local_20 = 0;
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,0xb);
  cVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  local_40 = param_2;
  if (cVar1 == '\x01') {
    iVar2 = FUN_00b0c7f0(param_1,param_4);
    local_40 = param_2 + iVar2 + 1;
  }
  FUN_00415dd0(local_30,param_1[0x13],0);
  FUN_00b0d0c0(&local_20,param_4,local_30[0]);
  uVar3 = FUN_005ffa40(param_1);
  uVar5 = 0;
  if (local_20 != 0) {
    uVar5 = *(uint *)(local_20 + -4) >> 1;
  }
  uVar4 = FUN_00415f70(local_20);
  thunk_FUN_03e58493(uVar3,local_40,param_3,(int)param_1[5],0,uVar4,uVar5,0);
  iVar2 = FUN_00b0c7f0(param_1,param_4);
  (**(code **)(*param_1 + 200))(param_1,local_40 + iVar2,param_3);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_004144d0(local_30);
  FUN_00414520(&local_20);
  return;
}

