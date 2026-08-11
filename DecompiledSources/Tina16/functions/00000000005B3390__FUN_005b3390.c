/* Ghidra address: 005b3390 */
/* Ghidra symbol: FUN_005b3390 */


void FUN_005b3390(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  if (param_2 != (int)param_1[0x22]) {
    iVar3 = FUN_004d4cf0();
    iVar5 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_004d4cc0(param_1,iVar5);
        cVar2 = FUN_004113d0(uVar1,&PTR_FUN_005af7a8);
        if (cVar2 != '\0') {
          plVar4 = (longlong *)FUN_004d4cc0(param_1,iVar5);
          (**(code **)(*plVar4 + 0xe8))(plVar4,param_2);
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(int *)(param_1 + 0x22) = param_2;
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  return;
}

