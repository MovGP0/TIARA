/* Ghidra address: 01c05aa0 */
/* Ghidra symbol: FUN_01c05aa0 */


undefined8 FUN_01c05aa0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
  cVar1 = FUN_004113d0(uVar2,&PTR_FUN_0061c2b8);
  if ((cVar1 != '\0') &&
     (lVar3 = (**(code **)(*param_1 + 0xd0))(param_1), 0 < *(int *)(lVar3 + 0xdc))) {
    return 1;
  }
  return 0;
}

