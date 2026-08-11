/* Ghidra address: 00b13120 */
/* Ghidra symbol: FUN_00b13120 */


void FUN_00b13120(longlong *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  (**(code **)(*param_1 + 0x130))(param_1);
  FUN_004b5bd0(param_1,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1[0xf] + (longlong)param_2 * 8);
  *(undefined8 *)(param_1[0xf] + (longlong)param_2 * 8) =
       *(undefined8 *)(param_1[0xf] + (longlong)param_3 * 8);
  *(undefined8 *)(param_1[0xf] + (longlong)param_3 * 8) = uVar1;
  (**(code **)(*param_1 + 0x128))(param_1);
  return;
}

