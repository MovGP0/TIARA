/* Ghidra address: 01cf1bc0 */
/* Ghidra symbol: FUN_01cf1bc0 */


short FUN_01cf1bc0(longlong *param_1)

{
  short sVar1;
  
  sVar1 = (**(code **)(*param_1 + 0xf8))(param_1);
  return sVar1 + 0x201;
}

