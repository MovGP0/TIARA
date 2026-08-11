/* Ghidra address: 0147fe90 */
/* Ghidra symbol: FUN_0147fe90 */


undefined8 FUN_0147fe90(int *param_1,undefined8 *param_2)

{
  int local_10;
  int iStack_c;
  
  local_10 = (int)*param_2;
  iStack_c = (int)((ulonglong)*param_2 >> 0x20);
  return CONCAT44(param_1[1] + iStack_c,*param_1 + local_10);
}

