/* Ghidra address: 01ba15c0 */
/* Ghidra symbol: FUN_01ba15c0 */


undefined8 * FUN_01ba15c0(longlong param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  int local_24;
  int local_1c;
  
  local_24 = param_3 * 0x33;
  local_1c = local_24 + 0x33;
  if (0 < param_5) {
    local_24 = local_24 + *(int *)(param_1 + 0x73c);
    local_1c = local_1c + *(int *)(param_1 + 0x73c);
  }
  *param_2 = CONCAT44(local_24,param_4 * 0x33);
  param_2[1] = CONCAT44(local_1c,param_4 * 0x33 + 0x33);
  return param_2;
}

