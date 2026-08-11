/* Ghidra address: 007265f0 */
/* Ghidra symbol: FUN_007265f0 */


undefined8 FUN_007265f0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_006485b0(param_1);
  uVar3 = 0xffffffff;
  if (lVar2 != 0) {
    cVar1 = FUN_004113d0(lVar2,&PTR_FUN_007f0370);
    uVar3 = 0xffffffff;
    if (cVar1 != '\0') {
      *param_2 = param_1;
      uVar3 = 0;
    }
  }
  return uVar3;
}

