/* Ghidra address: 00654090 */
/* Ghidra symbol: FUN_00654090 */


void FUN_00654090(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  code *pcVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  char local_31;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  puVar2 = auStack_68;
  if (((*(char *)((longlong)param_1 + 0x393) != '\0') &&
      (puVar2 = auStack_68, *(char *)((longlong)param_1 + 0x392) != '\0')) &&
     (puVar2 = auStack_68, param_1[0x68] != 0)) {
    (**(code **)(*(longlong *)param_1[0x68] + 0x58))((longlong *)param_1[0x68],0);
    puVar2 = local_40;
  }
  local_40 = puVar2;
  cVar3 = FUN_00653b10(auStack_68);
  if (cVar3 == '\0') {
    if ((*(char *)((longlong)param_1 + 0xae) != '\0') &&
       (*(char *)((longlong)param_1 + 0x391) != '\0')) {
      FUN_00653f50(auStack_68);
    }
  }
  else {
    local_31 = '\0';
    local_28 = 0;
    if (param_1[0x62] == 0) {
      lVar1 = param_1[0xf];
      if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x310) == 0)) {
        local_28 = FUN_00410e60(&PTR_FUN_00472dd0,1);
        param_1[0x62] = local_28;
      }
      else {
        local_31 = '\x01';
        param_1[0x62] = *(longlong *)(lVar1 + 0x310);
      }
    }
    (**(code **)(*param_1 + 0x1a8))(param_1,param_3);
    local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    FUN_006538f0(auStack_68,1);
    FUN_006538f0(auStack_68,2);
    FUN_006538f0(auStack_68,3);
    FUN_006538f0(auStack_68,4);
    FUN_006538f0(auStack_68,5);
    FUN_006538f0(auStack_68,6);
    FUN_006538f0(auStack_68,0);
    pcVar4 = (code *)FUN_00411550(param_1,0xffc4);
    (*pcVar4)(param_1);
    FUN_00410f20(local_20);
    if (*(char *)((longlong)param_1 + 0x391) != '\0') {
      FUN_00653f50(auStack_68);
    }
    if ((local_28 != 0) && (0 < *(int *)(local_28 + 0x10))) {
      FUN_00653b80(auStack_68);
    }
    lVar1 = local_28;
    if (local_28 == 0) {
      if (local_31 != '\0') {
        param_1[0x62] = 0;
      }
    }
    else {
      param_1[0x62] = 0;
      local_30 = local_28;
      local_28 = 0;
      FUN_00410f20(lVar1);
    }
  }
  return;
}

