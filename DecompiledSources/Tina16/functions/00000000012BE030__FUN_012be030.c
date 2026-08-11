/* Ghidra address: 012be030 */
/* Ghidra symbol: FUN_012be030 */


void FUN_012be030(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    uVar2 = FUN_01d311c0(param_2,param_1 + 8,2);
    if (*(byte *)(param_2 + 0x78) < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (*(byte *)(param_2 + 0x78) & 0x1f)
              & 0x39U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      FUN_01d325e0(param_2,*(undefined8 *)(param_1 + 0x10));
    }
    else {
      FUN_01d320f0(param_2,*(undefined8 *)(param_1 + 0x10));
    }
  }
  return;
}

