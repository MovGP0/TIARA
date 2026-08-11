/* Ghidra address: 008e6bd0 */
/* Ghidra symbol: FUN_008e6bd0 */


void FUN_008e6bd0(longlong *param_1,longlong param_2,int param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_30;
  int local_2c;
  
  if ((param_2 == 0) || (param_3 < 1)) {
    FUN_00414520(param_4);
  }
  else {
    FUN_00416660(param_4,param_3);
    uVar3 = 0;
    iVar2 = param_3;
    while( true ) {
      (**(code **)(*param_1 + 0x30))
                (param_1,param_2,iVar2,*param_4 + (longlong)(int)uVar3 * 2,param_3 * 2,&local_2c,
                 &local_30);
      iVar2 = iVar2 - local_2c;
      param_2 = param_2 + local_2c;
      uVar3 = uVar3 + local_30;
      if ((local_30 < param_3) || (iVar2 < 1)) break;
      FUN_00416660(param_4,uVar3 + param_3);
    }
    uVar1 = 0;
    if (*param_4 != 0) {
      uVar1 = *(uint *)(*param_4 + -4) >> 1;
    }
    if (uVar1 != uVar3) {
      FUN_00416660(param_4,uVar3);
    }
  }
  return;
}

