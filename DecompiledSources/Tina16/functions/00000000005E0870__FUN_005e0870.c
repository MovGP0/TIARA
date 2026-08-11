/* Ghidra address: 005e0870 */
/* Ghidra symbol: FUN_005e0870 */


void FUN_005e0870(longlong *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1[1] + 0x10 + (longlong)param_2 * 0x18);
  *(undefined4 *)(param_1[1] + 0x10 + (longlong)param_2 * 0x18) = param_3;
  (**(code **)(*param_1 + 0x18))(param_1,uVar1,5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  return;
}

