/* Ghidra address: 007dcef0 */
/* Ghidra symbol: FUN_007dcef0 */


undefined8 FUN_007dcef0(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_005b4c20(param_1);
  if ((cVar1 != '\0') &&
     (iVar2 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xb0),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xf8)), iVar2 == 0)) {
    return 1;
  }
  return 0;
}

