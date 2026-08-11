/* Ghidra address: 00b2edc0 */
/* Ghidra symbol: FUN_00b2edc0 */


undefined8 FUN_00b2edc0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  
  FUN_00414bf0(param_2,&LAB_00b2ee08);
  puVar1 = (undefined1 *)FUN_00414df0(param_2);
  *puVar1 = 0x1d;
  lVar2 = FUN_00414df0(param_2);
  *(undefined1 *)(lVar2 + 1) = param_3;
  return param_2;
}

