/* Ghidra address: 00819760 */
/* Ghidra symbol: FUN_00819760 */


undefined4 * FUN_00819760(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 unaff_RDI;
  undefined7 uVar8;
  ulonglong in_stack_ffffffffffffffa8;
  undefined1 local_3c [12];
  undefined4 local_30;
  int local_2c;
  
  FUN_004238d0(param_2,0,0,0,in_stack_ffffffffffffffa8 & 0xffffffff00000000);
  lVar4 = FUN_008199e0(param_1);
  if (*(char *)(lVar4 + 0x4d1) == '\0') {
    return param_2;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  plVar5 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar5 + 0x90))(plVar5);
  if (cVar1 == '\0') {
    return param_2;
  }
  lVar4 = FUN_008199e0(param_1);
  uVar8 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if ((*(char *)(lVar4 + 0x4d1) == '\x04') ||
     (lVar4 = FUN_008199e0(param_1), *(char *)(lVar4 + 0x4d1) == '\x05')) {
    uVar2 = (undefined4)CONCAT71(uVar8,5);
  }
  else {
    uVar2 = (undefined4)CONCAT71(uVar8,2);
  }
  plVar5 = (longlong *)FUN_00781840();
  lVar4 = *plVar5;
  (**(code **)(lVar4 + 0x228))(plVar5,local_3c,uVar2);
  uVar6 = FUN_00781840();
  FUN_00779290(uVar6,0,local_3c,1,&local_30,0);
  param_2[1] = local_2c;
  if (*(int *)(DAT_02012670 + 0x98) < 0x61) {
    uVar6 = FUN_00786090(param_1);
    cVar1 = FUN_00647eb0(uVar6);
    if (cVar1 == '\0') goto LAB_00819884;
  }
  plVar5 = (longlong *)FUN_008199e0(param_1);
  uVar2 = (**(code **)(*plVar5 + 0x98))(plVar5);
  iVar3 = thunk_FUN_03f3ed25(param_2[1],uVar2,0x60);
  param_2[1] = iVar3;
  *(int *)(param_1 + 0x140) = iVar3 - local_2c;
LAB_00819884:
  lVar7 = FUN_008199e0(param_1);
  uVar8 = (undefined7)((ulonglong)lVar4 >> 8);
  if ((*(char *)(lVar7 + 0x4d1) == '\x04') ||
     (lVar4 = FUN_008199e0(param_1), *(char *)(lVar4 + 0x4d1) == '\x05')) {
    uVar2 = (undefined4)CONCAT71(uVar8,0x1a);
  }
  else {
    uVar2 = (undefined4)CONCAT71(uVar8,0x14);
  }
  plVar5 = (longlong *)FUN_00781840();
  lVar4 = *plVar5;
  (**(code **)(lVar4 + 0x228))(plVar5,local_3c,uVar2);
  uVar6 = FUN_00781840();
  FUN_00779290(uVar6,0,local_3c,1,&local_30,0);
  *param_2 = local_30;
  lVar7 = FUN_008199e0(param_1);
  uVar8 = (undefined7)((ulonglong)lVar4 >> 8);
  if ((*(char *)(lVar7 + 0x4d1) == '\x04') ||
     (lVar4 = FUN_008199e0(param_1), *(char *)(lVar4 + 0x4d1) == '\x05')) {
    uVar2 = (undefined4)CONCAT71(uVar8,0x1c);
  }
  else {
    uVar2 = (undefined4)CONCAT71(uVar8,0x16);
  }
  plVar5 = (longlong *)FUN_00781840();
  lVar4 = *plVar5;
  (**(code **)(lVar4 + 0x228))(plVar5,local_3c,uVar2);
  uVar6 = FUN_00781840();
  FUN_00779290(uVar6,0,local_3c,1,&local_30,0);
  param_2[2] = local_30;
  lVar7 = FUN_008199e0(param_1);
  uVar8 = (undefined7)((ulonglong)lVar4 >> 8);
  if ((*(char *)(lVar7 + 0x4d1) == '\x04') ||
     (lVar4 = FUN_008199e0(param_1), *(char *)(lVar4 + 0x4d1) == '\x05')) {
    uVar2 = (undefined4)CONCAT71(uVar8,0x1e);
  }
  else {
    uVar2 = (undefined4)CONCAT71(uVar8,0x18);
  }
  plVar5 = (longlong *)FUN_00781840();
  (**(code **)(*plVar5 + 0x228))(plVar5,local_3c,uVar2);
  uVar6 = FUN_00781840();
  FUN_00779290(uVar6,0,local_3c,1,&local_30,0);
  param_2[3] = local_2c;
  return param_2;
}

