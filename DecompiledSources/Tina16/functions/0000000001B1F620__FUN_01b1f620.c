/* Ghidra address: 01b1f620 */
/* Ghidra symbol: FUN_01b1f620 */


undefined4 FUN_01b1f620(undefined8 param_1,short param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 in_RAX;
  
  if ((ushort)(param_2 - 0x30U) < 0x10) {
    uVar1 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),1) << ((byte)(param_2 - 0x30U) & 0x1f);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0x3ff) != 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

