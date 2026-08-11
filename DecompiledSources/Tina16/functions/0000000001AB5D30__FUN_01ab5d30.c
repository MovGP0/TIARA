/* Ghidra address: 01ab5d30 */
/* Ghidra symbol: FUN_01ab5d30 */


void FUN_01ab5d30(longlong param_1,longlong *param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined8 local_50;
  undefined1 local_48 [32];
  
  while (((1 < param_5 &&
          (*(int *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)param_5 * 8) != -10000)) &&
         (*(int *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)param_5 * 8) != -10000))) {
    param_5 = param_5 + -1;
  }
  while (((1 < param_5 &&
          (param_3 < *(int *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)param_5 * 8))) &&
         (*(int *)(param_1 + 0x118) <
          *(int *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)param_5 * 8)))) {
    param_5 = param_5 + -1;
  }
  if (1 < param_5) {
    (**(code **)(*param_2 + 200))
              (param_2,*(undefined4 *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)param_5 * 8),
               *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)param_5 * 8));
    while (*(int *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)param_5 * 8) < param_4) {
      FUN_00498350(local_48,0,0,0,0);
      iVar2 = thunk_FUN_03b7fa88(param_1 + 0x14,local_48);
      if (iVar2 == 0) {
        local_50 = FUN_00498310(*(undefined4 *)
                                 (*(longlong *)(param_1 + 0x50) + -8 + (longlong)param_5 * 8),
                                *(undefined4 *)
                                 (*(longlong *)(param_1 + 0x50) + -4 + (longlong)param_5 * 8));
        cVar1 = FUN_01a8e4c0(param_1 + 0x14,&local_50);
        if (cVar1 != '\0') {
          local_50 = FUN_00498310(*(undefined4 *)
                                   (*(longlong *)(param_1 + 0x50) + -8 + (longlong)(param_5 + 1) * 8
                                   ),*(undefined4 *)
                                      (*(longlong *)(param_1 + 0x50) + -4 +
                                      (longlong)(param_5 + 1) * 8));
          cVar1 = FUN_01a8e4c0(param_1 + 0x14,&local_50);
          if (cVar1 != '\0') goto LAB_01ab5e98;
        }
        local_50 = FUN_00498310(*(undefined4 *)
                                 (*(longlong *)(param_1 + 0x50) + -8 + (longlong)param_5 * 8),
                                *(undefined4 *)
                                 (*(longlong *)(param_1 + 0x50) + -4 + (longlong)param_5 * 8));
        FUN_00498310(*(undefined4 *)
                      (*(longlong *)(param_1 + 0x50) + -8 + (longlong)(param_5 + 1) * 8),
                     *(undefined4 *)
                      (*(longlong *)(param_1 + 0x50) + -4 + (longlong)(param_5 + 1) * 8));
        FUN_01d2b6e0(param_1);
      }
      else {
LAB_01ab5e98:
        (**(code **)(*param_2 + 200))
                  (param_2,*(undefined4 *)
                            (*(longlong *)(param_1 + 0x50) + -8 + (longlong)param_5 * 8),
                   *(undefined4 *)(*(longlong *)(param_1 + 0x50) + -4 + (longlong)param_5 * 8));
        (**(code **)(*param_2 + 0xc0))(param_2);
      }
      param_5 = param_5 + 1;
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x50) + -8 + (longlong)(param_5 + 1) * 8);
    if (iVar2 < *(int *)(*(longlong *)(param_1 + 0xf8) + 0xec)) {
      *(int *)(param_1 + 0x118) = iVar2;
    }
    else {
      *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(*(longlong *)(param_1 + 0xf8) + 0xe8);
    }
  }
  return;
}

