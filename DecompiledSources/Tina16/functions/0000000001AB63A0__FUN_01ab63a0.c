/* Ghidra address: 01ab63a0 */
/* Ghidra symbol: FUN_01ab63a0 */


void FUN_01ab63a0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  if (1 < *(int *)(param_1 + 0x48)) {
    plVar3 = (longlong *)FUN_005fd250(&PTR_FUN_005f3290,1);
    (**(code **)(*plVar3 + 0x10))(plVar3,param_2[0xf]);
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))
              ((longlong *)param_2[0xf],*(undefined8 *)(param_1 + 0x60));
    (**(code **)(*param_2 + 200))
              (param_2,**(undefined4 **)(param_1 + 0x50),(*(undefined4 **)(param_1 + 0x50))[1]);
    iVar6 = *(int *)(param_1 + 0x114);
    if (iVar6 < 2) {
      iVar6 = 2;
    }
    if (iVar6 <= *(int *)(param_1 + 0x48)) {
      iVar7 = (*(int *)(param_1 + 0x48) - iVar6) + 1;
      do {
        if ((((*(int *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar6 * 8) == -10000) ||
             (*(int *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)iVar6 * 8) == -10000)) ||
            (*(int *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)(iVar6 + -1) * 8) == -10000))
           || (*(int *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)(iVar6 + -1) * 8) == -10000))
        {
          if ((*(int *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar6 * 8) == -10000) &&
             (*(int *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)iVar6 * 8) == -10000)) {
            FUN_01ab5fc0(param_1,param_2,iVar6);
            plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x88);
            uVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,0);
            plVar5 = (longlong *)FUN_004113f0(uVar4,&PTR_FUN_01cd9128);
            (**(code **)(*plVar5 + 0x70))(plVar5,param_2);
          }
        }
        else {
          FUN_00498350(local_38,0,0,0,0);
          iVar2 = thunk_FUN_03b7fa88(param_1 + 0x14,local_38);
          if (iVar2 == 0) {
            local_40 = FUN_00498310(*(undefined4 *)
                                     (*(longlong *)(param_1 + 0x50) + -8 +
                                     (longlong)(iVar6 + -1) * 8),
                                    *(undefined4 *)
                                     (*(longlong *)(param_1 + 0x50) + -4 +
                                     (longlong)(iVar6 + -1) * 8));
            cVar1 = FUN_01a8e4c0(param_1 + 0x14,&local_40);
            if (cVar1 != '\0') {
              local_40 = FUN_00498310(*(undefined4 *)
                                       (*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar6 * 8),
                                      *(undefined4 *)
                                       (*(longlong *)(param_1 + 0x50) + -4 + (longlong)iVar6 * 8));
              cVar1 = FUN_01a8e4c0(param_1 + 0x14,&local_40);
              if (cVar1 != '\0') goto LAB_01ab655b;
            }
            local_40 = FUN_00498310(*(undefined4 *)
                                     (*(longlong *)(param_1 + 0x50) + -8 +
                                     (longlong)(iVar6 + -1) * 8),
                                    *(undefined4 *)
                                     (*(longlong *)(param_1 + 0x50) + -4 +
                                     (longlong)(iVar6 + -1) * 8));
            FUN_00498310(*(undefined4 *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar6 * 8),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)iVar6 * 8));
            FUN_01d2b6e0(param_1);
          }
          else {
LAB_01ab655b:
            (**(code **)(*param_2 + 200))
                      (param_2,*(undefined4 *)
                                (*(longlong *)(param_1 + 0x50) + -8 + (longlong)(iVar6 + -1) * 8),
                       *(undefined4 *)
                        (*(longlong *)(param_1 + 0x50) + -4 + (longlong)(iVar6 + -1) * 8));
            (**(code **)(*param_2 + 0xc0))(param_2);
          }
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x48);
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))((longlong *)param_2[0xf],plVar3);
    FUN_00410f20(plVar3);
  }
  return;
}

