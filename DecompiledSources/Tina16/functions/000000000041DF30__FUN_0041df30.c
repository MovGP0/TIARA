/* Ghidra address: 0041df30 */
/* Ghidra symbol: FUN_0041df30 */


undefined8 FUN_0041df30(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    uVar1 = CONCAT71((int7)((ulonglong)param_1[1] >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

