/* Ghidra address: 010a4370 */
/* Ghidra symbol: FUN_010a4370 */


void FUN_010a4370(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  *(undefined8 *)(param_1 + 0x968) = param_2;
  FUN_00414ad0(param_1 + 0x998,local_res18);
  FUN_00414ad0(param_1 + 0xa18,local_res20);
  *(undefined8 *)(param_1 + 0xa30) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x968) + 0x488) + 0x890);
  *(double *)(param_1 + 0xa50) = *(double *)(param_1 + 0xa30) / 1000.0;
  FUN_00414560(&local_res18,2);
  return;
}

