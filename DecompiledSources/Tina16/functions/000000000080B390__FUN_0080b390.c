/* Ghidra address: 0080b390 */
/* Ghidra symbol: FUN_0080b390 */


undefined8 FUN_0080b390(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  if ((*(longlong *)(param_2 + 0x10) != 0) &&
     (iVar1 = FUN_004426c0(*(longlong *)(param_2 + 0x10),L"intl"), iVar1 == 0)) {
    return 1;
  }
  return 0;
}

