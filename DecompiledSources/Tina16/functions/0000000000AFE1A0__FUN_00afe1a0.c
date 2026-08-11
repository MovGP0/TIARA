/* Ghidra address: 00afe1a0 */
/* Ghidra symbol: FUN_00afe1a0 */


void FUN_00afe1a0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[0x116];
  *(undefined4 *)(param_1 + 0x11d) = param_2;
  *(undefined4 *)(lVar1 + 0x9c) = param_2;
  *(undefined4 *)(lVar1 + 0xa0) = param_2;
  (**(code **)(*param_1 + 0x180))(param_1);
  return;
}

