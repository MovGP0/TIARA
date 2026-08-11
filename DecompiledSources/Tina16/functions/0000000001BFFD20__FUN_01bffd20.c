/* Ghidra address: 01bffd20 */
/* Ghidra symbol: FUN_01bffd20 */


void FUN_01bffd20(longlong *param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong *local_40;
  longlong local_30;
  longlong local_28;
  int local_1c;
  
  local_50 = auStack_78;
  if (param_1[0x93] != 0) {
    *(short *)(param_1 + 99) = (short)param_1[99] + 1;
    if (*(char *)((longlong)param_1 + 0x524) == '\0') {
      local_30 = *(longlong *)(param_1[0x93] + 0x50);
    }
    else {
      local_30 = *(longlong *)(param_1[0x93] + 0x38);
    }
    local_40 = param_1;
    if (local_30 == 0) {
      FUN_01bffeb0(0,auStack_78);
    }
    else {
      iVar8 = *(int *)(*(longlong *)(local_30 + 0x10) + 0x10);
      local_1c = 0;
      local_50 = auStack_78;
      puVar2 = auStack_78;
      if (-1 < iVar8 + -1) {
        do {
          local_50 = puVar2;
          uVar6 = FUN_01bfb960(local_30,local_1c);
          local_28 = (**(code **)(*param_1 + 0x340))(param_1,uVar6);
          if (local_28 != 0) {
            cVar3 = FUN_01bfab60(param_1[0x93]);
            if (cVar3 == '\0') {
LAB_01bffe48:
              uVar5 = 0;
            }
            else {
              bVar1 = *(byte *)(param_1[0x93] + 0x28);
              if (bVar1 < 8) {
                uVar4 = (int)CONCAT71((int7)((ulonglong)param_1[0x93] >> 8),1) << (bVar1 & 0x1f);
                bVar9 = (uVar4 & 0x18) != 0;
                uVar7 = (ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar9);
              }
              else {
                uVar7 = 0;
                bVar9 = false;
              }
              if (bVar9) goto LAB_01bffe48;
              uVar5 = (undefined4)CONCAT71((int7)(uVar7 >> 8),1);
            }
            FUN_01c060c0(local_28,uVar5);
            (**(code **)(*param_1 + 0x280))(param_1,&local_28);
          }
          local_1c = local_1c + 1;
          iVar8 = iVar8 + -1;
          puVar2 = local_50;
        } while (iVar8 != 0);
      }
      FUN_00654410(param_1);
    }
  }
  return;
}

