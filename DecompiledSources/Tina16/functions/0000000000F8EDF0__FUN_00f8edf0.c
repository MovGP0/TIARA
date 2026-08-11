/* Ghidra address: 00f8edf0 */
/* Ghidra symbol: FUN_00f8edf0 */


void FUN_00f8edf0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_20 [16];
  
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_28 = 0;
  local_30 = 0;
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 8));
  FUN_010a7790(uVar2,param_1 + 0x3494,param_1 + 0x3498,param_1 + 0x349c);
  FUN_010a7020(param_1 + 0x34c0,param_1 + 0x34c8,param_1 + 0x34d0);
  FUN_010a73e0(param_1 + 0x34d0);
  FUN_00f5fe20();
  *(undefined4 *)(param_1 + 0x340c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3408) = 0xffffffff;
  FUN_00414480(param_1 + 0x3418);
  *(undefined1 *)(param_1 + 0x3450) = 0;
  *(undefined1 *)(param_1 + 0x3451) = 0;
  *(undefined4 *)(param_1 + 0x33e0) = 0;
  uVar2 = FUN_00410e60(&PTR_FUN_00f60118,1);
  *(undefined8 *)PTR_DAT_02002ba8 = uVar2;
  *(undefined4 *)(param_1 + 0x3490) = 2;
  *(undefined4 *)(param_1 + 0x34f8) = 0;
  *(undefined4 *)(param_1 + 0x34fc) = 0;
  *(undefined1 *)(param_1 + 0x3471) = 0;
  *(undefined1 *)(param_1 + 0x3510) = 0;
  *(undefined1 *)(param_1 + 0x3475) = 0;
  *(undefined1 *)(param_1 + 0x3512) = 0;
  *(undefined4 *)(param_1 + 0x345c) = 0;
  FUN_00f8c990(param_1,0);
  *(undefined1 *)(param_1 + 0x3452) = 1;
  FUN_00f8d2f0(param_1,0);
  *(undefined1 *)(param_1 + 0x3472) = 1;
  *(undefined1 *)(param_1 + 0x33f9) = 0;
  *(undefined1 *)(param_1 + 0x3457) = 0;
  *(undefined1 *)(param_1 + 0x3458) = 0;
  *(undefined1 *)(param_1 + 0x3455) = 1;
  *(undefined1 *)(param_1 + 0x3456) = 1;
  FUN_00f8e610();
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong **)(param_1 + 0x3478) = plVar3;
  FUN_015fcd70(&local_48,*(undefined8 *)(param_1 + 0x58));
  FUN_00416cd0(local_40,4,local_48,&DAT_00f8f25c,L"mcu_components",L".txt");
  (**(code **)(*plVar3 + 0xd8))(plVar3,local_40[0]);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x3520) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x3528) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x3530) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x3538) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x3540) = uVar2;
  lVar4 = FUN_00f8c610(param_1,local_20);
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x34d8) = uVar2;
  FUN_00414480(param_1 + 0x34e0);
  FUN_00414480(param_1 + 0x34e8);
  uVar1 = FUN_00f8a6f0(param_1,*(undefined4 *)(lVar4 + 0x100));
  *(undefined4 *)(param_1 + 0x3488) = uVar1;
  FUN_00f8e9a0();
  uVar1 = FUN_00f8ed10(param_1,*(undefined8 *)(param_1 + 0x3440));
  *(undefined4 *)(param_1 + 0x3464) = uVar1;
  *(undefined1 *)(param_1 + 0x3473) = 1;
  if (*(int *)(param_1 + 0x3464) == 0x400) {
    *(undefined4 *)(param_1 + 0x33e0) = 0x1d000000;
  }
  else if (*(int *)(param_1 + 0x3464) == 0x100) {
    *(undefined4 *)(param_1 + 0x33e0) = 0x200000;
  }
  else {
    *(undefined4 *)(param_1 + 0x33e0) = 0;
  }
  *(undefined1 *)(param_1 + 0x3471) = 0;
  *(undefined4 *)(param_1 + 0x3490) = 2;
  FUN_00f8b940(param_1,&local_50,*(undefined8 *)(param_1 + 0x3440),&local_28);
  FUN_00414ad0(param_1 + 0x34b0,local_50);
  uVar2 = FUN_00f8c610(param_1,local_20);
  *(undefined8 *)(param_1 + 0x3480) = uVar2;
  *(undefined1 *)(param_1 + 0x3510) = 0;
  *(undefined8 *)(param_1 + 0x3448) = *(undefined8 *)(*(longlong *)(param_1 + 0x3480) + 0xe8);
  *(undefined4 *)(param_1 + 0x33fc) = *(undefined4 *)(*(longlong *)(param_1 + 0x3480) + 0x104);
  FUN_01608560(*(undefined8 *)(param_1 + 0x3448),*(undefined4 *)(param_1 + 0x3464),
               *(undefined8 *)(param_1 + 0x34b0));
  FUN_00414560(&local_50,3);
  FUN_00414560(&local_30,2);
  return;
}

