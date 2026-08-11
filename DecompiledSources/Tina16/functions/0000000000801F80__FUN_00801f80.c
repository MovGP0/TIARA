/* Ghidra address: 00801f80 */
/* Ghidra symbol: FUN_00801f80 */


void FUN_00801f80(longlong param_1,longlong param_2)

{
  if ((*(longlong *)(param_1 + 0x550) != param_2) &&
     (*(longlong *)(param_1 + 0x550) = param_2, param_2 != 0)) {
    FUN_004d26c0(param_2,param_1);
  }
  return;
}

