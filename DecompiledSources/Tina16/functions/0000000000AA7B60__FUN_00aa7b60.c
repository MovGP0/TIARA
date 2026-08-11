/* Ghidra address: 00aa7b60 */
/* Ghidra symbol: FUN_00aa7b60 */


void FUN_00aa7b60(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20 [2];
  
  local_30 = auStack_58;
  if (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0xe8) != 0) {
    local_20[0] = 0;
    (**(code **)(*(longlong *)(param_1 + 0x80) + 0xe8))
              (*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0xf0),
               *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0xb8),*(undefined8 *)(param_1 + 0x88)
               ,local_20);
    if (local_20[0] == DAT_02014730) {
      **(undefined1 **)(param_1 + 0xa0) = 1;
    }
    else if (local_20[0] == DAT_02014738) {
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else if (local_20[0] != 0) {
      uVar1 = FUN_00a448a0(local_20[0],**(undefined1 **)(param_1 + 0x90));
      *(undefined8 *)(param_1 + 0x68) = uVar1;
      if (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0xf8) != 0) {
        (**(code **)(*(longlong *)(param_1 + 0x80) + 0xf8))
                  (*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x100),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0xb8),
                   *(undefined8 *)(param_1 + 0x88),local_20);
      }
    }
  }
  return;
}

