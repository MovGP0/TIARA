/* Ghidra address: 0074bb80 */
/* Ghidra symbol: FUN_0074bb80 */


longlong * FUN_0074bb80(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  
  local_30 = *(undefined8 *)(param_1 + 0x90);
  cVar2 = *(char *)(param_1 + 0xad);
  if (cVar2 == '\x01') {
    cVar2 = FUN_00652600(param_1);
    if (cVar2 == '\0') {
      local_30 = CONCAT44(local_30._4_4_ + -1,(int)local_30);
    }
    else {
      local_30 = CONCAT44((local_30._4_4_ - *(int *)(*(longlong *)(param_1 + 0xd8) + 0x14)) + -1,
                          (int)local_30);
    }
  }
  else if (cVar2 == '\x02') {
    cVar2 = FUN_00652600(param_1);
    if (cVar2 == '\0') {
      local_30 = CONCAT44(local_30._4_4_ + *(int *)(param_1 + 0x9c),(int)local_30);
    }
    else {
      local_30 = CONCAT44(local_30._4_4_ +
                          *(int *)(param_1 + 0x9c) + *(int *)(*(longlong *)(param_1 + 0xd8) + 0x1c)
                          + 1,(int)local_30);
    }
  }
  else if (cVar2 == '\x03') {
    cVar2 = FUN_00652600(param_1);
    if (cVar2 == '\0') {
      local_30 = CONCAT44(local_30._4_4_,(int)local_30 + -1);
    }
    else {
      local_30 = CONCAT44(local_30._4_4_,
                          ((int)local_30 - *(int *)(*(longlong *)(param_1 + 0xd8) + 0x10)) + -1);
    }
  }
  else {
    if (cVar2 != '\x04') {
      return (longlong *)0x0;
    }
    cVar2 = FUN_00652600(param_1);
    if (cVar2 == '\0') {
      local_30 = CONCAT44(local_30._4_4_,(int)local_30 + *(int *)(param_1 + 0x98));
    }
    else {
      local_30 = CONCAT44(local_30._4_4_,
                          (int)local_30 +
                          *(int *)(param_1 + 0x98) + *(int *)(*(longlong *)(param_1 + 0xd8) + 0x18)
                          + 1);
    }
  }
  iVar3 = FUN_00654c00();
  uVar9 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar8 = (ulonglong)uVar9;
      plVar5 = (longlong *)FUN_00654bc0(*(undefined8 *)(param_1 + 0x78),uVar8);
      if ((*(char *)((longlong)plVar5 + 0xa9) != '\0') &&
         (uVar6 = (**(code **)(*plVar5 + 0xf0))(plVar5), (char)uVar6 != '\0')) {
        if (*(byte *)((longlong)plVar5 + 0xad) < 8) {
          uVar4 = (int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) <<
                  (*(byte *)((longlong)plVar5 + 0xad) & 0x1f);
          bVar10 = (uVar4 & 0x1e) != 0;
          uVar7 = (ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar10);
        }
        else {
          uVar7 = 0;
          bVar10 = false;
        }
        if (bVar10) {
          if (*(byte *)((longlong)plVar5 + 0xad) < 8) {
            bVar10 = ((int)CONCAT71((int7)(uVar7 >> 8),1) <<
                      (*(byte *)((longlong)plVar5 + 0xad) & 0x1f) & 0x18U) != 0;
          }
          else {
            bVar10 = false;
          }
          if (*(byte *)(param_1 + 0xad) < 8) {
            bVar11 = ((int)CONCAT71((int7)(uVar8 >> 8),1) << (*(byte *)(param_1 + 0xad) & 0x1f) &
                     0x18U) != 0;
          }
          else {
            bVar11 = false;
          }
          if (bVar10 == bVar11) {
            FUN_0064d000(plVar5,&local_40);
            cVar2 = FUN_00652600(plVar5);
            if (cVar2 != '\0') {
              lVar1 = plVar5[0x1b];
              local_38 = local_38 + *(int *)(lVar1 + 0x18);
              local_40 = local_40 - *(int *)(lVar1 + 0x10);
              local_34 = local_34 + *(int *)(lVar1 + 0x1c);
              local_3c = local_3c - *(int *)(lVar1 + 0x14);
            }
            if (local_38 == local_40) {
              if (*(byte *)(param_1 + 0xad) < 8 &&
                  (1 << (*(byte *)(param_1 + 0xad) & 0x1f) & 10U) != 0) {
                local_40 = local_40 + -1;
              }
              else {
                local_38 = local_38 + 1;
              }
            }
            if (local_34 == local_3c) {
              if (*(byte *)(param_1 + 0xad) < 8 &&
                  (1 << (*(byte *)(param_1 + 0xad) & 0x1f) & 10U) != 0) {
                local_3c = local_3c + -1;
              }
              else {
                local_34 = local_34 + 1;
              }
            }
            cVar2 = FUN_00423210(&local_40,&local_30);
            if (cVar2 != '\0') {
              return plVar5;
            }
          }
        }
      }
      uVar9 = uVar9 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (longlong *)0x0;
}

