/* Ghidra address: 00f53ea0 */
/* Ghidra symbol: FUN_00f53ea0 */


longlong FUN_00f53ea0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  bool bVar4;
  
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    lVar2 = 0;
  }
  else {
    uVar3 = 0;
    while( true ) {
      if ((int)uVar3 < *(int *)(param_1 + 0x691)) {
        lVar2 = *(longlong *)(param_1 + 0x4f0);
        if (*(uint *)(lVar2 + 0x10) <= uVar3) {
          FUN_00594f90();
        }
        bVar4 = param_2 !=
                *(longlong *)
                 (*(longlong *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar3 * 8) + 0x18);
      }
      else {
        bVar4 = false;
      }
      if (!bVar4) break;
      uVar3 = uVar3 + 1;
    }
    uVar1 = *(undefined8 *)(param_1 + 0xb0);
    FUN_01cc5c60(uVar1);
    do {
      lVar2 = FUN_01cc5cc0(uVar1);
    } while (*(uint *)(lVar2 + 0x154) != uVar3);
  }
  return lVar2;
}

