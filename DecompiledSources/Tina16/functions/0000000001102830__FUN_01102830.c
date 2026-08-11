/* Ghidra address: 01102830 */
/* Ghidra symbol: FUN_01102830 */


void FUN_01102830(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  if ((((1 < (int)param_1[9]) && (cVar1 = (**(code **)(*param_1 + 0x58))(param_1), cVar1 != '\0'))
      && (param_2 <= param_3)) &&
     (param_2 <= *(int *)(param_1[10] + -8 + (longlong)(int)param_1[9] * 8))) {
    iVar3 = 1;
    while ((iVar3 < (int)param_1[9] && (*(int *)(param_1[10] + -8 + (longlong)iVar3 * 8) < param_2))
          ) {
      iVar3 = iVar3 + 1;
    }
    if (iVar3 < (int)param_1[9]) {
      if (DAT_02030109 == '\0') {
        while ((iVar3 <= (int)param_1[9] &&
               (*(int *)(param_1[10] + -8 + (longlong)iVar3 * 8) < param_3))) {
          FUN_00498350(local_38,0,0,0,0);
          iVar4 = thunk_FUN_03b7fa88((longlong)param_1 + 0x14,local_38);
          if (iVar4 == 0) {
            local_40 = FUN_00498310(*(undefined4 *)(param_1[10] + -8 + (longlong)iVar3 * 8),
                                    *(undefined4 *)(param_1[10] + -4 + (longlong)iVar3 * 8));
            cVar1 = FUN_01a8e4c0((longlong)param_1 + 0x14);
            if (cVar1 != '\0') goto LAB_01102b3a;
          }
          else {
LAB_01102b3a:
            (**(code **)(*(longlong *)param_1[0x33] + 200))
                      ((longlong *)param_1[0x33],
                       *(undefined4 *)(param_1[10] + -8 + (longlong)iVar3 * 8),
                       *(undefined4 *)(param_1[10] + -4 + (longlong)iVar3 * 8));
            (**(code **)(*(longlong *)param_1[0x33] + 0xc0))((longlong *)param_1[0x33]);
          }
          iVar3 = iVar3 + 1;
        }
      }
      else {
        if (1 < iVar3) {
          iVar3 = iVar3 + -1;
        }
        (**(code **)(*(longlong *)param_1[0x33] + 200))
                  ((longlong *)param_1[0x33],*(undefined4 *)(param_1[10] + -8 + (longlong)iVar3 * 8)
                   ,*(undefined4 *)(param_1[10] + -4 + (longlong)iVar3 * 8));
        while ((iVar4 = iVar3 + 1, iVar4 <= (int)param_1[9] &&
               (*(int *)(param_1[10] + -8 + (longlong)iVar4 * 8) < param_3))) {
          FUN_00498350(local_38,0,0,0,0);
          iVar2 = thunk_FUN_03b7fa88((longlong)param_1 + 0x14,local_38);
          if (iVar2 == 0) {
            local_40 = FUN_00498310(*(undefined4 *)(param_1[10] + -8 + (longlong)iVar3 * 8),
                                    *(undefined4 *)(param_1[10] + -4 + (longlong)iVar3 * 8));
            cVar1 = FUN_01a8e4c0((longlong)param_1 + 0x14,&local_40);
            if (cVar1 != '\0') {
              local_40 = FUN_00498310(*(undefined4 *)(param_1[10] + -8 + (longlong)iVar4 * 8),
                                      *(undefined4 *)(param_1[10] + -4 + (longlong)iVar4 * 8));
              cVar1 = FUN_01a8e4c0((longlong)param_1 + 0x14,&local_40);
              if (cVar1 != '\0') goto LAB_011029bf;
            }
            local_40 = FUN_00498310(*(undefined4 *)(param_1[10] + -8 + (longlong)iVar3 * 8),
                                    *(undefined4 *)(param_1[10] + -4 + (longlong)iVar3 * 8));
            FUN_00498310(*(undefined4 *)(param_1[10] + -8 + (longlong)iVar4 * 8),
                         *(undefined4 *)(param_1[10] + -4 + (longlong)iVar4 * 8));
            FUN_01d2b6e0(param_1);
            iVar3 = iVar4;
          }
          else {
LAB_011029bf:
            (**(code **)(*(longlong *)param_1[0x33] + 200))
                      ((longlong *)param_1[0x33],
                       *(undefined4 *)(param_1[10] + -8 + (longlong)iVar3 * 8),
                       *(undefined4 *)(param_1[10] + -4 + (longlong)iVar3 * 8));
            (**(code **)(*(longlong *)param_1[0x33] + 0xc0))((longlong *)param_1[0x33]);
            iVar3 = iVar4;
          }
        }
      }
    }
  }
  return;
}

