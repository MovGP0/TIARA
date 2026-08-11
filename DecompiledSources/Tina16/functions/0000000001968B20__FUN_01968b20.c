/* Ghidra address: 01968b20 */
/* Ghidra symbol: FUN_01968b20 */


void FUN_01968b20(longlong param_1,double param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 0xf0),&PTR_FUN_018837f0);
  if (cVar2 != '\0') {
    lVar1 = FUN_0040c770(param_2 / DAT_01fb7dc0);
    param_2 = (double)lVar1 * DAT_01fb7dc0;
  }
  FUN_01950900(param_1,param_2);
  return;
}

