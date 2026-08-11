/* Ghidra address: 01964d50 */
/* Ghidra symbol: FUN_01964d50 */


void FUN_01964d50(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_004b2060(*(undefined8 *)(param_1 + 0x2c8));
  if (1 < iVar1) {
    FUN_0180f210(*(undefined8 *)(param_1 + 0x2c8),L"Formats",param_2,param_1,0);
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x2f8);
  }
  iVar1 = FUN_004b2060(*(undefined8 *)(param_1 + 0x2f8));
  if (1 < iVar1) {
    FUN_0180f210(*(undefined8 *)(param_1 + 0x2f8),L"Highlights",param_2,param_1,uVar2);
  }
  return;
}

