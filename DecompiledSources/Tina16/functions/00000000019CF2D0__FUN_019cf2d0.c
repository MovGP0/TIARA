/* Ghidra address: 019cf2d0 */
/* Ghidra symbol: FUN_019cf2d0 */


void FUN_019cf2d0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_70 = auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_48 = 0;
  local_50 = 0;
  local_28 = FUN_00410e60(&DAT_019cf1d0,1);
  if (local_28 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = local_28 + 0x10;
  }
  FUN_0041b840(&local_50,lVar3);
  *(undefined8 *)(local_28 + 0x20) = param_1;
  while (*(char *)(*(longlong *)(local_28 + 0x20) + 0x1a) == '\0') {
    local_38 = FUN_004afa30(*(undefined8 *)(*(longlong *)(local_28 + 0x20) + 0x70));
    local_40 = FUN_004afa30(*(undefined8 *)(*(longlong *)(local_28 + 0x20) + 0x78));
    if (*(int *)(local_38 + 0x10) < 1) {
      FUN_00414480(local_28 + 0x18);
    }
    else {
      uVar2 = FUN_004aeac0(local_38,0);
      FUN_00414ad0(local_28 + 0x18,uVar2);
      FUN_004ae870(local_38,0);
      FUN_004aeac0(local_40,0);
      FUN_00414b50(&local_48);
      FUN_004ae870(local_40);
    }
    local_20 = *(longlong *)(*(longlong *)(local_28 + 0x20) + 0x70);
    FUN_00412130(*(undefined8 *)(local_20 + 0x10));
    local_30 = *(longlong *)(*(longlong *)(local_28 + 0x20) + 0x78);
    FUN_00412130(*(undefined8 *)(local_30 + 0x10));
    if ((*(longlong *)(local_28 + 0x18) == 0) ||
       (*(char *)(*(longlong *)(local_28 + 0x20) + 0x53) != '\0')) {
      if ((*(char *)(*(longlong *)(local_28 + 0x20) + 0x51) != '\0') &&
         (*(longlong *)(local_28 + 0x18) == 0)) {
        *(undefined1 *)(*(longlong *)(local_28 + 0x20) + 0x53) = 1;
      }
      FUN_004d1e10(0x32);
    }
    else {
      local_58 = *(undefined8 *)(local_28 + 0x20);
      if (local_28 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = local_28 + 0x30;
      }
      FUN_004d1af0(local_58,lVar3);
      if (*(char *)(*(longlong *)(local_28 + 0x20) + 0x52) == '\0') {
        FUN_004d1e10(2000);
      }
      else {
        local_b8 = 1;
        FUN_00460d30(0,*(longlong *)(local_28 + 0x20) + 0x58,&DAT_019cf6d4,&local_48);
        do {
          FUN_004d1e10(100);
          FUN_00460d30(&local_88,*(longlong *)(local_28 + 0x20) + 0x58,&DAT_019cf6df,10);
          FUN_00468820(&local_a0,*(undefined1 *)(*(longlong *)(local_28 + 0x20) + 0x50));
          FUN_0046f280(&local_88,&local_a0);
          iVar1 = FUN_004644a0(&local_88);
        } while (iVar1 == 0);
      }
      local_60 = *(undefined8 *)(local_28 + 0x20);
      FUN_004d1af0(local_60);
    }
    if (*(char *)(*(longlong *)(local_28 + 0x20) + 0x50) != '\0') {
      *(undefined1 *)(*(longlong *)(local_28 + 0x20) + 0x53) = 1;
    }
  }
  FUN_00417840(&local_a0,&DAT_004013d8,2);
  FUN_0041b800(&local_50);
  FUN_00414480(&local_48);
  return;
}

