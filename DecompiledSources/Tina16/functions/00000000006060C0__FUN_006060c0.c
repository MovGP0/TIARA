/* Ghidra address: 006060c0 */
/* Ghidra symbol: FUN_006060c0 */


undefined8 FUN_006060c0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10);
  }
  return uVar1;
}

