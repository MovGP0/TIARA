/* Ghidra address: 006fbc50 */
/* Ghidra symbol: FUN_006fbc50 */


void FUN_006fbc50(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x4b0),param_2);
  if (-1 < iVar2) {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_006cb0d0);
    if (cVar1 != '\0') {
      *(undefined8 *)(param_2 + 0x340) = 0;
    }
    iVar2 = FUN_004aee50(*(undefined8 *)(param_1 + 0x4b0),param_2,0);
    if ((*(char *)(param_1 + 0x4ca) == '\0') || (*(char *)(param_1 + 0x530) != '\0')) {
      FUN_0064fca0(param_1,0x416,(longlong)iVar2,0);
      FUN_006fd920(param_1);
      if (*(char *)(param_1 + 0x4e6) == '\0') {
        FUN_006fb920(param_1,iVar2);
      }
      else {
        FUN_006fb920(param_1,0);
      }
      FUN_006fd640(param_1);
    }
  }
  return;
}

