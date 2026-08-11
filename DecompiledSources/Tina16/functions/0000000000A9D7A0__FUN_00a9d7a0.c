/* Ghidra address: 00a9d7a0 */
/* Ghidra symbol: FUN_00a9d7a0 */


undefined8 FUN_00a9d7a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *param_4 = 0;
  if (*(char *)(param_1 + 0x40) == '\x11') {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00a9bfa0(*(undefined8 *)(param_1 + 0xa8));
  }
  return uVar1;
}

