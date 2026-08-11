/* Ghidra address: 0077e790 */
/* Ghidra symbol: FUN_0077e790 */


undefined8 FUN_0077e790(longlong param_1)

{
  undefined8 uVar1;
  
  if (((*(char *)(param_1 + 0x68) == '\0') || (*(char *)(param_1 + 0x6a) == '\0')) ||
     (*(char *)(param_1 + 0x69) == '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

