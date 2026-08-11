/* Ghidra address: 0196c000 */
/* Ghidra symbol: FUN_0196c000 */


void FUN_0196c000(longlong *param_1,undefined4 param_2,undefined2 param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  (**(code **)(*param_1 + 0xd8))
            (param_1,(((double)param_1[0x47] - (double)param_1[0x35]) - (double)param_1[0x39]) *
                     DAT_01fb7da0);
  (**(code **)(*param_1 + 0xe0))
            (param_1,(((double)param_1[0x45] - (double)param_1[0x3c]) - (double)param_1[0x2f]) *
                     DAT_01fb7da0);
  FUN_01953280(param_1,param_2,param_3);
  iVar2 = (**(code **)(*(longlong *)param_1[0x10] + 0x30))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar3 = (longlong *)
               (**(code **)(*(longlong *)param_1[0x10] + 0x20))((longlong *)param_1[0x10],iVar4);
      cVar1 = FUN_004113d0(plVar3,&PTR_FUN_0192c3a0);
      if (cVar1 != '\0') {
        if (*(char *)((longlong)plVar3 + 0x1cc) == '\0') {
          if (((((int)param_1[0x30] < 2) ||
               (cVar1 = FUN_004113d0(plVar3,&PTR_FUN_01933ed0), cVar1 != '\0')) ||
              (cVar1 = FUN_004113d0(plVar3,&PTR_FUN_01932e38), cVar1 != '\0')) ||
             (((cVar1 = FUN_004113d0(plVar3,&PTR_FUN_01930480), cVar1 != '\0' ||
               (cVar1 = FUN_004113d0(plVar3,&PTR_FUN_01930a20), cVar1 != '\0')) ||
              ((cVar1 = FUN_004113d0(plVar3,&PTR_FUN_01932898), cVar1 != '\0' ||
               (cVar1 = FUN_004113d0(plVar3,&PTR_FUN_01933a98), cVar1 != '\0')))))) {
            (**(code **)(*plVar3 + 0xd8))(plVar3,(double)param_1[0x15] - (double)plVar3[0x13]);
          }
          else {
            (**(code **)(*plVar3 + 0xd8))(plVar3,(double)param_1[0x31] * DAT_01fb7da0);
          }
        }
        else {
          (**(code **)(*plVar3 + 0xe0))
                    (plVar3,(((double)param_1[0x45] - (double)param_1[0x3c]) - (double)param_1[0x2f]
                            ) * DAT_01fb7da0 - (double)plVar3[0x14]);
        }
        (**(code **)(*plVar3 + 0x178))(plVar3,param_3);
        (**(code **)(*plVar3 + 0x198))(plVar3,param_2,param_3);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_0196baa0(param_1);
  return;
}

