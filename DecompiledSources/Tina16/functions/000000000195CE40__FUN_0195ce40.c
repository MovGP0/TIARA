/* Ghidra address: 0195ce40 */
/* Ghidra symbol: FUN_0195ce40 */


void FUN_0195ce40(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x210);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01920040);
  if (cVar2 != '\0') {
    *(undefined1 *)(lVar1 + 0x10) = param_2;
  }
  return;
}

