/* Ghidra address: 01c38920 */
/* Ghidra symbol: FUN_01c38920 */


undefined1 FUN_01c38920(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_31;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_31 = 0;
  if (param_2 != *(longlong *)(param_1 + 0x6c8)) {
    if (param_2 == *(longlong *)(param_1 + 0x6f0)) {
      lVar1 = *(longlong *)(param_1 + 0x920);
      if (lVar1 != 0) {
        uVar4 = FUN_01c3cb30(param_1);
        cVar2 = FUN_01c28560(lVar1,uVar4);
        if (cVar2 != '\0') {
          local_31 = 1;
          goto code_r0x01c38bb0;
        }
      }
      local_31 = 0;
      goto code_r0x01c38bb0;
    }
    if (param_2 != *(longlong *)(param_1 + 0x6f8)) {
      if (param_2 != *(longlong *)(param_1 + 0x8a8)) goto code_r0x01c38bb0;
      cVar2 = FUN_01c3d390(param_1);
      if (((cVar2 == '\0') || (cVar2 = FUN_01c3c010(param_1), cVar2 == '\x01')) ||
         ((cVar2 = FUN_01c3c010(param_1), cVar2 == '\x02' &&
          (cVar2 = FUN_01c3c270(param_1), cVar2 == '\0')))) {
LAB_01c38baa:
        local_31 = 1;
      }
      else {
        cVar2 = FUN_01c3c010(param_1);
        if ((cVar2 == '\x03') || (cVar2 = FUN_01c3c010(param_1), cVar2 == '\x04')) {
          FUN_01c3c530(param_1,&local_30);
          cVar2 = FUN_01d44920(local_30);
          if (cVar2 != '\0') goto LAB_01c38baa;
        }
        lVar1 = *(longlong *)(param_1 + 0x920);
        if (lVar1 != 0) {
          uVar4 = FUN_01c3cb30(param_1);
          cVar2 = FUN_01c28560(lVar1,uVar4);
          if (cVar2 != '\0') goto LAB_01c38baa;
        }
        local_31 = 0;
      }
      goto code_r0x01c38bb0;
    }
    cVar2 = FUN_01c3c010(param_1);
    if ((cVar2 == '\x01') ||
       (((cVar2 = FUN_01c3c010(param_1), cVar2 == '\x02' &&
         (cVar2 = FUN_01c3c270(param_1), cVar2 == '\0')) ||
        (cVar2 = FUN_01c3d390(param_1), cVar2 != '\0')))) {
LAB_01c38af0:
      local_31 = 1;
    }
    else {
      cVar2 = FUN_01c3c010(param_1);
      if ((cVar2 == '\x03') || (cVar2 = FUN_01c3c010(param_1), cVar2 == '\x04')) {
        FUN_01c3c530(param_1,&local_28);
        cVar2 = FUN_01d44920(local_28);
        if (cVar2 != '\0') goto LAB_01c38af0;
      }
      lVar1 = *(longlong *)(param_1 + 0x920);
      if (lVar1 != 0) {
        uVar4 = FUN_01c3cb30(param_1);
        cVar2 = FUN_01c28560(lVar1,uVar4);
        if (cVar2 != '\0') goto LAB_01c38af0;
      }
      local_31 = 0;
    }
    goto code_r0x01c38bb0;
  }
  cVar2 = FUN_01c3c010(param_1);
  if ((cVar2 != '\x01') && (cVar2 = FUN_01c3c010(param_1), cVar2 != '\x02')) {
    cVar2 = FUN_01c3c010(param_1);
    if ((cVar2 == '\x03') || (cVar2 = FUN_01c3c010(param_1), cVar2 == '\x04')) {
      FUN_01c3c530(param_1,local_20);
      cVar2 = FUN_01d44920(local_20[0]);
      if ((cVar2 != '\0') || (cVar2 = FUN_01c3c270(param_1), cVar2 != '\0')) goto LAB_01c389e8;
    }
    if ((*(longlong *)(param_1 + 0x920) == 0) ||
       (iVar3 = FUN_01c273c0(*(longlong *)(param_1 + 0x920)), iVar3 != 1)) {
      local_31 = 0;
      goto code_r0x01c38bb0;
    }
  }
LAB_01c389e8:
  local_31 = 1;
code_r0x01c38bb0:
  FUN_00414560(&local_30,3);
  return local_31;
}

