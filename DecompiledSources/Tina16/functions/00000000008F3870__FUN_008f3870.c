/* Ghidra address: 008f3870 */
/* Ghidra symbol: FUN_008f3870 */


ulonglong FUN_008f3870(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 unaff_R13;
  ulonglong uVar4;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),1);
  if (param_1[5] < (longlong)param_3) {
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((int)param_1[6] < param_3) {
      iVar3 = (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1],param_2,param_3);
      if (iVar3 == 0) {
        uVar4 = 0;
      }
    }
    else {
      if (param_1[5] == 0) {
        iVar3 = (**(code **)(*(longlong *)param_1[1] + 0x18))
                          ((longlong *)param_1[1],param_1[2],(int)param_1[6]);
        param_1[5] = (longlong)iVar3;
        if (param_1[5] == 0) {
          uVar4 = 0;
          goto LAB_008f396d;
        }
        param_1[4] = 0;
      }
      lVar1 = param_1[2];
      lVar2 = param_1[4];
      iVar3 = param_3 + -1;
      if (-1 < iVar3) {
        do {
          *(undefined1 *)(param_2 + iVar3) = *(undefined1 *)(lVar1 + lVar2 + (longlong)iVar3);
          iVar3 = iVar3 + -1;
        } while (iVar3 != -1);
      }
      param_1[4] = param_1[4] + (longlong)param_3;
      param_1[5] = param_1[5] - (longlong)param_3;
    }
  }
  else {
    lVar1 = param_1[2];
    lVar2 = param_1[4];
    iVar3 = param_3 + -1;
    if (-1 < iVar3) {
      do {
        *(undefined1 *)(param_2 + iVar3) = *(undefined1 *)(lVar1 + lVar2 + (longlong)iVar3);
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    param_1[4] = param_1[4] + (longlong)param_3;
    param_1[5] = param_1[5] - (longlong)param_3;
  }
LAB_008f396d:
  return uVar4 & 0xffffffff;
}

