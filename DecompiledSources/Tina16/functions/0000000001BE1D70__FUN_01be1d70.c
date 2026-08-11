/* Ghidra address: 01be1d70 */
/* Ghidra symbol: FUN_01be1d70 */


longlong * FUN_01be1d70(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  plVar3 = (longlong *)FUN_01bffb60(param_1,param_2);
  FUN_0064dfb0(plVar3,0);
  FUN_01bfe480(param_2,1);
  cVar1 = (**(code **)(*plVar3 + 0x238))(plVar3);
  if (cVar1 != '\0') {
    return plVar3;
  }
  cVar1 = (**(code **)(*plVar3 + 0xf0))(plVar3);
  if (cVar1 != '\0') {
    lVar4 = FUN_01bfd980(param_2);
    if (lVar4 != 0) {
LAB_01be1de9:
      uVar2 = (undefined4)CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
      goto LAB_01be1deb;
    }
    cVar1 = FUN_01bfaa20(param_2);
    if (cVar1 != '\0') {
      uVar5 = FUN_01bfaa70(param_2);
      lVar4 = FUN_01bfbe40(uVar5);
      if (0 < (int)lVar4) goto LAB_01be1de9;
    }
  }
  uVar2 = 0;
LAB_01be1deb:
  (**(code **)(*plVar3 + 0x128))(plVar3,uVar2);
  return plVar3;
}

