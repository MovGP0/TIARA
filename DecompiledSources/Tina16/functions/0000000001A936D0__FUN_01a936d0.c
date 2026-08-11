/* Ghidra address: 01a936d0 */
/* Ghidra symbol: FUN_01a936d0 */


undefined8 FUN_01a936d0(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 local_10;
  
  if (param_3 == '\0') {
    FUN_00596200(param_1 + 8,param_2,&local_10);
  }
  else {
    FUN_00596250(param_1 + 8,param_2,&local_10);
  }
  return local_10;
}

