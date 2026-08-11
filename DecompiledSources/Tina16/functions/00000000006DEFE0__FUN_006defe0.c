/* Ghidra address: 006defe0 */
/* Ghidra symbol: FUN_006defe0 */


longlong FUN_006defe0(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                     undefined8 param_5,byte param_6)

{
  undefined1 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_90;
  undefined1 local_88 [56];
  undefined1 *local_50;
  undefined1 local_39;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  longlong local_20;
  
  local_50 = auStack_c8;
  local_90 = 0;
  puVar1 = auStack_c8;
  local_20 = param_2;
  if (param_2 == 0) {
    local_20 = (**(code **)(**(longlong **)(param_1 + 8) + 0x260))(*(longlong **)(param_1 + 8));
    puVar1 = local_50;
  }
  local_50 = puVar1;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_39 = (&DAT_01dfdc38)[param_6];
  if (param_3 != 0) {
    if (param_6 < 2) {
      local_38 = FUN_006dd390(param_3);
      if (local_38 != 0) {
        local_28 = *(undefined8 *)(local_38 + 0x20);
      }
    }
    else if ((byte)(param_6 - 2) < 2) {
      local_28 = *(undefined8 *)(param_3 + 0x20);
      local_38 = param_3;
    }
    else if (param_6 == 4) {
      local_38 = FUN_006dd390(param_3);
      if (local_38 != 0) {
        local_28 = *(undefined8 *)(local_38 + 0x20);
      }
      lVar3 = FUN_006dd430(param_3);
      if (lVar3 == 0) {
        local_39 = 0;
      }
      else {
        local_30 = *(undefined8 *)(lVar3 + 0x20);
      }
    }
  }
  FUN_006dc990(local_20,param_5);
  FUN_006dc8a0(local_20,param_4);
  FUN_006df3d0(param_1,local_88,local_20);
  local_a8 = local_39;
  local_28 = FUN_006df400(param_1,local_28,local_30,local_88);
  if (local_28 == 0) {
    FUN_0041ddd0(&local_90,PTR_PTR_02003ae0);
    uVar4 = FUN_0044d490(&PTR_FUN_00472738,1,local_90);
    FUN_004134c0(uVar4);
  }
  *(longlong *)(local_20 + 0x20) = local_28;
  if ((*(int *)(param_1 + 0x10) == 0) && (cVar2 = FUN_006ddea0(local_20), cVar2 != '\0')) {
    uVar4 = FUN_006decf0(param_1);
    thunk_FUN_041b2403(uVar4,0xb,1,0);
  }
  FUN_006df3a0(param_1,local_38);
  uVar4 = *(undefined8 *)(param_1 + 8);
  pcVar5 = (code *)FUN_00411550(uVar4,0xffa5);
  (*pcVar5)(uVar4,local_20);
  FUN_00414480(&local_90);
  return local_20;
}

