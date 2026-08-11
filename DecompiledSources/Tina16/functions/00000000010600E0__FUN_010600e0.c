/* Ghidra address: 010600e0 */
/* Ghidra symbol: FUN_010600e0 */


void FUN_010600e0(longlong param_1,undefined8 param_2,longlong *param_3,int param_4,
                 undefined8 param_5)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414610(param_5);
  FUN_00414480(param_1 + 0x78);
  if (param_4 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x98);
    FUN_0105ff90(param_1,local_20,local_res10[0]);
    FUN_00416cd0(param_1 + 0x78,6,&DAT_01060438,*(undefined8 *)(param_1 + 0x78),
                 *(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x30),local_20[0],
                 &DAT_01060438);
    FUN_00416ad0(param_1 + 0x78,&DAT_01060448);
    FUN_0105e6d0(param_1,&local_28,*(undefined8 *)(param_1 + 0x10),&DAT_01060458,0x2c);
    FUN_00416ad0(param_1 + 0x78,local_28);
    FUN_00416ad0(param_1 + 0x78,&DAT_01060448);
    FUN_0105e6d0(param_1,&local_30,*(undefined8 *)(param_1 + 8),&PTR_LAB_01060468,0x2c);
    FUN_00416ad0(param_1 + 0x78,local_30);
    FUN_00416ad0(param_1 + 0x78,&DAT_01060448);
    FUN_0105e6d0(param_1,&local_38,param_5,&PTR_DAT_0106047c,0x2c);
    FUN_00416ad0(param_1 + 0x78,local_38);
    FUN_00416ad0(param_1 + 0x78,&DAT_01060448);
    FUN_00441920(&local_40,local_res10[0]);
    FUN_00416cd0(param_1 + 0x78,7,*(undefined8 *)(param_1 + 0x78),&DAT_01060438,
                 *(undefined8 *)(param_1 + 0x70),&DAT_01060490,local_40,&DAT_01060438,&DAT_01060448)
    ;
    FUN_00416ad0(param_1 + 0x78,&DAT_010604a0);
    FUN_00441920(&local_48,local_res10[0]);
    FUN_00416cd0(param_1 + 0x78,4,*(undefined8 *)(param_1 + 0x78),L"Debug\\",local_48,&LAB_010604d0)
    ;
  }
  (**(code **)(*param_3 + 0x78))(param_3,*(undefined8 *)(param_1 + 0x78));
  FUN_00414560(&local_48,6);
  FUN_00414480(local_res10);
  FUN_00414480(&param_5);
  return;
}

