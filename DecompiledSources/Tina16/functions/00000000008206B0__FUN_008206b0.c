/* Ghidra address: 008206b0 */
/* Ghidra symbol: FUN_008206b0 */


undefined4 FUN_008206b0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_00781840();
  uVar2 = (**(code **)(*plVar3 + 0x98))(plVar3);
  if ((char)uVar2 != '\0') {
    cVar1 = FUN_00781870();
    if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x2c8) & 2) == 0)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

