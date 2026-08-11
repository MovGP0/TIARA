/* Ghidra address: 00410d40 */
/* Ghidra symbol: FUN_00410d40 */


undefined8 FUN_00410d40(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if ((param_1[1] == param_2[1]) && (*param_1 == *param_2)) {
    uVar1 = CONCAT71((int7)((ulonglong)*param_1 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

