/* Ghidra address: 018ac490 */
/* Ghidra symbol: FUN_018ac490 */


void FUN_018ac490(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((char)param_1[0xa6] == '\0') {
    FUN_018ab130(param_1);
    lVar2 = (**(code **)(*param_1 + 0x268))(param_1);
    (**(code **)(**(longlong **)(lVar2 + 400) + 0x90))(*(longlong **)(lVar2 + 400));
    *(undefined1 *)((longlong)param_1 + 0x531) = 1;
    lVar2 = param_1[1];
    cVar1 = FUN_004113d0(lVar2,&PTR_FUN_018a1608);
    if (cVar1 != '\0') {
      FUN_018ae240(lVar2);
    }
  }
  return;
}

