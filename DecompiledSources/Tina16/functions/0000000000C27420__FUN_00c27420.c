/* Ghidra address: 00c27420 */
/* Ghidra symbol: FUN_00c27420 */


ulonglong FUN_00c27420(longlong param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00c27250(param_2);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + (longlong)(short)uVar2 * 4);
  while( true ) {
    if ((uVar1 & 0xfffff000) == 0xfffff000) {
      return 0xffffffff;
    }
    if (param_2 << 0xc == (uVar1 & 0xfffff000)) break;
    uVar2 = FUN_00c27270(uVar2);
    uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + (longlong)(short)uVar2 * 4);
  }
  return (ulonglong)(*(ushort *)(*(longlong *)(param_1 + 8) + (longlong)(short)uVar2 * 4) & 0xfff);
}

