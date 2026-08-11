/* Ghidra address: 00c29a40 */
/* Ghidra symbol: FUN_00c29a40 */


longlong FUN_00c29a40(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  char cVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  longlong local_38;
  undefined4 local_24;
  
  local_40 = auStack_a8;
  local_60 = 0;
  local_58 = 0;
  local_38 = *(longlong *)(param_1 + 0x10);
  puVar3 = auStack_a8;
  if (local_38 == 0) {
    cVar4 = FUN_00c28880(param_1);
    puVar3 = local_40;
    if (cVar4 == '\0') {
      local_24 = 0;
      local_88 = 0;
      FUN_004238d0(local_50,0,0,0);
      FUN_0041ddd0(&local_58,PTR_PTR_02002088);
      uVar6 = *(undefined8 *)(param_1 + 8);
      pcVar5 = (code *)FUN_00411550(uVar6,0xfffd);
      local_88 = local_88 & 0xffffff00;
      local_80 = local_50;
      local_78 = local_58;
      (*pcVar5)(uVar6,param_1,0,(undefined1)local_24);
      cVar4 = FUN_00c360f0(*(undefined8 *)(param_1 + 8));
      if (cVar4 == '\0') {
        uVar6 = FUN_00c294d0(param_1);
        *(undefined8 *)(param_1 + 0x10) = uVar6;
      }
      else {
        uVar6 = FUN_00c28c70(param_1);
        *(undefined8 *)(param_1 + 0x10) = uVar6;
      }
      local_24 = 100;
      local_38 = *(longlong *)(param_1 + 0x10);
      lVar1 = *(longlong *)(param_1 + 8);
      local_88 = 0;
      FUN_004238d0(local_50,0,0,0);
      FUN_0041ddd0(&local_60,PTR_PTR_02002088);
      pcVar5 = (code *)FUN_00411550(lVar1,0xfffd);
      local_88 = CONCAT31(local_88._1_3_,*(undefined1 *)(lVar1 + 0x3a));
      local_80 = local_50;
      local_78 = local_60;
      (*pcVar5)(lVar1,param_1,2,(undefined1)local_24);
      plVar2 = *(longlong **)(param_1 + 8);
      puVar3 = local_40;
      if (*(char *)((longlong)plVar2 + 0x3a) != '\0') {
        (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
        puVar3 = local_40;
      }
    }
  }
  local_40 = puVar3;
  FUN_00414560(&local_60,2);
  return local_38;
}

