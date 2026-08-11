/* Ghidra address: 00a3ece0 */
/* Ghidra symbol: FUN_00a3ece0 */


void FUN_00a3ece0(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined2 local_32;
  int local_30;
  int local_28;
  int local_24;
  longlong *local_20;
  
  local_40 = auStack_68;
  if ((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    local_20 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    local_24 = *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x2c) + 0xe;
    (**(code **)(*local_20 + 8))(local_20,local_24);
    FUN_0040d200(&local_32,0xe,0);
    local_32 = 0x4d42;
    local_30 = local_24;
    local_28 = *(int *)(param_1 + 0x28) + 0xe;
    (**(code **)(*local_20 + 0x20))(local_20,&local_32,0xe);
    (**(code **)(*local_20 + 0x20))
              (local_20,*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x28));
    (**(code **)(*local_20 + 0x20))
              (local_20,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x2c));
    FUN_004b6dc0(local_20,0);
    (**(code **)(**(longlong **)(param_1 + 8) + 0xc0))(*(longlong **)(param_1 + 8),local_20);
    FUN_00410f20(local_20);
  }
  return;
}

