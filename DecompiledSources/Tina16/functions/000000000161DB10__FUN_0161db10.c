/* Ghidra address: 0161db10 */
/* Ghidra symbol: FUN_0161db10 */


void FUN_0161db10(longlong param_1,undefined8 param_2)

{
  FUN_004ae7e0(param_2,param_1);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_0161db10(*(longlong *)(param_1 + 8),param_2);
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_0161db10(*(longlong *)(param_1 + 0x10),param_2);
  }
  return;
}

