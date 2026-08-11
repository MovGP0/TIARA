/* Ghidra address: 00db1ac0 */
/* Ghidra symbol: FUN_00db1ac0 */


char FUN_00db1ac0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                 double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char local_99 [121];
  
  local_99[0] = '\0';
  *param_5 = 1.0;
  dVar6 = *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0xfc) * 8) -
          *(double *)(*(longlong *)(param_3 + 0x118) + (longlong)*(int *)(param_1 + 0x100) * 8);
  dVar7 = *(double *)(*(longlong *)(param_3 + 0x128) + (longlong)*(int *)(param_1 + 0xfc) * 8) -
          *(double *)(*(longlong *)(param_3 + 0x128) + (longlong)*(int *)(param_1 + 0x100) * 8);
  dVar4 = *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 3) * 8)
  ;
  dVar8 = dVar6 - dVar7;
  dVar9 = *(double *)(param_1 + 8) + *(double *)(param_1 + 0x10) * dVar8;
  dVar10 = *(double *)(param_3 + 0x3c0) *
           *(double *)
            (*(longlong *)(param_3 + 0x180) + (longlong)(*(int *)(param_1 + 0xf8) + 5) * 8);
  dVar2 = (double)FUN_0040c850(dVar9);
  if (dVar10 < dVar2) {
    dVar10 = dVar2;
  }
  dVar2 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 8));
  if (dVar10 < dVar2) {
    dVar10 = dVar2;
  }
  dVar2 = *(double *)(param_3 + 0x3c8);
  dVar1 = *(double *)(param_3 + 0x3d8);
  dVar3 = (double)FUN_0040c850(dVar7);
  dVar3 = *(double *)(param_3 + 0x3c8) * dVar3 + *(double *)(param_3 + 0x3d0);
  dVar9 = (double)FUN_0040c850(dVar9 - *(double *)(param_1 + 8));
  if (dVar2 * dVar10 + dVar1 < dVar9) {
    FUN_016e9f80(param_2,param_3,1,10);
    if (*(char *)(param_3 + 0x329) != '\0') {
      if (((1e+29 < *(double *)(param_1 + 0xb0) || *(double *)(param_1 + 0xb0) == 1e+29) ||
          (0.0 <= dVar6)) ||
         (-*(double *)(param_1 + 0xb0) + *(double *)(param_1 + 0x30) * 10.0 <= dVar6)) {
        dVar4 = (double)FUN_00c42ff0(dVar6,dVar4,*(undefined8 *)(param_1 + 0x30),
                                     *(undefined8 *)(param_1 + 0x38),local_99);
      }
      else {
        dVar4 = (double)FUN_00c42ff0(-(dVar6 + *(double *)(param_1 + 0xb0)),
                                     -(dVar4 + *(double *)(param_1 + 0xb0)),
                                     *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x88)
                                     ,local_99);
        dVar4 = -(dVar4 + *(double *)(param_1 + 0xb0));
      }
      *(double *)(*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 6) * 8) =
           dVar4;
      if (local_99[0] != '\0') {
        FUN_016e9f80(param_2,param_3,local_99[0],100);
        if (dVar3 < dVar8) {
          uVar5 = FUN_0040c850(dVar4 - dVar7);
          dVar4 = (double)FUN_00b90620(uVar5,dVar3);
          *param_5 = dVar4 / dVar8;
        }
      }
    }
  }
  return local_99[0];
}

