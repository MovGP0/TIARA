/* Ghidra address: 0078da10 */
/* Ghidra symbol: FUN_0078da10 */


void FUN_0078da10(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1[1] + 0x10 + (longlong)param_2 * 0x18);
  *(undefined8 *)(param_1[1] + 0x10 + (longlong)param_2 * 0x18) = param_3;
  (**(code **)(*param_1 + 0x18))(param_1,uVar1,5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  return;
}

