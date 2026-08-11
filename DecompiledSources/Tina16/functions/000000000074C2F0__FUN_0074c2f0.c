/* Ghidra address: 0074c2f0 */
/* Ghidra symbol: FUN_0074c2f0 */


void FUN_0074c2f0(longlong param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  bool bVar7;
  
  FUN_00650920(param_1,param_2,param_3,param_4,param_5);
  if ((char)param_2 == '\0') {
    uVar2 = FUN_0074bb80(param_1);
    *(undefined8 *)(param_1 + 0x330) = uVar2;
    *(ulonglong *)(param_1 + 0x338) = CONCAT44(param_5,param_4);
    if (*(longlong *)(param_1 + 0x330) != 0) {
      if (*(byte *)(param_1 + 0xad) < 8) {
        bVar7 = ((int)CONCAT71((int7)(CONCAT44(param_5,param_4) >> 8),1) <<
                 (*(byte *)(param_1 + 0xad) & 0x1f) & 0x18U) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        iVar1 = FUN_0064d0b0(*(undefined8 *)(param_1 + 0x78));
        *(int *)(param_1 + 0x350) = iVar1 - *(int *)(param_1 + 0x34c);
        iVar1 = FUN_00654c00();
        uVar6 = 0;
        if (-1 < iVar1 + -1) {
          do {
            uVar5 = (ulonglong)uVar6;
            lVar3 = FUN_00654bc0(*(undefined8 *)(param_1 + 0x78),uVar5);
            if (*(char *)(lVar3 + 0xa9) != '\0') {
              if (*(byte *)(lVar3 + 0xad) < 8) {
                bVar7 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (*(byte *)(lVar3 + 0xad) & 0x1f) &
                        0x18U) != 0;
              }
              else {
                bVar7 = false;
              }
              if (bVar7) {
                *(int *)(param_1 + 0x350) = *(int *)(param_1 + 0x350) - *(int *)(lVar3 + 0x98);
              }
            }
            uVar6 = uVar6 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        *(int *)(param_1 + 0x350) =
             *(int *)(param_1 + 0x350) + *(int *)(*(longlong *)(param_1 + 0x330) + 0x98);
      }
      else {
        iVar1 = FUN_0064d120(*(undefined8 *)(param_1 + 0x78));
        *(int *)(param_1 + 0x350) = iVar1 - *(int *)(param_1 + 0x34c);
        iVar1 = FUN_00654c00();
        uVar6 = 0;
        if (-1 < iVar1 + -1) {
          do {
            uVar5 = (ulonglong)uVar6;
            lVar3 = FUN_00654bc0(*(undefined8 *)(param_1 + 0x78),uVar5);
            if (*(char *)(lVar3 + 0xa9) != '\0') {
              if (*(byte *)(lVar3 + 0xad) < 8) {
                bVar7 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (*(byte *)(lVar3 + 0xad) & 0x1f) &
                        6U) != 0;
              }
              else {
                bVar7 = false;
              }
              if (bVar7) {
                *(int *)(param_1 + 0x350) = *(int *)(param_1 + 0x350) - *(int *)(lVar3 + 0x9c);
              }
            }
            uVar6 = uVar6 + 1;
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        *(int *)(param_1 + 0x350) =
             *(int *)(param_1 + 0x350) + *(int *)(*(longlong *)(param_1 + 0x330) + 0x9c);
      }
      FUN_0074c8e0(param_1,param_4,param_5);
      FUN_0074b990(param_1);
      lVar3 = FUN_007f9b90(param_1,1);
      lVar3 = *(longlong *)(lVar3 + 0x4c0);
      puVar4 = (undefined8 *)0x0;
      if (lVar3 != 0) {
        *(longlong *)(param_1 + 0x318) = lVar3;
        *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(lVar3 + 1000);
        *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(lVar3 + 0x3f0);
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x318) + 1000);
        *(longlong *)(*(longlong *)(param_1 + 0x318) + 0x3f0) = param_1;
        *puVar4 = FUN_0074cab0;
      }
      if (*(byte *)(param_1 + 0x378) < 8) {
        bVar7 = ((int)CONCAT71((int7)((ulonglong)puVar4 >> 8),1) <<
                 (*(byte *)(param_1 + 0x378) & 0x1f) & 10U) != 0;
      }
      else {
        bVar7 = false;
      }
      if (bVar7) {
        FUN_0074ba60(param_1);
      }
    }
  }
  return;
}

