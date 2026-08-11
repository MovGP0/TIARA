/* Ghidra address: 014e5580 */
/* Ghidra symbol: FUN_014e5580 */


void FUN_014e5580(longlong *param_1,undefined8 param_2,int param_3,int param_4,int *param_5,
                 char param_6,int param_7)

{
  bool bVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  ulonglong local_40 [2];
  
  local_40[0] = 0;
  FUN_0043e130(local_40,param_2);
  bVar1 = false;
  if (param_7 == 1) {
    iVar2 = FUN_00416db0(local_40[0],&DAT_014e57c4);
    if (iVar2 == 0) {
      *param_5 = 0x10;
      uVar4 = 0x28;
      uVar5 = 1;
      bVar1 = true;
      goto LAB_014e5706;
    }
  }
  if (param_7 == 1) {
    iVar2 = FUN_00416db0(local_40[0],&DAT_014e57d8);
    if (iVar2 == 0) {
      *param_5 = 0x10;
      uVar4 = 0x28;
      uVar5 = 3;
      bVar1 = true;
      goto LAB_014e5706;
    }
  }
  if (param_7 == 1) {
    iVar2 = FUN_00416db0(local_40[0],&DAT_014e57ec);
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(local_40[0],&DAT_014e5800);
      if (iVar2 != 0) goto LAB_014e567e;
    }
    if (param_4 == 0) {
      *param_5 = 0x10;
    }
    uVar4 = 0x10;
    uVar5 = 2;
  }
  else {
LAB_014e567e:
    if (param_7 == 1) {
      iVar2 = FUN_00416db0(local_40[0],&LAB_014e5814);
      if (iVar2 == 0) {
        if (param_4 == param_3) {
          *param_5 = 0x10;
        }
        uVar4 = 0x60;
        uVar5 = 0;
        goto LAB_014e5706;
      }
    }
    if (param_4 < param_3) {
      if (param_4 == 0) {
        *param_5 = 0x10;
      }
      uVar4 = 0x10;
      uVar5 = 2;
    }
    else {
      if (param_4 == param_3) {
        *param_5 = 0x10;
      }
      uVar4 = 0x60;
      uVar5 = 0;
    }
  }
LAB_014e5706:
  if (param_6 == '\0') {
    plVar3 = (longlong *)FUN_014db750(0x3a);
  }
  else {
    plVar3 = (longlong *)FUN_014db750(0x96);
  }
  FUN_017bf050(plVar3,0,param_2);
  (**(code **)(*plVar3 + 0x208))(plVar3,0,0,0);
  *(undefined1 *)((longlong)plVar3 + 0xd1) = uVar5;
  *(undefined4 *)((longlong)plVar3 + 0xc) = uVar4;
  *(int *)(plVar3 + 2) = *param_5;
  if (!bVar1) {
    *param_5 = *param_5 + 0x10;
  }
  (**(code **)(*param_1 + 0x20))(param_1,plVar3);
  FUN_00414480(local_40);
  return;
}

