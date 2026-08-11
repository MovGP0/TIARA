/* Ghidra address: 006ab1a0 */
/* Ghidra symbol: FUN_006ab1a0 */


void FUN_006ab1a0(longlong param_1)

{
  longlong lVar1;
  
  FUN_006aaf30(param_1);
  lVar1 = *(longlong *)(param_1 + 0x170);
  *(longlong *)(lVar1 + 0xf8) = param_1;
  *(code **)(lVar1 + 0xf0) = FUN_006ab200;
  return;
}

