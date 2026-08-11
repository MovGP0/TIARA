/* Ghidra address: 00a06460 */
/* Ghidra symbol: FUN_00a06460 */


void FUN_00a06460(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  if (*param_2 != 0) {
    iVar4 = *(int *)(*param_2 + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        pcVar2 = (char *)FUN_004aeac0(*param_2,iVar3);
        if (pcVar2 != (char *)0x0) {
          cVar1 = *pcVar2;
          if (cVar1 == DAT_01e6e058) {
            FUN_00a06400(param_1,pcVar2 + 8);
          }
          else if (cVar1 == DAT_01e6e059) {
            FUN_00a06400(param_1,pcVar2 + 0x30);
          }
          else if (cVar1 == DAT_01e6e05a) {
            FUN_00a06400(param_1,pcVar2 + 0x18);
          }
          FUN_004095f0(pcVar2);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00410f20(*param_2);
  }
  *param_2 = 0;
  return;
}

