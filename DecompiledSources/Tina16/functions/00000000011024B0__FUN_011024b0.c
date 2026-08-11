/* Ghidra address: 011024b0 */
/* Ghidra symbol: FUN_011024b0 */


void FUN_011024b0(longlong param_1)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + -1;
  if (*(int *)(param_1 + 0x128) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x100);
    *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(lVar1 + 0xc0) = *(undefined8 *)(param_1 + 0x118);
  }
  return;
}

