/* Ghidra address: 01c7da00 */
/* Ghidra symbol: FUN_01c7da00 */


undefined8 FUN_01c7da00(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x27a8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_012bedf0(*(undefined8 *)(*(longlong *)(param_1 + 0x27a8) + 0xd8),
                         *(undefined2 *)(param_1 + 0x17f0));
  }
  return uVar1;
}

