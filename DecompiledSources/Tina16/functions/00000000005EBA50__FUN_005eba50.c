/* Ghidra address: 005eba50 */
/* Ghidra symbol: FUN_005eba50 */


undefined4 FUN_005eba50(undefined8 param_1,undefined8 param_2)

{
  char local_1d;
  undefined4 local_1c [3];
  
  FUN_005ebde0(param_1,param_2,local_1c,4,&local_1d);
  if (local_1d != '\x03') {
    FUN_005ea1b0(param_2);
  }
  return local_1c[0];
}

