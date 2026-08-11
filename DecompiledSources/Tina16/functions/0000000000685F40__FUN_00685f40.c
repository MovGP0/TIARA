/* Ghidra address: 00685f40 */
/* Ghidra symbol: FUN_00685f40 */


undefined4 FUN_00685f40(longlong param_1,int *param_2,int *param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x170) + 0x54a);
  if (bVar1 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (bVar1 & 0x1f) & 3U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x170));
    FUN_004701c0(uVar3,0x140,param_2,param_3);
    uVar2 = CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

