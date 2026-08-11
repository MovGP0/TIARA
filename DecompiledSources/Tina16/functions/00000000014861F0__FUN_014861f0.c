/* Ghidra address: 014861f0 */
/* Ghidra symbol: FUN_014861f0 */


ulonglong FUN_014861f0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_00f34990();
  cVar1 = FUN_004113d0(lVar2,&LAB_00f249d0);
  if (cVar1 != '\0') {
    lVar2 = 0;
  }
  if (lVar2 == 0) {
    uVar3 = (ulonglong)param_3;
  }
  else {
    uVar3 = FUN_01488780(lVar2);
  }
  return uVar3;
}

