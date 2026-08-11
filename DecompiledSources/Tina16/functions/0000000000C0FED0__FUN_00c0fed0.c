/* Ghidra address: 00c0fed0 */
/* Ghidra symbol: FUN_00c0fed0 */


void FUN_00c0fed0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  longlong local_20;
  
  local_30 = auStack_58;
  cVar1 = FUN_004bea50(param_2);
  if (cVar1 == '\x0e') {
    FUN_004c23c0(param_2);
    local_20 = FUN_00bd73a0(&PTR_FUN_00bd5550,1,param_1);
    FUN_004bf530(param_2,local_20);
    iVar4 = *(int *)(*(longlong *)(local_20 + 0x10) + 0x10);
    local_24 = 0;
    if (-1 < iVar4 + -1) {
      do {
        plVar2 = (longlong *)FUN_00bd7240(*(undefined8 *)(param_1 + 0x5d8));
        uVar3 = FUN_00bd7720(local_20,local_24);
        (**(code **)(*plVar2 + 0x10))(plVar2,uVar3);
        local_24 = local_24 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00410f20(local_20);
  }
  return;
}

