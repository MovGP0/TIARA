/* Ghidra address: 004520b0 */
/* Ghidra symbol: FUN_004520b0 */


ulonglong FUN_004520b0(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined7 uVar6;
  
  uVar6 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar5 = CONCAT71(uVar6,1);
  iVar3 = FUN_00427ab0();
  if (*(int *)(param_1 + 0x40) != iVar3) {
    FUN_00452000(param_1);
    iVar2 = *(int *)(param_1 + 0x44);
    FUN_00451da0(*(undefined8 *)(param_1 + 0x38),&local_30);
    bVar7 = *(int *)(local_30 + 0x10) != 0;
    if (bVar7) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
      UNLOCK();
    }
    while( true ) {
      iVar4 = FUN_004520a0(auStack_58,param_1 + 0x18,0xffff0001);
      if (iVar4 == 0xffff) break;
      iVar4 = FUN_004520a0(auStack_58,param_1 + 0x18,0xffff);
      if (iVar4 != 0) {
        FUN_00452080(param_1);
      }
    }
    FUN_00452000(param_1);
    if (bVar7) {
      LOCK();
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
      UNLOCK();
    }
    *(int *)(param_1 + 0x40) = iVar3;
    LOCK();
    piVar1 = (int *)(param_1 + 0x44);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    uVar5 = CONCAT71(uVar6,iVar2 == iVar3);
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  return uVar5 & 0xffffffff;
}

