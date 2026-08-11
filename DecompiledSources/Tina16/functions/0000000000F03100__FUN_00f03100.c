/* Ghidra address: 00f03100 */
/* Ghidra symbol: FUN_00f03100 */


undefined8 FUN_00f03100(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (cVar2 = FUN_004113d0(lVar1,&PTR_FUN_00eff310), cVar2 != '\0')) {
    return *(undefined8 *)(lVar1 + 0x28);
  }
  return 0;
}

