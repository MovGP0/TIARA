/* Ghidra address: 01c26740 */
/* Ghidra symbol: FUN_01c26740 */


void FUN_01c26740(longlong *param_1,undefined8 param_2,undefined2 param_3,int param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  FUN_00650ea0(param_1,param_2,param_3,param_4,param_5);
  *(undefined1 *)(param_1 + 0xb4) = 0;
  lVar1 = param_1[0xa8];
  if ((lVar1 != 0) &&
     (iVar2 = (int)param_1[0xaa] - param_4, iVar3 = *(int *)((longlong)param_1 + 0x554) - param_5,
     0x10 < iVar2 * iVar2 + iVar3 * iVar3)) {
    if ((char)param_1[0xb9] == '\0') {
      if (*(longlong *)(lVar1 + 0x10) == 0) {
        FUN_01c23570(param_1,lVar1,param_1[0xab]);
      }
      else {
        FUN_01c23570(param_1,lVar1,*(longlong *)(lVar1 + 0x10));
      }
    }
    else {
      FUN_01c23570(param_1,lVar1,*(undefined8 *)(lVar1 + 0x10));
    }
    param_1[0xa8] = 0;
  }
  *(undefined1 *)(param_1 + 0xb0) = 0;
  (**(code **)(*param_1 + 0x260))(param_1);
  FUN_01c27100(param_1,param_4,param_5);
  return;
}

