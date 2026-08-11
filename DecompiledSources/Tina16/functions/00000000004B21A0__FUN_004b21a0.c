/* Ghidra address: 004b21a0 */
/* Ghidra symbol: FUN_004b21a0 */


longlong * FUN_004b21a0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 *local_70;
  longlong local_60;
  longlong local_58;
  bool local_49;
  longlong local_48;
  longlong *local_38;
  longlong local_30;
  int local_24;
  longlong local_20;
  
  local_70 = auStack_98;
  local_78 = 0;
  FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x20));
  pcVar2 = (code *)FUN_00411550(param_1,0xffffffff);
  local_38 = (longlong *)(*pcVar2)(param_1);
  if ((*param_2 == 0) && (local_38 != (longlong *)0x0)) {
    local_48 = *local_38;
    local_49 = *(longlong *)(local_48 + -0xa8) == 0;
  }
  else {
    local_49 = true;
  }
  if (local_49 == false) {
    local_58 = *local_38;
    local_30 = FUN_00589390(*(undefined8 *)(local_58 + -0xa8));
    if ((local_30 != 0) && (*(short *)(local_30 + 0x10) != 0)) {
      local_20 = FUN_004095c0((longlong)((int)*(short *)(local_30 + 0x10) << 3));
      local_60 = *local_38;
      FUN_00589f00(*(undefined8 *)(local_60 + -0xa8),local_20);
      iVar5 = (int)*(short *)(local_30 + 0x10);
      local_24 = 0;
      if (-1 < iVar5 + -1) {
        do {
          lVar4 = (longlong)local_24;
          puVar1 = *(undefined8 **)(local_20 + lVar4 * 8);
          if ((**(char **)*puVar1 == '\a') &&
             (lVar3 = FUN_0058ada0(local_38,puVar1), lVar3 == param_1)) {
            FUN_00588490(&local_78,*(undefined8 *)(local_20 + lVar4 * 8));
            FUN_00414ad0(param_1 + 0x20,local_78);
          }
          local_24 = local_24 + 1;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      FUN_004095f0(local_20);
      FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x20));
    }
  }
  FUN_00414480(&local_78);
  return param_2;
}

