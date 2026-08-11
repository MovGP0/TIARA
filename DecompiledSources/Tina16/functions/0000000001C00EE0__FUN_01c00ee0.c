/* Ghidra address: 01c00ee0 */
/* Ghidra symbol: FUN_01c00ee0 */


undefined8 FUN_01c00ee0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((*(longlong *)(param_1 + 0x498) != 0) && (cVar1 = FUN_01c019e0(param_1), cVar1 != '\0')) &&
     (iVar2 = FUN_00654c00(param_1), 0 < iVar2)) {
    uVar3 = FUN_01c019a0(param_1);
    uVar3 = FUN_01bfb960(uVar3,0);
    return uVar3;
  }
  return 0;
}

