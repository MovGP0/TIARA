/* Ghidra address: 0049fd90 */
/* Ghidra symbol: FUN_0049fd90 */


undefined8 FUN_0049fd90(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = FUN_0049fc40();
  if (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x18);
    if (*(int *)(lVar1 + 0x10) == 0) {
      FUN_00594f90();
    }
    uVar2 = **(undefined8 **)(lVar1 + 8);
  }
  return uVar2;
}

