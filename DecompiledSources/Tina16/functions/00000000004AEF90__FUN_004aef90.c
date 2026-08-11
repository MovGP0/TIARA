/* Ghidra address: 004aef90 */
/* Ghidra symbol: FUN_004aef90 */


void FUN_004aef90(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 0) {
    FUN_004ae960(*param_1,PTR_DAT_02002ff0,(longlong)param_2);
  }
  if (param_2 != (int)param_1[2]) {
    if (*(int *)((longlong)param_1 + 0x14) < param_2) {
      FUN_004aef40(param_1,param_2);
    }
    iVar2 = (int)param_1[2];
    if (iVar2 < param_2) {
      FUN_0040d200(param_1[1] + (longlong)iVar2 * 8,(longlong)((param_2 - iVar2) * 8),0);
    }
    else if (((undefined **)*param_1 != &PTR_FUN_00472dd0) && (iVar2 = iVar2 + -1, param_2 <= iVar2)
            ) {
      iVar3 = (param_2 - iVar2) + -1;
      do {
        *(int *)(param_1 + 2) = (int)param_1[2] + -1;
        lVar1 = *(longlong *)(param_1[1] + (longlong)iVar2 * 8);
        if (lVar1 != 0) {
          (**(code **)(*param_1 + 8))(param_1,lVar1,2);
        }
        iVar2 = iVar2 + -1;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0);
    }
    *(int *)(param_1 + 2) = param_2;
  }
  return;
}

