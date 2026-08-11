/* Ghidra address: 008482f0 */
/* Ghidra symbol: FUN_008482f0 */


undefined1 FUN_008482f0(longlong param_1,int param_2)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x538) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x538) + (longlong)(param_2 + 1) * 4);
  }
  return uVar1;
}

