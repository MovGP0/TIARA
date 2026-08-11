/* Ghidra address: 00a34f00 */
/* Ghidra symbol: FUN_00a34f00 */


char FUN_00a34f00(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  char local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_49 = FUN_00a34430(param_1,param_2,param_3,param_4);
  if (local_49 != '\0') {
    if (*(uint *)(param_1 + 0x10) < 0xd) {
      local_49 = '\0';
      FUN_0041ddd0(&local_20,PTR_PTR_02003330);
      FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2d2a8,local_20);
    }
    else {
      puVar1 = *(undefined8 **)(param_1 + 8);
      *(undefined8 *)(param_1 + 0x488) = *puVar1;
      *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(puVar1 + 1);
      *(undefined1 *)(param_1 + 0x494) = *(undefined1 *)((longlong)puVar1 + 0xc);
      uVar2 = FUN_00a32f80(*(undefined4 *)(param_1 + 0x488));
      *(undefined4 *)(param_1 + 0x488) = uVar2;
      uVar2 = FUN_00a32f80(*(undefined4 *)(param_1 + 0x48c));
      *(undefined4 *)(param_1 + 0x48c) = uVar2;
      if ((*(uint *)(param_1 + 0x488) < 0x10000) && (*(uint *)(param_1 + 0x48c) < 0x10000)) {
        if (*(char *)(param_1 + 0x492) == '\0') {
          if ((*(char *)(param_1 + 0x494) == '\0') || (*(char *)(param_1 + 0x494) == '\x01')) {
            if (*(byte *)(param_1 + 0x491) < 8) {
              bVar3 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                       (*(byte *)(param_1 + 0x491) & 0x1f) & 0x5dU) != 0;
            }
            else {
              bVar3 = false;
            }
            if (!bVar3) {
              local_49 = '\0';
              FUN_0041ddd0(&local_40,PTR_PTR_02004798);
              FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2df48,local_40);
            }
            if (*(char *)(param_1 + 0x490) == '\0') {
              local_49 = '\0';
              FUN_0041ddd0(&local_48,PTR_PTR_02002fd0);
              FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2e838,local_48);
            }
            *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x158) =
                 *(undefined1 *)(param_1 + 0x494);
            FUN_00a35400(param_1);
          }
          else {
            local_49 = '\0';
            FUN_0041ddd0(&local_38,PTR_PTR_02002528);
            FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2de00,local_38);
          }
        }
        else {
          local_49 = '\0';
          FUN_0041ddd0(&local_30,PTR_PTR_02001f88);
          FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2dcb8,local_30);
        }
      }
      else {
        local_49 = '\0';
        FUN_0041ddd0(&local_28,PTR_PTR_020031a8);
        FUN_00a39bd0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_00a2da30,local_28);
      }
    }
  }
  FUN_00414560(&local_48,6);
  return local_49;
}

