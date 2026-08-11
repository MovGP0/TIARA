/* Ghidra address: 0082a8f0 */
/* Ghidra symbol: FUN_0082a8f0 */


void FUN_0082a8f0(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  FUN_00827a10(param_1[100],(&DAT_01e17978)[uVar1 & 0xff]);
  FUN_0082a140(param_1);
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

