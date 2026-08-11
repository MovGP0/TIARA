/* Ghidra address: 01c17620 */
/* Ghidra symbol: FUN_01c17620 */


void FUN_01c17620(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar9;
  undefined1 local_30 [12];
  int local_24;
  short *local_20;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  local_20 = (short *)0x0;
  uVar2 = FUN_0060f580(param_4);
  uVar3 = FUN_0060f570(uVar2);
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 == '\0') {
    plVar4 = (longlong *)FUN_00781840();
    (**(code **)(*plVar4 + 0x158))(plVar4,local_30,0xf);
    goto LAB_01c176e3;
  }
  plVar4 = (longlong *)FUN_00781840();
  if ((*(char *)((longlong)param_1 + 0x344) == '\0') &&
     (*(char *)((longlong)param_1 + 0x363) == '\0')) {
    plVar5 = (longlong *)FUN_01c07120(param_1);
    cVar1 = (**(code **)(*plVar5 + 0x2c8))(plVar5);
    if (cVar1 != '\0') goto LAB_01c176a7;
    lVar7 = 0;
  }
  else {
LAB_01c176a7:
    lVar7 = 1;
  }
  (**(code **)(*plVar4 + 0x158))(plVar4,local_30,(&DAT_01fe48c4)[lVar7]);
LAB_01c176e3:
  FUN_005fdcb0(*(undefined8 *)(param_1[0x62] + 0x80),1);
  if (*(char *)((longlong)param_1 + 0x344) == '\0') {
    FUN_005fc860(*(undefined8 *)(param_1[0x62] + 0x70),0xff000007);
  }
  else {
    FUN_005fc860(*(undefined8 *)(param_1[0x62] + 0x70),0xff00000e);
  }
  uVar6 = FUN_00781840();
  cVar1 = FUN_007790b0(uVar6,local_30,2,&local_24);
  if ((cVar1 == '\0') || (local_24 == 0x1fffffff)) {
    uVar6 = FUN_01c07120(param_1);
    lVar7 = FUN_01c03e40(uVar6);
    local_24 = *(int *)(lVar7 + 0x9c);
  }
  FUN_00414b50(&local_20,param_2);
  if (((uVar3 & 2) != 0) &&
     ((local_20 == (short *)0x0 || ((*local_20 == 0x26 && (local_20[1] == 0)))))) {
    FUN_00416ad0(&local_20,&LAB_01c17934);
  }
  cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  if (cVar1 != '\0') {
    plVar4 = (longlong *)FUN_00781840();
    if ((*(char *)((longlong)param_1 + 0x344) == '\0') &&
       (*(char *)((longlong)param_1 + 0x363) == '\0')) {
      lVar7 = 0;
    }
    else {
      lVar7 = 1;
    }
    (**(code **)(*plVar4 + 0x158))(plVar4,local_30,(&DAT_01fe48c4)[lVar7]);
  }
  cVar1 = FUN_00781870();
  if (cVar1 == '\0') {
    uVar6 = FUN_00781840();
    uVar8 = FUN_005ffa40(param_1[0x62]);
    FUN_00778f70(uVar6,uVar8,local_30,local_20,param_3,uVar3,local_24,0);
  }
  else {
    uVar6 = FUN_005ffa40(param_1[0x62]);
    thunk_FUN_03b994b9(uVar6,1);
    uVar6 = FUN_005ffa40(param_1[0x62]);
    thunk_FUN_0412a071(uVar6,local_24);
    uVar6 = FUN_005ffa40(param_1[0x62]);
    uVar2 = 0;
    if (local_20 != (short *)0x0) {
      uVar2 = *(undefined4 *)(local_20 + -2);
    }
    uVar8 = FUN_00416740(local_20);
    thunk_FUN_041a24be(uVar6,uVar8,uVar2,param_3,CONCAT44(uVar9,param_4));
  }
  FUN_00414480(&local_20);
  return;
}

