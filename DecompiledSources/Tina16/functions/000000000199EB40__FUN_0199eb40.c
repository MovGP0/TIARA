/* Ghidra address: 0199eb40 */
/* Ghidra symbol: FUN_0199eb40 */


void FUN_0199eb40(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58 [5];
  
  local_58[0] = FUN_0199eaa0(*(undefined8 *)(param_1 + 0x60),param_2,param_3,0);
  iVar2 = 0;
  while ((iVar4 = iVar2, local_58[iVar2] != 0 && (iVar4 = iVar2 + 1, iVar4 < 4))) {
    lVar3 = FUN_0199eaa0(*(undefined8 *)(param_1 + 0x60),param_2,param_3,local_58[iVar2]);
    local_58[iVar4] = lVar3;
    iVar2 = iVar4;
  }
  if (-1 < iVar4 + -1) {
    plVar5 = local_58;
    do {
      if ((*(undefined ***)*plVar5 == &PTR_FUN_017c0190) &&
         (iVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x28),(longlong *)*plVar5), iVar2 == -1)) {
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x28),*plVar5);
        plVar1 = (longlong *)*plVar5;
        iVar2 = (**(code **)(*plVar1 + 0x1f8))(plVar1,param_2,param_3);
        (**(code **)(*plVar1 + 0x1f0))(plVar1,1 - iVar2,&local_5c,&local_60);
        FUN_0199eb40(param_1,local_5c,local_60);
      }
      plVar5 = plVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}

