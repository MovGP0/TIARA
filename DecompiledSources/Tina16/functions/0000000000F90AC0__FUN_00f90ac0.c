/* Ghidra address: 00f90ac0 */
/* Ghidra symbol: FUN_00f90ac0 */


void FUN_00f90ac0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_00f90b00(param_1);
  if (iVar1 != 1) {
    iVar1 = FUN_00f90b00(param_1);
    if (iVar1 == 4) {
      FUN_00f7d160(*(undefined8 *)(param_1 + 0x3548));
    }
    else {
      FUN_00f8d990(param_1);
    }
  }
  return;
}

