/* Ghidra address: 00ea7830 */
/* Ghidra symbol: FUN_00ea7830 */


undefined8 FUN_00ea7830(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = *(undefined8 *)(*param_1 + -8);
  }
  return uVar1;
}

