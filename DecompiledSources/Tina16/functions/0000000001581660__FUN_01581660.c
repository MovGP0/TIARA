/* Ghidra address: 01581660 */
/* Ghidra symbol: FUN_01581660 */


void FUN_01581660(longlong param_1,uint param_2,undefined8 *param_3,undefined2 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  longlong local_b0;
  longlong local_a8;
  int local_a0;
  undefined1 local_9c [6];
  undefined1 local_96;
  undefined1 local_5a [38];
  uint local_34;
  
  local_c0 = auStack_f8;
  local_d0 = 0;
  local_c8 = (longlong *)0x0;
  FUN_00417580(param_4,&DAT_015764a8);
  FUN_00417580(local_5a,&DAT_015764a8);
  FUN_00417580(local_9c,&DAT_015764a8);
  if (*(byte *)(param_1 + 8) < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 8) & 0x1f) &
            6U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (!bVar4) {
    uVar2 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_020019b8);
    FUN_004134c0(uVar2);
  }
  if (((int)param_2 < 0) || (*(int *)(*(longlong *)(param_1 + 0x30) + 0x10) < (int)param_2)) {
    uVar2 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_PTR_02002cf8);
    FUN_004134c0(uVar2);
  }
  *param_4 = 0;
  FUN_00419430(param_4 + 0x1d,&DAT_00406578);
  param_4[0xe] = 0;
  param_4[0xf] = 0;
  param_4[0x10] = 0;
  *(undefined4 *)(param_4 + 0x11) = 0;
  *(undefined4 *)(param_4 + 0x13) = 0;
  FUN_00417740(local_5a,&DAT_015764a8);
  local_a8 = *(longlong *)(param_1 + 0x30);
  if (*(uint *)(local_a8 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  FUN_00417c40(local_5a,*(longlong *)(local_a8 + 8) + (longlong)(int)param_2 * 0x42,&DAT_015764a8);
  FUN_004b6dc0(*(undefined8 *)(param_1 + 0x10),(ulonglong)local_34 + *(longlong *)(param_1 + 0x20));
  FUN_00417740(local_5a,&DAT_015764a8);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))(*(longlong **)(param_1 + 0x10),&local_a0,4);
  if (local_a0 != DAT_01f654dc) {
    uVar2 = FUN_0044d710(&PTR_FUN_01576898,1,PTR_DAT_02005790);
    FUN_004134c0(uVar2);
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_4 + 1,2);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_4 + 2,2);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_4 + 3,2);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_4 + 4,4);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_4 + 6,4);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_4 + 8,4);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_4 + 10,4);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_4 + 0xc,2);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
            (*(longlong **)(param_1 + 0x10),param_4 + 0xd,2);
  FUN_00419260(param_4 + 0x15,&DAT_00406578,1,param_4[0xc]);
  FUN_004b72d0(*(undefined8 *)(param_1 + 0x10),param_4 + 0x15,param_4[0xc]);
  if (param_4[0xd] != 0) {
    FUN_00419260(param_4 + 0x19,&DAT_00406578,1,param_4[0xd]);
    FUN_004b72d0(*(undefined8 *)(param_1 + 0x10),param_4 + 0x19,param_4[0xd]);
  }
  FUN_00417740(local_9c,&DAT_015764a8);
  local_b0 = *(longlong *)(param_1 + 0x30);
  if (*(uint *)(local_b0 + 0x10) <= param_2) {
    FUN_00594f90();
  }
  FUN_00417c40(local_9c,*(longlong *)(local_b0 + 8) + (longlong)(int)param_2 * 0x42,&DAT_015764a8);
  FUN_015837f0(DAT_0210ee78,&local_d0,local_96);
  uVar2 = (**(code **)(*local_c8 + 0x18))(local_c8,*(undefined8 *)(param_1 + 0x10),param_1,param_4);
  *param_3 = uVar2;
  FUN_00417740(local_9c,&DAT_015764a8);
  cVar1 = FUN_004113d0(*param_3,&PTR_FUN_00627390);
  if (cVar1 != '\0') {
    lVar3 = FUN_004113f0(*param_3,&PTR_FUN_00627390);
    *(longlong *)(lVar3 + 0x28) = param_1;
    *(code **)(lVar3 + 0x20) = FUN_0157fa40;
  }
  FUN_00417740(&local_d0,&DAT_01577948);
  FUN_00417840(local_9c,&DAT_015764a8,2);
  return;
}

