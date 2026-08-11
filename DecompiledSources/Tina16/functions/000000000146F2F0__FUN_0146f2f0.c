/* Ghidra address: 0146f2f0 */
/* Ghidra symbol: FUN_0146f2f0 */


void FUN_0146f2f0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x7f0),L"noname.py");
  if (iVar1 == 0) {
    FUN_0146f360(param_1);
  }
  else {
    FUN_0146f280(param_1,*(undefined8 *)(param_1 + 0x7f0));
    FUN_00c0dad0(*(undefined8 *)(param_1 + 0x738),0);
  }
  return;
}

