/* Ghidra address: 018925c0 */
/* Ghidra symbol: FUN_018925c0 */


void FUN_018925c0(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = param_2;
  FUN_006849d0(param_1,param_2);
  uVar1 = *(short *)(param_2 + 10) - 8;
  if (uVar1 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)lVar2 >> 8),1) << ((byte)uVar1 & 0x1f) & 1U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_01892830(param_1,1);
  }
  return;
}

