/* Ghidra address: 006ed740 */
/* Ghidra symbol: FUN_006ed740 */


void FUN_006ed740(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x20),param_2);
  if (iVar1 != 0) {
    FUN_00414ad0(param_1 + 0x20,param_2);
    FUN_006ed570(param_1);
  }
  return;
}

