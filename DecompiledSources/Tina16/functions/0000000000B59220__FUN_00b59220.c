/* Ghidra address: 00b59220 */
/* Ghidra symbol: FUN_00b59220 */


bool FUN_00b59220(longlong param_1,undefined8 param_2)

{
  short sVar1;
  bool bVar2;
  
  sVar1 = FUN_00b3ef80(param_2);
  bVar2 = sVar1 == *(short *)(param_1 + 0x68);
  if (bVar2) {
    FUN_004144d0(param_1 + 0x60);
    *(undefined2 *)(param_1 + 0x68) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0x4400;
  }
  return bVar2;
}

