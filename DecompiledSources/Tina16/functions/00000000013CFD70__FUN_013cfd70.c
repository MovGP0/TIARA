/* Ghidra address: 013cfd70 */
/* Ghidra symbol: FUN_013cfd70 */


void FUN_013cfd70(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  iVar3 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0) + 0x28))();
  iVar5 = 0;
  if (-1 < iVar3 + -1) {
    do {
      cVar2 = FUN_0068bca0(*(undefined8 *)(param_1 + 0x778),iVar5);
      if ((cVar2 != '\0') &&
         (iVar4 = (**(code **)(**(longlong **)(param_1 + 0x778) + 0x2b0))
                            (*(longlong **)(param_1 + 0x778)), iVar4 == 1)) {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x778) + 0x4a0);
        (**(code **)(*plVar1 + 0x18))(plVar1,local_30,iVar5);
        FUN_00f211b0(*(undefined8 *)(*(longlong *)(param_1 + 0x900) + 0x300),local_30[0]);
        FUN_00414ad0(*(longlong *)(param_1 + 0x778) + 0xf0,local_30[0]);
        FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      }
      iVar5 = iVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414560(&local_38,2);
  return;
}

