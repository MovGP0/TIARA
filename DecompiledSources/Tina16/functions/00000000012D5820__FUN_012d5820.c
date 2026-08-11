/* Ghidra address: 012d5820 */
/* Ghidra symbol: FUN_012d5820 */


undefined1 FUN_012d5820(longlong param_1,char param_2)

{
  undefined1 uVar1;
  
  if (param_2 == '\x06') {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 6);
  }
  else if (param_2 == '\b') {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 7);
  }
  else {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 8);
  }
  return uVar1;
}

