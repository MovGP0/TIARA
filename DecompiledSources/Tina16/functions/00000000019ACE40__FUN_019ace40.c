/* Ghidra address: 019ace40 */
/* Ghidra symbol: FUN_019ace40 */


void FUN_019ace40(longlong param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 local_48;
  longlong local_40 [2];
  undefined8 local_30 [2];
  
  local_40[0] = 0;
  local_48 = 0;
  local_30[0] = 0;
  iVar6 = *(int *)(param_2 + 0x10);
  iVar5 = 0;
  if (-1 < iVar6 + -1) {
    do {
      plVar4 = (longlong *)FUN_00b94e60(param_2,iVar5);
      cVar1 = FUN_0198a580(plVar4);
      if ((((cVar1 == '\x04') && (sVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4), sVar2 != 0x3a)) &&
          (sVar2 = (**(code **)(*plVar4 + 0xf8))(plVar4), sVar2 != 0x96)) &&
         (*(int *)((longlong)plVar4 + 0x18c) < 2)) {
        if (((*(char *)(param_1 + 0x60) == '\0') || (cVar1 = FUN_01d04d50(plVar4), cVar1 == '\0'))
           || ((*(char *)(plVar4[0x35] + 0xb0) != '\0' ||
               ((*(longlong *)(plVar4[0x35] + 8) == 0 ||
                (cVar1 = FUN_019af180(*(undefined8 *)(plVar4[0x35] + 8)), cVar1 != '\0')))))) {
LAB_019acf7f:
          (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))
                    (*(longlong **)(param_1 + 0x28),plVar4);
        }
        else {
          FUN_01d04330(plVar4,local_40);
          if (local_40[0] != 0) {
            FUN_01d04330(plVar4,&local_48);
            iVar3 = FUN_004170c0(L"NOPCB",local_48,1);
            if (iVar3 < 1) goto LAB_019acf7f;
          }
          FUN_019ace40(param_1,*(undefined8 *)(plVar4[0x35] + 8));
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_00414560(&local_48,2);
  FUN_00414480(local_30);
  return;
}

