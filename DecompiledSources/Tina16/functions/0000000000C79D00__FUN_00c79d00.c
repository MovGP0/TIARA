/* Ghidra address: 00c79d00 */
/* Ghidra symbol: FUN_00c79d00 */


void FUN_00c79d00(longlong param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 local_30 [3];
  
  local_30[0] = 0;
  if ((*param_2 == 0x1004) && (*(char *)(param_1 + 0x3db) != '\0')) {
    *(undefined1 *)(param_1 + 0x3db) = 0;
    thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0x1d8),0xbb9,0,0);
  }
  if ((*param_2 == 0x1054) && (*(char *)(param_1 + 0x3da) != '\0')) {
    thunk_FUN_0413e052(*(undefined8 *)(param_1 + 0x1d8),0xbb9,0,0);
  }
  if (*param_2 == 0xbb9) {
    FUN_00c79790(param_1,local_30);
    FUN_00c6f5f0(*(undefined8 *)(param_1 + 0x1c8),*(undefined8 *)(param_1 + 0x1d8),local_30[0]);
  }
  else if (*param_2 == 3000) {
    FUN_00c789c0(param_1);
  }
  else if (*param_2 == 2) {
    thunk_FUN_03c9d277(*(undefined8 *)(param_1 + 0x1d8),0xfffffffc,*(undefined8 *)(param_1 + 0x260))
    ;
    uVar1 = thunk_FUN_03a65bf1(*(undefined8 *)(param_1 + 0x260),*(undefined8 *)(param_1 + 0x1d8),
                               *param_2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar1;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
  }
  else if ((*param_2 == 0x7d) && (*(char *)(param_1 + 0x3d8) == '\0')) {
    uVar1 = thunk_FUN_03a65bf1(*(undefined8 *)(param_1 + 0x260),*(undefined8 *)(param_1 + 0x1d8),
                               0x7d,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar1;
    FUN_00c76c10(param_1);
  }
  else {
    uVar1 = thunk_FUN_03a65bf1(*(undefined8 *)(param_1 + 0x260),*(undefined8 *)(param_1 + 0x1d8),
                               *param_2,*(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar1;
  }
  FUN_00414480(local_30);
  return;
}

