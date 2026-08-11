/* Ghidra address: 01806eb0 */
/* Ghidra symbol: FUN_01806eb0 */


ulonglong FUN_01806eb0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40);
  uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (lVar1 == 0) {
    iVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
    uVar4 = CONCAT71(uVar5,0 < iVar3);
  }
  else {
    uVar4 = CONCAT71(uVar5,1);
    cVar2 = FUN_004113d0(lVar1,&PTR_FUN_009e5030);
    if (cVar2 != '\0') {
      cVar2 = FUN_009e7820(*(undefined8 *)(param_1 + 0x70),lVar1);
      uVar4 = CONCAT71(uVar5,cVar2 == '\0');
    }
  }
  return uVar4 & 0xffffffff;
}

