/* Ghidra address: 00c8d310 */
/* Ghidra symbol: FUN_00c8d310 */


void FUN_00c8d310(longlong param_1,byte param_2,undefined8 param_3,int param_4)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    if (param_4 == -1) {
      local_30 = 0;
      local_28 = 0x11;
      FUN_00876cf0(local_20,*(undefined8 *)(&DAT_01ea9408 + (ulonglong)param_2 * 8),&local_30,0);
      (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 0x80),param_1,param_2,local_20[0]);
    }
    else {
      FUN_00876cf0(&local_38,*(undefined8 *)(&DAT_01ea9408 + (ulonglong)param_2 * 8),param_3,param_4
                  );
      (**(code **)(param_1 + 0x78))(*(undefined8 *)(param_1 + 0x80),param_1,param_2,local_38);
    }
  }
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  return;
}

