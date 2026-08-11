/* Ghidra address: 00654d20 */
/* Ghidra symbol: FUN_00654d20 */


void FUN_00654d20(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    iVar2 = thunk_FUN_03975e2d(PTR_IMAGE_DOS_HEADER_0200c280,param_3,param_2 + 0x30);
    if (iVar2 == 0) {
      iVar2 = thunk_FUN_03975e2d(*(undefined8 *)PTR_PTR_020028c0,param_3,param_2 + 0x30);
      if (iVar2 == 0) {
        iVar2 = thunk_FUN_03975e2d(0,param_3,param_2 + 0x30);
        if (iVar2 == 0) {
          thunk_FUN_03975e2d(*(undefined8 *)(param_2 + 0x48),param_3,param_2 + 0x30);
        }
      }
    }
    *(undefined8 *)(param_2 + 0x48) = uVar1;
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffbf1f | 3;
  }
  return;
}

