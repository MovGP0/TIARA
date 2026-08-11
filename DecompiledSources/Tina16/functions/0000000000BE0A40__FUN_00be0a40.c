/* Ghidra address: 00be0a40 */
/* Ghidra symbol: FUN_00be0a40 */


void FUN_00be0a40(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  
  uVar3 = *(int *)(*(longlong *)(param_1 + 0x88) + 0x10) - 1;
  if (-1 < (int)uVar3) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x10);
      lVar2 = *(longlong *)(param_1 + 0x88);
      if (*(uint *)(lVar2 + 0x10) <= uVar3) {
        FUN_00594f90();
      }
      if (*(int *)(*(longlong *)(lVar1 + 8) + 4 +
                  (longlong)*(int *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar3 * 4) * 0x14) <=
          param_2) {
        FUN_005995b0(*(longlong *)(param_1 + 0x88) + 8,uVar3,5);
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0xffffffff);
  }
  return;
}

