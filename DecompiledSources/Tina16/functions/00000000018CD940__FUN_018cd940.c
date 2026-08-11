/* Ghidra address: 018cd940 */
/* Ghidra symbol: FUN_018cd940 */


void FUN_018cd940(longlong param_1,longlong param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  char local_res18;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  if (*(char *)(param_1 + 0x169) == '\0') {
    local_res18 = param_3;
    puVar1 = auStack_58;
    if (param_3 == '\0') {
      cVar2 = FUN_004113d0(param_2,&PTR_FUN_019322b8);
      if (cVar2 == '\0') {
        cVar2 = FUN_004113d0(param_2,&PTR_FUN_0192e818);
        if (cVar2 == '\0') {
          cVar2 = FUN_004113d0(param_2,&PTR_FUN_01930a20);
          if (cVar2 == '\0') {
            cVar2 = FUN_004113d0(param_2,&PTR_FUN_01932e38);
            puVar1 = local_30;
            if (cVar2 != '\0') {
              local_res18 = '\x02';
            }
          }
          else {
            local_res18 = '\x03';
            puVar1 = local_30;
          }
        }
        else {
          local_res18 = '\x05';
          puVar1 = local_30;
        }
      }
      else {
        local_res18 = '\x06';
        puVar1 = local_30;
      }
    }
    local_30 = puVar1;
    if (local_res18 != '\0') {
      local_20 = *(undefined8 *)(param_1 + 0xa8);
      *(longlong *)(param_1 + 0xa8) = param_2;
      FUN_0197fa30(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x48),
                   *(undefined8 *)(param_1 + 0x40),param_2,local_res18);
      *(undefined8 *)(param_1 + 0xa8) = local_20;
    }
    if (param_2 != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x98) + 0x50))(*(longlong **)(param_1 + 0x98),param_2);
    }
  }
  return;
}

