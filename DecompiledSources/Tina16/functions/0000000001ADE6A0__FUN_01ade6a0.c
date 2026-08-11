/* Ghidra address: 01ade6a0 */
/* Ghidra symbol: FUN_01ade6a0 */


void FUN_01ade6a0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x90),param_2);
    if (iVar1 == -1) {
      FUN_01cc6020(param_2);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x90),param_2);
    }
  }
  return;
}

