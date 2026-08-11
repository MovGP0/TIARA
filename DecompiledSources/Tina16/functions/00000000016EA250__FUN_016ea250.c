/* Ghidra address: 016ea250 */
/* Ghidra symbol: FUN_016ea250 */


uint FUN_016ea250(longlong param_1,ushort param_2,undefined1 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 0xc);
  if (uVar1 + 1 < 0x10000) {
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + 1;
    *(ushort *)(*(longlong *)(param_1 + 0x18) + -2 + (ulonglong)*(ushort *)(param_1 + 0xc) * 2) =
         param_2;
    *(undefined1 *)(*(longlong *)(param_1 + 0x30) + -1 + (ulonglong)param_2) = param_3;
    uVar1 = (uint)*(ushort *)(param_1 + 0xc);
  }
  else {
    FUN_01b04d70(0x21c,&LAB_016ea2bc,0);
  }
  return uVar1;
}

