/* Ghidra address: 0137c8d0 */
/* Ghidra symbol: FUN_0137c8d0 */


ulonglong FUN_0137c8d0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong in_stack_ffffffffffffff80;
  undefined8 in_stack_ffffffffffffff88;
  undefined8 in_stack_ffffffffffffff90;
  uint uVar7;
  undefined1 local_37;
  char local_36;
  undefined1 local_35;
  int local_34;
  double local_30;
  longlong local_28;
  longlong local_20;
  
  uVar7 = (uint)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uVar4 = (uint)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  *(undefined1 *)((longlong)param_1 + 0x16e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x27] = 0;
  *(undefined1 *)((longlong)param_1 + 0x59) = 1;
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined1 *)((longlong)param_1 + 0x189) = 0;
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x10))(param_1,1);
  if ((char)param_1[0x13] == '\b') {
    uVar5 = FUN_004113f0(*(undefined8 *)(param_1[10] + 0x88 + (longlong)(int)param_1[3] * 8),
                         &PTR_FUN_01133e90);
    FUN_01138d40(uVar5,&local_20,&local_28,&local_30,&local_34,&local_35,&local_36,&local_37);
    iVar3 = *(int *)((longlong)param_1 + 0x104) + -3;
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    FUN_0153b530(local_20,local_28,local_34 + -1,local_36 == '\0',(char)iVar3);
    uVar4 = FUN_0153bd40(0,*(undefined8 *)(param_1[10] + 0x408));
    uVar6 = (ulonglong)uVar4;
    while ((*(char *)((longlong)param_1 + 0x189) != '\0' && ((char)param_1[0x24] == '\0'))) {
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
  }
  else if (((char)param_1[0x13] == '\x04') && (*(char *)((longlong)param_1 + 0x104) == '\0')) {
    lVar1 = *(longlong *)(param_1[10] + 0x88 + (longlong)(int)param_1[3] * 8);
    if (lVar1 == 0) {
      local_20 = param_1[0x14];
      local_28 = param_1[0x15];
    }
    else {
      uVar5 = FUN_004113f0(lVar1,&PTR_FUN_01133e90);
      FUN_01138d40(uVar5,&local_20,&local_28,&local_30,&local_34,&local_35,&local_36,&local_37);
    }
    FUN_0153b430(local_20,local_28,local_34,local_36 == '\0',0);
    uVar4 = FUN_0153bc10(0,*(undefined8 *)(param_1[10] + 0x408),0,0);
    uVar6 = (ulonglong)uVar4;
    while ((*(char *)((longlong)param_1 + 0x189) != '\0' && ((char)param_1[0x24] == '\0'))) {
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
    }
  }
  else {
    if ((double)param_1[0x15] == 0.0) {
      uVar6 = 0;
      goto LAB_0137cc2c;
    }
    local_30 = ((double)(int)param_1[0x18] / 2.0) / (double)param_1[0x15];
    FUN_00c42780(0x4000000000000000,(double)(int)param_1[0x18]);
    FUN_0040c770();
    FUN_0153b5f0(local_30,0);
    uVar5 = FUN_004113f0(param_1[2],&PTR_FUN_010dee68);
    uVar5 = FUN_0065b870(uVar5);
    cVar2 = FUN_0153b820(uVar5,0,*(undefined8 *)(param_1[10] + 0x408),0,0,
                         in_stack_ffffffffffffff80 & 0xffffffffffffff00,(ulonglong)uVar4 << 0x20,
                         (ulonglong)uVar7 << 0x20,0,0x1c7,0,0,0,0);
    if ((cVar2 == '\0') && ((char)param_1[0x31] == '\0')) {
      uVar6 = 0;
    }
    else {
      uVar6 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
    *(char *)((longlong)param_1 + 0x189) = (char)uVar6;
  }
  (**(code **)(*param_1 + 0x10))(param_1,0);
LAB_0137cc2c:
  return uVar6 & 0xffffffff;
}

