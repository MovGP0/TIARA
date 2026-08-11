/* Ghidra address: 00f70210 */
/* Ghidra symbol: FUN_00f70210 */


undefined1 FUN_00f70210(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_00f65130(*(undefined8 *)(param_1 + 0x130),*(undefined4 *)(param_1 + 0x118));
  lVar2 = FUN_00f6f0c0(uVar1);
  return *(undefined1 *)(lVar2 + 0x88 + (longlong)param_2);
}

