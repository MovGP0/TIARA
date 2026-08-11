/* Ghidra address: 019b9990 */
/* Ghidra symbol: FUN_019b9990 */


int FUN_019b9990(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  
  iVar4 = 0;
  for (pcVar1 = *(char **)(param_2 + 8); pcVar1 != (char *)0x0; pcVar1 = *(char **)(pcVar1 + 0xb0))
  {
    cVar3 = *pcVar1;
    if (((((byte)(cVar3 - 5U) < 4) || ((byte)(cVar3 - 0x21U) < 2)) || (cVar3 == 'b')) ||
       (cVar3 == 'w')) {
      lVar2 = *(longlong *)(pcVar1 + 0xa8);
      cVar3 = *(char *)(param_2 + 0xb4);
      if (cVar3 == '\0') {
        iVar4 = iVar4 + 1;
      }
      else if (cVar3 == '\x01') {
        iVar4 = iVar4 + 1;
      }
      else if (cVar3 == '\x02') {
        iVar4 = iVar4 + 1;
      }
      else if ((byte)(cVar3 - 3U) < 2) {
        cVar3 = FUN_019b5b20(*(undefined8 *)(param_2 + 0xe78));
        if ((cVar3 == '\x01') && (lVar2 != 0)) {
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
  }
  return iVar4;
}

