/* Ghidra address: 007f9db0 */
/* Ghidra symbol: FUN_007f9db0 */


void FUN_007f9db0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_2 + 0xa9) != '\0') {
    cVar1 = *(char *)(param_2 + 0xad);
    if ((cVar1 == '\0') || (cVar1 == '\x03')) {
      if ((*(char *)(param_2 + 0xad) == '\x03') || ((*(byte *)(param_2 + 0xb3) & 5) == 1)) {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x50) + 0x14) + *(int *)(param_2 + 0x90) +
                *(int *)(param_2 + 0x98);
        iVar2 = *(int *)(param_1 + 0x2c);
        if (*(int *)(param_1 + 0x2c) <= iVar3) {
          iVar2 = iVar3;
        }
        *(int *)(param_1 + 0x2c) = iVar2;
      }
    }
    else if (cVar1 == '\x04') {
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + *(int *)(param_2 + 0x98);
    }
  }
  return;
}

