/* Ghidra address: 01a9a4c0 */
/* Ghidra symbol: FUN_01a9a4c0 */


undefined8 FUN_01a9a4c0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x128) == '\0') {
    uVar1 = FUN_01a90ee0(param_2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

