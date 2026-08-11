/* Ghidra address: 006dc150 */
/* Ghidra symbol: FUN_006dc150 */


void FUN_006dc150(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  int local_54;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_28;
  int local_1c;
  
  local_60 = auStack_88;
  local_28 = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x4a0) = 1;
  plVar2 = (longlong *)
           FUN_004b1f50(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x490),
                        *(undefined4 *)(param_2 + 0x10));
  uVar1 = FUN_004b1870(param_3);
  (**(code **)(*plVar2 + 0x28))(plVar2,uVar1);
  local_38 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x490);
  FUN_00419260(&local_28,&DAT_006dc0f8,1,(longlong)*(int *)(*(longlong *)(local_38 + 0x10) + 0x10));
  local_40 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x490);
  iVar4 = *(int *)(*(longlong *)(local_40 + 0x10) + 0x10);
  local_1c = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar3 = FUN_006da380(*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x490),local_1c);
      *(undefined4 *)(local_28 + (longlong)local_1c * 4) = *(undefined4 *)(lVar3 + 0x10);
      local_1c = local_1c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_50 = FUN_0065b870(*(undefined8 *)(param_1 + 0x40));
  local_48 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x490);
  local_54 = *(int *)(*(longlong *)(local_48 + 0x10) + 0x10);
  thunk_FUN_041b2403(local_50,0x1212,(longlong)local_54,local_28);
  *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x4a0) = 0;
  FUN_00419430(&local_28,&DAT_006dc0f8);
  return;
}

