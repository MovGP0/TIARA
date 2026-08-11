/* Ghidra address: 0074bee0 */
/* Ghidra symbol: FUN_0074bee0 */


void FUN_0074bee0(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined4 local_48 [4];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  (**(code **)(*param_1 + 0xe0))(param_1,&local_38);
  cVar2 = FUN_00781870();
  if ((cVar2 == '\0') || ((*(byte *)(param_1 + 0x59) & 2) == 0)) {
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),(int)param_1[0x19]);
  }
  else {
    uVar6 = FUN_00777cd0();
    uVar3 = FUN_007793c0(uVar6,0xff00000f);
    FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),uVar3);
  }
  (**(code **)(*param_1 + 0xe0))(param_1,local_48);
  uVar6 = (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],local_48);
  if (*(char *)((longlong)param_1 + 0x321) == '\0') goto LAB_0074c1c0;
  if (*(byte *)((longlong)param_1 + 0xad) < 8) {
    bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) <<
             (*(byte *)((longlong)param_1 + 0xad) & 0x1f) & 0x18U) != 0;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    FUN_00423b10(&local_38,0xffffffff,2);
  }
  else {
    FUN_00423b10(&local_38,2,0xffffffff);
  }
  FUN_00423b50(&local_38,1,1);
  cVar2 = FUN_00781870();
  if ((cVar2 == '\0') || ((*(byte *)(param_1 + 0x59) & 4) == 0)) {
    uVar3 = FUN_005fbf20(0xff000014);
    uVar6 = thunk_FUN_0412d81c(uVar3);
  }
  else {
    uVar6 = FUN_00777cd0();
    uVar3 = FUN_007793c0(uVar6,0xff000014);
    uVar3 = FUN_005fbf20(uVar3);
    uVar6 = thunk_FUN_0412d81c(uVar3);
  }
  if (bVar8) {
    iVar4 = FUN_004230a0(&local_38);
    if (iVar4 != 2) goto LAB_0074c08f;
    uVar7 = FUN_005ffa40(param_1[0x62]);
    FUN_004238d0(local_48,local_38 + 1,local_34,local_30,local_2c);
    FUN_00429590(uVar7,local_48,uVar6);
  }
  else {
LAB_0074c08f:
    if (!bVar8) {
      iVar4 = FUN_004230c0(&local_38);
      if (iVar4 == 2) {
        uVar7 = FUN_005ffa40(param_1[0x62]);
        FUN_004238d0(local_48,local_38,local_34 + 1,local_30,local_2c);
        FUN_00429590(uVar7,local_48,uVar6);
        goto LAB_0074c0fc;
      }
    }
    uVar7 = FUN_005ffa40(param_1[0x62]);
    FUN_00429590(uVar7,&local_38,uVar6);
  }
LAB_0074c0fc:
  thunk_FUN_0416f828(uVar6);
  FUN_00423b50(&local_38,0xfffffffe,0xfffffffe);
  cVar2 = FUN_00781870();
  if ((cVar2 == '\0') || ((*(byte *)(param_1 + 0x59) & 4) == 0)) {
    uVar3 = FUN_005fbf20(0xff000010);
    uVar6 = thunk_FUN_0412d81c(uVar3);
  }
  else {
    uVar6 = FUN_00777cd0();
    uVar3 = FUN_007793c0(uVar6,0xff000010);
    uVar3 = FUN_005fbf20(uVar3);
    uVar6 = thunk_FUN_0412d81c(uVar3);
  }
  if (bVar8) {
    iVar4 = FUN_004230a0(&local_38);
    if (iVar4 != 2) goto LAB_0074c183;
    local_30 = local_30 + -1;
  }
  else {
LAB_0074c183:
    if (!bVar8) {
      iVar4 = FUN_004230c0(&local_38);
      if (iVar4 == 2) {
        local_2c = local_2c + -1;
      }
    }
  }
  uVar7 = FUN_005ffa40(param_1[0x62]);
  FUN_00429590(uVar7,&local_38,uVar6);
  thunk_FUN_0416f828(uVar6);
LAB_0074c1c0:
  if ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0) {
    plVar1 = (longlong *)param_1[0x62];
    FUN_005fd670(plVar1[0xf],2);
    FUN_005fd640(plVar1[0xf],0xe);
    FUN_005fd4e0(plVar1[0xf],0xffd8ce);
    FUN_005fdcb0(plVar1[0x10],1);
    uVar3 = FUN_0064d0b0(param_1);
    uVar5 = FUN_0064d120(param_1);
    (**(code **)(*plVar1 + 0xf8))(plVar1,0,0,uVar3,uVar5);
  }
  if (param_1[0x74] != 0) {
    (*(code *)param_1[0x74])(param_1[0x75],param_1);
  }
  return;
}

