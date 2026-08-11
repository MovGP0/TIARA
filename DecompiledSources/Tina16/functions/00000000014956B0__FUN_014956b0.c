/* Ghidra address: 014956b0 */
/* Ghidra symbol: FUN_014956b0 */


double FUN_014956b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined2 local_32;
  double local_30;
  double local_28;
  double local_20;
  
  local_40 = auStack_a8;
  local_70 = 0;
  local_78 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_res10 = param_2;
  local_res18[0] = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18[0]);
  local_88 = 1;
  FUN_00450070(&local_48,local_res18[0],&DAT_0149599c,&DAT_014959ac);
  FUN_00414b50(local_res18,local_48);
  local_32 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  local_28 = (double)FUN_00b8f030(local_res18[0]);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_32;
  if ((local_28 < -1e+50) || (1e+50 < local_28)) {
    uVar1 = FUN_00b89270();
    FUN_00b8e520(uVar1,&local_58,0x132);
    local_68 = local_res10;
    local_60 = 0x11;
    FUN_00442f70(&local_50,local_58,&local_68,0);
    uVar1 = FUN_0044d490(&PTR_FUN_004355d0,1,local_50);
    FUN_004134c0(uVar1);
  }
  local_30 = local_28;
  local_20 = local_28;
  FUN_00414560(&local_78,2);
  FUN_00414560(&local_58,3);
  FUN_00414560(&local_res10,2);
  return local_20;
}

