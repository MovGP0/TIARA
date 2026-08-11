/* Ghidra address: 019ad020 */
/* Ghidra symbol: FUN_019ad020 */


void FUN_019ad020(longlong param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50 [2];
  undefined8 local_40 [2];
  
  local_60 = 0;
  local_68 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_40[0] = 0;
  iVar8 = *(int *)(param_2 + 0x10);
  iVar7 = 0;
  if (-1 < iVar8 + -1) {
    do {
      plVar4 = (longlong *)FUN_00b94e60(param_2,iVar7);
      cVar1 = FUN_0198a580(plVar4);
      if ((((cVar1 == '\x04') && (sVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4), sVar2 != 0x3a)) &&
          (sVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4), sVar2 != 0x96)) &&
         (*(int *)((longlong)plVar4 + 0x18c) < 2)) {
        if (((*(char *)(param_1 + 0x60) == '\0') || (cVar1 = FUN_01d04d50(plVar4), cVar1 == '\0'))
           || ((*(char *)(plVar4[0x35] + 0xb0) != '\0' ||
               ((*(longlong *)(plVar4[0x35] + 8) == 0 ||
                (cVar1 = FUN_019af180(*(undefined8 *)(plVar4[0x35] + 8)), cVar1 != '\0')))))) {
LAB_019ad176:
          (**(code **)(*plVar4 + 0x288))(plVar4,local_40);
          lVar5 = FUN_019a43f0(*(undefined8 *)(param_1 + 0x28),local_40[0],plVar4);
          if (lVar5 != 0) {
            uVar6 = FUN_0198d430(param_2);
            (**(code **)(*plVar4 + 0x128))(plVar4,&local_68);
            FUN_019a44e0(*(undefined8 *)(param_1 + 0x28),&local_60,local_68,plVar4);
            FUN_017bf050(plVar4,uVar6,local_60);
          }
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))
                    (*(longlong **)(param_1 + 0x28),plVar4);
        }
        else {
          FUN_01d04330(plVar4,local_50);
          if (local_50[0] != 0) {
            FUN_01d04330(plVar4,&local_58);
            iVar3 = FUN_004170c0(L"NOPCB",local_58,1);
            if (iVar3 < 1) goto LAB_019ad176;
          }
          FUN_019ad020(param_1,*(undefined8 *)(plVar4[0x35] + 8));
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  FUN_00414560(&local_68,4);
  FUN_00414480(local_40);
  return;
}

