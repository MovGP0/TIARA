/* Ghidra address: 01beafb0 */
/* Ghidra symbol: FUN_01beafb0 */


void FUN_01beafb0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  
  if (param_1[100] != 0) {
    lVar2 = FUN_01bfd980(param_1[100]);
    if (lVar2 != 0) {
      (**(code **)(*param_1 + 600))(param_1,1);
      plVar3 = (longlong *)FUN_01c07120(param_1);
      cVar1 = (**(code **)(*plVar3 + 0x2c8))(plVar3);
      if (cVar1 == '\0') {
        FUN_01c069b0(param_1);
      }
      goto LAB_01beb00a;
    }
  }
  FUN_01bd3440(param_1);
LAB_01beb00a:
  if ((*(char *)((longlong)param_1 + 0x369) != '\0') && (param_1[100] != 0)) {
    lVar2 = FUN_01beb450(param_1);
    if ((*(char *)(lVar2 + 0x592) == '\0') ||
       ((*(char *)((longlong)param_1 + 0x344) != '\0' &&
        ((*(char *)((longlong)param_1 + 0x344) == '\0' || (*(longlong *)(param_1[100] + 0x30) != 0))
        )))) {
      if ((char)param_1[0x6d] == '\0') {
        uVar4 = FUN_01c07120(param_1);
        uVar4 = FUN_0065b870(uVar4);
        thunk_FUN_0413e052(uVar4,0xb403,0,param_1);
      }
      else {
        *(undefined1 *)(param_1 + 0x6d) = 0;
        plVar3 = (longlong *)FUN_01beb450(param_1);
        (**(code **)(*plVar3 + 0x408))(plVar3);
      }
    }
    else {
      plVar3 = (longlong *)FUN_01beb450(param_1);
      (**(code **)(*plVar3 + 0x3a8))(plVar3,param_1);
    }
  }
  return;
}

