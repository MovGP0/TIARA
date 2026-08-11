/* Ghidra address: 00afc050 */
/* Ghidra symbol: FUN_00afc050 */


void FUN_00afc050(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_00a77a50(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x8b0);
  *(undefined8 *)(lVar1 + 0x148) = *param_2;
  *(undefined8 *)(lVar1 + 0x150) = param_2[1];
  return;
}

