/* Ghidra address: 01850740 */
/* Ghidra symbol: FUN_01850740 */


void FUN_01850740(longlong param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x28) + 0x10))(*(longlong **)(param_1 + 0x28),&local_40);
  bVar1 = false;
  FUN_0184f250(param_1);
  if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x138) == '\0') {
    iVar3 = FUN_01847410();
    iVar6 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar4 = FUN_0184f0f0(param_1,iVar6);
        cVar2 = FUN_018505e0(uVar4,&local_40);
        if (cVar2 != '\0') {
          plVar5 = (longlong *)FUN_0184f0f0(param_1,iVar6);
          (**(code **)(*plVar5 + 0x10))(plVar5);
          bVar1 = true;
          break;
        }
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (!bVar1) {
      (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))(*(longlong **)(param_1 + 0x30));
    }
  }
  FUN_00460ba0(&local_40);
  return;
}

