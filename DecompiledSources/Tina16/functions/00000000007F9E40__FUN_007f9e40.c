/* Ghidra address: 007f9e40 */
/* Ghidra symbol: FUN_007f9e40 */


void FUN_007f9e40(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_2 + 0xa9) != '\0') {
    if (*(byte *)(param_2 + 0xad) < 2) {
      if ((*(char *)(param_2 + 0xad) == '\x01') || ((*(byte *)(param_2 + 0xb3) & 10) == 2)) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x14) + *(int *)(param_2 + 0x94) +
                *(int *)(param_2 + 0x9c);
        iVar1 = *(int *)(param_1 + 0x2c);
        if (*(int *)(param_1 + 0x2c) <= iVar2) {
          iVar1 = iVar2;
        }
        *(int *)(param_1 + 0x2c) = iVar1;
      }
    }
    else if (*(byte *)(param_2 + 0xad) == 2) {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_2 + 0x9c);
    }
  }
  return;
}

