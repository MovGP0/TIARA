/* Ghidra address: 019af3d0 */
/* Ghidra symbol: FUN_019af3d0 */


void FUN_019af3d0(longlong param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_2 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_2,iVar5);
      if ((plVar3 != (longlong *)0x0) && (cVar1 = FUN_0198a580(plVar3), cVar1 == '\x04')) {
        sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3);
        if ((sVar2 == 0x39) &&
           (((char)plVar3[0x34] == '\x01' && (*(longlong *)(plVar3[0x35] + 8) != 0)))) {
          FUN_019af3d0(param_1,*(undefined8 *)(plVar3[0x35] + 8));
        }
        else {
          cVar1 = (**(code **)(*plVar3 + 0x2d8))(plVar3);
          if (cVar1 != '\0') {
            uVar4 = FUN_0198d430(*(undefined8 *)(param_1 + 0x30));
            (**(code **)(*(longlong *)plVar3[0x33] + 0x60))((longlong *)plVar3[0x33],uVar4);
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

