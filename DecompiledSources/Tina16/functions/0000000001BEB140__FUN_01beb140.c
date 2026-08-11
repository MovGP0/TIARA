/* Ghidra address: 01beb140 */
/* Ghidra symbol: FUN_01beb140 */


void FUN_01beb140(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_01bf2b08);
  if (cVar2 == '\0') {
    FUN_01c074b0(param_1,param_2,param_3,param_4);
  }
  else {
    plVar3 = (longlong *)FUN_01c07120(param_1);
    (**(code **)(*plVar3 + 0x348))
              (plVar3,param_2,*(int *)(param_1 + 0x90) + param_3,*(int *)(param_1 + 0x94) + param_4)
    ;
  }
  uVar1 = FUN_01c07120(param_1);
  cVar2 = FUN_004113d0(uVar1,&PTR_FUN_01bdc350);
  if (cVar2 != '\0') {
    plVar3 = (longlong *)FUN_01c07120(param_1);
    (**(code **)(*plVar3 + 0x408))(plVar3);
  }
  return;
}

