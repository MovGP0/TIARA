/* Ghidra address: 00aa71d0 */
/* Ghidra symbol: FUN_00aa71d0 */


void FUN_00aa71d0(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined1 param_10,undefined1 param_11,undefined4 param_12,
                 undefined1 param_13,undefined4 param_14,undefined4 param_15)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  int iVar5;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00a5d410(*(undefined8 *)(param_1 + 0x280),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,param_11,param_12,param_13,param_14,param_15);
  iVar5 = 7;
  pdVar1 = (double *)PTR_DAT_02001b90;
  pdVar2 = (double *)PTR_DAT_02001908;
  pdVar3 = (double *)PTR_DAT_020031d0;
  pdVar4 = (double *)PTR_DAT_02002f58;
  do {
    *pdVar2 = (*pdVar1 * (double)param_4) / 12.0;
    *pdVar4 = (*pdVar3 * (double)param_4) / 12.0;
    pdVar4 = pdVar4 + 1;
    pdVar3 = pdVar3 + 1;
    pdVar2 = pdVar2 + 1;
    pdVar1 = pdVar1 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_009ec440(&local_10,param_3);
  FUN_00414ad0(param_1 + 0x170,local_10);
  *(undefined4 *)(param_1 + 0xac) = param_6;
  *(undefined4 *)(param_1 + 0xa4) = param_7;
  *(undefined4 *)(param_1 + 0xa8) = param_8;
  *(undefined1 *)(param_1 + 0x268) = param_10;
  FUN_00aa73c0(param_1,param_9);
  FUN_00414480(&local_10);
  return;
}

