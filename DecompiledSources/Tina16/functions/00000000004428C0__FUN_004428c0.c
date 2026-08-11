/* Ghidra address: 004428c0 */
/* Ghidra symbol: FUN_004428c0 */


int FUN_004428c0(ushort *param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  bool bVar4;
  
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      uVar3 = *param_1;
      if ((ushort)(uVar3 - 0x60) < 0x20) {
        bVar4 = (1 << ((byte)(uVar3 - 0x60) & 0x1f) & 0x7fffffeU) != 0;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        uVar3 = *param_1 ^ 0x20;
      }
      uVar1 = *param_2;
      if ((ushort)(uVar1 - 0x60) < 0x20) {
        bVar4 = (1 << ((byte)(uVar1 - 0x60) & 0x1f) & 0x7fffffeU) != 0;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        uVar1 = *param_2 ^ 0x20;
      }
      if ((uVar3 != uVar1) || (uVar3 == 0)) {
        return (uint)uVar3 - (uint)uVar1;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  return 0;
}

