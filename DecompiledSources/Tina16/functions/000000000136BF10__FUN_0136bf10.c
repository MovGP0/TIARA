/* Ghidra address: 0136bf10 */
/* Ghidra symbol: FUN_0136bf10 */


undefined1 FUN_0136bf10(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_40;
  undefined1 local_34 [4];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_40 = 0;
  plVar1 = *(longlong **)(param_1 + 0x18);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x27a8);
  uVar5 = FUN_0198d430(plVar2);
  FUN_01a982d0(uVar5,param_2,param_3,&local_24,&local_28);
  local_1c = local_24;
  local_20 = local_28;
  FUN_01b1cd00(&local_1c,&local_20);
  iVar4 = FUN_01995e50(plVar2,local_1c,local_20,&local_30,local_34);
  if (iVar4 < 0) {
    local_30 = (**(code **)(*plVar2 + 0x58))(plVar2,local_24,local_28);
    if (local_30 != 0) {
      cVar3 = FUN_0198a580(local_30);
      if (cVar3 == '\x04') {
        cVar3 = (**(code **)(*plVar1 + 0x430))(plVar1,local_30);
        if (cVar3 == '\0') {
          thunk_FUN_03f3ed6d(0xffff);
        }
        goto LAB_0136c013;
      }
    }
    thunk_FUN_03f3ed6d(0xffff);
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0x438))(plVar1,iVar4);
    if (cVar3 == '\0') {
      thunk_FUN_03f3ed6d(0xffff);
    }
  }
LAB_0136c013:
  (**(code **)(*plVar1 + 0x428))(plVar1);
  (**(code **)(*plVar1 + 0x440))(plVar1,0);
  FUN_00414480(&local_40);
  return 0;
}

