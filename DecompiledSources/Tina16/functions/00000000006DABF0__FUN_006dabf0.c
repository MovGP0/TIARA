/* Ghidra address: 006dabf0 */
/* Ghidra symbol: FUN_006dabf0 */


void FUN_006dabf0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_40;
  longlong local_38;
  int local_28;
  int local_24;
  longlong *local_20;
  
  local_50 = auStack_78;
  cVar1 = FUN_0065be20(param_1);
  if ((cVar1 != '\0') &&
     (local_40 = *(longlong *)(param_1 + 0x490), 1 < *(int *)(*(longlong *)(local_40 + 0x10) + 0x10)
     )) {
    local_28 = *(int *)(*(longlong *)(local_40 + 0x10) + 0x10);
    local_38 = local_40;
    local_20 = (longlong *)FUN_006da2b0(&PTR_FUN_006b2f48,1,param_1);
    (**(code **)(*local_20 + 0x10))(local_20,*(undefined8 *)(param_1 + 0x490));
    FUN_004b1e70(*(undefined8 *)(param_1 + 0x490));
    local_24 = 0;
    iVar4 = local_28;
    if (-1 < local_28 + -1) {
      do {
        plVar2 = (longlong *)FUN_006da360(*(undefined8 *)(param_1 + 0x490));
        uVar3 = FUN_006da380(local_20,(local_28 - local_24) + -1);
        (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
        local_24 = local_24 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00410f20(local_20);
    FUN_006db1f0(param_1);
  }
  return;
}

