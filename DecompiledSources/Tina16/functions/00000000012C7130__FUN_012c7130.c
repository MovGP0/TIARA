/* Ghidra address: 012c7130 */
/* Ghidra symbol: FUN_012c7130 */


void FUN_012c7130(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414ad0(param_1 + 0x988,L"Noname");
  FUN_00414480(param_1 + 0x980);
  local_30 = *(undefined8 *)(param_1 + 0x988);
  local_28 = 0x11;
  FUN_00442f70(local_20,*(undefined8 *)(param_1 + 0x978),&local_30,0);
  FUN_0064de00(param_1,local_20[0]);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x708),0);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x730),0);
  FUN_012c7a60(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x268))(*(longlong **)(param_1 + 0x7c8),1);
  (**(code **)(**(longlong **)(param_1 + 0x848) + 0x268))(*(longlong **)(param_1 + 0x848),0);
  (**(code **)(**(longlong **)(param_1 + 0x8b8) + 0x268))(*(longlong **)(param_1 + 0x8b8),0);
  (**(code **)(**(longlong **)(param_1 + 2000) + 0x268))(*(longlong **)(param_1 + 2000),1);
  (**(code **)(**(longlong **)(param_1 + 0x850) + 0x268))(*(longlong **)(param_1 + 0x850),1);
  (**(code **)(**(longlong **)(param_1 + 0x8c0) + 0x268))(*(longlong **)(param_1 + 0x8c0),1);
  (**(code **)(**(longlong **)(param_1 + 0x960) + 0x90))(*(longlong **)(param_1 + 0x960));
  (**(code **)(**(longlong **)(param_1 + 0x968) + 0x90))(*(longlong **)(param_1 + 0x968));
  (**(code **)(**(longlong **)(param_1 + 0x970) + 0x90))(*(longlong **)(param_1 + 0x970));
  (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x278))(*(longlong **)(param_1 + 0x7f8));
  (**(code **)(**(longlong **)(param_1 + 0x880) + 0x278))(*(longlong **)(param_1 + 0x880));
  (**(code **)(**(longlong **)(param_1 + 0x8f0) + 0x278))(*(longlong **)(param_1 + 0x8f0));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7f8) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Default");
  (**(code **)(**(longlong **)(param_1 + 0x960) + 0x78))(*(longlong **)(param_1 + 0x960),L"Default")
  ;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x880) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Default");
  (**(code **)(**(longlong **)(param_1 + 0x968) + 0x78))(*(longlong **)(param_1 + 0x968),L"Default")
  ;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x8f0) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Default");
  (**(code **)(**(longlong **)(param_1 + 0x970) + 0x78))(*(longlong **)(param_1 + 0x970),L"Default")
  ;
  (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0x268))(*(longlong **)(param_1 + 0x7f8),0);
  (**(code **)(**(longlong **)(param_1 + 0x880) + 0x268))(*(longlong **)(param_1 + 0x880),0);
  (**(code **)(**(longlong **)(param_1 + 0x8f0) + 0x268))(*(longlong **)(param_1 + 0x8f0),0);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x808),0x4014000000000000);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x890),0x4014000000000000);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x900),0x4014000000000000);
  plVar1 = *(longlong **)(param_1 + 0x828);
  uVar2 = (**(code **)(*(longlong *)plVar1[0x9e] + 0xb0))((longlong *)plVar1[0x9e],L"1024");
  (**(code **)(*plVar1 + 0x268))(plVar1,uVar2);
  *(undefined1 *)(param_1 + 0x993) = 0;
  *(undefined1 *)(param_1 + 0x992) = 0;
  *(undefined4 *)(param_1 + 0x994) = 1;
  *(undefined4 *)(param_1 + 0x998) = 0;
  FUN_00414480(local_20);
  return;
}

