/* Ghidra address: 0181a9c0 */
/* Ghidra symbol: FUN_0181a9c0 */


longlong FUN_0181a9c0(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  lVar3 = 0;
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
    cVar2 = FUN_004113d0(plVar1,&PTR_FUN_018198c0);
    if (cVar2 != '\0') {
      lVar3 = (**(code **)(*plVar1 + 0x330))(plVar1,param_2);
    }
  }
  if ((lVar3 == 0) && (*(longlong *)(param_1 + 8) != 0)) {
    cVar2 = FUN_004113d0(*(undefined8 *)(param_1 + 8),&PTR_FUN_018198c0);
    if (cVar2 != '\0') {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x330))
                        (*(longlong **)(param_1 + 8),param_2);
    }
  }
  return lVar3;
}

