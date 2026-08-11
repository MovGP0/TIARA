/* Ghidra address: 014386d0 */
/* Ghidra symbol: FUN_014386d0 */


void FUN_014386d0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x4d8));
  *(undefined8 *)(param_1 + 0xa3d) = uVar3;
  uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x4e0));
  *(undefined8 *)(param_1 + 0xa45) = uVar3;
  uVar2 = FUN_00f04d50(*(undefined8 *)(param_1 + 0x4e8));
  *(undefined2 *)(param_1 + 0xa4d) = uVar2;
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x4f0) + 0x4a8);
  *(char *)(param_1 + 0xa4f) = cVar1;
  if (cVar1 != '\x02') {
    if ((*(char *)(param_1 + 0xa4f) == '\0') &&
       (*(double *)(param_1 + 0xa3d) == *(double *)(param_1 + 0xa45))) {
      uVar3 = FUN_00b89270();
      FUN_00b8e520(uVar3,local_20,0x134);
      FUN_01438570(param_1,local_20[0]);
    }
    if ((*(char *)(param_1 + 0xa4f) == '\x01') &&
       (((*(double *)(param_1 + 0xa3d) <= 0.0 || (*(double *)(param_1 + 0xa45) <= 0.0)) ||
        (*(double *)(param_1 + 0xa3d) == *(double *)(param_1 + 0xa45))))) {
      uVar3 = FUN_00b89270();
      FUN_00b8e520(uVar3,&local_28,0x134);
      FUN_01438570(param_1,local_28);
    }
  }
  *(double *)(param_1 + 0x5bd) = (double)(int)*(short *)(param_1 + 0xa4d);
  FUN_00417c40(param_2,param_1 + 0x500,&DAT_01d0d0b8);
  FUN_00414560(&local_28,2);
  return;
}

