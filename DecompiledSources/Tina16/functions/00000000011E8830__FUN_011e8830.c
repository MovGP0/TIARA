/* Ghidra address: 011e8830 */
/* Ghidra symbol: FUN_011e8830 */


void FUN_011e8830(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,
                 longlong *param_6)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int local_4c;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  param_4 = param_4 * 2;
  local_4c = 0;
  if (-1 < param_4 + -1) {
    do {
      iVar4 = param_5 * local_4c;
      iVar1 = param_2 + iVar4;
      (**(code **)(*param_6 + 0xa0))(param_6,iVar1,param_3,iVar1 + 6,param_3 + 6);
      lVar3 = (longlong)(local_4c / 2 + 1);
      iVar2 = 0;
      if (*(longlong *)(PTR_DAT_020013a0 + lVar3 * 8 + -8) != 0) {
        iVar2 = *(int *)(*(longlong *)(PTR_DAT_020013a0 + lVar3 * 8 + -8) + -4);
      }
      if (iVar2 < 2) {
        FUN_00416780(&local_40,
                     **(undefined2 **)(PTR_DAT_020013a0 + (longlong)(local_4c / 2 + 1) * 8 + -8));
        (**(code **)(*param_6 + 0x120))
                  (param_6,iVar1,param_3 + *(int *)PTR_DAT_020012c0 + -0xc,local_40);
        iVar2 = 5;
      }
      else {
        FUN_00416780(&local_30,
                     **(undefined2 **)(PTR_DAT_020013a0 + (longlong)(local_4c / 2 + 1) * 8 + -8));
        (**(code **)(*param_6 + 0x120))
                  (param_6,iVar1,param_3 + *(int *)PTR_DAT_020012c0 + -0x11,local_30);
        FUN_00416780(&local_38,*(undefined2 *)(*(longlong *)(PTR_DAT_020013a0 + lVar3 * 8 + -8) + 2)
                    );
        (**(code **)(*param_6 + 0x120))
                  (param_6,iVar1,param_3 + *(int *)PTR_DAT_020012c0 + -5,local_38);
        iVar2 = 0;
      }
      if (local_4c % 2 == 1) {
        FUN_005fd4e0(param_6[0xf],0);
        iVar2 = param_3 + iVar2 + -0x1e;
        (**(code **)(*param_6 + 200))(param_6,param_2 + iVar4 + 1,iVar2);
        (**(code **)(*param_6 + 0xc0))(param_6,param_2 + iVar4 + 6,iVar2);
        FUN_005fd4e0(param_6[0xf],0xff);
      }
      local_4c = local_4c + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  FUN_00414560(&local_40,3);
  return;
}

