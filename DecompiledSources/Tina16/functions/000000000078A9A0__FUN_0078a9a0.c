/* Ghidra address: 0078a9a0 */
/* Ghidra symbol: FUN_0078a9a0 */


void FUN_0078a9a0(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1[1] + 8 + (longlong)param_2 * 0x10);
  *(undefined8 *)(param_1[1] + 8 + (longlong)param_2 * 0x10) = param_3;
  (**(code **)(*param_1 + 0x18))(param_1,uVar1,5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  return;
}

