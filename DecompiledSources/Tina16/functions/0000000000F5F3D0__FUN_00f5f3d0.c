/* Ghidra address: 00f5f3d0 */
/* Ghidra symbol: FUN_00f5f3d0 */


void FUN_00f5f3d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 local_60;
  undefined1 local_56 [16];
  undefined8 local_46;
  undefined8 local_3e;
  undefined8 local_36;
  undefined4 local_2c;
  byte local_27;
  longlong local_26;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_19;
  
  local_60 = 0;
  FUN_00417580(local_56,&DAT_01d0ba10);
  if (*(longlong *)(param_1 + 0x770) == 0) {
    FUN_00417c40(local_56,PTR_DAT_02004010 + 0x8c0,&DAT_01d0ba10);
  }
  else {
    FUN_00417c40(local_56,*(longlong *)(param_1 + 0x770) + 0xe98,&DAT_01d0ba10);
  }
  lVar1 = *(longlong *)(param_1 + 0x6b0);
  if (*(char *)(*(longlong *)(lVar1 + 0x538) + 0xa9) != '\0') {
    iVar4 = *(int *)(*(longlong *)(lVar1 + 0x538) + 0x94) -
            *(int *)(*(longlong *)(lVar1 + 0x520) + 0x94);
    FUN_0064cc50(lVar1,*(int *)(lVar1 + 0x9c) + iVar4);
    FUN_0064cc50(*(longlong *)(lVar1 + 0x4b8),*(int *)(*(longlong *)(lVar1 + 0x4b8) + 0x9c) + iVar4)
    ;
    FUN_0064cc50(*(longlong *)(lVar1 + 0x508),*(int *)(*(longlong *)(lVar1 + 0x508) + 0x9c) + iVar4)
    ;
  }
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6e0),local_46);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x748),local_36);
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x6e8),local_2c);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x6f0),local_3e);
  (**(code **)(**(longlong **)(param_1 + 0x760) + 0x268))(*(longlong **)(param_1 + 0x760),local_1e);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x718),(ulonglong)(local_27 + 2) % 3);
  (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))(*(longlong **)(param_1 + 0x730),local_1d);
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x268))(*(longlong **)(param_1 + 0x738),local_1c);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x740),local_19);
  FUN_00f5f9c0(param_1,param_2);
  FUN_00f5ec80(*(undefined8 *)(param_1 + 0x768),
               *(undefined8 *)(*(longlong *)(param_1 + 0x6d8) + 0x4f0),0);
  FUN_00685670(*(undefined8 *)(param_1 + 0x6d8),1);
  iVar4 = 0;
  while( true ) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4f0);
    iVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (iVar3 <= iVar4) break;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4f0);
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_60,iVar4);
    iVar3 = FUN_0043e650(local_60,local_26);
    if (iVar3 == 0) break;
    iVar4 = iVar4 + 1;
  }
  if (local_26 != 0) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4f0);
    iVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
    if (iVar4 < iVar3) {
      (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x268))(*(longlong **)(param_1 + 0x6d8),iVar4)
      ;
      goto code_r0x00f5f683;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x268))(*(longlong **)(param_1 + 0x6d8),0);
code_r0x00f5f683:
  FUN_00414480(&local_60);
  FUN_00417740(local_56,&DAT_01d0ba10);
  return;
}

