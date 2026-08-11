/* Ghidra address: 01cdf690 */
/* Ghidra symbol: FUN_01cdf690 */


ulonglong FUN_01cdf690(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),3);
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  if (0 < iVar2) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))(*(longlong **)(param_1 + 0x80),0);
    cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01aae560);
    if (cVar1 == '\0') {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                        (*(longlong **)(param_1 + 0x80),0);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01aaff18);
      if (cVar1 != '\0') {
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),0);
        uVar5 = (ulonglong)*(byte *)(*(longlong *)(*(longlong *)(lVar4 + 0x88) + 8) + 0x434);
      }
    }
    else {
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                        (*(longlong **)(param_1 + 0x80),0);
      uVar5 = (ulonglong)*(byte *)(*(longlong *)(*(longlong *)(lVar4 + 0xd0) + 8) + 0x434);
    }
  }
  return uVar5 & 0xffffffff;
}

