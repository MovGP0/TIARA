/* Ghidra address: 00619070 */
/* Ghidra symbol: FUN_00619070 */


undefined1 FUN_00619070(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_38;
  undefined1 local_31;
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  uVar1 = FUN_00427ab0();
  if (*(ulonglong *)(param_2 + 0x10) == (ulonglong)uVar1) {
    local_30 = 0;
    local_28 = *(undefined4 *)(param_2 + 0x10);
    local_20 = thunk_FUN_0416e139(0,0,0,0);
    local_38 = *(int *)(param_2 + 0xc);
    FUN_00618ed0(param_1,&local_30);
    *(undefined4 *)(param_2 + 0xc) = 1;
    iVar3 = local_38 + -1;
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) - iVar3;
    UNLOCK();
    FUN_00427ff0(param_2);
    iVar2 = thunk_FUN_0418d6df(local_20,param_3);
    if (iVar2 == 0) {
      local_31 = 1;
    }
    else if (iVar2 == 0x102) {
      local_31 = 0;
      thunk_FUN_041931fb(0x5b4);
    }
    else {
      local_31 = 0;
      thunk_FUN_041931fb(0);
    }
    FUN_00427930(param_2);
    FUN_00618f70(param_1,&local_30);
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + iVar3;
    UNLOCK();
    *(int *)(param_2 + 0xc) = local_38;
    thunk_FUN_041d2921(local_20);
  }
  else {
    local_31 = 0;
  }
  return local_31;
}

