/* Ghidra address: 00b9eb00 */
/* Ghidra symbol: FUN_00b9eb00 */


void FUN_00b9eb00(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  iVar2 = FUN_00b9eaa0(param_1,0x3d,param_2);
  if (iVar2 == 0) {
    FUN_00414ad0(param_3,param_2);
    FUN_00414480(param_4);
    FUN_00414480(param_5);
  }
  else {
    iVar4 = 1;
    if ((1 < iVar2) && (*(short *)(param_2 + -2 + (longlong)(iVar2 + -1) * 2) == 0x21)) {
      iVar4 = 2;
      iVar2 = iVar2 + -1;
    }
    FUN_00416dc0(&local_28,param_2,1,iVar2 + -1);
    FUN_0043ea00(&local_20,local_28);
    FUN_00414ad0(param_3,local_20);
    FUN_00416dc0(param_4,param_2,iVar2,iVar4);
    uVar3 = 0;
    if (param_2 != 0) {
      uVar3 = *(undefined4 *)(param_2 + -4);
    }
    FUN_00416dc0(&local_38,param_2,iVar2 + iVar4,uVar3);
    FUN_0043ea00(&local_30,local_38);
    FUN_00414ad0(param_5,local_30);
    if (*(short *)*param_5 == 0x27) {
      iVar2 = 0;
      if (*param_5 != 0) {
        iVar2 = *(int *)(*param_5 + -4);
      }
      bVar5 = *(short *)(*param_5 + -2 + (longlong)iVar2 * 2) == 0x27;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) {
      iVar2 = 0;
      if (*param_5 != 0) {
        iVar2 = *(int *)(*param_5 + -4);
      }
      FUN_00416dc0(param_5,*param_5,2,iVar2 + -2);
    }
    else if (*(short *)*param_5 == 0x22) {
      iVar2 = 0;
      lVar1 = *param_5;
      if (lVar1 != 0) {
        iVar2 = *(int *)(lVar1 + -4);
      }
      if (*(short *)(*param_5 + -2 + (longlong)iVar2 * 2) == 0x22) {
        iVar2 = 0;
        if (lVar1 != 0) {
          iVar2 = *(int *)(lVar1 + -4);
        }
        FUN_00416dc0(param_5,*param_5,2,iVar2 + -2);
      }
    }
  }
  FUN_00414560(&local_38,4);
  return;
}

