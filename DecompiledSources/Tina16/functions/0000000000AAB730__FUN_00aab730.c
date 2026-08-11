/* Ghidra address: 00aab730 */
/* Ghidra symbol: FUN_00aab730 */


void FUN_00aab730(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      plVar1 = (longlong *)FUN_00aab7d0(param_1,iVar2);
      if (((plVar1 != (longlong *)0x0) && (0 < (int)plVar1[1])) &&
         (0 < *(int *)((longlong)plVar1 + 0xc))) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_2,param_3,param_4,param_5,param_6);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

