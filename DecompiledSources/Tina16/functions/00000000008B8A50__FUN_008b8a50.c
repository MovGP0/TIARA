/* Ghidra address: 008b8a50 */
/* Ghidra symbol: FUN_008b8a50 */


undefined8 FUN_008b8a50(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (*(int *)(lVar1 + 0x10) < 1) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(lVar1 + 0x10) == 0) {
      FUN_00594f90();
    }
    uVar2 = **(undefined8 **)(lVar1 + 8);
  }
  return uVar2;
}

