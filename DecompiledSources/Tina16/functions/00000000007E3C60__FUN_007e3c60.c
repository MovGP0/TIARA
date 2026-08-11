/* Ghidra address: 007e3c60 */
/* Ghidra symbol: FUN_007e3c60 */


void FUN_007e3c60(longlong param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_0061c2b8);
  if (cVar1 == '\0') {
    FUN_004b1190(param_1,param_2);
  }
  else {
    (**(code **)(*param_2 + 0xe8))(param_2,*(undefined1 *)(param_1 + 0x81));
    (**(code **)(*param_2 + 0xf8))(param_2,*(undefined4 *)(param_1 + 0xac));
    (**(code **)(*param_2 + 0x110))(param_2,*(undefined8 *)(param_1 + 0xb0));
    (**(code **)(*param_2 + 0x128))(param_2,*(undefined4 *)(param_1 + 0x88));
    (**(code **)(*param_2 + 0xd8))(param_2,*(undefined8 *)(param_1 + 0x78));
    (**(code **)(*param_2 + 0x118))(param_2,*(undefined1 *)(param_1 + 0x86));
    (**(code **)(*param_2 + 0x90))(param_2,param_1 + 0x110);
  }
  return;
}

