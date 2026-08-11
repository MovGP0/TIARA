/* Ghidra address: 00aa81b0 */
/* Ghidra symbol: FUN_00aa81b0 */


longlong FUN_00aa81b0(longlong param_1,longlong param_2,undefined8 param_3,undefined1 *param_4,
                     char *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_50 = auStack_78;
  local_58 = 0;
  local_20 = 0;
  local_28 = 0;
  local_18 = 0;
  local_10 = 0;
  *param_5 = '\0';
  *param_4 = 0;
  puVar1 = auStack_78;
  if (param_2 != 0) {
    FUN_00414480(&local_18);
    FUN_0043ea00(&local_18,param_2);
    FUN_00414b50(&local_28,local_18);
    FUN_00414480(&local_18);
    FUN_00414b50(&local_20,local_28);
    local_2c = (**(code **)(**(longlong **)(param_1 + 0x2a8) + 0xb0))
                         (*(longlong **)(param_1 + 0x2a8),local_20);
    if (local_2c < 0) {
      FUN_00416dc0(&local_58,local_28,1,0xb);
      iVar2 = FUN_00416db0(local_58,L"data:image/");
      if (iVar2 == 0) {
        FUN_00aa7d00(auStack_78,local_28);
      }
      else {
        FUN_00aa7980(auStack_78);
        if ((local_10 == 0) && (*param_5 == '\0')) {
          FUN_00aa7b60(auStack_78);
        }
        if ((local_10 == 0) && (*param_5 == '\0')) {
          FUN_00aa7f60(auStack_78,param_2);
        }
      }
      puVar1 = local_50;
      if (local_10 != 0) {
        local_48 = *(undefined8 *)(param_1 + 0x2a8);
        FUN_00a29f70(local_48,local_20,local_10);
        puVar1 = local_50;
      }
    }
    else {
      local_38 = *(undefined8 *)(param_1 + 0x2a8);
      local_40 = FUN_00a2a190(local_38,local_2c);
      if (local_40 != 0) {
        *(undefined4 *)(local_40 + 8) = 0;
        *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
      }
      *param_4 = 1;
      puVar1 = local_50;
      local_10 = local_40;
    }
  }
  local_50 = puVar1;
  FUN_00414480(&local_58);
  FUN_00414560(&local_28,3);
  return local_10;
}

