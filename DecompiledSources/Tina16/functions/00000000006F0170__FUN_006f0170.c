/* Ghidra address: 006f0170 */
/* Ghidra symbol: FUN_006f0170 */


void FUN_006f0170(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  cVar3 = FUN_004113d0(param_2,&PTR_FUN_006c4540);
  if (cVar3 == '\0') {
    FUN_004b1060(param_1,param_2);
  }
  else {
    FUN_006efe10(param_1);
    iVar4 = FUN_006efc30();
    iVar5 = 0;
    if (-1 < iVar4 + -1) {
      do {
        plVar1 = (longlong *)FUN_006efb70(param_1);
        uVar2 = FUN_006efcb0(param_2,iVar5);
        (**(code **)(*plVar1 + 0x10))(plVar1,uVar2);
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

