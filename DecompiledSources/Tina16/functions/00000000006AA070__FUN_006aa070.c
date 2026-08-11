/* Ghidra address: 006aa070 */
/* Ghidra symbol: FUN_006aa070 */


undefined8 FUN_006aa070(longlong param_1,longlong param_2)

{
  char cVar1;
  code *pcVar2;
  
  if (((*(longlong *)(param_1 + 0x138) != 0) && (param_2 == *(longlong *)(param_1 + 0x138))) ||
     ((*(longlong *)(param_1 + 0x138) == 0 &&
      (cVar1 = FUN_004113d0(param_2,&PTR_FUN_0066ac78), cVar1 != '\0')))) {
    pcVar2 = (code *)FUN_00411550(param_2,0xffb0);
    cVar1 = (*pcVar2)(param_2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}

