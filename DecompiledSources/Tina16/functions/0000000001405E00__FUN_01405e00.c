/* Ghidra address: 01405e00 */
/* Ghidra symbol: FUN_01405e00 */


void FUN_01405e00(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  DAT_021084b2 = 0;
  DAT_021084b8 = 0;
  FUN_00414ad0(param_1 + 0x7c8,L"noname.cpl");
  DAT_021084c0 = 1;
  DAT_021084b0 = 1;
  DAT_021084c1 = 0;
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x730),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x738),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x740),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x748),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x750),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x758),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x760),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x768),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x770),0);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x778),0);
  (**(code **)(**(longlong **)(param_1 + 0x780) + 0x2d0))
            (*(longlong **)(param_1 + 0x780),*(undefined4 *)(param_1 + 0x788),param_1 + 0x790);
  lVar2 = *(longlong *)(param_1 + 0x790);
  uVar3 = FUN_01d3c1c0(0,&PTR_FUN_01d35570,0x32,0x19);
  *(undefined8 *)(param_1 + 0x7a8) = uVar3;
  FUN_01d3c2d0(uVar3,*(undefined8 *)(lVar2 + 0x10));
  FUN_0074b490(*(undefined8 *)(param_1 + 0x6d0),0);
  DAT_021084b1 = 1;
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x710),0);
  uVar3 = FUN_00b89270();
  FUN_00b8ac60(uVar3,param_1,*(undefined8 *)(param_1 + 0x770));
  uVar3 = FUN_00b89270();
  FUN_00b8ac60(uVar3,param_1,*(undefined8 *)(param_1 + 0x778));
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x770),local_20);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d8),0,0,local_20[0]);
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x778),&local_28);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x6d8),1,0,local_28);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d8),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e0),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6e8),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f0),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6f8),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x700),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x708),1);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x728),1);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x6d0),0);
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x6d8) + 0x4e0);
  *(undefined4 *)(param_1 + 0x7c0) = uVar1;
  FUN_00848a70(*(undefined8 *)(param_1 + 0x6d8),uVar1);
  FUN_00848a70(*(undefined8 *)(param_1 + 0x6d8),
               (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x7a8) + 0x10) * 3);
  if (*(int *)(*(longlong *)(param_1 + 0x6d8) + 0x4e0) <= *(int *)(param_1 + 0x7c0)) {
    FUN_00848a70(*(longlong *)(param_1 + 0x6d8),*(int *)(param_1 + 0x7c0));
  }
  FUN_01404f30(param_1);
  FUN_01405a00(param_1);
  FUN_0064cf60(param_1,0x40b);
  FUN_00414560(&local_28,2);
  return;
}

