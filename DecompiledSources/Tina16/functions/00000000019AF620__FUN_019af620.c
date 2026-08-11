/* Ghidra address: 019af620 */
/* Ghidra symbol: FUN_019af620 */


void FUN_019af620(undefined8 param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_2,iVar4);
      if ((plVar3 != (longlong *)0x0) && (cVar1 = FUN_0198a580(plVar3), cVar1 == '\x04')) {
        sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if ((sVar2 == 0x39) &&
           (((char)plVar3[0x34] == '\x01' && (*(longlong *)(plVar3[0x35] + 8) != 0)))) {
          FUN_019af620(param_1,*(undefined8 *)(plVar3[0x35] + 8));
        }
        else {
          sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
          if ((sVar2 == 0x39) && ((char)plVar3[0x34] == '\x02')) {
            *(undefined1 *)(plVar3[0x35] + 0x111) = 0;
          }
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

