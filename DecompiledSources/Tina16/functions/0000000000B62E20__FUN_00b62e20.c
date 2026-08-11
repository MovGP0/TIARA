/* Ghidra address: 00b62e20 */
/* Ghidra symbol: FUN_00b62e20 */


void FUN_00b62e20(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  FUN_00414520(param_1 + 0x38);
  cVar1 = FUN_00b5a1f0(*(undefined8 *)(param_1 + 0x18));
  if (cVar1 != '\0') {
    FUN_00414b90(param_1 + 0x38,L"VelvetSweatshop");
  }
  FUN_00b62e90(param_1,param_2,*(undefined8 *)(param_1 + 0x38));
  return;
}

