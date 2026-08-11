/* Ghidra address: 01102bd0 */
/* Ghidra symbol: FUN_01102bd0 */


void FUN_01102bd0(longlong *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  if ((1 < (int)param_1[9]) && (cVar1 = (**(code **)(*param_1 + 0x58))(param_1), cVar1 != '\0')) {
    if (param_2 < 1) {
      param_2 = 1;
    }
    if (param_2 < (int)param_1[9]) {
      (**(code **)(*(longlong *)param_1[0x33] + 200))
                ((longlong *)param_1[0x33],*(undefined4 *)(param_1[10] + -8 + (longlong)param_2 * 8)
                 ,*(undefined4 *)(param_1[10] + -4 + (longlong)param_2 * 8));
      while ((iVar3 = param_2 + 1, iVar3 <= (int)param_1[9] && (iVar3 <= param_3))) {
        FUN_00498350(local_38,0,0,0,0);
        iVar2 = thunk_FUN_03b7fa88((longlong)param_1 + 0x14,local_38);
        if (iVar2 == 0) {
          local_40 = FUN_00498310(*(undefined4 *)(param_1[10] + -8 + (longlong)param_2 * 8),
                                  *(undefined4 *)(param_1[10] + -4 + (longlong)param_2 * 8));
          cVar1 = FUN_01a8e4c0((longlong)param_1 + 0x14,&local_40);
          if (cVar1 != '\0') {
            local_40 = FUN_00498310(*(undefined4 *)(param_1[10] + -8 + (longlong)iVar3 * 8),
                                    *(undefined4 *)(param_1[10] + -4 + (longlong)iVar3 * 8));
            cVar1 = FUN_01a8e4c0((longlong)param_1 + 0x14,&local_40);
            if (cVar1 != '\0') goto LAB_01102cda;
          }
          local_40 = FUN_00498310(*(undefined4 *)(param_1[10] + -8 + (longlong)param_2 * 8),
                                  *(undefined4 *)(param_1[10] + -4 + (longlong)param_2 * 8));
          FUN_00498310(*(undefined4 *)(param_1[10] + -8 + (longlong)iVar3 * 8),
                       *(undefined4 *)(param_1[10] + -4 + (longlong)iVar3 * 8));
          FUN_01d2b6e0(param_1);
          param_2 = iVar3;
        }
        else {
LAB_01102cda:
          (**(code **)(*(longlong *)param_1[0x33] + 200))
                    ((longlong *)param_1[0x33],
                     *(undefined4 *)(param_1[10] + -8 + (longlong)param_2 * 8),
                     *(undefined4 *)(param_1[10] + -4 + (longlong)param_2 * 8));
          (**(code **)(*(longlong *)param_1[0x33] + 0xc0))((longlong *)param_1[0x33]);
          param_2 = iVar3;
        }
      }
    }
  }
  return;
}

