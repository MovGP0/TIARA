/* Ghidra address: 019b31b0 */
/* Ghidra symbol: FUN_019b31b0 */


void FUN_019b31b0(longlong *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_3;
  *(undefined4 *)(param_1[1] + lVar1 * 0xc) = param_2;
  *(undefined4 *)(param_1[1] + 4 + lVar1 * 0xc) = param_4;
  *(undefined4 *)(param_1[1] + 8 + lVar1 * 0xc) = param_5;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  (**(code **)(*param_1 + 0x10))(param_1,param_4,CONCAT71((int7)((ulonglong)(lVar1 * 3) >> 8),1));
  (**(code **)(*param_1 + 0x18))(param_1,param_5,1);
  return;
}

