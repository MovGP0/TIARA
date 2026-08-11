/* Ghidra address: 006aa110 */
/* Ghidra symbol: FUN_006aa110 */


void FUN_006aa110(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_006a6938);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_1,&PTR_FUN_006a6be8);
    if (cVar1 == '\0') {
      return;
    }
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x138))(param_1,param_2);
    iVar2 = (**(code **)(*plVar4 + 0x270))(plVar4);
    (**(code **)(*param_1 + 0xe8))(param_1,0 < iVar2);
    return;
  }
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x138))(param_1,param_2);
  iVar2 = (**(code **)(*plVar4 + 0x270))(plVar4);
  if (0 < iVar2) {
    uVar5 = (**(code **)(*param_1 + 0x138))(param_1,param_2);
    uVar5 = FUN_00680640(uVar5);
    if ((char)uVar5 == '\0') {
      uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      goto LAB_006aa16f;
    }
  }
  uVar3 = 0;
LAB_006aa16f:
  (**(code **)(*param_1 + 0xe8))(param_1,uVar3);
  return;
}

