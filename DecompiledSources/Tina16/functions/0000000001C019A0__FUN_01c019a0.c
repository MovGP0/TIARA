/* Ghidra address: 01c019a0 */
/* Ghidra symbol: FUN_01c019a0 */


undefined8 FUN_01c019a0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  lVar1 = *(longlong *)(param_1 + 0x498);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x524) == '\0') {
      uVar2 = FUN_01bfaa70(lVar1);
    }
    else {
      uVar2 = FUN_01bfa9d0(lVar1);
    }
  }
  return uVar2;
}

