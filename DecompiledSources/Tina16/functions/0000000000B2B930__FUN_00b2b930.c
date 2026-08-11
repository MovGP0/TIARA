/* Ghidra address: 00b2b930 */
/* Ghidra symbol: FUN_00b2b930 */


undefined8 FUN_00b2b930(longlong param_1,undefined8 param_2,undefined2 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 uVar8;
  int iVar9;
  int iVar10;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_68 [8];
  ushort local_60;
  ushort local_5e;
  byte local_5c;
  byte local_5b;
  int local_50;
  ushort local_4a;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  
  local_78 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  FUN_004144d0(param_2);
  lVar4 = FUN_00b28440(*(undefined8 *)(param_1 + 0x18),param_3);
  uVar2 = FUN_00b28cf0(param_1);
  iVar3 = FUN_00b22360(*(undefined8 *)(lVar4 + 0x18));
  if (iVar3 < 2) {
    FUN_004144d0(&local_30);
  }
  else {
    FUN_00414c70(&local_30,&DAT_00b2be6c);
  }
  FUN_004144d0(&local_38);
  iVar9 = 0;
  iVar10 = iVar3;
  if (-1 < iVar3 + -1) {
    do {
      FUN_004155b0(&local_38,&DAT_00b2be7c);
      local_50 = 0;
      if (local_38 != 0) {
        local_50 = *(int *)(local_38 + -4);
      }
      FUN_00415d10(&local_38,local_50 + 2,0);
      local_4a = FUN_00b29a30(param_1,uVar2,*(undefined2 *)(lVar4 + 0x10),
                              *(undefined2 *)(lVar4 + 0x10),1);
      lVar5 = FUN_00414df0(&local_38);
      FUN_00409a70(&local_4a,lVar5 + -1 + (longlong)(local_50 + 1),2);
      local_50 = 0;
      if (local_38 != 0) {
        local_50 = *(int *)(local_38 + -4);
      }
      FUN_00415d10(&local_38,local_50 + 8,0);
      FUN_00b22330(*(undefined8 *)(lVar4 + 0x18),&local_60,iVar9);
      local_4a = local_60;
      lVar5 = FUN_00414df0(&local_38);
      FUN_00409a70(&local_4a,lVar5 + -1 + (longlong)(local_50 + 1),2);
      FUN_00b22330(*(undefined8 *)(lVar4 + 0x18),&local_60,iVar9);
      local_4a = local_5e;
      lVar5 = FUN_00414df0(&local_38);
      FUN_00409a70(&local_4a,lVar5 + -1 + (longlong)(local_50 + 3),2);
      FUN_00b22330(*(undefined8 *)(lVar4 + 0x18),&local_60,iVar9);
      local_4a = (ushort)local_5c;
      lVar5 = FUN_00414df0(&local_38);
      FUN_00409a70(&local_4a,lVar5 + -1 + (longlong)(local_50 + 5),2);
      FUN_00b22330(*(undefined8 *)(lVar4 + 0x18),&local_60,iVar9);
      local_4a = (ushort)local_5b;
      lVar5 = FUN_00414df0(&local_38);
      FUN_00409a70(&local_4a,lVar5 + -1 + (longlong)(local_50 + 7));
      if ((1 < iVar3) && (0 < iVar9)) {
        FUN_004155b0(&local_38,&DAT_00b2be8c);
      }
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  FUN_004155b0(&local_30,local_38);
  if (1 < iVar3) {
    local_50 = 0;
    if (local_38 != 0) {
      local_50 = *(int *)(local_38 + -4);
    }
    lVar5 = FUN_00414df0(&local_30);
    FUN_00409a70(&local_50,lVar5 + 1,2);
  }
  cVar1 = *(char *)(lVar4 + 0x20);
  if (cVar1 == '\0') {
    uVar8 = 0;
    if (*(longlong *)(lVar4 + 8) != 0) {
      uVar8 = (undefined1)(*(uint *)(*(longlong *)(lVar4 + 8) + -4) >> 1);
    }
    FUN_00b15100(&local_78,*(undefined8 *)(lVar4 + 8));
    FUN_004156b0(&local_40,&LAB_00b2be9c,local_78);
  }
  else {
    uVar8 = 1;
    FUN_00414ff0(local_68,&DAT_00b2be8e);
    local_6f = FUN_00b280a0(cVar1);
    local_70 = 1;
    FUN_00415110(local_68,&local_70,2);
    FUN_004154b0(&local_40,local_68,0);
  }
  FUN_00415d10(&local_48,0xe,0);
  uVar6 = FUN_00414df0(&local_48);
  FUN_0040d200(uVar6,0xe,0);
  if (*(char *)(lVar4 + 0x20) != '\0') {
    puVar7 = (undefined1 *)FUN_00414df0(&local_48);
    *puVar7 = 0x20;
  }
  lVar5 = FUN_00414df0(&local_48);
  *(undefined1 *)(lVar5 + 3) = uVar8;
  local_50 = 0;
  if (local_30 != 0) {
    local_50 = *(int *)(local_30 + -4);
  }
  lVar5 = FUN_00414df0(&local_48);
  FUN_00409a70(&local_50,lVar5 + 4,2);
  if (*(char *)(lVar4 + 0x20) == '\0') {
    local_4a = 0;
  }
  else {
    local_4a = *(short *)(lVar4 + 0x10) + 1;
  }
  lVar4 = FUN_00414df0(&local_48);
  FUN_00409a70(&local_4a,lVar4 + 6,2);
  lVar4 = FUN_00414df0(&local_48);
  FUN_00409a70(&local_4a,lVar4 + 8,2);
  FUN_00415980(param_2,3,local_48,local_40,local_30);
  FUN_004144d0(&local_78);
  FUN_00414590(&local_48,4);
  return param_2;
}

