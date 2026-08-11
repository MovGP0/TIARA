/* Ghidra address: 006256c0 */
/* Ghidra symbol: FUN_006256c0 */


void FUN_006256c0(longlong *param_1,longlong param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  int local_64;
  longlong local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_34;
  longlong local_30;
  int local_24;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_98;
  local_50 = 0;
  local_48 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_00419260(&local_20,&DAT_00625688,1,(longlong)param_3);
  local_64 = param_3 + -1;
  local_24 = 0;
  iVar1 = param_3;
  local_30 = param_2;
  if (-1 < local_64) {
    do {
      local_64 = iVar1;
      if (local_24 == 0) {
        FUN_00414520(&local_10);
        FUN_00415430(&local_48,local_30,0);
        FUN_0041d9e0(&local_10,local_48);
        FUN_00414b90(local_20 + (longlong)local_24 * 8,local_10);
        FUN_00414520(&local_10);
      }
      else {
        FUN_00414520(&local_18);
        FUN_00415430(&local_50,local_30,0);
        FUN_0041d9e0(&local_18,local_50);
        FUN_00414b90(local_20 + (longlong)(param_3 - local_24) * 8,local_18);
        FUN_00414520(&local_18);
      }
      iVar1 = FUN_00414ce0(local_30);
      local_30 = local_30 + (ulonglong)(iVar1 + 1);
      local_24 = local_24 + 1;
      local_64 = local_64 + -1;
      iVar1 = local_64;
    } while (local_64 != 0);
  }
  local_78 = thunk_FUN_04195d02();
  local_70 = param_4;
  local_34 = (**(code **)(*param_1 + 0x28))(param_1,PTR_DAT_02003150,local_20,param_3);
  if (local_34 == -0x7ffdfffa) {
    local_58 = 6;
    local_78 = 0;
    local_60 = param_2;
    uVar2 = FUN_0044d8d0(&PTR_FUN_00620870,1,PTR_PTR_02004740,&local_60);
    FUN_004134c0(uVar2);
  }
  else {
    FUN_006245b0(local_34);
  }
  FUN_00414590(&local_50,2);
  FUN_00419430(&local_20,&DAT_00625688);
  FUN_004145c0(&local_18,2);
  return;
}

