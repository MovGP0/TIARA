/* Ghidra address: 004983c0 */
/* Ghidra symbol: FUN_004983c0 */


undefined8 FUN_004983c0(undefined4 param_1)

{
  undefined8 uVar1;
  undefined2 local_res8;
  undefined2 uStackX_a;
  
  local_res8 = (short)param_1;
  if ((local_res8 == -1) && (uStackX_a = (short)((uint)param_1 >> 0x10), uStackX_a == -1)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

