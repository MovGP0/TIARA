/* Ghidra address: 01c38bf0 */
/* Ghidra symbol: FUN_01c38bf0 */


void FUN_01c38bf0(longlong param_1,longlong *param_2,int *param_3)

{
  char cVar1;
  short sVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 local_30;
  
  local_30 = 0;
  *param_3 = 0;
  iVar5 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_1,iVar4);
      cVar1 = FUN_0198a580(plVar3);
      if ((cVar1 == '\x04') &&
         ((sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0x3a ||
          (sVar2 = (**(code **)(*plVar3 + 0xf8))(plVar3), sVar2 == 0x96)))) {
        if (param_2 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x288))(plVar3,&local_30);
          (**(code **)(*param_2 + 0x78))(param_2,local_30);
        }
        *param_3 = *param_3 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414480(&local_30);
  return;
}

