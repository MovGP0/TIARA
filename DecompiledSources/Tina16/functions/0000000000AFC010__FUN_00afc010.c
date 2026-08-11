/* Ghidra address: 00afc010 */
/* Ghidra symbol: FUN_00afc010 */


void FUN_00afc010(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_00a77a30(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x8b0);
  *(undefined8 *)(lVar1 + 0x138) = *param_2;
  *(undefined8 *)(lVar1 + 0x140) = param_2[1];
  return;
}

