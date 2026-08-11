/* Ghidra address: 00a9d850 */
/* Ghidra symbol: FUN_00a9d850 */


undefined8 FUN_00a9d850(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x40) == '\x11') {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x28))(*(longlong **)(param_1 + 0xa8));
  }
  return uVar1;
}

