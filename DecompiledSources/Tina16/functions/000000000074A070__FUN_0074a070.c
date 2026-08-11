/* Ghidra address: 0074a070 */
/* Ghidra symbol: FUN_0074a070 */


void FUN_0074a070(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x58);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_0073af10);
  if (cVar2 != '\0') {
    FUN_004ae7e0(*(undefined8 *)(lVar1 + 0x498),param_1);
  }
  FUN_00652e80(param_1,param_2);
  return;
}

