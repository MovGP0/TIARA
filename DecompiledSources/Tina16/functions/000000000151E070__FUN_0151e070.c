/* Ghidra address: 0151e070 */
/* Ghidra symbol: FUN_0151e070 */


void FUN_0151e070(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  longlong *plVar5;
  longlong lVar6;
  double dVar7;
  char local_3a;
  undefined1 local_39 [17];
  
  uVar1 = *(undefined8 *)(param_1 + 0xec8);
  cVar2 = FUN_004113d0(uVar1,&PTR_FUN_01514820);
  if (cVar2 != '\0') {
    plVar5 = (longlong *)FUN_004113f0(uVar1,&PTR_FUN_01514820);
    local_3a = '\0';
    *(short *)((longlong)plVar5 + 0xe2) = *(short *)((longlong)plVar5 + 0xe2) + 1;
    uVar3 = (**(code **)(*plVar5 + 0x140))(plVar5);
    uVar4 = (**(code **)(*plVar5 + 0x128))(plVar5);
    if ((double)*(ushort *)((longlong)plVar5 + 0xe2) <= (double)uVar3 / (double)uVar4) {
      if ((char)plVar5[0x1c] == '\0') {
        FUN_01517d90(plVar5,param_1 + 0x880,local_39);
      }
      if ((char)plVar5[0x1e] == '\0') {
        if (*(longlong *)(param_2 + 0x10) ==
            plVar5[10] + 0x148 + (ulonglong)*(byte *)(param_1 + 0x7f9) * 0x20 +
            (longlong)*(int *)(param_1 + 0x7e8) * 8) {
          lVar6 = FUN_004113f0(*(undefined8 *)
                                (plVar5[10] + 0x148 + (ulonglong)*(byte *)(param_1 + 0x7f9) * 0x20 +
                                (longlong)*(int *)(param_1 + 0x7e8) * 8),&PTR_FUN_0150a9d8);
          plVar5[0x1d] = *(longlong *)(*(longlong *)(lVar6 + 0xee0) + 0x90);
        }
        else {
          dVar7 = (double)(**(code **)(**(longlong **)(param_1 + 0xec8) + 0x110))
                                    (*(longlong **)(param_1 + 0xec8));
          uVar3 = (**(code **)(**(longlong **)(param_1 + 0xec8) + 0x128))
                            (*(longlong **)(param_1 + 0xec8));
          plVar5[0x1d] = (longlong)((double)plVar5[0x1d] + dVar7 * (double)uVar3);
        }
        FUN_01518b90(plVar5,&local_3a);
        FUN_01506c70(param_1);
        if (local_3a != '\0') {
          FUN_010f67e0(param_1,1,1);
        }
      }
    }
    else {
      *(undefined1 *)((longlong)plVar5 + 0x79) = 1;
      (**(code **)(*plVar5 + 0x178))(plVar5);
      *(undefined2 *)((longlong)plVar5 + 0xe2) = 0;
    }
  }
  return;
}

