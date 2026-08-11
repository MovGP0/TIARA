/* Ghidra address: 00837040 */
/* Ghidra symbol: FUN_00837040 */


undefined1 FUN_00837040(longlong param_1,ushort *param_2,int param_3)

{
  short sVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ushort *puVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  ushort *local_58;
  undefined1 local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  ushort *local_20 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = (ushort *)0x0;
  local_49 = 1;
  local_58 = param_2;
  uVar6 = FUN_008317e0(*(undefined8 *)(param_1 + 0x4d8),param_3);
  if ((byte)uVar6 < 8) {
    bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << ((byte)uVar6 & 0x1f) & 6U) != 0;
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    uVar3 = FUN_00831b30(*(undefined2 *)
                          (*(longlong *)(param_1 + 0x4d8) + -2 + (longlong)param_3 * 2));
    *local_58 = uVar3;
    goto LAB_008373f6;
  }
  uVar4 = FUN_00831a60(*(undefined8 *)(param_1 + 0x4d8),param_3);
  uVar3 = *(ushort *)(*(longlong *)(param_1 + 0x4d8) + -2 + (longlong)param_3 * 2);
  if (uVar3 < 0x44) {
    if (uVar3 == 0x43) {
LAB_00837208:
      if (((*local_58 < 0xd800) || (0xdfff < *local_58)) ||
         (cVar2 = FUN_00836f90(auStack_78,*local_58), cVar2 == '\0')) {
        iVar5 = thunk_FUN_041b907c(*local_58);
        if (iVar5 != 0) {
          FUN_00414b50(local_20,&DAT_0083745c);
          puVar7 = (ushort *)FUN_00414de0(local_20);
          *puVar7 = *local_58;
          if ((uVar4 & 2) == 0) {
            if ((uVar4 & 4) != 0) {
              FUN_0043e600(&local_38,local_20[0]);
              FUN_00414b50(local_20,local_38);
            }
          }
          else {
            FUN_0043e5a0(local_30,local_20[0]);
            FUN_00414b50(local_20,local_30[0]);
          }
          *local_58 = *local_20[0];
        }
      }
      else {
        local_49 = 0;
      }
      goto LAB_008373f6;
    }
    if (uVar3 == 0x23) {
      if (((*local_58 < 0x30) || (0x39 < *local_58)) &&
         ((*local_58 != 0x20 && ((*local_58 != 0x2b && (*local_58 != 0x2d)))))) {
        local_49 = 0;
      }
      goto LAB_008373f6;
    }
    if ((uVar3 == 0x30) || (uVar3 == 0x39)) {
      if ((*local_58 < 0x30) || (0x39 < *local_58)) {
        local_49 = 0;
      }
      goto LAB_008373f6;
    }
    if (uVar3 != 0x41) goto LAB_008373f6;
  }
  else if ((uVar3 != 0x4c) && (uVar3 != 0x61)) {
    if (uVar3 == 99) goto LAB_00837208;
    if (uVar3 != 0x6c) goto LAB_008373f6;
  }
  if ((*local_58 < 0xd800) || (0xdfff < *local_58)) {
    FUN_00414b50(local_20,&DAT_0083745c);
    puVar7 = (ushort *)FUN_00414de0(local_20);
    *puVar7 = *local_58;
    cVar2 = FUN_00836f40(auStack_78,(char)*local_58);
    if (cVar2 == '\0') {
      iVar5 = thunk_FUN_041b907c(*local_58);
      if (iVar5 == 0) {
        local_49 = 0;
        sVar1 = *(short *)(*(longlong *)(param_1 + 0x4d8) + -2 + (longlong)param_3 * 2);
        if (((sVar1 == 0x41) || (sVar1 == 0x61)) &&
           (iVar5 = thunk_FUN_041ab883(*local_58), iVar5 != 0)) {
          local_49 = 1;
        }
      }
      else if ((uVar4 & 2) == 0) {
        if ((uVar4 & 4) != 0) {
          FUN_0043e600(&local_48,local_20[0]);
          FUN_00414b50(local_20,local_48);
        }
      }
      else {
        FUN_0043e5a0(&local_40,local_20[0]);
        FUN_00414b50(local_20,local_40);
      }
      *local_58 = *local_20[0];
    }
    else {
      *local_58 = *local_20[0];
    }
  }
  else {
    cVar2 = FUN_00836f90(auStack_78,*local_58);
    if (cVar2 != '\0') {
      local_49 = 0;
    }
  }
LAB_008373f6:
  FUN_00414560(&local_48,4);
  FUN_00414480(local_20);
  return local_49;
}

