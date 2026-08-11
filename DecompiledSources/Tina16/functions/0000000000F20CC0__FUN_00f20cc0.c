/* Ghidra address: 00f20cc0 */
/* Ghidra symbol: FUN_00f20cc0 */


longlong FUN_00f20cc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_2 == 0) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Previously saved curve not found!");
    FUN_004134c0(uVar3);
  }
  lVar4 = FUN_00f211b0(param_1,*(undefined8 *)(param_2 + 8));
  if (lVar4 == 0) {
    lVar4 = FUN_00f20870(&DAT_00f1f2d0,1);
    FUN_00414ad0(*(longlong *)(lVar4 + 8) + 8,*(undefined8 *)(param_2 + 8));
    FUN_004ae7e0(*(undefined8 *)(param_1 + 8),lVar4);
  }
  lVar1 = *(longlong *)(lVar4 + 8);
  *(undefined1 *)(lVar1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)(lVar1 + 0x13) = *(undefined1 *)(param_2 + 0x13);
  *(undefined1 *)(lVar1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)(lVar1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x90))(*(longlong **)(lVar1 + 0x18));
  plVar2 = *(longlong **)(*(longlong *)(lVar4 + 8) + 0x18);
  (**(code **)(*plVar2 + 0x88))(plVar2,*(undefined8 *)(param_2 + 0x18));
  plVar2 = *(longlong **)(*(longlong *)(lVar4 + 8) + 0x20);
  (**(code **)(*plVar2 + 0x90))(plVar2);
  plVar2 = *(longlong **)(*(longlong *)(lVar4 + 8) + 0x20);
  (**(code **)(*plVar2 + 0x88))(plVar2,*(undefined8 *)(param_2 + 0x20));
  return param_2;
}

