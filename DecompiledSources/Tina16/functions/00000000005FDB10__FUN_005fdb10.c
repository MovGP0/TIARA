/* Ghidra address: 005fdb10 */
/* Ghidra symbol: FUN_005fdb10 */


undefined8 FUN_005fdb10(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  longlong local_20;
  
  local_50 = auStack_78;
  local_40 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(local_40 + 0x10) == 0) {
    local_48 = DAT_02012030;
    FUN_00427930(DAT_02012030 + 0x10);
    if (*(longlong *)(local_40 + 0x10) == 0) {
      plVar2 = *(longlong **)(local_40 + 0x30);
      if (plVar2 == (longlong *)0x0) {
        local_30 = 0;
        bVar1 = *(byte *)(local_40 + 0x38);
        if (bVar1 == 0) {
          local_38 = 0;
        }
        else if (bVar1 == 1) {
          local_38 = 1;
        }
        else {
          local_38 = 2;
          local_30 = (longlong)(int)(bVar1 - 2);
        }
      }
      else {
        local_38 = 3;
        (**(code **)(*plVar2 + 0xf8))(plVar2,1);
        local_30 = (**(code **)(**(longlong **)(local_40 + 0x30) + 0xe8))
                             (*(longlong **)(local_40 + 0x30));
      }
      local_34 = FUN_005fbf20(*(undefined4 *)(local_40 + 0x28));
      uVar3 = thunk_FUN_03dc48b9(&local_38);
      *(undefined8 *)(local_40 + 0x10) = uVar3;
    }
    local_20 = DAT_02012030;
    FUN_00427ff0(DAT_02012030 + 0x10);
  }
  return *(undefined8 *)(local_40 + 0x10);
}

