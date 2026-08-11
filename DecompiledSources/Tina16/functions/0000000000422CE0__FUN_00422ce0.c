/* Ghidra address: 00422ce0 */
/* Ghidra symbol: FUN_00422ce0 */


undefined8 FUN_00422ce0(undefined4 param_1)

{
  undefined2 local_res8;
  undefined2 uStackX_a;
  
  local_res8 = (short)param_1;
  uStackX_a = (short)((uint)param_1 >> 0x10);
  return CONCAT44((int)uStackX_a,(int)local_res8);
}

