/* Ghidra address: 012340d0 */
/* Ghidra symbol: FUN_012340d0 */


void FUN_012340d0(longlong param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x860) + 0xa8))(*(longlong **)(param_1 + 0x860));
  if (cVar1 != '\0') {
    DAT_02107718 = *(undefined4 *)(*(longlong *)(param_1 + 0x860) + 0xd0);
    FUN_0122b3a0(param_1,DAT_021076a8);
  }
  return;
}

