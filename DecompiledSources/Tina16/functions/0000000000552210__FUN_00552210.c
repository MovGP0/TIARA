/* Ghidra address: 00552210 */
/* Ghidra symbol: FUN_00552210 */


undefined8 * FUN_00552210(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30 [2];
  
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  cVar2 = FUN_005521f0(param_1);
  if (cVar2 == '\0') {
    FUN_00414480(param_2);
  }
  else {
    FUN_00414480(param_2);
    FUN_00552470(param_1,local_30);
    lVar1 = local_30[0];
    lVar3 = 0;
    if (local_30[0] != 0) {
      lVar3 = *(longlong *)(local_30[0] + -8);
    }
    if (0 < lVar3) {
      FUN_00414ad0(param_2,&DAT_005523e0);
      iVar6 = 0;
      if (lVar1 != 0) {
        iVar6 = (int)*(undefined8 *)(lVar1 + -8);
      }
      iVar5 = 0;
      if (-1 < iVar6 + -1) {
        do {
          plVar4 = *(longlong **)(local_30[0] + (longlong)iVar5 * 8);
          (**(code **)(*plVar4 + -0x60))(plVar4,local_40);
          FUN_00416ad0(param_2,local_40[0]);
          lVar3 = 0;
          if (local_30[0] != 0) {
            lVar3 = *(longlong *)(local_30[0] + -8);
          }
          if ((longlong)iVar5 < lVar3 + -1) {
            FUN_00416ad0(param_2,&DAT_005523f0);
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      FUN_00416ad0(param_2,&DAT_00552404);
    }
    lVar3 = FUN_00552420(param_1);
    plVar4 = (longlong *)FUN_00542970(DAT_020116a8,*(undefined8 *)(lVar3 + 2));
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + -0x60))(plVar4,&local_48);
      FUN_00416cd0(param_2,3,*param_2,&LAB_00552414,local_48);
    }
  }
  FUN_00414560(&local_48,2);
  FUN_00419430(local_30,&DAT_00531510);
  return param_2;
}

