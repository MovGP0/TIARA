/* Ghidra address: 006fa5f0 */
/* Ghidra symbol: FUN_006fa5f0 */


void FUN_006fa5f0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    if (param_1[0x65] != param_2) {
      FUN_004d26c0(param_2,param_1);
    }
    uVar1 = FUN_007e2ec0(param_2);
    FUN_0064c270(param_1,uVar1);
    FUN_0064de00(param_1,*(undefined8 *)(param_2 + 0x78));
    FUN_006fa3b0(param_1,*(undefined1 *)(param_2 + 0x80));
    (**(code **)(*param_1 + 0x128))(param_1,*(undefined1 *)(param_2 + 0x81));
    FUN_00414ad0(param_1 + 0x1e,*(undefined8 *)(param_2 + 0xb0));
    FUN_006fa490(param_1,*(undefined4 *)(param_2 + 0x88));
    FUN_0064dbe0(param_1,*(undefined1 *)(param_2 + 0x86));
  }
  param_1[0x65] = param_2;
  return;
}

