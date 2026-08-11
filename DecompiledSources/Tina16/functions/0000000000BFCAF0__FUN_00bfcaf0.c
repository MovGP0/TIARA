/* Ghidra address: 00bfcaf0 */
/* Ghidra symbol: FUN_00bfcaf0 */


void FUN_00bfcaf0(longlong *param_1,undefined8 param_2,short *param_3)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_68;
  local_30 = 0;
  FUN_00bf3750(param_1);
  FUN_004b3260(param_1[0x9d]);
  local_20[0] = FUN_00bf2b30(param_1);
  local_28 = FUN_00bf2b90(param_1);
  cVar1 = FUN_00bf2c80(param_1);
  if (cVar1 != '\0') {
    FUN_00bfb570(auStack_68);
    (**(code **)(*param_1 + 0x2a8))(param_1,local_20);
  }
  if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
    FUN_00bfc9f0(auStack_68);
  }
  if (*(int *)((longlong)param_1 + 0x4cc) < 1) {
    FUN_00bfa9e0(param_1,1);
  }
  FUN_004b3390(param_1[0x9d]);
  FUN_00bf28a0(param_1);
  FUN_00414480(&local_30);
  return;
}

