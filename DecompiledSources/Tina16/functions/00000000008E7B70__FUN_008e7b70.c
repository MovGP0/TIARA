/* Ghidra address: 008e7b70 */
/* Ghidra symbol: FUN_008e7b70 */


longlong *
FUN_008e7b70(undefined8 param_1,longlong *param_2,undefined2 *param_3,int param_4,int *param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *local_40;
  int local_2c;
  
  if ((param_3 == (undefined2 *)0x0) || (param_4 < 1)) {
    *param_5 = 0;
    FUN_004144d0(param_2);
  }
  else {
    iVar2 = param_4 * 3;
    FUN_00415d10(param_2,iVar2,0);
    lVar1 = *param_2;
    iVar3 = 0;
    iVar4 = param_4;
    local_40 = param_3;
    if (0 < param_4) {
      do {
        FUN_008e8210(param_1,*local_40,lVar1,iVar2,&local_2c);
        local_40 = local_40 + 1;
        lVar1 = lVar1 + local_2c;
        iVar2 = iVar2 - local_2c;
        iVar3 = iVar3 + local_2c;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_00415d10(param_2,iVar3,0);
    *param_5 = param_4;
  }
  return param_2;
}

