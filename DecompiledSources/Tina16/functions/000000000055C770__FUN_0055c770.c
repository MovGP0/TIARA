/* Ghidra address: 0055c770 */
/* Ghidra symbol: FUN_0055c770 */


undefined8 * FUN_0055c770(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30;
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30 = 0;
  (**(code **)(*param_1 + 0x10))(param_1,local_40);
  FUN_00416cd0(param_2,3,L"property ",local_40[0],&DAT_0055cac0);
  plVar2 = (longlong *)FUN_0055c210(param_1);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_0055c250(param_1);
    if (plVar2 == (longlong *)0x0) {
      FUN_00416ad0(param_2,&DAT_0055cae4);
      goto LAB_0055ca25;
    }
    (**(code **)(*plVar2 + 0x70))(plVar2,&local_30);
    iVar5 = 0;
    if (local_30 != 0) {
      iVar5 = (int)*(undefined8 *)(local_30 + -8);
    }
    iVar4 = 0;
    if (-1 < iVar5 + -3) {
      iVar5 = iVar5 + -2;
      do {
        plVar1 = *(longlong **)(local_30 + (longlong)iVar4 * 8);
        (**(code **)(*plVar1 + -0x60))(plVar1,&local_58);
        FUN_00416cd0(param_2,3,*param_2,local_58,&DAT_0055cad0);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    lVar3 = 0;
    if (local_30 != 0) {
      lVar3 = *(longlong *)(local_30 + -8);
    }
    plVar1 = *(longlong **)(local_30 + -0x10 + lVar3 * 8);
    (**(code **)(*plVar1 + -0x60))(plVar1,&local_60);
    FUN_00416ad0(param_2,local_60);
  }
  else {
    (**(code **)(*plVar2 + 0x70))(plVar2,&local_30);
    iVar5 = 0;
    if (local_30 != 0) {
      iVar5 = (int)*(undefined8 *)(local_30 + -8);
    }
    iVar4 = 0;
    if (-1 < iVar5 + -2) {
      iVar5 = iVar5 + -1;
      do {
        plVar1 = *(longlong **)(local_30 + (longlong)iVar4 * 8);
        (**(code **)(*plVar1 + -0x60))(plVar1,&local_48);
        FUN_00416cd0(param_2,3,*param_2,local_48,&DAT_0055cad0);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    lVar3 = 0;
    if (local_30 != 0) {
      lVar3 = *(longlong *)(local_30 + -8);
    }
    plVar1 = *(longlong **)(local_30 + -8 + lVar3 * 8);
    (**(code **)(*plVar1 + -0x60))(plVar1,&local_50);
    FUN_00416ad0(param_2,local_50);
  }
  FUN_00416ad0(param_2,&LAB_0055caf4);
  lVar3 = (**(code **)(*plVar2 + 0x30))(plVar2);
  if (lVar3 == 0) {
    lVar3 = 0;
    if (local_30 != 0) {
      lVar3 = *(longlong *)(local_30 + -8);
    }
    plVar2 = *(longlong **)(local_30 + -8 + lVar3 * 8);
    (**(code **)(*plVar2 + -0x60))(plVar2,&local_70);
    FUN_00416ad0(param_2,local_70);
  }
  else {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x30))(plVar2);
    (**(code **)(*plVar2 + -0x60))(plVar2,&local_68);
    FUN_00416ad0(param_2,local_68);
  }
LAB_0055ca25:
  FUN_00414560(&local_70,7);
  FUN_00419430(&local_30,&DAT_00531510);
  return param_2;
}

