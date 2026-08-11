/* Ghidra address: 0045c830 */
/* Ghidra symbol: FUN_0045c830 */


undefined8 FUN_0045c830(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if ((((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) &&
     (param_1[3] == param_2[3])) {
    uVar1 = CONCAT71((int7)((ulonglong)param_1[3] >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

