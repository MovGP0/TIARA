/* Ghidra address: 0064d4a0 */
/* Ghidra symbol: FUN_0064d4a0 */


undefined8 FUN_0064d4a0(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_007f9b70(param_1,1);
  if ((lVar2 != 0) && (cVar1 = FUN_004113d0(lVar2,&PTR_FUN_007f0370), cVar1 != '\0')) {
    uVar3 = FUN_008003b0(lVar2);
    return uVar3;
  }
  return 0x60;
}

