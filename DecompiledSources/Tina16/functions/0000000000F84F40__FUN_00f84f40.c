/* Ghidra address: 00f84f40 */
/* Ghidra symbol: FUN_00f84f40 */


undefined8 FUN_00f84f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 local_31;
  undefined1 local_30 [24];
  undefined8 local_18;
  undefined1 local_10 [4];
  undefined4 local_c;
  
  local_18 = 0;
  FUN_00417580(local_30,&DAT_00e021a8);
  if (param_4 == 0) {
    FUN_015f5620(param_1,&DAT_00f85048,0xffffffff);
  }
  else {
    uVar1 = _get_digital_node_value(param_2,param_4,&local_31,&local_c,local_10,0);
    FUN_015f4e60(local_30,local_31,local_c,uVar1);
    FUN_00417c40(param_1,local_30,&DAT_00e021a8);
  }
  FUN_00417740(local_30,&DAT_00e021a8);
  FUN_00414480(&local_18);
  return param_1;
}

