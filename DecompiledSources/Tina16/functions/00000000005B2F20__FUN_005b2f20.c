/* Ghidra address: 005b2f20 */
/* Ghidra symbol: FUN_005b2f20 */


void FUN_005b2f20(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar3 = FUN_00416db0(param_2,param_1[0x1d]);
  if (iVar3 != 0) {
    iVar3 = FUN_004d4cf0();
    iVar5 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_004d4cc0(param_1,iVar5);
        cVar2 = FUN_004113d0(uVar1,&PTR_FUN_005af7a8);
        if (cVar2 != '\0') {
          plVar4 = (longlong *)FUN_004d4cc0(param_1,iVar5);
          (**(code **)(*plVar4 + 0xd0))(plVar4,param_2);
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_00414ad0(param_1 + 0x1d,param_2);
    (**(code **)(*param_1 + 0x88))(param_1);
  }
  return;
}

