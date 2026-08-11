/* Ghidra address: 00db1fd0 */
/* Ghidra symbol: FUN_00db1fd0 */


undefined8 FUN_00db1fd0(longlong param_1,double param_2,double *param_3,longlong param_4)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double extraout_XMM0_Qa;
  
  dVar1 = param_2 - *(double *)(param_4 + 0x20);
  *param_3 = *(double *)(param_4 + 8) + *(double *)(param_4 + 0x10) * dVar1 +
             (*(double *)(param_4 + 0x18) / 2.0) * dVar1 * dVar1;
  if (*(char *)(param_1 + 0x32f) != '\0') {
    dVar1 = (double)FUN_0040c850();
    uVar2 = FUN_0040c850(param_2);
    uVar3 = FUN_0040c850(*(undefined8 *)(param_4 + 0x20));
    dVar4 = (double)FUN_00b90620(uVar2,uVar3);
    if (dVar1 < *(double *)(param_1 + 0x3c8) * dVar4 + *(double *)(param_1 + 0x3d0)) {
      dVar1 = (double)FUN_0040c850(*param_3 - *(double *)(param_4 + 8));
      uVar2 = FUN_0040c850(*param_3);
      uVar3 = FUN_0040c850(*(undefined8 *)(param_4 + 8));
      FUN_00b90620(uVar2,uVar3);
      if (dVar1 < *(double *)(param_1 + 0x3c8) * extraout_XMM0_Qa + *(double *)(param_1 + 0x3d8)) {
        return 1;
      }
    }
  }
  return 0;
}

