/* Ghidra address: 01a9a0f0 */
/* Ghidra symbol: FUN_01a9a0f0 */


void FUN_01a9a0f0(longlong *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  undefined1 local_48 [16];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  local_res10[0] = param_2;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  uVar1 = FUN_01a99be0(param_1);
  uVar2 = FUN_01a99b30(param_1);
  uVar3 = FUN_01a99990(param_1);
  (**(code **)(*param_1 + 0xf0))(param_1,1);
  (**(code **)(*param_1 + 0xe0))(param_1,1);
  FUN_01a9a440(param_1,0x11);
  if (local_res20[0] < local_res10[0]) {
    FUN_01cefdf0(local_res10,local_res20);
  }
  if (param_5 < local_res18[0]) {
    FUN_01cefdf0(local_res18,&param_5);
  }
  FUN_01a98380(param_1,local_res10[0],local_res18[0],&local_2c,&local_30);
  FUN_01a98380(param_1,local_res20[0],param_5,&local_34,&local_38);
  if (*(char *)((longlong)param_1 + 0x12d) == '\0') {
    FUN_00498350(local_48,local_2c - (int)param_1[0x31],
                 local_30 - *(int *)((longlong)param_1 + 0x18c),local_34 - (int)param_1[0x31],
                 local_38 - *(int *)((longlong)param_1 + 0x18c));
    thunk_FUN_03b3ef59(param_1[0x29],local_48);
  }
  (**(code **)(*param_1 + 0xb8))(param_1,uVar3);
  (**(code **)(*param_1 + 0xe0))(param_1,uVar2);
  (**(code **)(*param_1 + 0xf0))(param_1,uVar1);
  return;
}

