/* Ghidra address: 00afcf10 */
/* Ghidra symbol: FUN_00afcf10 */


undefined8 * FUN_00afcf10(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00aa6a10(*(undefined8 *)(param_1 + 0x8b0));
  if (iVar1 < 1) {
    FUN_00414480(param_2);
  }
  else {
    FUN_00414740(param_2,0,iVar1);
    FUN_00aa6a50(*(undefined8 *)(param_1 + 0x8b0),*param_2,iVar1 + 1);
  }
  return param_2;
}

