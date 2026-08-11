/* Ghidra address: 0082a940 */
/* Ghidra symbol: FUN_0082a940 */


void FUN_0082a940(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if ((*(longlong *)(param_2 + 8) == (longlong)(int)param_1[99]) &&
     (plVar1 = *(longlong **)(param_2 + 0x10), plVar1 != param_1)) {
    if (((char)plVar1[0x65] != '\0') && ((char)param_1[0x65] != '\0')) {
      *(undefined1 *)(param_1 + 0x65) = 0;
      *(undefined1 *)((longlong)param_1 + 0x33a) = 0;
      uVar3 = (**(code **)(*param_1 + 0xd0))(param_1);
      cVar2 = FUN_004113d0(uVar3,&PTR_FUN_0061c2b8);
      if (cVar2 != '\0') {
        plVar4 = (longlong *)(**(code **)(*param_1 + 0xd0))(param_1);
        (**(code **)(*plVar4 + 0xe0))(plVar4,0);
      }
      (**(code **)(*param_1 + 0x180))(param_1);
    }
    *(undefined1 *)((longlong)param_1 + 0x32a) = *(undefined1 *)((longlong)plVar1 + 0x32a);
  }
  return;
}

