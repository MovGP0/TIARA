/* Ghidra address: 01369ed0 */
/* Ghidra symbol: FUN_01369ed0 */


undefined8 FUN_01369ed0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_01994fd0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x27a8));
  if ((int)uVar1 == -1) {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

