/* Ghidra address: 017500e0 */
/* Ghidra symbol: FUN_017500e0 */


void FUN_017500e0(longlong *param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 7) = 0;
  (**(code **)(*param_1 + 0x68))(param_1,param_2);
  FUN_0173d100(param_1,param_2,*PTR_DAT_02002480,*PTR_DAT_02001560);
  return;
}

