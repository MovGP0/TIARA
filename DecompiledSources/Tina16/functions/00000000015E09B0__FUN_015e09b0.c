/* Ghidra address: 015e09b0 */
/* Ghidra symbol: FUN_015e09b0 */


void FUN_015e09b0(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 local_20;
  undefined1 *local_10;
  
  local_10 = auStack_48;
  FUN_015ca1c0(param_1);
  FUN_015ca240(param_1);
  FUN_015dce90(param_1);
  local_28 = 1;
  local_20 = *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 9);
  FUN_015d84a0(param_1,*(undefined8 *)(param_1 + 200),
               *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x10),*(undefined8 *)(param_1 + 0xd0)
              );
  FUN_015dcfc0(param_1);
  return;
}

