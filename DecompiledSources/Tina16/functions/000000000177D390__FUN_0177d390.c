/* Ghidra address: 0177d390 */
/* Ghidra symbol: FUN_0177d390 */


void FUN_0177d390(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_38 = 0;
  puVar2 = auStack_68;
  if (*(longlong *)(param_1 + 0x408) != 0) {
    FUN_007e2d20(*(longlong *)(param_1 + 0x408),0);
    puVar2 = local_40;
  }
  local_40 = puVar2;
  *(longlong *)(param_1 + 0x408) = param_2;
  (**(code **)(**(longlong **)(param_1 + 0x400) + 0x18))
            (*(longlong **)(param_1 + 0x400),&local_38,*(undefined4 *)(param_2 + 0x18));
  cVar3 = FUN_00440b00(local_38,1);
  if (cVar3 != '\0') {
    local_20 = FUN_00442b60(0x105);
    local_30 = thunk_FUN_041da4fa();
    local_28 = thunk_FUN_03a99535(*(undefined8 *)(param_1 + 0x298),0x480);
    if (local_28 == 0) {
      local_28 = thunk_FUN_03a99535(*(undefined8 *)(param_1 + 0x298),0x47c);
    }
    thunk_FUN_03c244fb(local_28);
    uVar1 = local_20;
    thunk_FUN_041b2403(local_28,0xd,0x104,local_20);
    uVar4 = FUN_00416740(local_38);
    thunk_FUN_041b2403(local_28,0xc,0,uVar4);
    uVar4 = thunk_FUN_03a99535(*(undefined8 *)(param_1 + 0x298),1);
    thunk_FUN_041b2403(uVar4,0xf5,0,0);
    thunk_FUN_041b2403(local_28,0xc,0,uVar1);
    thunk_FUN_03c244fb(local_30);
    FUN_00442c30(local_20);
  }
  FUN_00414480(&local_38);
  return;
}

