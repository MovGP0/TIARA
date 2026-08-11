/* Ghidra address: 018ab430 */
/* Ghidra symbol: FUN_018ab430 */


void FUN_018ab430(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)((longlong)param_1 + 0x571) == '\0') {
    iVar4 = 0;
    uVar1 = FUN_006d6380(param_1[0xad]);
    FUN_004b3260(uVar1);
    while( true ) {
      iVar3 = FUN_004b2060(param_1[0xaf]);
      if (iVar3 <= iVar4) break;
      lVar2 = FUN_018b0ad0(param_1[0xaf],iVar4);
      if (*(longlong *)(lVar2 + 0x30) == param_2) {
        (**(code **)(*param_1 + 0x2f0))(param_1,iVar4);
      }
      else {
        iVar4 = iVar4 + 1;
      }
    }
    iVar4 = FUN_004b2060(param_1[0xaf]);
    if (iVar4 == 0) {
      *(undefined1 *)(param_1 + 0xae) = 0;
    }
    uVar1 = FUN_006d6380(param_1[0xad]);
    FUN_004b3390(uVar1);
  }
  return;
}

