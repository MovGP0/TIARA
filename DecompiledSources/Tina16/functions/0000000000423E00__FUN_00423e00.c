/* Ghidra address: 00423e00 */
/* Ghidra symbol: FUN_00423e00 */


undefined4 FUN_00423e00(undefined4 param_1,undefined4 param_2)

{
  undefined2 local_res8;
  undefined2 uStackX_a;
  undefined2 local_res10;
  undefined2 uStackX_12;
  undefined4 local_c;
  
  local_res8 = (short)param_1;
  local_res10 = (short)param_2;
  uStackX_a = (short)((uint)param_1 >> 0x10);
  uStackX_12 = (short)((uint)param_2 >> 0x10);
  local_c = CONCAT22(uStackX_a + uStackX_12,local_res8 + local_res10);
  return local_c;
}

