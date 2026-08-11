/* Ghidra address: 00e08040 */
/* Ghidra symbol: FUN_00e08040 */


bool FUN_00e08040(longlong param_1)

{
  short sVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x34) = 0;
  uVar2 = FUN_00e07960(param_1);
  sVar1 = (short)uVar2;
  *(short *)(param_1 + 0x2c) = sVar1;
  if (sVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1054) = 1;
  }
  else {
    FUN_00e07b70(param_1,uVar2);
  }
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x2c);
  return sVar1 != 0;
}

