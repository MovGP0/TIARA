/* Ghidra address: 006579d0 */
/* Ghidra symbol: FUN_006579d0 */


void FUN_006579d0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_98 [32];
  int local_78;
  undefined1 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  local_60 = auStack_98;
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) | 0x80;
  local_1c = thunk_FUN_03b57162(param_2);
  FUN_0064ae10(param_2,param_3,param_4);
  local_78 = *(int *)(param_1 + 0x9c);
  FUN_00428be0(param_2,0,0,*(undefined4 *)(param_1 + 0x98));
  local_28 = 0;
  local_24 = 0;
  local_50 = FUN_0065b870(param_1);
  uVar2 = thunk_FUN_04118143(local_50,0xffffffec);
  if ((uVar2 & 0x200) == 0) {
    local_58 = FUN_0065b870(param_1);
    uVar2 = thunk_FUN_04118143(local_58,0xfffffff0);
    if ((uVar2 & 0x800000) != 0) {
      local_24 = 3;
      local_28 = 0xa00f;
    }
  }
  else {
    local_24 = 10;
    local_28 = 0x200f;
  }
  if (local_24 == 10) {
    plVar3 = (longlong *)FUN_00781840();
    cVar1 = (**(code **)(*plVar3 + 0x98))(plVar3);
    if ((cVar1 != '\0') &&
       (((*(ushort *)(param_1 + 0x34) & 0x10) == 0 || (cVar1 = FUN_00777c40(param_1), cVar1 == '\0')
        ))) {
      local_78 = *(undefined4 *)(param_1 + 0x9c);
      thunk_FUN_0415f13b(&local_38,0,0,*(undefined4 *)(param_1 + 0x98));
      if ((*(uint *)(param_1 + 0xa0) & 0x20000) == 0) {
        *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x20000;
        FUN_006578d0(auStack_98,param_2,&local_38);
        *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) & 0xfffdffff;
      }
      else {
        FUN_006578d0(auStack_98,param_2,&local_38);
      }
      FUN_0064ae10(param_2,local_38,local_34);
      local_78 = local_2c - local_34;
      FUN_00428be0(param_2,0,0,local_30 - local_38);
      goto LAB_00657c97;
    }
  }
  if (local_28 != 0) {
    local_78 = *(undefined4 *)(param_1 + 0x9c);
    thunk_FUN_0415f13b(&local_38,0,0,*(undefined4 *)(param_1 + 0x98));
    thunk_FUN_03998bad(param_2,&local_38,local_24,local_28);
    FUN_0064ae10(param_2,local_38,local_34);
    local_78 = local_2c - local_34;
    FUN_00428be0(param_2,0,0,local_30 - local_38);
  }
LAB_00657c97:
  FUN_0064fca0(param_1,0x14,param_2,0);
  FUN_0064fca0(param_1,0xf,param_2,0);
  if (*(longlong *)(param_1 + 0x378) != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x378) + 0x10);
    local_20 = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_48 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x378),local_20);
        if (*(char *)(local_48 + 0xa9) != '\0') {
          FUN_006579d0(local_48,param_2,*(undefined4 *)(local_48 + 0x90),
                       *(undefined4 *)(local_48 + 0x94));
        }
        local_20 = local_20 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  thunk_FUN_0402759f(param_2,local_1c);
  *(uint *)(param_1 + 0xa4) = *(uint *)(param_1 + 0xa4) & 0xffffff7f;
  return;
}

