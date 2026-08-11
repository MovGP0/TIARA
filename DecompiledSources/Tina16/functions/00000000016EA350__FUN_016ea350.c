/* Ghidra address: 016ea350 */
/* Ghidra symbol: FUN_016ea350 */


ushort FUN_016ea350(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  ushort uVar2;
  double dVar3;
  
  uVar1 = *(ushort *)(param_1 + 0x10);
  if ((short)uVar1 + 1 < 0x10000) {
    dVar3 = (double)FUN_0040af10((double)uVar1 / 10.0 + 0.9);
    uVar1 = FUN_0040c770(dVar3 * 10.0);
    *(short *)(param_1 + 0x10) = *(short *)(param_1 + 0x10) + 1;
    dVar3 = (double)FUN_0040af10((double)*(ushort *)(param_1 + 0x10) / 10.0 + 0.9);
    uVar2 = FUN_0040c770(dVar3 * 10.0);
    if (uVar1 < uVar2) {
      FUN_00409620(param_1 + 0x28,(ulonglong)uVar2 << 3);
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + -8 + (ulonglong)*(ushort *)(param_1 + 0x10) * 8)
         = param_2;
    uVar1 = *(ushort *)(param_1 + 0x10);
  }
  else {
    FUN_01b04d70(CONCAT62((uint6)(ushort)((uint)((short)uVar1 + 1) >> 0x10),0x21c),&LAB_016ea43c,0);
  }
  return uVar1;
}

