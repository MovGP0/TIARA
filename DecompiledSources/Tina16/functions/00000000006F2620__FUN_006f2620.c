/* Ghidra address: 006f2620 */
/* Ghidra symbol: FUN_006f2620 */


void FUN_006f2620(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined1 auStack_88 [40];
  undefined1 *local_60;
  longlong local_58;
  int local_4c;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  longlong local_28;
  int local_1c;
  
  local_60 = auStack_88;
  local_28 = 0;
  local_38 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x500);
  FUN_00419260(&local_28,&DAT_004066f0,1,(longlong)*(int *)(*(longlong *)(local_38 + 0x10) + 0x10));
  local_48 = FUN_0065b870(*(undefined8 *)(param_1 + 0xb0));
  local_40 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x500);
  local_4c = *(int *)(*(longlong *)(local_40 + 0x10) + 0x10);
  thunk_FUN_041b2403(local_48,0x103b,(longlong)local_4c,local_28);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x500);
  (**(code **)(*plVar1 + 0x40))(plVar1);
  local_58 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x500);
  iVar2 = *(int *)(*(longlong *)(local_58 + 0x10) + 0x10);
  local_1c = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = (longlong *)
               FUN_006f8f70(*(undefined8 *)(param_1 + 0xb0),
                            *(undefined4 *)(local_28 + (longlong)local_1c * 4));
      (**(code **)(*plVar1 + 0x28))(plVar1,local_1c);
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x620) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0xb0) + 0x620))
              (*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x628),
               *(undefined8 *)(param_1 + 0xb0));
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x500);
  (**(code **)(*plVar1 + 0x48))(plVar1);
  *(undefined1 *)(*(longlong *)(param_1 + 0xb0) + 0x5a1) = 0;
  FUN_00419430(&local_28,&DAT_004066f0);
  return;
}

