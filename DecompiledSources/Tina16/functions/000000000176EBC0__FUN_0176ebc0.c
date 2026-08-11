/* Ghidra address: 0176ebc0 */
/* Ghidra symbol: FUN_0176ebc0 */


void FUN_0176ebc0(longlong param_1,longlong param_2)

{
  FUN_01769f90(param_1,param_2);
  (**(code **)(**(longlong **)(param_2 + 0xb0) + 0x90))(*(longlong **)(param_2 + 0xb0));
  (**(code **)(**(longlong **)(param_2 + 0xb0) + 0x10))
            (*(longlong **)(param_2 + 0xb0),*(undefined8 *)(param_1 + 0xb0));
  FUN_00414ad0(param_2 + 0xf8,*(undefined8 *)(param_1 + 0xf8));
  FUN_00414ad0(param_2 + 0x100,*(undefined8 *)(param_1 + 0x100));
  *(undefined1 *)(param_2 + 0x110) = *(undefined1 *)(param_1 + 0x110);
  (**(code **)(**(longlong **)(param_2 + 0xc0) + 0x90))(*(longlong **)(param_2 + 0xc0));
  (**(code **)(**(longlong **)(param_2 + 0xc0) + 0x10))
            (*(longlong **)(param_2 + 0xc0),*(undefined8 *)(param_1 + 0xc0));
  (**(code **)(**(longlong **)(param_2 + 200) + 0x90))(*(longlong **)(param_2 + 200));
  (**(code **)(**(longlong **)(param_2 + 200) + 0x10))
            (*(longlong **)(param_2 + 200),*(undefined8 *)(param_1 + 200));
  *(undefined1 *)(param_2 + 0x111) = 0;
  FUN_00414ad0(param_2 + 0x108,*(undefined8 *)(param_1 + 0x108));
  *(undefined1 *)(param_2 + 0x115) = *(undefined1 *)(param_1 + 0x115);
  *(undefined1 *)(param_2 + 0x113) = *(undefined1 *)(param_1 + 0x113);
  *(undefined1 *)(param_2 + 0x114) = *(undefined1 *)(param_1 + 0x114);
  return;
}

