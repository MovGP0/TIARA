/* Ghidra address: 00f53e40 */
/* Ghidra symbol: FUN_00f53e40 */


uint FUN_00f53e40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0;
  while( true ) {
    if ((int)uVar2 < *(int *)(param_1 + 0x691)) {
      lVar1 = *(longlong *)(param_1 + 0x4f0);
      if (*(uint *)(lVar1 + 0x10) <= uVar2) {
        FUN_00594f90();
      }
      bVar3 = param_2 !=
              *(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar2 * 8) + 0x18);
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) break;
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

