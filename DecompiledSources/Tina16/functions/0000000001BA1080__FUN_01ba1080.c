/* Ghidra address: 01ba1080 */
/* Ghidra symbol: FUN_01ba1080 */


undefined8 FUN_01ba1080(ushort *param_1)

{
  ushort *local_res8 [4];
  undefined8 local_30 [2];
  int local_20;
  int iStack_1c;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  local_30[0] = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_0043e1a0(local_30,local_res8[0]);
  FUN_00414b50(local_res8,local_30[0]);
  iStack_1c = *local_res8[0] - 0x61;
  local_14 = local_res8[0][1] - 0x30;
  local_20 = 8 - local_14;
  local_10 = CONCAT44(iStack_1c,local_20);
  local_18 = iStack_1c;
  FUN_00414480(local_30);
  FUN_00414480(local_res8);
  return local_10;
}

