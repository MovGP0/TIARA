/* Ghidra address: 018ca3e0 */
/* Ghidra symbol: FUN_018ca3e0 */


void FUN_018ca3e0(longlong param_1,longlong *param_2,double param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01923c30);
  if (cVar1 == '\0') {
    dVar6 = (double)param_2[0x16];
  }
  else {
    dVar6 = (double)param_2[0x56];
    cVar1 = FUN_018cb070(*(undefined8 *)(param_1 + 0x90),param_2);
    if (cVar1 != '\0') {
      dVar6 = 1.7976931348623157e+308;
    }
  }
  iVar5 = *(int *)(*(longlong *)(param_1 + 0xa8) + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xa8),iVar4);
      if ((((plVar3 != param_2) &&
           (iVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x38),plVar3), iVar2 == -1)) &&
          ((double)param_2[0x14] + dVar6 <= (double)plVar3[0x14])) &&
         ((0.0001 < ((double)param_2[0x13] + (double)param_2[0x15]) - (double)plVar3[0x13] &&
          (0.0001 < ((double)plVar3[0x13] + (double)plVar3[0x15]) - (double)param_2[0x13])))) {
        (**(code **)(*plVar3 + 0xd0))(plVar3,(double)plVar3[0x14] + param_3);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x38),plVar3);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

