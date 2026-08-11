/* Ghidra address: 014325d0 */
/* Ghidra symbol: FUN_014325d0 */


void FUN_014325d0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xb0))(*(longlong **)(param_1 + 0x20));
  FUN_01432530(param_1,PTR_DAT_02005490[(ulonglong)((uVar1 & 0xff) + 1) - 1]);
  return;
}

