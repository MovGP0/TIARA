/* Ghidra address: 0040c960 */
/* Ghidra symbol: FUN_0040c960 */


int FUN_0040c960(longlong param_1,undefined2 param_2)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 8) < 0xd7b0) || (0xd7b3 < *(ushort *)(param_1 + 8))) {
    iVar1 = 0x66;
  }
  else {
    FUN_0040c950(param_1);
    if (*(short *)(param_1 + 8) != -0x2850) {
      FUN_0040d150(param_1);
    }
    *(undefined2 *)(param_1 + 8) = param_2;
    if ((*(short *)(param_1 + 0x60) == 0) && (*(longlong *)(param_1 + 0x20) == 0)) {
      *(code **)(param_1 + 0x20) = FUN_0040cb70;
    }
    iVar1 = (**(code **)(param_1 + 0x20))(param_1);
  }
  if (iVar1 != 0) {
    FUN_00409930(iVar1);
  }
  return iVar1;
}

