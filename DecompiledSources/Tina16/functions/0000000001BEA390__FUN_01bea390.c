/* Ghidra address: 01bea390 */
/* Ghidra symbol: FUN_01bea390 */


void FUN_01bea390(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if ((param_1[100] != 0) && (*(char *)(param_1[100] + 0xb0) != '\0')) {
    FUN_005fce70(param_1[0x17],*(byte *)(*(longlong *)(param_1[0x17] + 0x18) + 0x31) | 1);
  }
  FUN_01c07350(param_1);
  local_40 = (**(code **)(*param_1 + 0x210))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x288))(param_1);
  iVar3 = thunk_FUN_03f3ed25(*(undefined4 *)((longlong)param_1 + 900),uVar2,
                             *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98));
  cVar1 = (**(code **)(*param_1 + 0x238))(param_1);
  if (cVar1 == '\0') {
    if (0x10 < local_40._4_4_) {
      iVar3 = local_40._4_4_ + 4;
    }
  }
  else {
    iVar3 = (iVar3 / 3) * 2;
  }
  if (param_1[100] != 0) {
    if ((int)local_40 < 0x11) {
      iVar5 = 0x18;
    }
    else {
      iVar5 = (int)local_40 + 6;
    }
    local_38 = *(undefined8 *)((longlong)param_1 + 0x34c);
    uStack_30 = *(undefined8 *)((longlong)param_1 + 0x354);
    FUN_00423b50(&local_38,0x18 - *(int *)((longlong)param_1 + 0x34c),
                 (iVar3 / 2 - (int)param_1[0x6b] / 2) + -1);
    *(undefined8 *)((longlong)param_1 + 0x34c) = local_38;
    *(undefined8 *)((longlong)param_1 + 0x354) = uStack_30;
    if (0 < iVar3) {
      iVar4 = FUN_004230c0((longlong)param_1 + 0x34c);
      if (iVar3 <= iVar4) {
        iVar3 = FUN_004230c0((longlong)param_1 + 0x34c);
        iVar3 = iVar3 + 4;
      }
    }
    FUN_004238d0(&local_58,0,0,0,0);
    *(undefined8 *)((longlong)param_1 + 0x374) = local_58;
    *(undefined8 *)((longlong)param_1 + 0x37c) = uStack_50;
    if (*(short *)(param_1[100] + 0x8c) == 0) {
      iVar5 = *(int *)((longlong)param_1 + 0x354) + *(int *)((longlong)param_1 + 0x34c);
    }
    else {
      uVar6 = FUN_005ffa40(param_1[0x62]);
      local_48 = (longlong)param_1 + 0x374;
      uVar7 = FUN_00416740(*(undefined8 *)(param_1[100] + 0x98));
      thunk_FUN_041a24be(uVar6,uVar7,0xffffffff,local_48,0x400);
      *(int *)(param_1 + 0x6f) = (int)param_1[0x6a];
      *(int *)(param_1 + 0x70) = (int)param_1[0x6b];
      iVar5 = *(int *)((longlong)param_1 + 0x354) + *(int *)((longlong)param_1 + 0x37c) + iVar5 +
              (int)param_1[0x69];
    }
    (**(code **)(*param_1 + 400))
              (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),iVar5,iVar3);
  }
  return;
}

