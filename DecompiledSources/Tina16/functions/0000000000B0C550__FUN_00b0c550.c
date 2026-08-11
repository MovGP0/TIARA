/* Ghidra address: 00b0c550 */
/* Ghidra symbol: FUN_00b0c550 */


void FUN_00b0c550(longlong *param_1,undefined8 *param_2,int param_3,undefined4 param_4,
                 undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int local_58;
  undefined8 local_50 [2];
  longlong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_50[0] = 0;
  local_40 = 0;
  local_38 = *param_2;
  uStack_30 = param_2[1];
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,0xb);
  uVar5 = *(uint *)(param_1 + 5) | 4;
  if (*(char *)(*(longlong *)(param_1[0x10] + 0x18) + 0x38) != '\x01') {
    uVar5 = *(uint *)(param_1 + 5) | 6;
  }
  local_58 = param_3;
  if ((*(uint *)(param_1 + 5) & 0x80) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    if (cVar1 == '\x01') {
      iVar2 = FUN_00b0c7f0(param_1,param_5);
      local_58 = param_3 + iVar2 + 1;
    }
  }
  FUN_00415dd0(local_50,param_1[0x13],0);
  FUN_00b0d0c0(&local_40,param_5,local_50[0]);
  uVar3 = FUN_005ffa40(param_1);
  uVar6 = 0;
  if (local_40 != 0) {
    uVar6 = *(uint *)(local_40 + -4) >> 1;
  }
  uVar4 = FUN_00415f70(local_40);
  thunk_FUN_03e58493(uVar3,local_58,param_4,uVar5,&local_38,uVar4,uVar6,0);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_004144d0(local_50);
  FUN_00414520(&local_40);
  return;
}

