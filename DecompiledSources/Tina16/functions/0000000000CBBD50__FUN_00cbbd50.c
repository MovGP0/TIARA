/* Ghidra address: 00cbbd50 */
/* Ghidra symbol: FUN_00cbbd50 */


undefined8 FUN_00cbbd50(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_00cbaf90(param_1);
  if ((iVar1 < 1) &&
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0x28))(*(longlong **)(param_1 + 0x30)),
     iVar1 < 1)) {
    return 0;
  }
  return 1;
}

