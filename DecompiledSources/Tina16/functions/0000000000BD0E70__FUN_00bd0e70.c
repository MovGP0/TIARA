/* Ghidra address: 00bd0e70 */
/* Ghidra symbol: FUN_00bd0e70 */


void FUN_00bd0e70(longlong param_1,undefined1 param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5,undefined1 param_6)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_48;
  if (*(int *)(param_1 + 0x20) == 0) {
    local_10 = FUN_00410e60(&PTR_FUN_00bce150,1);
    *(undefined1 *)(local_10 + 8) = param_2;
    *(undefined1 *)(local_10 + 9) = param_6;
    *(undefined8 *)(local_10 + 0xc) = *param_3;
    *(undefined8 *)(local_10 + 0x14) = *param_4;
    FUN_00414ad0(local_10 + 0x20,param_5);
    if (*(int *)(param_1 + 8) == 0) {
      *(undefined4 *)(local_10 + 0x28) = *(undefined4 *)(param_1 + 0x28);
      if ((*(int *)(param_1 + 0xc) == 0) &&
         (*(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1, *(int *)(param_1 + 0x28) == 0)) {
        *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
      }
    }
    else {
      *(int *)(local_10 + 0x28) = *(int *)(param_1 + 8);
    }
    FUN_00bd1160(param_1,local_10);
  }
  return;
}

