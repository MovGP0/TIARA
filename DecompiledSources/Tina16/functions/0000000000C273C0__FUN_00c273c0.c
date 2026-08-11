/* Ghidra address: 00c273c0 */
/* Ghidra symbol: FUN_00c273c0 */


void FUN_00c273c0(longlong param_1,int param_2,ushort param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00c27250(param_2);
  while( true ) {
    if ((*(uint *)(*(longlong *)(param_1 + 8) + (longlong)(short)uVar1 * 4) & 0xfffff000) ==
        0xfffff000) break;
    uVar1 = FUN_00c27270(uVar1);
  }
  *(int *)(*(longlong *)(param_1 + 8) + (longlong)(short)uVar1 * 4) =
       param_2 << 0xc | (int)(short)(param_3 & 0xfff);
  return;
}

