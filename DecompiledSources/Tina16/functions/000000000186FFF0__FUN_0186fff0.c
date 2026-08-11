/* Ghidra address: 0186fff0 */
/* Ghidra symbol: FUN_0186fff0 */


undefined1 FUN_0186fff0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 *local_c0;
  longlong local_b0;
  undefined1 local_a5 [31];
  undefined8 local_86;
  longlong local_48;
  int local_3c;
  longlong local_38;
  undefined1 local_29;
  longlong local_28;
  longlong *local_20;
  
  local_c0 = auStack_f8;
  local_48 = 0;
  local_29 = 0;
  puVar2 = auStack_f8;
  if (*(char *)(param_1 + 0x70) != '\0') {
    local_20 = (longlong *)0x0;
    plVar1 = *(longlong **)(param_1 + 8);
    cVar3 = FUN_004113d0(plVar1,&PTR_FUN_0192c3a0);
    if (cVar3 != '\0') {
      local_20 = plVar1;
    }
    cVar3 = FUN_004113d0(param_2,&PTR_FUN_006b9fb0);
    puVar2 = local_c0;
    if ((cVar3 != '\0') && (local_20 != (longlong *)0x0)) {
      local_3c = FUN_006e5350(param_2);
      local_3c = local_3c + -1;
      puVar2 = local_c0;
      if (-1 < local_3c) {
        do {
          local_38 = FUN_006e5360(param_2,local_3c);
          FUN_00414480(&local_48);
          if ((local_38 != 0) && (*(longlong *)(local_38 + 0x18) != 0)) {
            uVar4 = (**(code **)(*local_20 + 0x118))(local_20);
            FUN_01970f30(uVar4,&local_48,*(undefined8 *)(local_38 + 0x18));
          }
          if (local_48 != 0) {
            local_b0 = FUN_0186ff30(auStack_f8,local_3c + 1);
            local_29 = 1;
            if (local_b0 != 0) {
              local_28 = FUN_00410e60(&DAT_01916f10,1);
              *(undefined8 *)(local_28 + 8) = param_2;
              *(longlong *)(local_28 + 0x10) = (longlong)local_3c;
              local_86 = *(undefined8 *)(param_1 + 0x58);
              local_d8 = local_a5;
              FUN_019523a0(local_b0,local_28,param_3,param_4);
              FUN_00410f20(local_28);
            }
          }
          local_3c = local_3c + -1;
          puVar2 = local_c0;
        } while (local_3c != -1);
      }
    }
  }
  local_c0 = puVar2;
  FUN_00414480(&local_48);
  return local_29;
}

