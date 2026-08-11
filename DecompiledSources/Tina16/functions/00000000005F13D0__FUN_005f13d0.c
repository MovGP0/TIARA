/* Ghidra address: 005f13d0 */
/* Ghidra symbol: FUN_005f13d0 */


uint FUN_005f13d0(undefined4 param_1)

{
  undefined1 local_res8;
  undefined1 uStackX_9;
  undefined1 uStackX_a;
  undefined4 local_c;
  
  uStackX_a = (undefined1)((uint)param_1 >> 0x10);
  uStackX_9 = (undefined1)((uint)param_1 >> 8);
  local_res8 = (undefined1)param_1;
  local_c = (uint)CONCAT12(local_res8,CONCAT11(uStackX_9,uStackX_a));
  return local_c;
}

