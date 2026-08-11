/* Ghidra address: 00d4a520 */
/* Ghidra symbol: FUN_00d4a520 */


void FUN_00d4a520(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar2 = FUN_00788c20(param_1);
  *(undefined4 *)(lVar1 + 0x14) = uVar2;
  *(undefined4 *)(lVar1 + 0x60) = *(undefined4 *)(param_1 + 0xc0);
  *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) & 0xbfffffff;
  *(undefined1 *)(param_1 + 0x40) = 0;
  return;
}

