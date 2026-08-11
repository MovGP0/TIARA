/* Ghidra address: 005ffa40 */
/* Ghidra symbol: FUN_005ffa40 */


longlong FUN_005ffa40(longlong *param_1)

{
  (**(code **)(*param_1 + 0x50))(param_1);
  (**(code **)(*param_1 + 0x58))(param_1,0xf);
  return param_1[0xc];
}

