/* Ghidra address: 01c02d50 */
/* Ghidra symbol: FUN_01c02d50 */


void FUN_01c02d50(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  char cVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x498);
  cVar3 = FUN_004113d0(uVar1,&PTR_FUN_01bee940);
  if (cVar3 != '\0') {
    FUN_01bfb2a0(uVar1,param_2);
  }
  pcVar2 = (code *)FUN_00411550(param_1,0xffee);
  (*pcVar2)(param_1);
  return;
}

