/* Ghidra address: 0161bbf0 */
/* Ghidra symbol: FUN_0161bbf0 */


undefined8 FUN_0161bbf0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 10) == '\0') || (*(byte *)(param_1 + 0xb) != param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

