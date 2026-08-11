/* Ghidra address: 00b21880 */
/* Ghidra symbol: FUN_00b21880 */


undefined8 FUN_00b21880(ushort param_1,byte param_2,ushort *param_3)

{
  undefined8 uVar1;
  
  if ((((param_1 < *param_3) || (param_3[1] < param_1)) || (param_2 < (byte)param_3[2])) ||
     (*(byte *)((longlong)param_3 + 5) < param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

