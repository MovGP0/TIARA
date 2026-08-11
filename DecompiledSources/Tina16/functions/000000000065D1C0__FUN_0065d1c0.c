/* Ghidra address: 0065d1c0 */
/* Ghidra symbol: FUN_0065d1c0 */


undefined1 FUN_0065d1c0(longlong *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined7 uVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 *local_70;
  longlong *local_60;
  longlong *local_58;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  undefined1 local_19;
  
  local_70 = auStack_a8;
  local_19 = 1;
  cVar2 = FUN_0065be20(param_1);
  if (((cVar2 != '\0') && (*(char *)((longlong)param_1 + 0xad) != '\x05')) &&
     (((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0 ||
      (iVar3 = FUN_00654c00(param_1), 0 < iVar3)))) {
    (**(code **)(*param_1 + 0x208))(param_1,&local_38);
    (**(code **)(*param_1 + 0xe0))(param_1,&local_48);
    (**(code **)(*param_1 + 0x1a8))(param_1,&local_48);
    *(short *)(param_1 + 99) = (short)param_1[99] + 1;
    local_60 = param_1;
    iVar3 = FUN_00654c00();
    local_20 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar5 = (ulonglong)local_20;
        local_58 = (longlong *)FUN_00654bc0(param_1,uVar5);
        if ((*(char *)((longlong)local_58 + 0xa9) != '\0') ||
           (((*(ushort *)((longlong)local_58 + 0x34) & 0x10) != 0 &&
            ((*(uint *)(local_58 + 0x14) & 0x400) == 0)))) {
          bVar1 = *(byte *)((longlong)param_1 + 0xad);
          if (bVar1 < 8) {
            bVar6 = ((int)CONCAT71((int7)(uVar5 >> 8),1) << (bVar1 & 0x1f) & 0x19U) != 0;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            local_24 = local_38 - local_48;
          }
          else {
            local_24 = 0;
          }
          if (bVar1 < 8 && (1 << (bVar1 & 0x1f) & 7U) != 0) {
            local_28 = local_34 - local_44;
          }
          else {
            local_28 = 0;
          }
          local_88 = *(undefined4 *)((longlong)local_58 + 0x9c);
          (**(code **)(*local_58 + 400))
                    (local_58,(int)local_58[0x12] - local_24,
                     *(int *)((longlong)local_58 + 0x94) - local_28,(int)local_58[0x13]);
        }
        local_20 = local_20 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(uint *)((longlong)param_1 + 0xa4) = *(uint *)((longlong)param_1 + 0xa4) & 0xffffffef;
    FUN_00654410(param_1);
    bVar1 = *(byte *)((longlong)param_1 + 0xad);
    uVar4 = (undefined7)((ulonglong)param_1 >> 8);
    if (bVar1 < 8) {
      bVar6 = ((int)CONCAT71(uVar4,1) << (bVar1 & 0x1f) & 0x19U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      if (local_30 - local_38 < 1) {
        *param_2 = 0;
      }
      else {
        *param_2 = ((local_30 - local_38) + (int)param_1[0x13]) - (local_40 - local_48);
        if (bVar1 == 4) {
          (**(code **)(*param_1 + 0x108))(param_1);
        }
      }
    }
    bVar1 = *(byte *)((longlong)param_1 + 0xad);
    if (bVar1 < 8) {
      bVar6 = ((int)CONCAT71(uVar4,1) << (bVar1 & 0x1f) & 7U) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      if (local_2c - local_34 < 1) {
        *param_3 = 0;
      }
      else {
        *param_3 = ((local_2c - local_34) + *(int *)((longlong)param_1 + 0x9c)) -
                   (local_3c - local_44);
        if (bVar1 == 2) {
          (**(code **)(*param_1 + 0x108))(param_1);
        }
      }
    }
  }
  return local_19;
}

