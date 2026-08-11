/* Ghidra address: 008b8ab0 */
/* Ghidra symbol: FUN_008b8ab0 */


undefined8 FUN_008b8ab0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar1 + 0x10) < 1) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar1 + 0x10) - 1;
    if (*(uint *)(lVar1 + 0x10) <= uVar3) {
      FUN_00594f90();
    }
    uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar3 * 8);
  }
  return uVar2;
}

