/* Ghidra address: 00781870 */
/* Ghidra symbol: FUN_00781870 */


undefined8 FUN_00781870(void)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
  if ((cVar1 == '\0') || (DAT_02012550 == DAT_02012598)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

