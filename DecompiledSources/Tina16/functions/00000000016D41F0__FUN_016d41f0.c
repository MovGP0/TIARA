/* Ghidra address: 016d41f0 */
/* Ghidra symbol: FUN_016d41f0 */


void FUN_016d41f0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 0;
  do {
    lVar3 = (longlong)iVar2;
    lVar1 = *(longlong *)(param_1 + 0x4e0 + lVar3 * 8);
    if (lVar1 != 0) {
      thunk_FUN_04172795(lVar1);
      thunk_FUN_03d5bf3d(*(undefined8 *)(param_1 + 0x4e0 + lVar3 * 8));
      *(undefined8 *)(param_1 + 0x4e0 + lVar3 * 8) = 0;
      *(undefined8 *)(param_1 + 0x528 + lVar3 * 8) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  return;
}

