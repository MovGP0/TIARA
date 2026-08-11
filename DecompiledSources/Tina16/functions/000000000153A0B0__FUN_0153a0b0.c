/* Ghidra address: 0153a0b0 */
/* Ghidra symbol: FUN_0153a0b0 */


void FUN_0153a0b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  double local_38;
  double local_30;
  undefined8 local_28;
  double local_20;
  
  FUN_01539b90(param_1,&local_20,&local_28,&local_30,&local_38,&local_40,&local_41,&local_42,
               &local_43,&local_44);
  if (3 < *(int *)(param_2 + 0x10)) {
    lVar1 = FUN_00b94e60(param_2,0);
    local_41 = *(undefined1 *)(lVar1 + 0x10);
    lVar1 = FUN_00b94e60(param_2,1);
    local_20 = *(double *)(lVar1 + 8);
    lVar1 = FUN_00b94e60(param_2,1);
    local_43 = *(undefined1 *)(lVar1 + 0x10);
    lVar1 = FUN_00b94e60(param_2,2);
    local_44 = *(undefined1 *)(lVar1 + 0x10);
    lVar1 = FUN_00b94e60(param_2,3);
    local_30 = 1.0 / (*(double *)(lVar1 + 8) - local_20);
    lVar1 = FUN_00b94e60(param_2,2);
    local_38 = local_30 * (*(double *)(lVar1 + 8) - local_20);
    lVar1 = FUN_00b94e60(param_2,*(int *)(param_2 + 0x10) + -1);
    local_28 = *(undefined8 *)(lVar1 + 8);
    lVar1 = FUN_00b94e60(param_2,*(int *)(param_2 + 0x10) + -1);
    local_42 = *(undefined1 *)(lVar1 + 0x10);
  }
  FUN_01539d20(param_1,local_20,local_28,local_30,local_38,local_40,local_41,local_42,local_43,
               local_44);
  return;
}

