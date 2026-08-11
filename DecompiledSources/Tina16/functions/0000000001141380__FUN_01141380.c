/* Ghidra address: 01141380 */
/* Ghidra symbol: FUN_01141380 */


void FUN_01141380(longlong param_1,longlong param_2)

{
  if (param_2 == *(longlong *)(param_1 + 0x708)) {
    *(byte *)(param_1 + 0x1055d4) = *(byte *)(param_1 + 0x1055d4) | 2;
  }
  else {
    *(byte *)(param_1 + 0x1055d4) = *(byte *)(param_1 + 0x1055d4) | 1;
  }
  *(undefined1 *)(param_1 + 0x1007b2) = 0;
  FUN_011413d0();
  return;
}

