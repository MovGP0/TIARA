/* Ghidra address: 00c2f8b0 */
/* Ghidra symbol: FUN_00c2f8b0 */


void FUN_00c2f8b0(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_28;
  char local_21;
  undefined8 local_20;
  
  local_40 = auStack_68;
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x28) + 0x10);
  local_28 = 0;
  puVar1 = auStack_68;
  if (-1 < iVar3 + -1) {
    do {
      local_40 = puVar1;
      uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x28),local_28);
      FUN_00410f20(uVar2);
      local_28 = local_28 + 1;
      iVar3 = iVar3 + -1;
      puVar1 = local_40;
    } while (iVar3 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28));
  while( true ) {
    iVar3 = (**(code **)(*param_2 + 0x18))(param_2,&local_21,1);
    if ((iVar3 != 1) || (local_21 == '\0')) break;
    local_20 = FUN_00c2f570(&DAT_00c167a8,1,local_21);
    FUN_00c2f6d0(local_20,param_2);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),local_20);
  }
  return;
}

