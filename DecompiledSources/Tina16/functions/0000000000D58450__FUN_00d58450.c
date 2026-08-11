/* Ghidra address: 00d58450 */
/* Ghidra symbol: FUN_00d58450 */


undefined4 FUN_00d58450(undefined4 param_1)

{
  undefined1 local_res8;
  undefined1 uStackX_a;
  undefined4 local_c;
  
  local_res8 = (undefined1)param_1;
  local_c._3_1_ = (undefined1)((uint)param_1 >> 0x18);
  local_c._0_3_ = CONCAT12(local_res8,(short)param_1);
  uStackX_a = (undefined1)((uint)param_1 >> 0x10);
  local_c = CONCAT31(local_c._1_3_,uStackX_a);
  return local_c;
}

