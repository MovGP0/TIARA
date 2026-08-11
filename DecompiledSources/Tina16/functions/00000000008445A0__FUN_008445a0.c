/* Ghidra address: 008445a0 */
/* Ghidra symbol: FUN_008445a0 */


void FUN_008445a0(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  undefined1 local_48 [12];
  undefined4 local_3c;
  
  iVar6 = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x520);
  iVar3 = FUN_00848220(*(undefined8 *)(param_1 + 0xd0),*(undefined4 *)(param_1 + 0x54));
  iVar4 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0xd0));
  iVar4 = iVar4 - *(int *)(param_1 + 0x3c);
  if (param_2 < 4) {
    if (param_2 == 3) {
      iVar6 = iVar6 + iVar4 * *(int *)(param_1 + 0x34);
    }
    else if (param_2 == 0) {
      iVar5 = FUN_005fdff0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x490),&DAT_008447ec);
      iVar6 = iVar6 - iVar5 * *(int *)(param_1 + 0x34);
    }
    else if (param_2 == 1) {
      iVar5 = FUN_005fdff0(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0x490),&DAT_008447ec);
      iVar6 = iVar6 + iVar5 * *(int *)(param_1 + 0x34);
    }
    else if (param_2 == 2) {
      iVar6 = iVar6 - iVar4 * *(int *)(param_1 + 0x34);
    }
  }
  else if (param_2 - 4U < 2) {
    if (((*(uint *)(*(longlong *)(param_1 + 0xd0) + 0x4d4) & 0x4000) != 0) || (param_2 == 4)) {
      uVar1 = *(undefined8 *)(param_1 + 0xd0);
      pcVar7 = (code *)FUN_00411550(uVar1,0xffc5);
      cVar2 = (*pcVar7)(uVar1);
      iVar6 = param_3;
      if (cVar2 != '\0') {
        iVar6 = FUN_00844330(param_1);
        iVar6 = iVar6 - param_3;
      }
    }
  }
  else if (param_2 == 6) {
    iVar6 = iVar3 - iVar4;
  }
  else if (param_2 == 7) {
    iVar6 = 0;
  }
  if (iVar6 < 0) {
    iVar6 = 0;
  }
  else if (iVar3 - iVar4 <= iVar6) {
    iVar6 = iVar3 - iVar4;
  }
  iVar3 = *(int *)(*(longlong *)(param_1 + 0xd0) + 0x520);
  if (iVar6 != iVar3) {
    *(int *)(*(longlong *)(param_1 + 0xd0) + 0x520) = iVar6;
    FUN_00845110(*(undefined8 *)(param_1 + 0xd0),iVar3 - iVar6,0);
    FUN_0040d200(local_48,0x10,0);
    local_3c = *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 0x4c0);
    FUN_00844240(*(undefined8 *)(param_1 + 0xd0),local_48);
    (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x198))(*(longlong **)(param_1 + 0xd0));
    FUN_008453a0(*(undefined8 *)(param_1 + 0xd0));
  }
  return;
}

