/* Ghidra address: 00a3c2e0 */
/* Ghidra symbol: FUN_00a3c2e0 */


undefined8 FUN_00a3c2e0(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_00a39e90(param_1);
  uVar5 = 0;
  uVar4 = 0;
  lVar3 = FUN_00a33e30(*(undefined8 *)(param_1 + 0x160),&PTR_FUN_00a31a70);
  bVar1 = *(byte *)(lVar2 + 0x491);
  if (bVar1 < 4) {
    uVar4 = uVar5;
    if (bVar1 == 3) {
      if (lVar3 != 0) {
        if (*(char *)(lVar3 + 0x28) == '\0') {
          uVar4 = 2;
        }
        else {
          uVar4 = 1;
        }
      }
    }
    else if (((bVar1 == 0) || (bVar1 == 2)) && (lVar3 != 0)) {
      uVar4 = 1;
    }
  }
  else if ((bVar1 == 4) || (bVar1 == 6)) {
    uVar4 = 2;
  }
  return uVar4;
}

