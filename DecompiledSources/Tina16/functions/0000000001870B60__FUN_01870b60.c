/* Ghidra address: 01870b60 */
/* Ghidra symbol: FUN_01870b60 */


undefined8 FUN_01870b60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *in_stack_00000030;
  longlong in_stack_00000038;
  
  uVar3 = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01921f40);
  lVar4 = 0;
  if (cVar2 != '\0') {
    lVar4 = lVar1;
  }
  cVar2 = FUN_004113d0(param_2,&PTR_FUN_006b9fb0);
  if ((cVar2 != '\0') && (lVar4 != 0)) {
    *in_stack_00000030 = 1;
    uVar3 = 1;
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(in_stack_00000038 + 8) = 1;
  }
  return uVar3;
}

