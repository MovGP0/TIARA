/* Ghidra address: 01bd7140 */
/* Ghidra symbol: FUN_01bd7140 */


undefined8 FUN_01bd7140(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x580) != 0) {
    uVar1 = FUN_00611650();
  }
  return uVar1;
}

