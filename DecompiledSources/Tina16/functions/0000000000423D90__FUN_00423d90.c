/* Ghidra address: 00423d90 */
/* Ghidra symbol: FUN_00423d90 */


void FUN_00423d90(undefined2 *param_1,undefined4 param_2)

{
  undefined2 local_res10;
  undefined2 uStackX_12;
  
  local_res10 = (undefined2)param_2;
  *param_1 = local_res10;
  uStackX_12 = (undefined2)((uint)param_2 >> 0x10);
  param_1[1] = uStackX_12;
  return;
}

