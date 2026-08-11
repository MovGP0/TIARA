/* Ghidra address: 0067f770 */
/* Ghidra symbol: FUN_0067f770 */


void FUN_0067f770(longlong param_1,undefined8 param_2,int param_3,int param_4,char param_5)

{
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (param_5 == '\0') {
    if (param_3 < *(int *)(param_1 + 0x80)) {
      *(int *)(param_1 + 0x80) = param_3;
    }
    else if (*(int *)(param_1 + 0x88) < param_3) {
      *(int *)(param_1 + 0x88) = param_3;
    }
    if (param_4 < *(int *)(param_1 + 0x84)) {
      *(int *)(param_1 + 0x84) = param_4;
    }
    else if (*(int *)(param_1 + 0x8c) < param_4) {
      *(int *)(param_1 + 0x8c) = param_4;
    }
  }
  else {
    FUN_004238d0(&local_38,param_3,param_4,param_3,param_4);
    *(undefined8 *)(param_1 + 0x80) = local_38;
    *(undefined8 *)(param_1 + 0x88) = uStack_30;
  }
  return;
}

