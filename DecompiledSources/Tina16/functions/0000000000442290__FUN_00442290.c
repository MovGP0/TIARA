/* Ghidra address: 00442290 */
/* Ghidra symbol: FUN_00442290 */


double FUN_00442290(uint param_1)

{
  double dVar1;
  double dVar2;
  undefined2 local_res8;
  undefined2 uStackX_a;
  
  uStackX_a = (ushort)(param_1 >> 0x10);
  dVar1 = (double)FUN_00448c80((uStackX_a >> 9) + 0x7bc,uStackX_a >> 5 & 0xf,uStackX_a & 0x1f);
  local_res8 = (ushort)param_1;
  dVar2 = (double)FUN_00448a90(local_res8 >> 0xb,local_res8 >> 5 & 0x3f,(param_1 & 0x1f) * 2,0);
  return dVar1 + dVar2;
}

