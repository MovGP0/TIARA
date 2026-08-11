/* Ghidra address: 008971a0 */
/* Ghidra symbol: FUN_008971a0 */


undefined1 FUN_008971a0(void)

{
  int iVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_28;
  int local_24;
  longlong local_20;
  undefined4 local_18;
  undefined1 local_11;
  longlong local_10;
  
  local_40 = auStack_68;
  local_11 = 0;
  local_10 = 0;
  local_18 = 0;
  while (local_24 = (**(code **)PTR_PTR_02004160)(0,local_10,&local_18), local_24 == -1) {
    iVar1 = (**(code **)PTR_PTR_020051a8)();
    if (iVar1 != 0x2747) goto LAB_0089724f;
    FUN_00409620(&local_10,local_18);
  }
  if (0 < local_24) {
    local_20 = local_10;
    local_28 = 0;
    iVar1 = local_24;
    if (-1 < local_24 + -1) {
      do {
        if (*(int *)(local_20 + 0x4c) == 0x17) {
          local_11 = 1;
LAB_0089724f:
          FUN_00897270(0,local_40);
          return local_11;
        }
        local_20 = local_20 + 0x274;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_004095f0(local_10);
  return local_11;
}

