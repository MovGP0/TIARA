/* Ghidra address: 005b2d10 */
/* Ghidra symbol: FUN_005b2d10 */


void FUN_005b2d10(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  byte bVar6;
  
  if (param_2 != *(int *)((longlong)param_1 + 0xdc)) {
    bVar6 = *(byte *)(param_1 + 0x1b);
    if (((bVar6 & 0 < param_2) != 0) && (param_1[0x18] != 0)) {
      iVar2 = FUN_005b4540();
      iVar5 = 0;
      if (-1 < iVar2 + -1) {
        do {
          plVar3 = (longlong *)FUN_005b4350(param_1[0x18],iVar5);
          if (((plVar3 != param_1) && (*(int *)((longlong)plVar3 + 0xdc) == param_2)) &&
             ((char)plVar3[0x1b] != '\0')) {
            bVar6 = 0;
            break;
          }
          iVar5 = iVar5 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
    iVar2 = FUN_004d4cf0();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar4 = FUN_004d4cc0(param_1,iVar5);
        cVar1 = FUN_004113d0(uVar4,&PTR_FUN_005af7a8);
        if (cVar1 != '\0') {
          if (bVar6 != *(byte *)(param_1 + 0x1b)) {
            plVar3 = (longlong *)FUN_004d4cc0(param_1,iVar5);
            (**(code **)(*plVar3 + 0xb0))(plVar3,bVar6);
          }
          plVar3 = (longlong *)FUN_004d4cc0(param_1,iVar5);
          (**(code **)(*plVar3 + 0xc0))(plVar3,param_2);
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    *(byte *)(param_1 + 0x1b) = bVar6;
    *(int *)((longlong)param_1 + 0xdc) = param_2;
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  return;
}

