/* Ghidra address: 0074c580 */
/* Ghidra symbol: FUN_0074c580 */


void FUN_0074c580(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_1c;
  
  local_30 = auStack_58;
  iVar2 = *(int *)((longlong)param_1 + 0x354);
  if (iVar2 != (int)param_1[0x6d]) {
    cVar1 = *(char *)((longlong)param_1 + 0xad);
    if (cVar1 == '\x01') {
      local_1c = *(undefined4 *)(param_1[0x66] + 0x94);
      FUN_0064cc50(param_1[0x66],iVar2);
      FUN_0064cb90(param_1[0x66],local_1c);
    }
    else if (cVar1 == '\x02') {
      local_30 = auStack_58;
      FUN_00654400(param_1[0xf]);
      lVar3 = param_1[0x66];
      FUN_0064cb90(lVar3,*(int *)(lVar3 + 0x94) +
                         (*(int *)(lVar3 + 0x9c) - *(int *)((longlong)param_1 + 0x354)));
      FUN_0064cc50(param_1[0x66],*(undefined4 *)((longlong)param_1 + 0x354));
      FUN_00654410(param_1[0xf]);
    }
    else if (cVar1 == '\x03') {
      local_1c = *(undefined4 *)(param_1[0x66] + 0x90);
      local_30 = auStack_58;
      FUN_0064cbf0(param_1[0x66],iVar2);
      FUN_0064cb30(param_1[0x66],local_1c);
    }
    else {
      local_30 = auStack_58;
      if (cVar1 == '\x04') {
        local_30 = auStack_58;
        FUN_00654400(param_1[0xf]);
        lVar3 = param_1[0x66];
        FUN_0064cb30(lVar3,*(int *)(lVar3 + 0x90) +
                           (*(int *)(lVar3 + 0x98) - *(int *)((longlong)param_1 + 0x354)));
        FUN_0064cbf0(param_1[0x66],*(undefined4 *)((longlong)param_1 + 0x354));
        FUN_00654410(param_1[0xf]);
      }
    }
    (**(code **)(*param_1 + 0x198))(param_1);
    if (param_1[0x72] != 0) {
      (*(code *)param_1[0x72])(param_1[0x73],param_1);
    }
    *(undefined4 *)(param_1 + 0x6d) = *(undefined4 *)((longlong)param_1 + 0x354);
  }
  return;
}

