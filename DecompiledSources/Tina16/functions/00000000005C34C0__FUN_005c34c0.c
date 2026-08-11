/* Ghidra address: 005c34c0 */
/* Ghidra symbol: FUN_005c34c0 */


bool FUN_005c34c0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_00417580(param_3,&DAT_005bc4e0);
  uVar1 = FUN_005c2410(param_1,param_2);
  iVar2 = FUN_005c2340(param_1,param_2,uVar1);
  if (-1 < iVar2) {
    FUN_00417c40(param_3,*(longlong *)(param_1 + 8) + 8 + (longlong)iVar2 * 0x38,&DAT_005bc4e0);
  }
  else {
    FUN_00417740(param_3,&DAT_005bc4e0);
    for (lVar3 = 6; lVar3 != 0; lVar3 = lVar3 + -1) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
  }
  return -1 < iVar2;
}

