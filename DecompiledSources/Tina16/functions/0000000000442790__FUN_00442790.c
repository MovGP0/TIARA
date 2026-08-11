/* Ghidra address: 00442790 */
/* Ghidra symbol: FUN_00442790 */


int FUN_00442790(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  
  while( true ) {
    uVar2 = *param_1;
    if ((ushort)(uVar2 - 0x60) < 0x20) {
      bVar3 = (1 << ((byte)(uVar2 - 0x60) & 0x1f) & 0x7fffffeU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar2 = *param_1 ^ 0x20;
    }
    uVar1 = *param_2;
    if ((ushort)(uVar1 - 0x60) < 0x20) {
      bVar3 = (1 << ((byte)(uVar1 - 0x60) & 0x1f) & 0x7fffffeU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      uVar1 = *param_2 ^ 0x20;
    }
    if ((uVar2 != uVar1) || (uVar2 == 0)) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uint)uVar2 - (uint)uVar1;
}

