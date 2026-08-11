/* Ghidra address: 01968b80 */
/* Ghidra symbol: FUN_01968b80 */


void FUN_01968b80(longlong param_1,double param_2)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_004113d0(*(undefined8 *)(param_1 + 0xf0),&PTR_FUN_018837f0);
  if (cVar1 != '\0') {
    lVar2 = FUN_0040c770(param_2 / (double)DAT_01fb7dc8);
    param_2 = (double)(lVar2 * DAT_01fb7dc8);
  }
  FUN_01950940(param_1,param_2);
  return;
}

