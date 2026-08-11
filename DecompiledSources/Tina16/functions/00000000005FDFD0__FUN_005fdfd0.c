/* Ghidra address: 005fdfd0 */
/* Ghidra symbol: FUN_005fdfd0 */


ulonglong FUN_005fdfd0(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x118))(param_1);
  return uVar1 >> 0x20;
}

