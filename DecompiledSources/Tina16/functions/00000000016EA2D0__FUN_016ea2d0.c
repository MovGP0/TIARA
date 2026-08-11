/* Ghidra address: 016ea2d0 */
/* Ghidra symbol: FUN_016ea2d0 */


uint FUN_016ea2d0(longlong param_1,ushort param_2,undefined1 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0xe);
  if (uVar1 + 1 < 0x10000) {
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + 1;
    *(ushort *)(*(longlong *)(param_1 + 0x20) + -2 + (ulonglong)*(ushort *)(param_1 + 0xe) * 2) =
         param_2;
    *(undefined1 *)(*(longlong *)(param_1 + 0x30) + -1 + (ulonglong)param_2) = param_3;
    uVar1 = (uint)*(ushort *)(param_1 + 0xe);
  }
  else {
    FUN_01b04d70(0x21c,&LAB_016ea33c,0);
  }
  return uVar1;
}

