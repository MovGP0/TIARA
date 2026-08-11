/* Ghidra address: 006a4470 */
/* Ghidra symbol: FUN_006a4470 */


undefined8 FUN_006a4470(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  cVar2 = FUN_004113d0(lVar1,&PTR_FUN_006a1278);
  if ((cVar2 == '\0') || (*(longlong *)(lVar1 + 0x140) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

