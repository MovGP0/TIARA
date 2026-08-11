/* Ghidra address: 01be9b40 */
/* Ghidra symbol: FUN_01be9b40 */


void FUN_01be9b40(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int local_20;
  int local_1c;
  
  if (*(longlong *)(param_1 + 800) != 0) {
    cVar1 = FUN_01bfaa20(*(longlong *)(param_1 + 800));
    if (cVar1 != '\0') {
      uVar3 = FUN_01bfaa70(*(undefined8 *)(param_1 + 800));
      iVar2 = FUN_01bfbe40(uVar3);
      if (iVar2 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x310);
        if (*(char *)(param_1 + 0x344) == '\0') {
          uVar3 = FUN_01c07120(param_1);
          lVar4 = FUN_01c03e40(uVar3);
          FUN_005fd4e0(*(undefined8 *)(lVar5 + 0x78),*(undefined4 *)(lVar4 + 0x9c));
        }
        else {
          uVar3 = FUN_01c07120(param_1);
          lVar4 = FUN_01c03e40(uVar3);
          FUN_005fd4e0(*(undefined8 *)(lVar5 + 0x78),*(undefined4 *)(lVar4 + 0xb0));
        }
        FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),
                     *(undefined4 *)(*(longlong *)(*(longlong *)(lVar5 + 0x78) + 0x18) + 0x28));
        if (*(char *)(param_1 + 0x344) != '\0') {
          lVar5 = FUN_01c03e40(*(undefined8 *)(param_1 + 0x368));
          FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x78),
                       *(undefined4 *)(lVar5 + 0xb0));
        }
        local_20 = *(int *)(param_1 + 0x98) + -0xb;
        local_1c = *(int *)(param_1 + 0x9c) / 2 + -3;
        FUN_00635a10(*(undefined8 *)(param_1 + 0x310),
                     CONCAT71((uint7)((ulonglong)((longlong)*(int *)(param_1 + 0x9c) % 2) >> 8) &
                              0xffffff,1),&local_20,3);
      }
    }
  }
  return;
}

