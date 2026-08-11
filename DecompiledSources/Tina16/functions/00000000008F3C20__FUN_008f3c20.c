/* Ghidra address: 008f3c20 */
/* Ghidra symbol: FUN_008f3c20 */


void FUN_008f3c20(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = param_1[4];
  if ((longlong)(int)param_1[5] < lVar1 + param_3) {
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((int)param_1[5] < param_3) {
      (**(code **)(*(longlong *)param_1[1] + 0x20))((longlong *)param_1[1],param_2,param_3);
    }
    else {
      lVar1 = param_1[2];
      lVar2 = param_1[4];
      iVar3 = param_3 + -1;
      if (-1 < iVar3) {
        do {
          *(undefined1 *)(lVar1 + lVar2 + (longlong)iVar3) = *(undefined1 *)(param_2 + iVar3);
          iVar3 = iVar3 + -1;
        } while (iVar3 != -1);
      }
      param_1[4] = param_1[4] + (longlong)param_3;
    }
  }
  else {
    lVar2 = param_1[2];
    iVar3 = param_3 + -1;
    if (-1 < iVar3) {
      do {
        *(undefined1 *)(lVar2 + lVar1 + (longlong)iVar3) = *(undefined1 *)(param_2 + iVar3);
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    param_1[4] = param_1[4] + (longlong)param_3;
  }
  return;
}

