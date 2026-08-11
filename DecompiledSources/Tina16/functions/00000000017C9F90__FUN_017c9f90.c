/* Ghidra address: 017c9f90 */
/* Ghidra symbol: FUN_017c9f90 */


undefined4 FUN_017c9f90(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 local_3c;
  undefined8 local_30;
  
  local_30 = 0;
  local_3c = 0xffffffff;
  iVar2 = 0;
  iVar4 = *(int *)(param_1 + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      plVar3 = (longlong *)FUN_004aeac0(param_1,iVar2);
      (**(code **)(*plVar3 + 0x288))(plVar3,&local_30);
      cVar1 = FUN_017c9e40(local_30,param_2,param_3);
      if (cVar1 != '\0') {
        local_3c = (**(code **)(*plVar3 + 0x210))(plVar3,0);
      }
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(&local_30);
  return local_3c;
}

