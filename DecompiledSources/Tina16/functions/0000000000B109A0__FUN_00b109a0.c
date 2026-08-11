/* Ghidra address: 00b109a0 */
/* Ghidra symbol: FUN_00b109a0 */


void FUN_00b109a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_0084ebe0(&PTR_FUN_0083cca8,1,param_1);
  *(longlong *)(param_1 + 0x628) = lVar1;
  *(undefined4 *)(lVar1 + 0x534) = *(undefined4 *)(param_1 + 0x60c);
  *(undefined8 *)(lVar1 + 0x550) = *(undefined8 *)(param_1 + 0x640);
  *(undefined8 *)(lVar1 + 0x558) = *(undefined8 *)(param_1 + 0x648);
  *(longlong *)(lVar1 + 0x548) = param_1;
  *(code **)(lVar1 + 0x540) = FUN_00b11d60;
  return;
}

