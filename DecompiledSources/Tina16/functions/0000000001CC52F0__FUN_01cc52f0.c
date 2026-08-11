/* Ghidra address: 01cc52f0 */
/* Ghidra symbol: FUN_01cc52f0 */


void FUN_01cc52f0(longlong param_1,int param_2,undefined8 param_3,double param_4)

{
  int iVar1;
  longlong lVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 local_res18;
  double local_res20;
  double local_40 [5];
  
  local_res18 = param_3;
  local_res20 = param_4;
  lVar2 = FUN_01d347d0(*(longlong *)(param_1 + 8),
                       *(int *)(*(longlong *)(param_1 + 8) + 0x450) + param_2);
  FUN_01cc4120(param_1,&local_res18,8);
  local_res20 = local_res20 + *(double *)(lVar2 + 0x188);
  local_40[0] = local_res20;
  FUN_01cc1510(lVar2,0,local_res18);
  if (*(int *)(lVar2 + 0x2c) == 1) {
    *(double *)(lVar2 + 0x178) = local_res20;
    FUN_01cc1510(lVar2,1,local_res20);
    FUN_00c43b50(&local_res18,&local_res20);
    FUN_01cc1510(lVar2,2,local_res18);
    FUN_01cc1510(lVar2,3,local_res20);
  }
  else {
    *(double *)(lVar2 + 0x180) = local_res20 - *(double *)(lVar2 + 0x178);
    dVar3 = (double)FUN_0040c850(*(undefined8 *)(lVar2 + 0x180));
    uVar4 = FUN_0040c850(*(double *)(lVar2 + 0x180) + 6.2849306364315805);
    uVar5 = FUN_0040c850(*(double *)(lVar2 + 0x180) - 6.2849306364315805);
    dVar6 = (double)FUN_00b90650(uVar4,uVar5);
    if (dVar6 <= dVar3) {
      iVar1 = FUN_00c42630(*(undefined8 *)(lVar2 + 0x180));
      *(double *)(lVar2 + 0x188) = *(double *)(lVar2 + 0x188) - (double)iVar1 * 6.283185307179586;
      iVar1 = FUN_00c42630(*(undefined8 *)(lVar2 + 0x180));
      local_res20 = local_res20 - (double)iVar1 * 6.283185307179586;
      local_40[0] = local_res20;
    }
    *(double *)(lVar2 + 0x178) = local_res20;
    FUN_01cc1510(lVar2,1,local_res20);
    FUN_00c43b50(&local_res18,&local_res20);
    FUN_01cc1510(lVar2,2,local_res18);
    FUN_01cc1510(lVar2,3,local_res20);
  }
  FUN_01cc4120(param_1,local_40,8);
  return;
}

