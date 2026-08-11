/* Ghidra address: 01877a20 */
/* Ghidra symbol: FUN_01877a20 */


void FUN_01877a20(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  FUN_018770a0(param_1,param_2,param_3);
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 8) =
       *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)param_3 * 8);
  *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)param_3 * 8) = uVar1;
  return;
}

