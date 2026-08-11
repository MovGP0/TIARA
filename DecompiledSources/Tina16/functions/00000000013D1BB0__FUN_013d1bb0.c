/* Ghidra address: 013d1bb0 */
/* Ghidra symbol: FUN_013d1bb0 */


longlong FUN_013d1bb0(longlong *param_1,undefined8 param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  
  (**(code **)(*param_1 + 0x78))(param_1,param_2);
  lVar2 = param_1[0xc];
  piVar1 = (int *)(lVar2 + 0xa0);
  if ((char)param_1[9] == '\0') {
    uVar3 = FUN_00b905f0(param_4 + *param_5,*(undefined4 *)(lVar2 + 0xac));
    iVar4 = FUN_00b905e0(uVar3,*(undefined4 *)(lVar2 + 0xa4));
    param_1[10] = (longlong)
                  ((double)(iVar4 - *(int *)(lVar2 + 0xa4)) /
                  (double)(*(int *)(lVar2 + 0xac) - *(int *)(lVar2 + 0xa4)));
    if (param_4 < *(int *)(lVar2 + 0xa4)) {
      *param_5 = param_4 - *(int *)(lVar2 + 0xa4);
    }
    else if (*(int *)(lVar2 + 0xac) < param_4) {
      *param_5 = param_4 - *(int *)(lVar2 + 0xac);
    }
    else {
      *param_5 = 0;
    }
  }
  else if ((char)param_1[9] == '\x01') {
    uVar3 = FUN_00b905e0(param_3 + *param_5,*piVar1);
    iVar4 = FUN_00b905f0(uVar3,*(undefined4 *)(lVar2 + 0xa8));
    param_1[10] = (longlong)((double)(iVar4 - *piVar1) / (double)(*(int *)(lVar2 + 0xa8) - *piVar1))
    ;
    if (param_3 < *piVar1) {
      *param_5 = param_3 - *piVar1;
    }
    else if (*(int *)(lVar2 + 0xa8) < param_3) {
      *param_5 = param_3 - *(int *)(lVar2 + 0xa8);
    }
    else {
      *param_5 = 0;
    }
  }
  lVar2 = param_1[10];
  (**(code **)(*param_1 + 0x78))(param_1,param_2);
  return lVar2;
}

