/* Ghidra address: 01636e00 */
/* Ghidra symbol: FUN_01636e00 */


void FUN_01636e00(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 local_1c [4];
  
  local_28 = 0;
  local_30 = 0;
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x70);
  if (*(char *)(lVar1 + 8) == '\x01') {
    plVar3 = *(longlong **)(param_1 + 0x70);
    FUN_0043f750(&local_28,*(undefined4 *)(*(longlong *)(lVar1 + 0x58) + 0xc));
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x78);
    FUN_01628cb0(&local_28,lVar1,param_3);
  }
  lVar1 = FUN_01636d10(param_1,plVar3,local_28);
  if (lVar1 == 0) {
    uVar2 = FUN_0161afd0(&DAT_0161a6f8,1,uVar2);
    (**(code **)(*plVar3 + 0x80))(plVar3,local_28,uVar2);
  }
  else {
    FUN_0161b150(lVar1,uVar2,1,local_1c);
  }
  FUN_00414560(&local_30,2);
  return;
}

