/* Ghidra address: 01966830 */
/* Ghidra symbol: FUN_01966830 */


ulonglong FUN_01966830(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if (*(longlong *)(param_1 + 0x2e0) == 0) {
    FUN_01966c80(param_1);
  }
  if (*(longlong *)(param_1 + 0x2e0) == 0) goto LAB_019668a1;
  uVar3 = FUN_019667e0(param_1);
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  cVar2 = (**(code **)(lVar1 + 0xb0))(lVar1,uVar3);
  if (cVar2 == '\0') {
LAB_01966899:
    uVar4 = 0;
  }
  else {
    cVar2 = FUN_01966bb0(param_1,4);
    if (cVar2 == '\0') {
      cVar2 = FUN_01966bb0(param_1,7);
      if (cVar2 != '\0') goto LAB_01966899;
    }
    uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
LAB_019668a1:
  return uVar4 & 0xffffffff;
}

