/* Ghidra address: 01966970 */
/* Ghidra symbol: FUN_01966970 */


ulonglong FUN_01966970(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  
  uVar3 = FUN_01966bb0(param_1,4);
  plVar4 = (longlong *)FUN_019667e0(param_1);
  if (plVar4 == (longlong *)0x0) {
    return (ulonglong)uVar3;
  }
  if ((((char)uVar3 == '\0') && (cVar2 = (**(code **)(*plVar4 + 0x58))(plVar4), cVar2 == '\0')) &&
     ((lVar1 = *(longlong *)(param_1 + 0x2e0), lVar1 == 0 ||
      (cVar2 = (**(code **)(lVar1 + 0xb0))(lVar1,plVar4), cVar2 == '\0')))) {
    return 0;
  }
  return CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
}

