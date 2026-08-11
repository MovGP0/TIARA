/* Ghidra address: 015a3240 */
/* Ghidra symbol: FUN_015a3240 */


void FUN_015a3240(longlong param_1,longlong param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = 0xffffffff;
  uVar1 = *(ushort *)(param_2 + 2);
  local_24 = 0;
  local_1c = 7;
  local_18 = 4;
  if (uVar1 == 0) {
    local_1c = 0x8a;
    local_18 = 3;
  }
  *(undefined2 *)(param_2 + 2 + (longlong)(param_3 + 1) * 4) = 0xffff;
  local_20 = (uint)uVar1;
  for (local_14 = 0; local_14 <= param_3; local_14 = local_14 + 1) {
    uVar2 = (uint)*(ushort *)(param_2 + 2 + (longlong)(local_14 + 1) * 4);
    local_24 = local_24 + 1;
    if ((local_1c <= local_24) || (local_20 != uVar2)) {
      if (local_24 < local_18) {
        *(short *)(param_1 + 0xa95 + (longlong)(int)local_20 * 4) =
             *(short *)(param_1 + 0xa95 + (longlong)(int)local_20 * 4) + (short)local_24;
      }
      else if (local_20 == 0) {
        if (local_24 < 0xb) {
          *(short *)(param_1 + 0xad9) = *(short *)(param_1 + 0xad9) + 1;
        }
        else {
          *(short *)(param_1 + 0xadd) = *(short *)(param_1 + 0xadd) + 1;
        }
      }
      else {
        if (local_20 != local_10) {
          *(short *)(param_1 + 0xa95 + (longlong)(int)local_20 * 4) =
               *(short *)(param_1 + 0xa95 + (longlong)(int)local_20 * 4) + 1;
        }
        *(short *)(param_1 + 0xad5) = *(short *)(param_1 + 0xad5) + 1;
      }
      local_24 = 0;
      local_10 = local_20;
      if (uVar2 == 0) {
        local_1c = 0x8a;
        local_18 = 3;
      }
      else if (local_20 == uVar2) {
        local_1c = 6;
        local_18 = 3;
      }
      else {
        local_1c = 7;
        local_18 = 4;
      }
    }
    local_20 = uVar2;
  }
  return;
}

