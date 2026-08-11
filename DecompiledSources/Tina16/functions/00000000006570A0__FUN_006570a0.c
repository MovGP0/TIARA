/* Ghidra address: 006570a0 */
/* Ghidra symbol: FUN_006570a0 */


void FUN_006570a0(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined1 *local_90;
  longlong local_88;
  int local_78;
  int local_74;
  undefined1 local_70 [76];
  undefined4 local_24;
  longlong local_20;
  
  local_90 = auStack_c8;
  local_20 = *(longlong *)(param_2 + 8);
  puVar1 = auStack_c8;
  if (local_20 == 0) {
    uVar2 = FUN_0065b870(param_1);
    local_20 = thunk_FUN_041804fe(uVar2,local_70);
    puVar1 = local_90;
  }
  local_90 = puVar1;
  if (param_1[0x6e] == 0) {
    (**(code **)(*param_1 + 0x210))(param_1,local_20);
  }
  else {
    local_24 = thunk_FUN_03b57162(local_20);
    local_78 = 2;
    iVar3 = *(int *)(param_1[0x6e] + 0x10);
    local_74 = 0;
    if (-1 < iVar3 + -1) {
      do {
        local_88 = FUN_004aeac0(param_1[0x6e],local_74);
        if ((((*(char *)(local_88 + 0xa9) != '\0') &&
             (((*(ushort *)(local_88 + 0x34) & 0x10) == 0 ||
              ((*(uint *)(local_88 + 0xa4) & 0x800) == 0)))) ||
            (((*(ushort *)(local_88 + 0x34) & 0x10) != 0 &&
             (((*(uint *)(local_88 + 0xa4) & 0x800) == 0 &&
              ((*(uint *)(local_88 + 0xa0) & 0x400) == 0)))))) &&
           ((*(uint *)(local_88 + 0xa0) & 0x40) != 0)) {
          local_a8 = *(int *)(local_88 + 0x94) + *(int *)(local_88 + 0x9c);
          local_78 = thunk_FUN_041a27b3(local_20,*(int *)(local_88 + 0x90),*(int *)(local_88 + 0x94)
                                        ,*(int *)(local_88 + 0x90) + *(int *)(local_88 + 0x98));
          if (local_78 == 1) break;
        }
        local_74 = local_74 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (local_78 != 1) {
      (**(code **)(*param_1 + 0x210))(param_1,local_20);
    }
    thunk_FUN_0402759f(local_20,local_24);
  }
  FUN_006573b0(param_1,local_20,0);
  if (*(longlong *)(param_2 + 8) == 0) {
    uVar2 = FUN_0065b870(param_1);
    thunk_FUN_0416269d(uVar2,local_70);
  }
  return;
}

