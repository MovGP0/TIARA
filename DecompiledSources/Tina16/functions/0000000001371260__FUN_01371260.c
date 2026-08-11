/* Ghidra address: 01371260 */
/* Ghidra symbol: FUN_01371260 */


void FUN_01371260(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xf10) + 8);
  FUN_0064dbe0(*(undefined8 *)(lVar1 + 0x708),0);
  FUN_0064dbe0(*(undefined8 *)(lVar1 + 0x710),0);
  FUN_0064dbe0(*(undefined8 *)(lVar1 + 0x718),0);
  FUN_0064cb90(*(undefined8 *)(lVar1 + 0x720),*(undefined4 *)(*(longlong *)(lVar1 + 0x708) + 0x94));
  FUN_0064cb90(*(undefined8 *)(lVar1 + 0x728),*(undefined4 *)(*(longlong *)(lVar1 + 0x710) + 0x94));
  return;
}

