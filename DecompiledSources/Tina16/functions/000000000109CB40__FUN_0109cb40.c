/* Ghidra address: 0109cb40 */
/* Ghidra symbol: FUN_0109cb40 */


void FUN_0109cb40(longlong param_1)

{
  code *local_28;
  undefined8 local_20;
  
  if (*(char *)(param_1 + 0x9e1) == '\0') {
    local_20 = *(undefined8 *)PTR_DAT_020019c8;
    local_28 = FUN_00f847d0;
    FUN_00f834f0(&local_28);
  }
  FUN_0064cc50(*(undefined8 *)(param_1 + 0x820),0x1c2);
  FUN_0064cbf0(*(undefined8 *)(param_1 + 0x830),0);
  FUN_0064cbf0(param_1,600);
  FUN_00806af0(param_1,800);
  FUN_0109f4b0(param_1);
  *(undefined1 *)(param_1 + 0x9e0) = 1;
  FUN_00742eb0(*(undefined8 *)(param_1 + 0x918),1);
  FUN_0109e840(param_1);
  if (0 < *(int *)(PTR_DAT_020030c0 + 0x18)) {
    FUN_0064cbf0(param_1,*(int *)(PTR_DAT_020030c0 + 0x18));
  }
  if (0 < *(int *)(PTR_DAT_020030c0 + 0x1c)) {
    FUN_0064cc50(param_1,*(int *)(PTR_DAT_020030c0 + 0x1c));
  }
  if (0 < *(int *)(PTR_DAT_020030c0 + 0x20)) {
    FUN_00806af0(param_1,*(int *)(PTR_DAT_020030c0 + 0x20));
  }
  if (0 < *(int *)(PTR_DAT_020030c0 + 0x24)) {
    FUN_00806b40(param_1,*(int *)(PTR_DAT_020030c0 + 0x24));
  }
  if (0 < *(int *)(PTR_DAT_020030c0 + 0x28)) {
    FUN_0064cc50(*(undefined8 *)(param_1 + 0x820),*(int *)(PTR_DAT_020030c0 + 0x28));
  }
  return;
}

