/* Ghidra address: 015f27d0 */
/* Ghidra symbol: FUN_015f27d0 */


undefined8
FUN_015f27d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
            longlong *param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined8 local_1060;
  undefined8 local_1058;
  undefined8 local_1050 [257];
  undefined1 local_842 [1946];
  undefined1 local_a8;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_a8 = 0;
  local_1060 = 0;
  local_1058 = 0;
  local_1050[0] = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00414610(param_7);
  FUN_015fcd70(&local_38,local_res8[0]);
  FUN_015fc500(local_1050,param_6);
  FUN_00416cd0(&local_40,3,param_7,&DAT_015f2a88,local_1050[0]);
  FUN_00416cd0(&local_28,3,local_38,&DAT_015f2a98,local_40);
  FUN_00416cd0(&local_1058,3,local_38,&DAT_015f2a98,local_40);
  (**(code **)(*param_4 + 0x100))(param_4,local_1058);
  FUN_00442620(local_842,local_28);
  iVar1 = _compile_file(param_2,local_842,local_842,param_6,param_8);
  if (iVar1 != 0) {
    if (param_5 == (longlong *)0x0) {
      FUN_00414480(&local_28);
    }
    else {
      (**(code **)(*param_5 + 0x288))(param_5,&local_28);
    }
    FUN_00416cd0(&local_1060,3,local_40,&LAB_015f2aa8,local_28);
    FUN_015fcf20(0,param_2,1,local_1060);
  }
  FUN_00414560(&local_1060,3);
  FUN_00414560(&local_40,5);
  FUN_00414480(local_res8);
  FUN_00414480(&param_7);
  return 0;
}

