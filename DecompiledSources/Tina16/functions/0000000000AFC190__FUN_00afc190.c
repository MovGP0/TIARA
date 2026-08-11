/* Ghidra address: 00afc190 */
/* Ghidra symbol: FUN_00afc190 */


void FUN_00afc190(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  FUN_00a77b10(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x8b0);
  *(undefined8 *)(lVar1 + 0x208) = *param_2;
  *(undefined8 *)(lVar1 + 0x210) = param_2[1];
  return;
}

