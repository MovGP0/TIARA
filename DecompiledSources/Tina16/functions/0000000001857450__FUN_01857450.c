/* Ghidra address: 01857450 */
/* Ghidra symbol: FUN_01857450 */


undefined8 FUN_01857450(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  short local_2e;
  ushort local_2c;
  
  uVar4 = 0;
  lVar2 = (**(code **)*param_2)(param_2);
  lVar3 = FUN_004b6da0(param_2);
  if (5 < lVar2 - lVar3) {
    iVar1 = FUN_004b6da0(param_2);
    FUN_004b84c0(param_2,&local_2e,6);
    lVar2 = (longlong)iVar1;
    FUN_004b6dc0(param_2,lVar2);
    if (local_2c < 8) {
      bVar5 = ((int)CONCAT71((int7)((ulonglong)lVar2 >> 8),1) << ((byte)local_2c & 0x1f) & 3U) != 0;
    }
    else {
      bVar5 = false;
    }
    if ((bVar5) && (local_2e == 0)) {
      uVar4 = 1;
    }
  }
  return uVar4;
}

