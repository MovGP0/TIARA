/* Ghidra address: 00bcaa50 */
/* Ghidra symbol: FUN_00bcaa50 */


undefined8
FUN_00bcaa50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 local_res18 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00bca8e0(param_1,&local_30,local_res18[0],&local_28);
  FUN_00414480(&local_30);
  FUN_00414480(local_res18);
  return param_2;
}

