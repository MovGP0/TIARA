/* Ghidra address: 01c01000 */
/* Ghidra symbol: FUN_01c01000 */


undefined8 FUN_01c01000(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((*(longlong *)(param_1 + 0x498) != 0) && (cVar1 = FUN_01c019e0(param_1), cVar1 != '\0')) {
    uVar2 = FUN_01c019a0(param_1);
    lVar3 = FUN_01c019a0(param_1);
    uVar2 = FUN_01bfb960(uVar2,*(int *)(*(longlong *)(lVar3 + 0x10) + 0x10) + -1);
    return uVar2;
  }
  return 0;
}

