/* Ghidra address: 00652d40 */
/* Ghidra symbol: FUN_00652d40 */


void FUN_00652d40(longlong param_1)

{
  int iVar1;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_38;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  local_50 = auStack_78;
  if (*(longlong *)(param_1 + 0x378) != 0) {
    local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    local_24 = *(int *)(*(longlong *)(param_1 + 0x378) + 0x10);
    FUN_004aef90(local_20,local_24);
    local_28 = 0;
    iVar1 = local_24;
    if (-1 < local_24 + -1) {
      do {
        local_38 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x378),local_28);
        local_2c = *(int *)(local_38 + 0x380);
        if ((-1 < local_2c) && (local_2c < local_24)) {
          FUN_004aedb0(local_20,local_2c,local_38);
        }
        local_28 = local_28 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    local_28 = 0;
    iVar1 = local_24;
    if (-1 < local_24 + -1) {
      do {
        local_38 = FUN_004aeac0(local_20,local_28);
        if (local_38 != 0) {
          FUN_0065bc40(local_38,(undefined2)local_28);
        }
        local_28 = local_28 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00410f20(local_20);
  }
  return;
}

