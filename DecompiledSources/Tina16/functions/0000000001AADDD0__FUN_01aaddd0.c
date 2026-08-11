/* Ghidra address: 01aaddd0 */
/* Ghidra symbol: FUN_01aaddd0 */


undefined8 FUN_01aaddd0(longlong param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  short local_2e;
  
  uVar2 = **(uint **)(*(longlong *)(param_1 + 0x19c38) + -8 + (longlong)param_2 * 8);
  local_2e = (short)uVar2;
  if (local_2e != 0) {
    iVar1 = 1;
    for (uVar2 = uVar2 & 0xffff; uVar2 != 0; uVar2 = uVar2 - 1) {
      if (param_3 ==
          *(ushort *)
           (*(longlong *)(*(longlong *)(param_1 + 0x19c38) + -8 + (longlong)param_2 * 8) + -4 +
           (longlong)iVar1 * 6)) {
        return 1;
      }
      iVar1 = iVar1 + 1;
    }
  }
  return 0;
}

