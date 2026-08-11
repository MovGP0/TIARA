/* Ghidra address: 0058c5e0 */
/* Ghidra symbol: FUN_0058c5e0 */


undefined8 FUN_0058c5e0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  while( true ) {
    uVar1 = *(ushort *)(*param_3 + (longlong)iVar2 * 2);
    if (uVar1 < 0x60) {
      bVar3 = ((byte)(&DAT_0058c680)[(longlong)(int)(uVar1 & 0x7f) >> 3] >> (uVar1 & 7) & 1) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) break;
    iVar2 = iVar2 + 1;
  }
  FUN_00414740(param_2,*param_3,iVar2);
  while( true ) {
    uVar1 = *(short *)(*param_3 + (longlong)iVar2 * 2) - 0x20;
    if (uVar1 < 0x40) {
      bVar3 = (1L << ((byte)uVar1 & 0x3f) & 0x2000000000001001U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) break;
    iVar2 = iVar2 + 1;
  }
  *param_3 = *param_3 + (longlong)iVar2 * 2;
  return param_2;
}

