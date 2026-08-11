/* Ghidra address: 00803f10 */
/* Ghidra symbol: FUN_00803f10 */


void FUN_00803f10(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  int local_68;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined1 local_38 [8];
  int local_30;
  int local_2c;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  if ((*(uint *)(lVar1 + 0x20) & 0x8000) == 0x8000) {
    FUN_008061d0(param_1);
  }
  if (((((char)param_1[0xce] != '\0') &&
       ((param_1[0xf] == 0 || ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)))) &&
      ((*(int *)(lVar1 + 0x10) != 0 || (*(int *)(lVar1 + 0x14) != 0)))) &&
     ((*(int *)(lVar1 + 0x18) == (int)param_1[0x13] &&
      (*(int *)(lVar1 + 0x1c) == *(int *)((longlong)param_1 + 0x9c))))) {
    uVar4 = FUN_007ffaf0(param_1);
    FUN_00807850(uVar4,&local_58);
    FUN_00803ed0(auStack_88,lVar1 + 0x10,local_58,0);
    FUN_00803ed0(auStack_88,lVar1 + 0x14,local_54,0);
    FUN_00803ed0(auStack_88,lVar1 + 0x10,local_50,(int)param_1[0x13]);
    FUN_00803ed0(auStack_88,lVar1 + 0x14,local_4c,*(undefined4 *)((longlong)param_1 + 0x9c));
  }
  FUN_00658680(param_1,param_2);
  lVar2 = param_1[0xd1];
  cVar3 = FUN_0080fc30(lVar2);
  if ((((cVar3 != '\0') && (*(char *)(lVar2 + 0x38) == '\0')) &&
      ((*(char *)((longlong)param_1 + 0xa9) != '\0' ||
       ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) != 0)))) &&
     ((*(int *)(lVar1 + 0x18) != 0 || (*(int *)(lVar1 + 0x1c) != 0)))) {
    iVar6 = *(int *)(lVar1 + 0x18) - (int)param_1[0x13];
    iVar5 = *(int *)(lVar1 + 0x1c) - *(int *)((longlong)param_1 + 0x9c);
    if ((iVar6 != 0) || (iVar5 != 0)) {
      (**(code **)(*param_1 + 0xe0))(param_1,local_38);
      local_68 = local_2c - *(int *)(lVar2 + 0x20);
      FUN_004238d0(&local_48,*(undefined4 *)(lVar2 + 0x14),*(undefined4 *)(lVar2 + 0x18),
                   local_30 - *(int *)(lVar2 + 0x1c));
      if ((*(int *)(lVar2 + 0x18) < local_3c) || (iVar5 < 1)) {
        if (0 < iVar5) {
          local_3c = local_3c + iVar5;
        }
        if (local_3c < local_44) {
          local_3c = local_44;
        }
      }
      else {
        local_3c = local_44 - iVar5;
        local_44 = *(int *)(lVar2 + 0x20);
        *(undefined1 *)(param_1 + 0xd2) = 1;
      }
      iVar5 = *(int *)(lVar2 + 0x14);
      if ((local_40 < iVar5) && (0 < iVar6)) {
        local_48 = local_40 - iVar6;
        *(undefined1 *)(param_1 + 0xd2) = 1;
        local_40 = iVar5;
      }
      else {
        if (0 < iVar6) {
          local_40 = local_40 + iVar6;
        }
        if (local_40 < local_48) {
          local_40 = local_48;
        }
      }
      uVar4 = FUN_0065b870(param_1);
      thunk_FUN_03a2fc9d(uVar4,&local_48,0);
    }
  }
  return;
}

