/* Ghidra address: 01453850 */
/* Ghidra symbol: FUN_01453850 */


void FUN_01453850(longlong param_1,longlong param_2)

{
  double *pdVar1;
  int iVar2;
  double *pdVar3;
  longlong lVar4;
  double *pdVar5;
  longlong lVar6;
  double dVar7;
  double *local_98;
  double *local_90;
  longlong local_88;
  longlong local_80;
  double *local_78;
  longlong local_70;
  undefined1 local_68 [16];
  double local_58 [5];
  
  dVar7 = *(double *)(param_1 + 0x3660) + *(double *)(param_1 + 0x3668) +
          *(double *)(param_1 + 0x3670) + *(double *)(param_1 + 0x3678) +
          *(double *)(param_1 + 0x3680) + *(double *)(param_1 + 0x3688);
  iVar2 = FUN_0040c770(*(undefined8 *)(param_2 + 0xd8));
  if (0 < iVar2) {
    local_90 = (double *)(param_1 + 0x1f90);
    local_88 = param_1 + 0x2210;
    local_80 = param_1 + 0x2490;
    local_78 = (double *)(param_1 + 0x1a90);
    local_70 = param_1 + 0x1d10;
    pdVar3 = (double *)(param_1 + 0x1590);
    lVar4 = param_1 + 0x1810;
    pdVar5 = (double *)(param_1 + 0x1090);
    lVar6 = param_1 + 0x1310;
    pdVar1 = (double *)PTR_DAT_020053f0;
    do {
      local_98 = pdVar1 + 2;
      if (*(double *)(param_1 + 0x3660) == 0.0) {
        *local_90 = -*(double *)(param_1 + 0x3650) * *local_98;
        local_90[1] = -*(double *)(param_1 + 0x3650) * pdVar1[3];
        FUN_01449400(local_88,0,0);
      }
      else {
        FUN_01449400(local_58,0x3ff0000000000000,0);
        FUN_00c44500(local_58,local_80,local_90);
        *local_90 = (*(double *)(param_1 + 0x3650) * *local_90) / *(double *)(param_1 + 0x3660);
        local_90[1] = (*(double *)(param_1 + 0x3650) * local_90[1]) / *(double *)(param_1 + 0x3660);
        FUN_01449400(local_58,*local_98,pdVar1[3]);
        FUN_01449400(local_68,dVar7 - *(double *)(param_1 + 0x3660),0);
        FUN_01449560(local_58,local_68,local_58,param_2);
        FUN_014494b0(local_58,local_58,param_2);
        local_58[0] = local_58[0] - 1.0;
        FUN_01449400(local_68,*(double *)(param_1 + 0x3650) / *(double *)(param_1 + 0x3660),0);
        FUN_01449560(local_58,local_68,local_88,param_2);
      }
      if (*(double *)(param_1 + 0x3670) == 0.0) {
        *local_78 = *(double *)(param_1 + 0x3650) * *local_98;
        local_78[1] = *(double *)(param_1 + 0x3650) * pdVar1[3];
        FUN_01449400(local_70,0,0);
      }
      else {
        FUN_01449400(local_58,0xbff0000000000000,0);
        FUN_00c444b0(local_58,local_80 + 0x20,local_78);
        *local_78 = (*(double *)(param_1 + 0x3650) * *local_78) / *(double *)(param_1 + 0x3670);
        local_78[1] = (*(double *)(param_1 + 0x3650) * local_78[1]) / *(double *)(param_1 + 0x3670);
        FUN_01449400(local_58,*local_98,pdVar1[3]);
        FUN_01449400(local_68,dVar7 - *(double *)(param_1 + 0x3670),0);
        FUN_01449560(local_58,local_68,local_58,param_2);
        FUN_014494b0(local_58,local_58,param_2);
        local_58[0] = local_58[0] - 1.0;
        FUN_01449400(local_68,-*(double *)(param_1 + 0x3650) / *(double *)(param_1 + 0x3670),0);
        FUN_01449560(local_58,local_68,local_70,param_2);
      }
      if (*(double *)(param_1 + 0x3678) == 0.0) {
        *pdVar3 = -*(double *)(param_1 + 0x3658) * *local_98;
        pdVar3[1] = -*(double *)(param_1 + 0x3658) * pdVar1[3];
        FUN_01449400(lVar4,0,0);
      }
      else {
        FUN_01449400(local_58,0x3ff0000000000000,0);
        FUN_00c44500(local_58,local_80 + 0x30,pdVar3);
        *pdVar3 = (*(double *)(param_1 + 0x3658) * *pdVar3) / *(double *)(param_1 + 0x3678);
        pdVar3[1] = (*(double *)(param_1 + 0x3658) * pdVar3[1]) / *(double *)(param_1 + 0x3678);
        FUN_01449400(local_58,*local_98,pdVar1[3]);
        FUN_01449400(local_68,dVar7 - *(double *)(param_1 + 0x3678),0);
        FUN_01449560(local_58,local_68,local_58,param_2);
        FUN_014494b0(local_58,local_58,param_2);
        local_58[0] = local_58[0] - 1.0;
        FUN_01449400(local_68,*(double *)(param_1 + 0x3658) / *(double *)(param_1 + 0x3678),0);
        FUN_01449560(local_58,local_68,lVar4,param_2);
      }
      if (*(double *)(param_1 + 0x3688) == 0.0) {
        *pdVar5 = *(double *)(param_1 + 0x3658) * *local_98;
        pdVar5[1] = *(double *)(param_1 + 0x3658) * pdVar1[3];
        FUN_01449400(lVar6,0,0);
      }
      else {
        FUN_01449400(local_58,0xbff0000000000000,0);
        FUN_00c444b0(local_58,local_80 + 0x50,pdVar5);
        *pdVar5 = (*(double *)(param_1 + 0x3658) * *pdVar5) / *(double *)(param_1 + 0x3688);
        pdVar5[1] = (*(double *)(param_1 + 0x3658) * pdVar5[1]) / *(double *)(param_1 + 0x3688);
        FUN_01449400(local_58,*local_98,pdVar1[3]);
        FUN_01449400(local_68,dVar7 - *(double *)(param_1 + 0x3688),0);
        FUN_01449560(local_58,local_68,local_58,param_2);
        FUN_014494b0(local_58,local_58,param_2);
        local_58[0] = local_58[0] - 1.0;
        FUN_01449400(local_68,-*(double *)(param_1 + 0x3658) / *(double *)(param_1 + 0x3688),0);
        FUN_01449560(local_58,local_68,lVar6,param_2);
      }
      lVar6 = lVar6 + 0x10;
      pdVar5 = pdVar5 + 2;
      lVar4 = lVar4 + 0x10;
      pdVar3 = pdVar3 + 2;
      local_70 = local_70 + 0x10;
      local_78 = local_78 + 2;
      local_80 = local_80 + 0x60;
      local_88 = local_88 + 0x10;
      local_90 = local_90 + 2;
      iVar2 = iVar2 + -1;
      pdVar1 = local_98;
    } while (iVar2 != 0);
  }
  return;
}

