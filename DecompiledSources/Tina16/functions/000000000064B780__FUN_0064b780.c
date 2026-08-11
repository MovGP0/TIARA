/* Ghidra address: 0064b780 */
/* Ghidra symbol: FUN_0064b780 */


undefined8 FUN_0064b780(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_005b4c20(param_1);
  if ((cVar1 != '\0') &&
     (iVar2 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0xf0),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0xf8)), iVar2 == 0)) {
    return 1;
  }
  return 0;
}

