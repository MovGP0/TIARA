/* Ghidra address: 007fae20 */
/* Ghidra symbol: FUN_007fae20 */


void FUN_007fae20(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_48;
  longlong local_38;
  char local_29;
  int local_28;
  int local_24;
  longlong local_20;
  
  local_50 = auStack_78;
  local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_28 = FUN_0064d0b0(param_1);
  local_38 = *(longlong *)(param_1 + 0x498);
  cVar1 = FUN_007f9fa0(local_38);
  if ((cVar1 == '\0') || (*(int *)(local_38 + 0x18) <= local_28)) {
    local_29 = '\0';
  }
  else {
    local_29 = '\x01';
  }
  if (local_29 != '\0') {
    local_28 = *(int *)(local_38 + 0x18);
    FUN_007fa6c0(local_38,0);
  }
  iVar2 = FUN_00654c00();
  local_24 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_48 = FUN_00654bc0(param_1,local_24);
      uVar3 = FUN_00654bc0(param_1,local_24);
      FUN_004ae7e0(local_20,uVar3);
      FUN_0064cb30(local_48,(local_28 - *(int *)(local_48 + 0x98)) - *(int *)(local_48 + 0x90));
      local_24 = local_24 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = *(int *)(local_20 + 0x10);
  local_24 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = FUN_004aeac0(local_20,local_24);
      FUN_0064fca0(uVar3,0xb03e,0,0);
      local_24 = local_24 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (local_29 != '\0') {
    FUN_007f9d60(*(undefined8 *)(param_1 + 0x498));
  }
  FUN_00410f20(local_20);
  return;
}

