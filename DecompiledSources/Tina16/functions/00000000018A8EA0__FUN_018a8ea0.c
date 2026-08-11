/* Ghidra address: 018a8ea0 */
/* Ghidra symbol: FUN_018a8ea0 */


void FUN_018a8ea0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x540);
  cVar1 = *(char *)(lVar4 + 0xa9);
  cVar6 = (char)param_2;
  if ((cVar6 == '\0') && (lVar4 = FUN_018a8da0(param_1), (char)lVar4 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x538),uVar3);
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x540),param_2);
  pcVar5 = (code *)FUN_00411550(param_1,0xffc5);
  cVar2 = (*pcVar5)(param_1);
  if (cVar2 != '\0') {
    FUN_0064cb30(*(undefined8 *)(param_1 + 0x540),*(undefined4 *)(param_1 + 0x98));
  }
  if (cVar6 != '\0') {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x500),0);
    FUN_018932d0(*(longlong *)(param_1 + 0x540),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x540) + 0x4a0));
    FUN_018933f0(*(longlong *)(param_1 + 0x540),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x540) + 0x4b4));
  }
  lVar4 = *(longlong *)(param_1 + 8);
  cVar2 = FUN_004113d0(lVar4,&PTR_FUN_018a1608);
  if (cVar2 != '\0') {
    FUN_006fa3b0(*(undefined8 *)(lVar4 + 0x7e0),param_2);
  }
  if (cVar6 != cVar1) {
    FUN_018aba70(param_1);
  }
  return;
}

