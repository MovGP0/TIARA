/* Ghidra address: 009517e0 */
/* Ghidra symbol: FUN_009517e0 */


void FUN_009517e0(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  while( true ) {
    cVar1 = (**(code **)(*param_1 + 0x270))(param_1);
    if (cVar1 == '\0') break;
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x100))(param_1);
    uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,0);
    FUN_004113f0(uVar3,&PTR_FUN_00909bd0);
    uVar3 = (**(code **)(*param_1 + 800))(param_1);
    FUN_00410f20(uVar3);
  }
  return;
}

