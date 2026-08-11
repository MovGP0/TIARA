/* Ghidra address: 01ce81c0 */
/* Ghidra symbol: FUN_01ce81c0 */


undefined1 FUN_01ce81c0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 local_19;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  uVar1 = (ulonglong)*(byte *)(param_1 + 0x58);
  if (uVar1 < 4) {
    if (uVar1 != 3) {
      if (uVar1 == 0) {
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),param_2);
        lVar2 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0xf8),0);
        FUN_01cc0ae0(*(undefined8 *)(lVar2 + 0xe0),&local_10);
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),param_3);
        lVar2 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0xf8),0);
        FUN_01cc0ae0(*(undefined8 *)(lVar2 + 0xe0),&local_18);
        local_19 = FUN_01ce7a60(local_10,local_18);
      }
      else if (uVar1 == 1) {
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),param_2);
        lVar2 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0xf8),0);
        FUN_01cc0ae0(*(undefined8 *)(lVar2 + 0x98),&local_10);
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),param_3);
        lVar2 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0xf8),0);
        FUN_01cc0ae0(*(undefined8 *)(lVar2 + 0x98),&local_18);
        local_19 = FUN_01ce7a60(local_10,local_18);
      }
      else if (uVar1 == 2) {
        local_19 = 0;
      }
      goto code_r0x01ce8359;
    }
  }
  else {
    if (uVar1 == 4) {
      local_19 = 0;
      goto code_r0x01ce8359;
    }
    if (uVar1 - 5 < 2) {
      local_19 = 0;
      goto code_r0x01ce8359;
    }
    if (uVar1 - 5 != 2) goto code_r0x01ce8359;
  }
  local_19 = 0;
code_r0x01ce8359:
  FUN_00414560(&local_18,2);
  return local_19;
}

