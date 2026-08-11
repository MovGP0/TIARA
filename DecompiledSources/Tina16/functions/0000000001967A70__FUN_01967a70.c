/* Ghidra address: 01967a70 */
/* Ghidra symbol: FUN_01967a70 */


void FUN_01967a70(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_004113d0(param_1,&PTR_FUN_01933ed0);
  if ((cVar2 == '\0') &&
     ((((*(char *)(param_1 + 0x1d8) != '\0' ||
        (*(int *)(*(longlong *)(param_1 + 0x1d0) + 8) != 0x1fffffff)) ||
       (*(int *)(*(longlong *)(param_1 + 0x1d0) + 0xc) != 0)) ||
      ((*(char *)(*(longlong *)(param_1 + 0x1d0) + 0x10) != '\0' ||
       (*(char *)(*(longlong *)(param_1 + 0x1f0) + 0x3d) != '\0')))))) {
    if (*(longlong *)(param_1 + 0x1e0) == 0) {
      uVar3 = FUN_0195e8b0(&PTR_FUN_01927248,1,param_1);
      *(undefined8 *)(param_1 + 0x1e0) = uVar3;
    }
    plVar1 = *(longlong **)(param_1 + 0x1e0);
    *(undefined1 *)(plVar1 + 0x34) = 7;
    (**(code **)(*plVar1 + 0xc0))(plVar1,param_1);
    FUN_0195cd80(*(undefined8 *)(param_1 + 0x1e0),*(undefined1 *)(param_1 + 0x1d8));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1e0) + 0x210);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x1d0));
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1e0) + 0x1c0);
    (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0x1f0));
    (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0xe0))
              (*(longlong **)(param_1 + 0x1e0),
               (*(double *)(param_1 + 0xb0) - (double)*(int *)(*(longlong *)(param_1 + 0x1e8) + 8))
               - (double)*(int *)(*(longlong *)(param_1 + 0x1e8) + 0x10));
    (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0xd8))
              (*(longlong **)(param_1 + 0x1e0),
               (*(double *)(param_1 + 0xa8) - (double)*(int *)(*(longlong *)(param_1 + 0x1e8) + 0xc)
               ) - (double)*(int *)(*(longlong *)(param_1 + 0x1e8) + 0x14));
    (**(code **)(**(longlong **)(param_1 + 0x1e0) + 0xd0))
              (*(longlong **)(param_1 + 0x1e0),(double)*(int *)(*(longlong *)(param_1 + 0x1e8) + 8))
    ;
    (**(code **)(**(longlong **)(param_1 + 0x1e0) + 200))
              (*(longlong **)(param_1 + 0x1e0),
               (double)*(int *)(*(longlong *)(param_1 + 0x1e8) + 0xc));
    FUN_004aee30(*(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x1e0));
    FUN_004aec30(*(undefined8 *)(param_1 + 0x80),0,*(undefined8 *)(param_1 + 0x1e0));
  }
  return;
}

