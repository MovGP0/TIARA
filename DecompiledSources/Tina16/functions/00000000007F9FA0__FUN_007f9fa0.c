/* Ghidra address: 007f9fa0 */
/* Ghidra symbol: FUN_007f9fa0 */


bool FUN_007f9fa0(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0x100000;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    uVar3 = 0x200000;
  }
  if (*(char *)(param_1 + 0x24) == '\0') {
    bVar4 = false;
  }
  else {
    uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 8));
    uVar1 = thunk_FUN_04118143(uVar2,0xfffffff0);
    bVar4 = (uVar3 & uVar1) != 0;
  }
  return bVar4;
}

