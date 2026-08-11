/* Ghidra address: 00db10f0 */
/* Ghidra symbol: FUN_00db10f0 */


undefined8 FUN_00db10f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  
  if (*(double *)(param_1 + 0x90) <= 1e-12) {
    return 0;
  }
  if (*(char *)(param_3 + 0x330) != '\0') {
    dVar3 = *(double *)
             (*(longlong *)(param_3 + 0x1b8) + (longlong)(*(int *)(param_1 + 0xf8) + 3) * 8);
    if ((1e+29 < *(double *)(param_1 + 0xb0) || *(double *)(param_1 + 0xb0) == 1e+29) ||
       (dVar1 = (double)FUN_00b90650(0,-*(double *)(param_1 + 0xb0) +
                                       *(double *)(param_1 + 0x30) * 10.0), dVar1 <= dVar3)) {
      dVar3 = *(double *)(param_1 + 0x38);
      uVar2 = FUN_00b90620(*(double *)(param_1 + 0x38) * 0.01 * *(double *)(param_3 + 0x730),
                           *(undefined8 *)(param_3 + 0x720));
    }
    else {
      dVar3 = -(*(double *)(param_1 + 0xb0) + *(double *)(param_1 + 0x88));
      uVar2 = FUN_00b90620(*(double *)(param_1 + 0x88) * 0.01 * *(double *)(param_3 + 0x730),
                           *(undefined8 *)(param_3 + 0x720));
    }
    uVar2 = FUN_016ee040(param_2,param_3,*(ushort *)(param_1 + 0x78) + 3,dVar3,uVar2);
    return uVar2;
  }
  return 0;
}

