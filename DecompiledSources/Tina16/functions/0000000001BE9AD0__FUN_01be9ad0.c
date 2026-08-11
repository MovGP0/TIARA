/* Ghidra address: 01be9ad0 */
/* Ghidra symbol: FUN_01be9ad0 */


void FUN_01be9ad0(longlong param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  
  FUN_00411a80(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 800);
  if (lVar1 != 0) {
    cVar2 = FUN_004113d0(*(undefined8 *)(lVar1 + 0x30),&PTR_FUN_01bdc350);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x408))(*(longlong **)(lVar1 + 0x30));
    }
  }
  FUN_01c04100(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

