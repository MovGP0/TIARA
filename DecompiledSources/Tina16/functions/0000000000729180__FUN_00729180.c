/* Ghidra address: 00729180 */
/* Ghidra symbol: FUN_00729180 */


void FUN_00729180(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 local_28 [16];
  
  iVar1 = FUN_00416db0(param_2,*(undefined8 *)(param_1 + 0x78));
  if (iVar1 != 0) {
    if (param_2 != 0) {
      FUN_0043dd70(local_28,param_2);
    }
    FUN_00414ad0(param_1 + 0x78,param_2);
  }
  return;
}

