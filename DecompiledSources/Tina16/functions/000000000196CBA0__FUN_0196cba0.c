/* Ghidra address: 0196cba0 */
/* Ghidra symbol: FUN_0196cba0 */


void FUN_0196cba0(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x90) == '\0') {
    FUN_00414480(param_1 + 8);
    *(undefined1 *)(param_1 + 0x10) = 0;
    uVar1 = FUN_00448ed0();
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x90))(*(longlong **)(param_1 + 0x28));
    uVar1 = FUN_00448ed0();
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))(*(longlong **)(param_1 + 0x50),0);
    FUN_00414480(param_1 + 0x60);
    FUN_00414480(param_1 + 0x68);
    FUN_00414480(param_1 + 0x70);
    FUN_00414480(param_1 + 0x78);
  }
  FUN_00414480(param_1 + 0x18);
  FUN_00414480(param_1 + 0x30);
  FUN_00414480(param_1 + 0x38);
  FUN_00414480(param_1 + 0x48);
  FUN_00414480(param_1 + 0x80);
  return;
}

