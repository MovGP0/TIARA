/* Ghidra address: 00649a30 */
/* Ghidra symbol: FUN_00649a30 */


bool FUN_00649a30(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  
  cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 0xa8),&PTR_FUN_00640c18);
  if (cVar1 == '\0') {
    bVar5 = false;
  }
  else {
    uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa8));
    uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x58));
    iVar2 = thunk_FUN_03ec68d2(uVar3,uVar4);
    bVar5 = iVar2 != 0;
  }
  return bVar5;
}

