/* Ghidra address: 00777ce0 */
/* Ghidra symbol: FUN_00777ce0 */


undefined8 FUN_00777ce0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    plVar2 = (longlong *)FUN_00781840();
    cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
    if (cVar1 == '\0') goto LAB_00777d10;
LAB_00777d49:
    uVar3 = 1;
  }
  else {
LAB_00777d10:
    if (((*(ushort *)(param_1 + 0x34) & 0x10) != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
      plVar2 = (longlong *)FUN_00781840();
      cVar1 = (**(code **)(*plVar2 + 0x98))(plVar2);
      if ((cVar1 != '\0') && (cVar1 = FUN_00777c40(*(undefined8 *)(param_1 + 0x78)), cVar1 == '\0'))
      goto LAB_00777d49;
    }
    uVar3 = 0;
  }
  return uVar3;
}

