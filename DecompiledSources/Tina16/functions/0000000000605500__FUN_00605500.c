/* Ghidra address: 00605500 */
/* Ghidra symbol: FUN_00605500 */


ulonglong FUN_00605500(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  ulonglong uVar4;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x40);
  uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (lVar1 == 0) {
    uVar4 = CONCAT71(uVar5,*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) != 0);
    goto LAB_00605584;
  }
  uVar4 = CONCAT71(uVar5,1);
  cVar3 = FUN_004113d0(lVar1,&DAT_005f7500);
  if (cVar3 == '\0') goto LAB_00605584;
  if (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) == *(longlong *)(lVar1 + 0x18)) {
LAB_0060556d:
    uVar4 = 0;
  }
  else {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x18);
    if ((plVar2 != (longlong *)0x0) && (*(longlong *)(lVar1 + 0x18) != 0)) {
      cVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(lVar1 + 0x18));
      if (cVar3 != '\0') goto LAB_0060556d;
    }
    uVar4 = CONCAT71(uVar5,1);
  }
LAB_00605584:
  return uVar4 & 0xffffffff;
}

