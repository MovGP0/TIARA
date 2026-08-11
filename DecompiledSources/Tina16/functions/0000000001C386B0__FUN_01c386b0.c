/* Ghidra address: 01c386b0 */
/* Ghidra symbol: FUN_01c386b0 */


undefined1 FUN_01c386b0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  if (param_2 == 0) {
    local_39 = 1;
  }
  else if (param_2 == *(longlong *)(param_1 + 0x6c0)) {
    cVar1 = FUN_01c3c010(param_1);
    local_39 = *(char *)(param_1 + 0x908) != cVar1;
    if (!(bool)local_39) {
      cVar1 = FUN_01c3c010(param_1);
      if (cVar1 == '\x03') {
        FUN_01c3c530(param_1,local_20);
        iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x910),local_20[0]);
        local_39 = iVar2 != 0;
      }
      else if (cVar1 == '\x04') {
        FUN_01c3c530(param_1,&local_28);
        iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x910),local_28);
        local_39 = iVar2 != 0;
      }
    }
  }
  else if (param_2 == *(longlong *)(param_1 + 0x6c8)) {
    iVar2 = *(int *)(param_1 + 0x928);
    local_39 = iVar2 == -1;
    if (!(bool)local_39) {
      iVar3 = FUN_01c3cb30(param_1);
      local_39 = iVar2 != iVar3;
    }
  }
  else if ((param_2 == *(longlong *)(param_1 + 0x6f0)) &&
          (local_39 = *(int *)(param_1 + 0x92c) == -1, !(bool)local_39)) {
    iVar2 = FUN_01c3d200(param_1);
    if ((*(int *)(param_1 + 0x92c) == iVar2) &&
       ((lVar4 = FUN_01c3d280(param_1), *(longlong *)(param_1 + 0x930) == lVar4 &&
        (cVar1 = FUN_01c3d590(param_1), *(char *)(param_1 + 0x938) == cVar1)))) {
      FUN_01c3d500(param_1,&local_30);
      iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x940),local_30);
      if (iVar2 == 0) {
        FUN_01c3d430(param_1,&local_38);
        iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x948),local_38);
        if ((iVar2 == 0) && (cVar1 = FUN_01c3d390(param_1), *(char *)(param_1 + 0x950) == cVar1)) {
          local_39 = 0;
          goto code_r0x01c388d8;
        }
      }
    }
    local_39 = 1;
  }
code_r0x01c388d8:
  FUN_00414560(&local_38,4);
  return local_39;
}

