/* Ghidra address: 00832f30 */
/* Ghidra symbol: FUN_00832f30 */


undefined8 FUN_00832f30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_00832180(param_2);
  if (cVar1 == '\0') {
    FUN_00831b60(param_1,param_2,param_3,0x20);
  }
  else {
    FUN_00832980(param_1,param_2,param_3,0x20);
  }
  return param_1;
}

