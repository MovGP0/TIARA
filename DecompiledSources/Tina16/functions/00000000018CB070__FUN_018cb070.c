/* Ghidra address: 018cb070 */
/* Ghidra symbol: FUN_018cb070 */


undefined8 FUN_018cb070(undefined8 param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01923c30);
  if (cVar1 != '\0') {
    if (*(byte *)(param_2 + 0x2a8) < 8) {
      uVar2 = (int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) <<
              (*(byte *)(param_2 + 0x2a8) & 0x1f);
      bVar4 = (uVar2 & 0xc) != 0;
      uVar3 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar4);
    }
    else {
      uVar3 = 0;
      bVar4 = false;
    }
    if (bVar4) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return 0;
}

