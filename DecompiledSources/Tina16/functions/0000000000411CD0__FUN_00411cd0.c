/* Ghidra address: 00411cd0 */
/* Ghidra symbol: FUN_00411cd0 */


int FUN_00411cd0(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_00406e30();
  if (iVar1 != iVar2) {
    FUN_004098e0(0x19);
  }
  return iVar1;
}

