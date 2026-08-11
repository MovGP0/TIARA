/* Ghidra address: 0172ec90 */
/* Ghidra symbol: FUN_0172ec90 */


undefined4 FUN_0172ec90(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_01d3a410(*(undefined8 *)PTR_DAT_02001b18,*(undefined2 *)(param_2 + 0x9e));
  if (*(byte *)(lVar3 + 0x33) < 8) {
    uVar1 = (int)CONCAT71((int7)((ulonglong)lVar3 >> 8),1) << (*(byte *)(lVar3 + 0x33) & 0x1f);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0x90) != 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

