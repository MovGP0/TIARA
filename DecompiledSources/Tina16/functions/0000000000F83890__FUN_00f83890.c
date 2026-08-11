/* Ghidra address: 00f83890 */
/* Ghidra symbol: FUN_00f83890 */


void FUN_00f83890(longlong param_1,byte param_2)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_34;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  
  local_40 = auStack_68;
  FUN_00411a80(param_1,param_2);
  *(undefined1 *)(param_1 + 0x8e) = 1;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    local_30 = FUN_004afa30(*(longlong *)(param_1 + 0x80));
    iVar1 = *(int *)(local_30 + 0x10);
    local_34 = 0;
    if (-1 < iVar1 + -1) {
      do {
        local_28 = FUN_004aeac0(local_30,local_34);
        if (local_28 != 0) {
          if (*(int *)(local_28 + 0x6c) != 0) {
            thunk_FUN_0417aa68(*(int *)(local_28 + 0x6c));
          }
          FUN_00410f20(local_28);
        }
        local_34 = local_34 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    local_20 = *(longlong *)(param_1 + 0x80);
    FUN_00412130(*(undefined8 *)(local_20 + 0x10));
    FUN_00410f20(*(undefined8 *)(param_1 + 0x80));
  }
  thunk_FUN_03cb8486(*(undefined2 *)(param_1 + 0x8c));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_004d6550(*(longlong *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  FUN_004d23a0(param_1,param_2 & 0xfc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

