/* Ghidra address: 01be9480 */
/* Ghidra symbol: FUN_01be9480 */


void FUN_01be9480(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,int *param_7,undefined8 *param_8)

{
  longlong lVar1;
  undefined1 local_58 [8];
  int local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_40 = *param_8;
  uStack_38 = param_8[1];
  uStack_30 = param_8[2];
  lVar1 = *(longlong *)(param_1 + 0x680);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x90) < param_7[2])) {
    if (*(char *)(param_1 + 0x4c3) == '\0') {
      param_7[2] = *(int *)(lVar1 + 0x90) + -2;
    }
    else if (*(char *)(param_1 + 0x4c3) == '\x01') {
      FUN_0064d000(lVar1,local_58);
      *param_7 = local_50 + 2;
    }
  }
  FUN_01bd5660(param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_40);
  return;
}

