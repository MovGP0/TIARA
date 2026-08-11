/* Ghidra address: 008f8a20 */
/* Ghidra symbol: FUN_008f8a20 */


void FUN_008f8a20(longlong *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  int local_30 [2];
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_20[0] = 0;
  if ((param_2 < 0) || (*(int *)((longlong)param_1 + 0xc) <= param_2)) {
    FUN_0041ddd0(local_20,PTR_PTR_02005320);
    local_28 = 0;
    local_30[0] = param_2;
    uVar1 = FUN_0044d530(&PTR_FUN_00472398,1,local_20[0],local_30,0);
    FUN_004134c0(uVar1);
  }
  if ((param_3 < 0) || (*(int *)((longlong)param_1 + 0xc) <= param_3)) {
    FUN_0041ddd0(&local_38,PTR_PTR_02005320);
    local_28 = 0;
    local_30[0] = param_3;
    uVar1 = FUN_0044d530(&PTR_FUN_00472398,1,local_38,local_30,0);
    FUN_004134c0(uVar1);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  FUN_008f8b70(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  return;
}

