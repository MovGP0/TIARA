/* Ghidra address: 00afc090 */
/* Ghidra symbol: FUN_00afc090 */


void FUN_00afc090(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_00a77a70(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x8b0);
  *(undefined8 *)(lVar1 + 0x118) = *param_2;
  *(undefined8 *)(lVar1 + 0x120) = param_2[1];
  return;
}

