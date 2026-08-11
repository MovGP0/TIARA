/* Ghidra address: 01090300 */
/* Ghidra symbol: FUN_01090300 */


void FUN_01090300(longlong param_1)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0xb48) != 0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 3000) + 0xb0))
                      (*(longlong **)(param_1 + 3000),*(undefined8 *)(param_1 + 0xb48));
    if (iVar1 == -1) {
      (**(code **)(**(longlong **)(param_1 + 3000) + 0x78))
                (*(longlong **)(param_1 + 3000),*(undefined8 *)(param_1 + 0xb48));
    }
  }
  FUN_010892f0(param_1);
  return;
}

