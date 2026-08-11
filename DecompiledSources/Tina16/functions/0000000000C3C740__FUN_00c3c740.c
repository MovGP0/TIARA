/* Ghidra address: 00c3c740 */
/* Ghidra symbol: FUN_00c3c740 */


int FUN_00c3c740(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00c3c230(param_2,*(undefined8 *)(param_1 + 0x30));
  iVar2 = FUN_00c3c230(param_2,*(undefined8 *)(param_1 + 0x38));
  return iVar1 + iVar2 + 0x28;
}

