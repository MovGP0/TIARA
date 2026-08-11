/* Ghidra address: 0108b6f0 */
/* Ghidra symbol: FUN_0108b6f0 */


void FUN_0108b6f0(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0108bb30(param_1);
  uVar1 = FUN_00442620(param_1 + 0xc08,*(undefined8 *)(param_1 + 0x4cb0));
  uVar2 = _Debug_GetNextLine(*(undefined8 *)(param_1 + 0xb28),uVar2,uVar1);
  FUN_010890f0(param_1,uVar2);
  FUN_01085cd0(param_1);
  return;
}

