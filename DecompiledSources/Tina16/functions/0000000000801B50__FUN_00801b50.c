/* Ghidra address: 00801b50 */
/* Ghidra symbol: FUN_00801b50 */


void FUN_00801b50(longlong param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_78 [36];
  int local_54;
  undefined1 *local_50;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  int local_1c;
  
  local_50 = auStack_78;
  puVar2 = auStack_78;
  if (*(longlong *)(param_1 + 0x468) != 0) {
    puVar2 = auStack_78;
    if (*(longlong *)(param_1 + 0x638) != 0) {
      local_28 = FUN_00800410(param_1);
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x638) + 0x10);
      local_54 = iVar1 + -1;
      local_1c = 0;
      puVar2 = local_50;
      if (-1 < local_54) {
        do {
          local_54 = iVar1;
          if ((*(uint *)(param_1 + 0xa4) & 0x2000) != 0) {
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x638),local_1c);
            FUN_0065ed10(uVar4,1);
          }
          uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x638),local_1c);
          FUN_004ae7e0(local_28,uVar4);
          plVar5 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x638),local_1c);
          (**(code **)(*plVar5 + 0x1e8))(plVar5);
          if ((*(uint *)(param_1 + 0xa4) & 0x2000) != 0) {
            uVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x638),local_1c);
            FUN_0065ed10(uVar4,0);
          }
          local_1c = local_1c + 1;
          local_54 = local_54 + -1;
          iVar1 = local_54;
          puVar2 = local_50;
        } while (local_54 != 0);
      }
    }
    local_50 = puVar2;
    local_38 = *(undefined8 *)(param_1 + 0x468);
    local_30 = (*(uint *)(param_1 + 0xa4) & 0x2000) != 0;
    uVar3 = FUN_00427ab0();
    thunk_FUN_0413b16e(uVar3,FUN_00801b00,&local_38);
    puVar2 = local_50;
  }
  local_50 = puVar2;
  FUN_00655ae0(param_1);
  return;
}

