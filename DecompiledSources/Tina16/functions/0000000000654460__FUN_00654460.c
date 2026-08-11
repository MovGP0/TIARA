/* Ghidra address: 00654460 */
/* Ghidra symbol: FUN_00654460 */


void FUN_00654460(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_38;
  int local_28;
  int local_24;
  longlong local_20;
  
  local_40 = auStack_68;
  local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_28 = FUN_0064d0b0(param_1);
  iVar1 = FUN_00654c00();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_38 = FUN_00654bc0(param_1,local_24);
      if (*(longlong *)(local_38 + 8) == *(longlong *)(param_1 + 8)) {
        uVar2 = FUN_00654bc0(param_1,local_24);
        FUN_004ae7e0(local_20,uVar2);
        FUN_0064cb30(local_38,(local_28 - *(int *)(local_38 + 0x98)) - *(int *)(local_38 + 0x90));
      }
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = *(int *)(local_20 + 0x10);
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar2 = FUN_004aeac0(local_20,local_24);
      FUN_0064fca0(uVar2,0xb03e,0,0);
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_20);
  return;
}

