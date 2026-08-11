/* Ghidra address: 01486bb0 */
/* Ghidra symbol: FUN_01486bb0 */


void FUN_01486bb0(longlong *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1[1] + 0x10 + (longlong)param_2 * 0x18);
  *(char *)(param_1[1] + 0x10 + (longlong)param_2 * 0x18) = (char)param_3;
  (**(code **)(*param_1 + 0x18))(param_1,uVar1,5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  return;
}

