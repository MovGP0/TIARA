/* Ghidra address: 00c31b90 */
/* Ghidra symbol: FUN_00c31b90 */


void FUN_00c31b90(longlong *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00c1aa10(*(undefined8 *)(param_1[2] + 0x50));
  if (iVar1 < 1) {
    (**(code **)(*param_1 + 0x20))(param_1,0xffffffff);
  }
  else {
    (**(code **)(*param_1 + 0x58))(param_1);
  }
  return;
}

