/* Ghidra address: 012fa2c0 */
/* Ghidra symbol: FUN_012fa2c0 */


void FUN_012fa2c0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00414ad0(param_1 + 0xab0,L"Noname");
  FUN_00414480(param_1 + 0xaa8);
  local_30 = *(undefined8 *)(param_1 + 0xab0);
  local_28 = 0x11;
  FUN_00442f70(&local_20,*(undefined8 *)(param_1 + 0xaa0),&local_30,0);
  FUN_0064de00(param_1,local_20);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7a0),0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7c0),0);
  FUN_012fb410(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x800) + 0x268))(*(longlong **)(param_1 + 0x800),1);
  *(undefined1 *)(param_1 + 0xabb) = 0;
  *(undefined1 *)(param_1 + 0xabc) = 0;
  plVar1 = *(longlong **)(param_1 + 0x830);
  uVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0xb0))((longlong *)plVar1[0x9e],L"1024");
  (**(code **)(*plVar1 + 0x268))(plVar1,uVar3);
  *(undefined1 *)(param_1 + 0xabd) = 0;
  *(undefined1 *)(param_1 + 0xaba) = 0;
  *(undefined4 *)(param_1 + 0xac0) = 1;
  *(undefined4 *)(param_1 + 0xac4) = 0;
  FUN_0064de00(*(undefined8 *)(param_1 + 0x7d8),0);
  *(undefined8 *)(param_1 + 0xad8) = 0x3ff4cccccccccccd;
  (**(code **)(**(longlong **)(param_1 + 0xa00) + 0x128))(*(longlong **)(param_1 + 0xa00),0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x838) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x838) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Transient");
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x838) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,&PTR_DAT_012fa9a8);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x838) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,&PTR_DAT_012fa9bc);
  (**(code **)(**(longlong **)(param_1 + 0x838) + 0x268))(*(longlong **)(param_1 + 0x838),0);
  FUN_01306720(param_1);
  *(undefined4 *)(param_1 + 0xad4) = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8b0) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8b0) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,&DAT_012fa9d0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8b0) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"DATA");
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8b0) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"CURVE");
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8b0) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"FIGURE");
  (**(code **)(**(longlong **)(param_1 + 0x8b0) + 0x268))(*(longlong **)(param_1 + 0x8b0),0);
  *(undefined4 *)(*(longlong *)PTR_DAT_02004030 + 0xf0) = 30000;
  FUN_00414ad0(*(longlong *)(param_1 + 0xa88) + 0xf0,
               L"If datasheet minmum and/or maximum values defined, then use it/them to compare with the simulated value.\r\nIf only the minimum, or only the maximum value is defined, then program uses set tolarance instead of the missing value.\r\nFor example:\r\n - Min = 4V, Max = 6V,          Tolerance = 5%, Simulated value = 5.95 V, unchecked this option -> Comparison: failed\r\n - Min = 4V, Max = 6V,          Tolerance = 5%, Simulated value = 5.95 V, checked this option   -> Comparison: pass\r\n - Min = 4V, Max = not defined, Tolerance = 5%, Simulated value = 5.95 V, checked this option   -> Comparison: failed"
              );
  lVar2 = *(longlong *)(param_1 + 0x938);
  iVar4 = FUN_0040c770((double)*(int *)(*(longlong *)(param_1 + 0x728) + 0x98) / 2.0);
  iVar5 = FUN_0040c770((double)*(int *)(lVar2 + 0x98) / 2.0);
  FUN_0064cb30(lVar2,iVar4 - iVar5);
  lVar2 = *(longlong *)(param_1 + 0x938);
  iVar4 = FUN_0040c770((double)*(int *)(lVar2 + 0x9c) / 2.0);
  FUN_0064cb90(*(undefined8 *)(param_1 + 0x958),*(int *)(lVar2 + 0x94) + iVar4);
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x958),
               *(int *)(*(longlong *)(param_1 + 0x938) + 0x90) + -0xf);
  FUN_0064cb90(*(undefined8 *)(param_1 + 0x950),
               *(undefined4 *)(*(longlong *)(param_1 + 0x958) + 0x94));
  FUN_0064cb30(*(undefined8 *)(param_1 + 0x950),
               *(int *)(*(longlong *)(param_1 + 0x938) + 0x90) +
               *(int *)(*(longlong *)(param_1 + 0x938) + 0x98) + 10);
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x950),*(int *)(*(longlong *)(param_1 + 0x958) + 0x98) + -5
              );
  lVar2 = *(longlong *)(param_1 + 0x948);
  iVar4 = FUN_0040c770((double)*(int *)(*(longlong *)(param_1 + 0x728) + 0x98) / 2.0);
  iVar5 = FUN_0040c770((double)*(int *)(lVar2 + 0x98) / 2.0);
  FUN_0064cb30(lVar2,iVar4 - iVar5);
  lVar2 = *(longlong *)(param_1 + 0x948);
  iVar4 = FUN_0040c770((double)*(int *)(lVar2 + 0x9c) / 2.0);
  FUN_0064cb90(*(undefined8 *)(param_1 + 0x960),*(int *)(lVar2 + 0x94) + iVar4);
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x960),
               *(int *)(*(longlong *)(param_1 + 0x948) + 0x90) + -0xf);
  FUN_0064cb90(*(undefined8 *)(param_1 + 0x940),
               *(undefined4 *)(*(longlong *)(param_1 + 0x960) + 0x94));
  FUN_0064cb30(*(undefined8 *)(param_1 + 0x940),
               *(int *)(*(longlong *)(param_1 + 0x948) + 0x90) +
               *(int *)(*(longlong *)(param_1 + 0x948) + 0x98) + 10);
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x940),*(int *)(*(longlong *)(param_1 + 0x960) + 0x98) + -5
              );
  lVar2 = *(longlong *)(param_1 + 0x8c0);
  iVar4 = FUN_0040c770((double)*(int *)(*(longlong *)(param_1 + 0x728) + 0x98) / 2.0);
  iVar5 = FUN_0040c770((double)*(int *)(lVar2 + 0x98) / 2.0);
  FUN_0064cb30(lVar2,iVar4 - iVar5);
  lVar2 = *(longlong *)(param_1 + 0x8c0);
  iVar4 = FUN_0040c770((double)*(int *)(lVar2 + 0x9c) / 2.0);
  FUN_0064cb90(*(undefined8 *)(param_1 + 0x968),*(int *)(lVar2 + 0x94) + iVar4);
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x968),
               *(int *)(*(longlong *)(param_1 + 0x8c0) + 0x90) + -0xf);
  FUN_0064cb90(*(undefined8 *)(param_1 + 0x930),
               *(undefined4 *)(*(longlong *)(param_1 + 0x968) + 0x94));
  FUN_0064cb30(*(undefined8 *)(param_1 + 0x930),
               *(int *)(*(longlong *)(param_1 + 0x8c0) + 0x90) +
               *(int *)(*(longlong *)(param_1 + 0x8c0) + 0x98) + 10);
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x930),*(int *)(*(longlong *)(param_1 + 0x968) + 0x98) + -5
              );
  FUN_00414480(&local_20);
  return;
}

