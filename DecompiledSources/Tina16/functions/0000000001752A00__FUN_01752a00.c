/* Ghidra address: 01752a00 */
/* Ghidra symbol: FUN_01752a00 */


undefined8 * FUN_01752a00(longlong param_1)

{
  short sVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 local_28;
  byte local_1b;
  undefined1 local_1a;
  undefined1 local_19 [9];
  
  sVar1 = FUN_01d03160(*(undefined8 *)(param_1 + 0x28));
  if (sVar1 == 0xe) {
    FUN_01cfde70(*(undefined8 *)(param_1 + 0x28),1,0,local_19,&local_1a,&local_1b);
  }
  else {
    local_28 = 0;
    uVar2 = FUN_01cfde70(*(undefined8 *)(param_1 + 0x28),2,0,local_19,&local_1a,&local_1b);
    if (local_1b < 8) {
      bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (local_1b & 0x1f) & 0xfeU) != 0;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      FUN_01cfde70(*(undefined8 *)(param_1 + 0x28),2,1,local_19,&local_1a,&local_1b);
    }
  }
  return &local_28;
}

