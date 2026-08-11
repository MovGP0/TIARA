/* Ghidra address: 018c0fb0 */
/* Ghidra symbol: FUN_018c0fb0 */


void FUN_018c0fb0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  puVar3 = auStack_58;
  if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0xa8) + 0x120) != '\0') &&
     (cVar4 = FUN_004113d0(param_2[0x1e],&PTR_FUN_0192d4e8), puVar3 = local_20, cVar4 == '\0')) {
    return;
  }
  local_20 = puVar3;
  cVar4 = FUN_004113d0(param_2,&PTR_FUN_01921f40);
  if ((cVar4 == '\0') || ((*(byte *)(param_2 + 0x43) & 2) != 0)) {
    FUN_018b9ee0(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xa0),param_2,0);
    cVar4 = FUN_004113d0(param_2,&PTR_FUN_01925478);
    if (cVar4 != '\0') {
      puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x90) + 0xa0);
      uVar5 = (**(code **)*puVar1)(puVar1);
      *(undefined4 *)(param_2 + 0x76) = uVar5;
      *(undefined4 *)((longlong)param_2 + 0x3b4) = 1;
      local_28 = param_2;
      FUN_01964930(param_2,0);
      uVar6 = FUN_00609e10(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x78));
      FUN_005fdf10(uVar6);
      cVar4 = FUN_0195f670(local_28,2);
      if (cVar4 != '\0') {
        uVar6 = FUN_00609e10(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x78));
        local_38 = 0;
        local_30 = 0;
        (**(code **)(*local_28 + 0x260))(local_28,uVar6,0x3ff0000000000000,0x3ff0000000000000);
      }
      uVar6 = FUN_00609e10(*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x78));
      FUN_005fe090(uVar6);
    }
    cVar4 = (**(code **)(*param_2 + 0x228))
                      (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xa8));
    if (cVar4 == '\0') {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0xa8);
      (**(code **)(*plVar2 + 200))(plVar2,param_2);
    }
    if ((*(char *)(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0xa0) + 0x20) + 0x288
                  ) != '\0') ||
       (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0xa8) + 0x140) != '\0')) {
      uVar6 = FUN_00410e60(&DAT_01915660,1);
      FUN_004134c0(uVar6);
    }
  }
  return;
}

