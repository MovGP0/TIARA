/* Ghidra address: 014c1090 */
/* Ghidra symbol: FUN_014c1090 */


undefined8 * FUN_014c1090(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_58;
  local_10 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_38 = *(undefined8 *)(param_1 + 0x18);
  FUN_00416cd0(param_2,3,local_res18[0],L"&sid=");
  FUN_00416ad0(param_2,L"&lang=en");
  FUN_00414480(&local_10);
  local_18 = FUN_00409eb0();
  FUN_00448450(&local_10,local_18,PTR_DAT_02004830);
  local_38 = local_10;
  FUN_00416cd0(param_2,3,*param_2,L"&reload=");
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  FUN_00414480(local_res18);
  return param_2;
}

