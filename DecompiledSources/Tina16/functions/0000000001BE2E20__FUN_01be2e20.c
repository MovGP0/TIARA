/* Ghidra address: 01be2e20 */
/* Ghidra symbol: FUN_01be2e20 */


void FUN_01be2e20(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  code *local_38;
  longlong local_30;
  int local_1c;
  
  uVar1 = FUN_00664d10(*(undefined8 *)PTR_DAT_020054d8);
  *(undefined8 *)(param_1 + 0x640) = uVar1;
  *(undefined8 *)(param_1 + 0x658) = 0;
  *(undefined1 *)(param_1 + 0x591) = 0;
  *(undefined8 *)(param_1 + 0x580) = 0;
  if ((*(ushort *)(param_1 + 0x34) & 0x10) == 0) {
    thunk_FUN_03e0f7b4(0x6a,0,&local_1c,0);
    if (local_1c == 0) {
      local_1c = 1;
    }
  }
  else {
    local_1c = 1;
  }
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) && (*(char *)(param_1 + 0x619) != '\0')) {
    plVar2 = (longlong *)FUN_007f9b70(param_1,1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 600))(plVar2);
    }
  }
  uVar1 = FUN_00742bf0(&PTR_FUN_007334d8,1,0);
  *(undefined8 *)(param_1 + 0x650) = uVar1;
  local_38 = FUN_01be27e0;
  local_30 = param_1;
  FUN_00742ef0(uVar1,&local_38);
  FUN_00742ed0(*(undefined8 *)(param_1 + 0x650),local_1c);
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x650),0);
  uVar1 = FUN_01be0840(&PTR_FUN_01bdbb88,1,param_1);
  *(undefined8 *)(param_1 + 0x648) = uVar1;
  FUN_01be0a10(uVar1,param_1);
  uVar1 = FUN_00742bf0(&PTR_FUN_007334d8,1,0);
  *(undefined8 *)(param_1 + 0x638) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x638);
  FUN_00742eb0(uVar1,0);
  FUN_00742ed0(uVar1,*(undefined4 *)(param_1 + 0x5c8));
  local_38 = FUN_01be2b80;
  local_30 = param_1;
  FUN_00742ef0(uVar1,&local_38);
  *(undefined1 *)(param_1 + 0x592) = 1;
  thunk_FUN_0399f62b(0);
  DAT_02111468 = param_1;
  if ((*(char *)(param_1 + 0x4c0) != '\0') && (*(longlong *)PTR_DAT_02001a48 != 0)) {
    (**(code **)(**(longlong **)PTR_DAT_02001a48 + 0x30))(*(longlong **)PTR_DAT_02001a48,param_1);
  }
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_0415357f(4,uVar1,0xfffffffd,0);
  return;
}

