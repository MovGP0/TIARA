/* Ghidra address: 01ab6110 */
/* Ghidra symbol: FUN_01ab6110 */


void FUN_01ab6110(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + 0xe8);
  if (1 < *(int *)(param_1 + 0x48)) {
    (**(code **)(*(longlong *)param_2[0xf] + 0x10))
              ((longlong *)param_2[0xf],*(undefined8 *)(param_1 + 0x60));
    (**(code **)(*param_2 + 200))
              (param_2,**(undefined4 **)(param_1 + 0x50),(*(undefined4 **)(param_1 + 0x50))[1]);
    iVar3 = 2;
    if (1 < *(int *)(param_1 + 0x48)) {
      iVar4 = *(int *)(param_1 + 0x48) + -1;
      do {
        if ((((*(int *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar3 * 8) == -10000) ||
             (*(int *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)iVar3 * 8) == -10000)) ||
            (*(int *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)(iVar3 + -1) * 8) == -10000))
           || (*(int *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)(iVar3 + -1) * 8) == -10000))
        {
          FUN_01ab5fc0(param_1,param_2,iVar3);
        }
        else {
          FUN_00498350(local_38,0,0,0,0);
          iVar2 = thunk_FUN_03b7fa88(param_1 + 0x14,local_38);
          if (iVar2 == 0) {
            local_40 = FUN_00498310(*(undefined4 *)
                                     (*(longlong *)(param_1 + 0x50) + -8 +
                                     (longlong)(iVar3 + -1) * 8),
                                    *(undefined4 *)
                                     (*(longlong *)(param_1 + 0x50) + -4 +
                                     (longlong)(iVar3 + -1) * 8));
            cVar1 = FUN_01a8e4c0(param_1 + 0x14,&local_40);
            if (cVar1 != '\0') {
              local_40 = FUN_00498310(*(undefined4 *)
                                       (*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar3 * 8),
                                      *(undefined4 *)
                                       (*(longlong *)(param_1 + 0x50) + -4 + (longlong)iVar3 * 8));
              cVar1 = FUN_01a8e4c0(param_1 + 0x14,&local_40);
              if (cVar1 != '\0') goto LAB_01ab62ab;
            }
            local_40 = FUN_00498310(*(undefined4 *)
                                     (*(longlong *)(param_1 + 0x50) + -8 +
                                     (longlong)(iVar3 + -1) * 8),
                                    *(undefined4 *)
                                     (*(longlong *)(param_1 + 0x50) + -4 +
                                     (longlong)(iVar3 + -1) * 8));
            FUN_00498310(*(undefined4 *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)iVar3 * 8),
                         *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)iVar3 * 8));
            FUN_01d2b6e0(param_1);
          }
          else {
LAB_01ab62ab:
            (**(code **)(*param_2 + 200))
                      (param_2,*(undefined4 *)
                                (*(longlong *)(param_1 + 0x50) + -8 + (longlong)(iVar3 + -1) * 8),
                       *(undefined4 *)
                        (*(longlong *)(param_1 + 0x50) + -4 + (longlong)(iVar3 + -1) * 8));
            (**(code **)(*param_2 + 0xc0))(param_2);
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x48);
  }
  return;
}

