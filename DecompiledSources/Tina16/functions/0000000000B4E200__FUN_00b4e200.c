/* Ghidra address: 00b4e200 */
/* Ghidra symbol: FUN_00b4e200 */


void FUN_00b4e200(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  FUN_00411a80(param_1,param_2);
  iVar1 = FUN_00b1ae60();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_00b1ae70(*(undefined8 *)(param_1 + 0x18),iVar4);
      if (lVar2 != 0) {
        plVar3 = (longlong *)FUN_00b1ae70(*(undefined8 *)(param_1 + 0x18),iVar4);
        (**(code **)(*plVar3 + -0x20))(plVar3,1);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + -0x20))(*(longlong **)(param_1 + 0x18),1);
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + -0x20))(plVar3,1);
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

