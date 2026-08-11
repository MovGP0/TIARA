/* Ghidra address: 00cb42b0 */
/* Ghidra symbol: FUN_00cb42b0 */


void FUN_00cb42b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  FUN_00cb95c0(param_1);
  plVar1 = *(longlong **)(param_1 + 0x1a0);
  if (plVar1 == (longlong *)0x0) {
    FUN_00414b50(&local_20,*(undefined8 *)(param_1 + 0x100));
    uVar5 = *(uint *)(param_1 + 0x128);
    cVar3 = *(char *)(param_1 + 0x1ab);
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    if (cVar3 == '\0') {
      FUN_00414b50(&local_20,*(undefined8 *)(param_1 + 0x100));
      uVar5 = *(uint *)(param_1 + 0x128);
      cVar3 = *(char *)(param_1 + 0x1ab);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0x1a0);
      FUN_00414b50(&local_20,*(undefined8 *)(lVar2 + 0xf0));
      uVar5 = (uint)*(ushort *)(lVar2 + 0x100);
      cVar3 = *(char *)(lVar2 + 0x102);
    }
  }
  if (cVar3 == '\0') {
    cVar4 = FUN_0089c3d0(*(undefined8 *)PTR_DAT_020050b0,local_20);
    if (cVar4 == '\0') {
      if (*(longlong *)(param_1 + 0x78) != 0) {
        local_38 = local_20;
        local_30 = 0x11;
        FUN_00c8d310(param_1,0,&local_38,0);
      }
      FUN_0089c5a0(*(undefined8 *)PTR_DAT_020050b0,&local_28,local_20,0);
    }
    else {
      FUN_00414b50(&local_28,local_20);
    }
  }
  else {
    FUN_008759b0(&local_28,local_20);
    if (local_28 == 0) {
      if (*(longlong *)(param_1 + 0x78) != 0) {
        local_38 = local_20;
        local_30 = 0x11;
        FUN_00c8d310(param_1,0,&local_38,0);
      }
      FUN_0089c5a0(*(undefined8 *)PTR_DAT_020050b0,&local_28,local_20,cVar3);
    }
    else {
      FUN_00414b50(&local_28,local_20);
    }
  }
  FUN_00c8f680(*(undefined8 *)(param_1 + 0x158),local_28,uVar5,cVar3);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x158) + 0x38);
    local_30 = 0x11;
    FUN_00c8d310(param_1,1,&local_38,0);
  }
  if (*(int *)(param_1 + 0xf4) == 0) {
    cVar3 = FUN_00c8c9b0(&PTR_FUN_00c8c438);
    if (cVar3 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x158) + 0x58))(*(longlong **)(param_1 + 0x158));
    }
    else {
      FUN_00cb40b0(auStack_68,120000);
    }
  }
  else {
    FUN_00cb40b0(auStack_68,*(int *)(param_1 + 0xf4));
  }
  plVar1 = *(longlong **)(param_1 + 0x1a0);
  if (plVar1 != (longlong *)0x0) {
    cVar3 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    if (cVar3 != '\0') {
      local_48 = *(undefined1 *)(param_1 + 0x1ab);
      FUN_00cb1af0(*(undefined8 *)(param_1 + 0x1a0),param_1,*(undefined8 *)(param_1 + 0x100),
                   *(undefined2 *)(param_1 + 0x128));
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

