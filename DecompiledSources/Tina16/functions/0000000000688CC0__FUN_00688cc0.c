/* Ghidra address: 00688cc0 */
/* Ghidra symbol: FUN_00688cc0 */


void FUN_00688cc0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0044f080();
  if (5 < iVar1) {
    uVar2 = FUN_0065b870(param_1);
    uVar3 = FUN_00416740(*(undefined8 *)(param_1 + 0x4a0));
    thunk_FUN_041b2403(uVar2,0x1609,0,uVar3);
  }
  return;
}

