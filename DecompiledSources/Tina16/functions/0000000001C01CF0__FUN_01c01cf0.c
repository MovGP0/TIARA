/* Ghidra address: 01c01cf0 */
/* Ghidra symbol: FUN_01c01cf0 */


void FUN_01c01cf0(longlong *param_1,char param_2)

{
  undefined1 uVar1;
  char cVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  
  if ((*(char *)((longlong)param_1 + 0x4c1) != param_2) &&
     (*(char *)((longlong)param_1 + 0x4c1) = param_2,
     (*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) {
    if (((param_1[0x93] != 0) && (lVar5 = FUN_01c019a0(param_1), *(char *)(lVar5 + 0x40) == '\0'))
       || (*(char *)(param_1[0x93] + 0x59) == '\0')) {
      if (*(char *)((longlong)param_1 + 0x4c1) == '\0') {
        (**(code **)(*param_1 + 0x128))(param_1,*(undefined1 *)((longlong)param_1 + 0x4c2));
      }
      else {
        uVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
        *(undefined1 *)((longlong)param_1 + 0x4c2) = uVar1;
        (**(code **)(*param_1 + 0x128))(param_1,0);
      }
    }
    cVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
      if ((cVar2 == '\0') || (cVar2 = FUN_01c02d10(param_1), cVar2 == '\0')) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
      *(undefined1 *)(param_1 + 0xa6) = uVar1;
      param_1[0xa2] = param_1[0x13];
    }
    cVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    if (((cVar2 == '\0') && ((char)param_1[0xa6] == '\0')) ||
       (uVar6 = (**(code **)(*param_1 + 0x2e8))(param_1), (int)uVar6 < 1)) {
      uVar4 = 0;
    }
    else {
      uVar4 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
    }
    (**(code **)(*param_1 + 0x310))(param_1,uVar4);
    cVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
    if (cVar2 == '\0') {
      if (*(byte *)((longlong)param_1 + 0x4c3) < 2) {
        FUN_0064cc50(param_1,*(undefined4 *)((longlong)param_1 + 0x514));
      }
      else if ((byte)(*(byte *)((longlong)param_1 + 0x4c3) - 2) < 2) {
        FUN_0064cbf0(param_1,(int)param_1[0xa2]);
      }
    }
    lVar5 = FUN_01c019a0();
    iVar10 = *(int *)(*(longlong *)(lVar5 + 0x10) + 0x10);
    iVar9 = 0;
    if (-1 < iVar10 + -1) {
      do {
        uVar6 = FUN_01c019a0(param_1);
        lVar5 = FUN_01bfb960(uVar6,iVar9);
        plVar8 = *(longlong **)(lVar5 + 0x80);
        if (plVar8 != (longlong *)0x0) {
          if (*(char *)((longlong)param_1 + 0x4c1) == '\0') {
            (**(code **)(*plVar8 + 0x120))(plVar8,0);
            if (*(char *)(lVar5 + 0x58) == '\0') {
              FUN_0064dbe0(*(undefined8 *)(lVar5 + 0x80),0);
            }
            lVar7 = FUN_01bfd980(lVar5);
            if (lVar7 == 0) {
              (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x128))(*(longlong **)(lVar5 + 0x80),1);
            }
            else {
              plVar8 = (longlong *)FUN_01bfd980(lVar5);
              (**(code **)(*plVar8 + 0xb8))(plVar8);
            }
            (**(code **)(**(longlong **)(lVar5 + 0x80) + 600))(*(longlong **)(lVar5 + 0x80),0);
          }
          else {
            if (*(char *)((longlong)plVar8 + 0xa9) == '\0') {
              FUN_0064dbe0(plVar8,1);
            }
            if ((*(char *)(lVar5 + 0x59) == '\0') || (*(char *)(param_1[0x93] + 0x59) == '\0')) {
              uVar4 = 0;
            }
            else {
              uVar4 = 1;
            }
            (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x128))(*(longlong **)(lVar5 + 0x80),uVar4)
            ;
            cVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
            if (((cVar2 == '\0') || ((*(byte *)(param_1[0x93] + 0x59) & 2) == 0)) &&
               ((*(byte *)(param_1[0x93] + 0x59) & 4) == 0)) {
              bVar3 = 0;
            }
            else {
              bVar3 = 1;
            }
            (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x120))
                      (*(longlong **)(lVar5 + 0x80),(&DAT_01fe216c)[bVar3]);
          }
        }
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  return;
}

