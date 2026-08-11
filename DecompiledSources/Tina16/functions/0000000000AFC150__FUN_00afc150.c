/* Ghidra address: 00afc150 */
/* Ghidra symbol: FUN_00afc150 */


void FUN_00afc150(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_00a77af0(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x8b0);
  *(undefined8 *)(lVar1 + 0x1f8) = *param_2;
  *(undefined8 *)(lVar1 + 0x200) = param_2[1];
  return;
}

