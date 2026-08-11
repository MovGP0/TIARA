/* Ghidra address: 018cc5f0 */
/* Ghidra symbol: FUN_018cc5f0 */


void FUN_018cc5f0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if (param_2 != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x68))(*(longlong **)(param_1 + 0x60),param_2,0);
    if (*(char *)((longlong)param_2 + 0xc5) != '\0') {
      (**(code **)(*param_2 + 200))(param_2,0);
      (**(code **)(*param_2 + 0xd0))(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x90));
      cVar2 = FUN_004113d0(param_2,&PTR_FUN_01930a20);
      if (((cVar2 != '\0') &&
          (((*(char *)(*(longlong *)(param_1 + 0x60) + 0xd9) != '\0' &&
            ((char)param_2[0x48] == '\0')) ||
           ((*(char *)(*(longlong *)(param_1 + 0x60) + 0xda) != '\0' &&
            ((*(char *)((longlong)param_2 + 0x241) == '\0' &&
             (*(char *)(*(longlong *)(param_1 + 0x60) + 0xa1) == '\0')))))))) &&
         ((*(char *)((longlong)param_2 + 0x242) == '\0' ||
          ((*(char *)(*(longlong *)(param_1 + 0x60) + 0xd9) == '\0' ||
           (*(char *)(*(longlong *)(param_1 + 0x60) + 0xda) == '\0')))))) {
        FUN_018cc7e0(0,local_20);
        return;
      }
      if (*(char *)(*(longlong *)(param_1 + 0x60) + 0x18) != '\0') {
        FUN_01967a70(param_2);
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x38);
      cVar2 = (**(code **)(*plVar1 + 200))(plVar1,param_2);
      if (cVar2 == '\0') {
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x38);
        (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
      }
      *(double *)(*(longlong *)(param_1 + 0x60) + 0x90) =
           *(double *)(*(longlong *)(param_1 + 0x60) + 0x90) + (double)param_2[0x16];
    }
    (**(code **)(**(longlong **)(param_1 + 0x60) + 0x70))(*(longlong **)(param_1 + 0x60),param_2);
    FUN_018cd940(*(undefined8 *)(param_1 + 0x60),param_2,0);
  }
  return;
}

