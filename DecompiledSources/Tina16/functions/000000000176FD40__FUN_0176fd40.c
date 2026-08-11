/* Ghidra address: 0176fd40 */
/* Ghidra symbol: FUN_0176fd40 */


char FUN_0176fd40(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined1 *local_40;
  bool local_31;
  uint local_30;
  bool local_29;
  longlong local_28;
  longlong local_20;
  
  local_40 = auStack_78;
  iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_2 + 0x58));
  local_29 = iVar2 == 0;
  if (local_29) {
    local_20 = FUN_01680a00(&PTR_FUN_0166efa0,1);
    local_28 = FUN_01680a00(&PTR_FUN_0166efa0,1);
    local_58 = *(undefined8 *)(param_1 + 0x28);
    local_50 = local_20;
    FUN_0176f6f0(auStack_78,*(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x20));
    local_58 = *(undefined8 *)(param_2 + 0x28);
    local_50 = local_28;
    FUN_0176f6f0(auStack_78,*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x18),
                 *(undefined8 *)(param_2 + 0x20));
    for (local_30 = 0;
        (uVar1 = local_30, local_29 != false && ((int)local_30 < *(int *)(local_20 + 0x10)));
        local_30 = local_30 + 1) {
      if (local_29 == false) {
        local_31 = false;
      }
      else {
        if (*(uint *)(local_20 + 0x10) <= local_30) {
          FUN_00594f90();
        }
        if (*(uint *)(local_28 + 0x10) <= uVar1) {
          FUN_00594f90();
        }
        local_31 = *(double *)(*(longlong *)(local_20 + 8) + (longlong)(int)local_30 * 8) ==
                   *(double *)(*(longlong *)(local_28 + 8) + (longlong)(int)local_30 * 8);
      }
      local_29 = local_31;
    }
    FUN_00410f20(local_20);
    FUN_00410f20(local_28);
  }
  return local_29;
}

