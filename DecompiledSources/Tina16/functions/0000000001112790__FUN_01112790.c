/* Ghidra address: 01112790 */
/* Ghidra symbol: FUN_01112790 */


void FUN_01112790(longlong param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  code *pcVar3;
  
  if (*(char *)(param_1 + 0x658) != '\0') {
    cVar2 = FUN_01114230(param_1);
    if (cVar2 == '\x01') {
      if (*(char *)(param_1 + 0x613) != '\0') {
        *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 1;
      }
      if (*(char *)(param_1 + 0x616) != '\0') {
        *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) | 0x80;
      }
      *(ushort *)(param_1 + 0x5be) = *(ushort *)(param_1 + 0x5be) & 0xfff9;
      FUN_01111400(param_1);
    }
  }
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0x638) = 0;
  }
  else if (iVar1 == 2) {
    *(undefined1 *)(param_1 + 0x638) = 1;
  }
  else if (iVar1 == 4) {
    *(undefined1 *)(param_1 + 0x638) = 2;
  }
  else if (iVar1 == 8) {
    *(undefined1 *)(param_1 + 0x638) = 3;
  }
  pcVar3 = (code *)FUN_00411550(param_1,0xffa9);
  (*pcVar3)(param_1);
  return;
}

