/* Ghidra address: 018cb290 */
/* Ghidra symbol: FUN_018cb290 */


longlong FUN_018cb290(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = 0;
  lVar4 = lVar3;
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x1b0) != '\0') {
      FUN_018cf230(param_1,param_2,0);
    }
    FUN_018ce4a0(param_1,param_2);
    lVar1 = *(longlong *)(param_2 + 0x1a8);
    if ((((lVar1 != 0) && (lVar4 = param_2, *(char *)(lVar1 + 0x244) != '\x02')) &&
        (*(int *)(lVar1 + 0x240) < 1)) &&
       (((*(char *)(param_2 + 0xc5) != '\0' || (lVar4 = lVar3, *(char *)(param_2 + 0x1cb) != '\0'))
        && ((cVar2 = FUN_004113d0(param_2,&PTR_FUN_0192d4e8), lVar4 = 0, cVar2 == '\0' ||
            (*(int *)(param_2 + 0x254) < 2)))))) {
      (**(code **)(*param_1 + 0x58))(param_1,lVar1);
    }
    if (*(char *)(param_2 + 0x1b0) != '\0') {
      FUN_018cf2f0(param_1,param_2);
    }
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_0192d4e8);
    if (cVar2 != '\0') {
      (**(code **)(*(longlong *)param_1[0x13] + 0x18))((longlong *)param_1[0x13],param_2,0);
    }
  }
  return lVar4;
}

