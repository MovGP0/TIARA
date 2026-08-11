/* Ghidra address: 016d87d0 */
/* Ghidra symbol: FUN_016d87d0 */


undefined1 FUN_016d87d0(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined1 auStack_228 [32];
  longlong *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  uint local_1dc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_190 [256];
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_78;
  int local_6c;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 local_41;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  char local_19;
  
  local_80 = auStack_228;
  local_1c8 = 0;
  local_1b0 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_1a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_41 = 1;
  FUN_00414480(param_2);
  local_38 = 0;
  local_30 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    local_60 = *(longlong **)(*(longlong *)(param_1 + 0x2d0) + 0x438);
    local_38 = FUN_004b6930(&PTR_FUN_00478280,1);
    local_30 = (longlong *)FUN_01d34560(&PTR_FUN_016a2078,1,10,10);
    iVar2 = (**(code **)(*local_60 + 0x28))();
    local_6c = 0;
    if (-1 < iVar2 + -1) {
      do {
        FUN_004b3cf0(local_60,&local_90,local_6c);
        FUN_0043e130(&local_88,local_90);
        FUN_00416910(local_190,local_88,0xff);
        local_58 = FUN_016a61f0(&PTR_FUN_016a1ed0,1,local_190,0);
        FUN_004b5390(local_60,&local_1a0,local_6c);
        FUN_0043e130(&local_78,local_1a0);
        local_208 = (longlong *)CONCAT71(local_208._1_7_,1);
        FUN_00456a50(&local_78,&local_198,&DAT_016d8e0c);
        FUN_00415dd0(local_58 + 0x10,local_198,0);
        *(undefined8 *)(local_58 + 0x28) = 0;
        (**(code **)(*local_30 + 0x50))(local_30,local_58);
        local_6c = local_6c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  local_1dc = (byte)PTR_DAT_02001408[(ulonglong)*(byte *)(param_1 + 0x2c0) - 1] - 1;
  local_6c = 0;
  uVar1 = (uint)(byte)PTR_DAT_02001408[(ulonglong)*(byte *)(param_1 + 0x2c0) - 1];
  if (-1 < (int)local_1dc) {
    do {
      local_1dc = uVar1;
      if (*(byte *)(param_1 + 0x2c0) < 8) {
        bVar4 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                 (*(byte *)(param_1 + 0x2c0) & 0x1f) & 0x90U) != 0;
      }
      else {
        bVar4 = false;
      }
      if ((!bVar4) || (local_6c != 2)) {
        local_19 = '\0';
        lVar3 = (longlong)local_6c;
        FUN_004167a0(&local_1a8,*(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + lVar3 * 8));
        uVar5 = FUN_00b8f030(local_1a8);
        uVar5 = FUN_0143dad0(uVar5,*(undefined1 *)(param_1 + 0x2c0),local_6c + 1);
        *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + lVar3 * 8) = uVar5;
        if (local_19 != '\0') {
          if (*(longlong *)(param_1 + 0x2d0) == 0) {
            local_68 = 0;
          }
          else {
            local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x2d0) + 0x488);
          }
          lVar3 = (longlong)local_6c;
          FUN_004167a0(&local_1b8,*(undefined8 *)(*(longlong *)(param_1 + 0x1c8) + lVar3 * 8));
          FUN_0043e130(&local_1b0,local_1b8);
          FUN_00415dd0(&local_1c0,local_1b0,0);
          local_208 = local_30;
          local_200 = local_68;
          local_1f8 = local_38;
          local_28 = FUN_016a6a40(&DAT_016a2760,1,local_1c0,0);
          uVar5 = FUN_016a9290(local_28);
          uVar5 = FUN_0143dad0(uVar5,*(undefined1 *)(param_1 + 0x2c0),local_6c + 1);
          *(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + lVar3 * 8) = uVar5;
          FUN_00410f20(local_28);
        }
      }
      local_6c = local_6c + 1;
      local_1dc = local_1dc - 1;
      uVar1 = local_1dc;
    } while (local_1dc != 0);
  }
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00414480(&local_1c8);
  FUN_004144d0(&local_1c0);
  FUN_00414560(&local_1b8,5);
  FUN_00414560(&local_90,2);
  FUN_00414480(&local_78);
  return local_41;
}

