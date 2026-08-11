/* Ghidra address: 0040f590 */
/* Ghidra symbol: FUN_0040f590 */


undefined8 FUN_0040f590(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(ushort *)(param_1 + 10) & 1) != 0) {
    FUN_0040ed20(param_1,0xd);
  }
  uVar1 = FUN_0040ed20(param_1,10);
  FUN_0040d060(param_1);
  return uVar1;
}

