/* Ghidra address: 01883fd0 */
/* Ghidra symbol: FUN_01883fd0 */


void FUN_01883fd0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_019512a0(param_1,param_2);
  if ((char)param_2 != '\0') {
    uVar2 = FUN_01950600(param_1);
    cVar1 = FUN_004113d0(uVar2,&PTR_FUN_018837f0);
    if (cVar1 != '\0') {
      lVar3 = FUN_01950600(param_1);
      *(undefined2 *)(param_1 + 0x3e0) = *(undefined2 *)(lVar3 + 0x250);
    }
  }
  return;
}

