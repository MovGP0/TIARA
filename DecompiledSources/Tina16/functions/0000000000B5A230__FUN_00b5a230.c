/* Ghidra address: 00b5a230 */
/* Ghidra symbol: FUN_00b5a230 */


bool FUN_00b5a230(longlong param_1,undefined8 param_2)

{
  short sVar1;
  bool bVar2;
  
  sVar1 = FUN_00b3ef80(param_2);
  bVar2 = sVar1 == *(short *)(param_1 + 0x50);
  if (bVar2) {
    FUN_004144d0(param_1 + 0x48);
    *(undefined2 *)(param_1 + 0x50) = 0;
  }
  return bVar2;
}

