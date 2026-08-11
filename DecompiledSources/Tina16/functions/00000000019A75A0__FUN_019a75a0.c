/* Ghidra address: 019a75a0 */
/* Ghidra symbol: FUN_019a75a0 */


undefined4 FUN_019a75a0(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int local_40;
  int local_3c [3];
  
  iVar2 = 0;
  iVar7 = *(int *)(param_2 + 0x10);
  if (-1 < iVar7 + -1) {
    do {
      plVar5 = (longlong *)FUN_00b94e60(param_2,iVar2);
      if ((plVar5 != (longlong *)0x0) && (cVar1 = FUN_0198a580(plVar5), cVar1 == '\x04')) {
        iVar3 = (**(code **)(*plVar5 + 0x1c8))();
        iVar6 = 0;
        if (-1 < iVar3 + -1) {
          do {
            (**(code **)(*plVar5 + 0x1f0))(plVar5,iVar6,local_3c,&local_40);
            if ((param_3 == local_3c[0]) && (param_4 == local_40)) {
              uVar4 = (**(code **)(*plVar5 + 0x210))(plVar5,iVar6);
              return uVar4;
            }
            iVar6 = iVar6 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      iVar2 = iVar2 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return 0xffffffff;
}

