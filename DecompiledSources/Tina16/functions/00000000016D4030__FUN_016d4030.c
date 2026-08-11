/* Ghidra address: 016d4030 */
/* Ghidra symbol: FUN_016d4030 */


undefined8 FUN_016d4030(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = 0;
  iVar2 = 0;
  do {
    lVar3 = (longlong)iVar2;
    if (*(longlong *)(param_1 + 0x500 + lVar3 * 8) != 0) {
      thunk_FUN_04172795();
      thunk_FUN_03d5bf3d(*(undefined8 *)(param_1 + 0x500 + lVar3 * 8));
      *(undefined8 *)(param_1 + 0x500 + lVar3 * 8) = 0;
      *(undefined8 *)(param_1 + 0x548 + lVar3 * 8) = 0;
      uVar1 = 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  return uVar1;
}

