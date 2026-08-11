/* Ghidra address: 0199e850 */
/* Ghidra symbol: FUN_0199e850 */


void FUN_0199e850(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar5 = *(int *)(param_1 + 0x10);
  local_3c = 0;
  if (-1 < iVar5 + -1) {
    do {
      plVar3 = (longlong *)FUN_00b94e60(param_1,local_3c);
      if (((plVar3 != (longlong *)0x0) &&
          (cVar1 = (**(code **)(*plVar3 + 0x118))(plVar3), cVar1 != '\0')) &&
         ((param_3 == '\0' || (cVar1 = (**(code **)(*plVar3 + 0xc0))(plVar3), cVar1 == '\0')))) {
        iVar2 = (**(code **)(*plVar3 + 0x1c8))();
        iVar4 = 0;
        if (-1 < iVar2 + -1) {
          do {
            (**(code **)(*plVar3 + 0x1f0))(plVar3,iVar4,&local_2c,&local_30);
            FUN_01996b80(param_2,local_3c,iVar4,local_2c,local_30);
            iVar4 = iVar4 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      local_3c = local_3c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

