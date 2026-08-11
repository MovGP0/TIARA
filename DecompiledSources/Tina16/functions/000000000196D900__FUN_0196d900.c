/* Ghidra address: 0196d900 */
/* Ghidra symbol: FUN_0196d900 */


void FUN_0196d900(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_01920040);
  if (cVar2 != '\0') {
    *(undefined4 *)(lVar1 + 8) = param_2;
  }
  return;
}

