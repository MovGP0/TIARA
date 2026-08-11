/* Ghidra address: 00aa7980 */
/* Ghidra symbol: FUN_00aa7980 */


void FUN_00aa7980(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  int *local_48;
  undefined1 local_40;
  undefined1 *local_30;
  int local_24;
  longlong local_20 [2];
  
  local_30 = auStack_68;
  if (*(longlong *)(*(longlong *)(param_1 + 0x80) + 200) != 0) {
    local_20[0] = 0;
    local_24 = -1;
    local_48 = &local_24;
    (**(code **)(*(longlong *)(param_1 + 0x80) + 200))
              (*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0xd0),
               *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0xb8),*(undefined8 *)(param_1 + 0x88)
               ,local_20);
    if (local_20[0] == DAT_02014740) {
      **(undefined1 **)(param_1 + 0xa0) = 1;
    }
    else if (local_20[0] == DAT_02014748) {
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else if (local_20[0] != 0) {
      if (local_24 != -1) {
        **(undefined1 **)(param_1 + 0x90) = 1;
      }
      local_48 = (int *)CONCAT44(local_48._4_4_,local_24);
      local_40 = 0;
      uVar1 = FUN_00a48050(&PTR_FUN_00a432a0,1,local_20[0],**(undefined1 **)(param_1 + 0x90));
      *(undefined8 *)(param_1 + 0x68) = uVar1;
      if (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0xd8) != 0) {
        local_48 = &local_24;
        (**(code **)(*(longlong *)(param_1 + 0x80) + 0xd8))
                  (*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0xe0),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0xb8),
                   *(undefined8 *)(param_1 + 0x88),local_20);
      }
    }
  }
  return;
}

