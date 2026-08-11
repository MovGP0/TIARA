/* Ghidra address: 00788df0 */
/* Ghidra symbol: FUN_00788df0 */


undefined8 FUN_00788df0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar2 + 0x90))(plVar2);
  if (cVar1 != '\0') {
    uVar3 = FUN_00781840();
    cVar1 = FUN_00779360(uVar3);
    if ((cVar1 == '\0') && (lVar4 = FUN_006485b0(*(undefined8 *)(param_1 + 8)), lVar4 == 0)) {
      return 1;
    }
  }
  return 0;
}

