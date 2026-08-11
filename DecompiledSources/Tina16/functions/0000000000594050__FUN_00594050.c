/* Ghidra address: 00594050 */
/* Ghidra symbol: FUN_00594050 */


undefined8 FUN_00594050(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  
  if ((param_2[1] == param_3[1]) && (*param_2 == *param_3)) {
    uVar1 = CONCAT71((int7)((ulonglong)*param_2 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

