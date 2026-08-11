/* Ghidra address: 0074b490 */
/* Ghidra symbol: FUN_0074b490 */


void FUN_0074b490(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if (*(char *)(param_1 + 0x4b0) == '\0') {
    FUN_0065b830(param_1);
    if (param_2 < -1) {
      param_2 = -1;
    }
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x498) + 0x10);
    if (iVar1 <= param_2) {
      param_2 = iVar1 + -1;
    }
    iVar1 = *(int *)(param_1 + 0x4a8);
    if (iVar1 != param_2) {
      if (-1 < iVar1) {
        plVar2 = (longlong *)FUN_004aeac0(*(longlong *)(param_1 + 0x498),iVar1);
        (**(code **)(*plVar2 + 0x268))(plVar2,0);
      }
      *(int *)(param_1 + 0x4a8) = param_2;
      if (-1 < param_2) {
        plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x498),param_2);
        (**(code **)(*plVar2 + 0x268))(plVar2,1);
      }
    }
  }
  else {
    *(int *)(param_1 + 0x4a8) = param_2;
  }
  return;
}

