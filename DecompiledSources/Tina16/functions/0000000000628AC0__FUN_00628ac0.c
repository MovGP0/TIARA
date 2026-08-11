/* Ghidra address: 00628ac0 */
/* Ghidra symbol: FUN_00628ac0 */


undefined8 FUN_00628ac0(longlong param_1)

{
  double dVar1;
  undefined8 uVar2;
  
  if (*(uint *)(param_1 + 0x3c) == 0) {
    uVar2 = 0;
  }
  else {
    dVar1 = (double)*(uint *)(param_1 + 0x4c) / (double)*(uint *)(param_1 + 0x3c);
    uVar2 = CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)((1.0 - dVar1) * 100.0));
  }
  return uVar2;
}

