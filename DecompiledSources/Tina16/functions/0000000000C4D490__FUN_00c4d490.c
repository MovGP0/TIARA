/* Ghidra address: 00c4d490 */
/* Ghidra symbol: FUN_00c4d490 */


void FUN_00c4d490(longlong param_1)

{
  char cVar1;
  
  FUN_00c4d460(param_1);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    (**(code **)(param_1 + 0x80))(*(undefined8 *)(param_1 + 0x88),param_1);
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    if (*(longlong *)(param_1 + 8) != 0) {
      cVar1 = FUN_004113d0(*(longlong *)(param_1 + 8),&PTR_FUN_007f0370);
      if (cVar1 != '\0') {
        FUN_00c4c410();
      }
    }
  }
  else {
    FUN_00c4c410();
  }
  return;
}

