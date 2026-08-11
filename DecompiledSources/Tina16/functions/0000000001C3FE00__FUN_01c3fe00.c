/* Ghidra address: 01c3fe00 */
/* Ghidra symbol: FUN_01c3fe00 */


undefined8 FUN_01c3fe00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00441a10(&local_18,local_res18[0]);
  FUN_0043e130(&local_10,local_18);
  iVar1 = FUN_00416db0(local_10,L".DLL");
  if (iVar1 != 0) {
    FUN_00441a10(&local_28,local_res18[0]);
    FUN_0043e130(&local_20,local_28);
    iVar1 = FUN_00416db0(local_20,L".TFLITE");
    if (iVar1 != 0) goto LAB_01c3febf;
  }
  FUN_004414c0(&local_30,local_res18[0],L".VHD");
  FUN_00414b50(local_res18,local_30);
LAB_01c3febf:
  FUN_00414ad0(param_2,local_res18[0]);
  FUN_00414560(&local_30,5);
  FUN_00414480(local_res18);
  return param_2;
}

