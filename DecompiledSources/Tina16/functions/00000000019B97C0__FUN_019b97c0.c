/* Ghidra address: 019b97c0 */
/* Ghidra symbol: FUN_019b97c0 */


int FUN_019b97c0(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = 0;
  for (pcVar1 = *(char **)(param_2 + 8); pcVar1 != (char *)0x0; pcVar1 = *(char **)(pcVar1 + 0xb0))
  {
    cVar3 = *pcVar1;
    if ((byte)(cVar3 - 0xdU) < 2) {
      lVar2 = *(longlong *)(pcVar1 + 0xa8);
      cVar3 = *(char *)(param_2 + 0xb4);
      if (cVar3 == '\0') {
        if (*(double *)(lVar2 + 0x40) != 0.0) {
          iVar4 = iVar4 + 1;
        }
      }
      else if (cVar3 == '\x01') {
        iVar4 = iVar4 + 1;
      }
      else if (cVar3 == '\x02') {
        iVar4 = iVar4 + 1;
      }
      else if ((byte)(cVar3 - 3U) < 2) {
        cVar3 = FUN_019b5b20(*(undefined8 *)(param_2 + 0xe78));
        if (cVar3 == '\x01') {
          if (((*(double *)(lVar2 + 0x40) != 0.0) || (*(double *)(lVar2 + 0x58) != 0.0)) ||
             (*(double *)(lVar2 + 0x60) != 0.0)) {
            iVar4 = iVar4 + 1;
          }
        }
        else {
          iVar4 = iVar4 + 1;
        }
      }
    }
    else if ((byte)(cVar3 - 0xfU) < 2) {
      cVar3 = *(char *)(param_2 + 0xb4);
      if (cVar3 == '\0') {
        if (*(double *)(*(longlong *)(pcVar1 + 0xa8) + 0x30) == 0.0) {
          iVar4 = iVar4 + 1;
        }
        else {
          iVar4 = iVar4 + 2;
        }
      }
      else if (cVar3 == '\x01') {
        iVar4 = iVar4 + 1;
      }
      else if (cVar3 == '\x02') {
        iVar4 = iVar4 + 1;
      }
      else if ((byte)(cVar3 - 3U) < 2) {
        if (*(double *)(*(longlong *)(pcVar1 + 0xa8) + 0x30) == 0.0) {
          iVar4 = iVar4 + 1;
        }
        else {
          iVar4 = iVar4 + 2;
        }
      }
    }
    else if ((((byte)(cVar3 - 0x25U) < 2) && ((byte)(*(char *)(param_2 + 0xb4) - 3U) < 2)) &&
            ((cVar3 = FUN_019b5b20(*(undefined8 *)(param_2 + 0xe78)), cVar3 == '\x01' &&
             (pcVar1[0xa4] != '\0')))) {
      iVar4 = iVar4 + -1;
    }
  }
  return iVar4;
}

