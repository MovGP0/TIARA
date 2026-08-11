/* Ghidra address: 01113f50 */
/* Ghidra symbol: FUN_01113f50 */


void FUN_01113f50(longlong param_1)

{
  undefined4 uVar1;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [24];
  undefined1 local_38 [8];
  int local_30;
  undefined4 local_2c;
  
  *(undefined4 *)(param_1 + 0x618) = 0x102;
  local_2c = 8;
  thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x80b,0x102,local_38);
  *(char *)(param_1 + 0x613) = (char)local_30;
  if ((char)local_30 != '\0') {
    *(byte *)(param_1 + 0x612) = *(byte *)(param_1 + 0x612) | 4;
  }
  local_2c = 1;
  thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x80b,(longlong)*(int *)(param_1 + 0x618),
                     local_38);
  *(char *)(param_1 + 0x616) = (char)local_30;
  if ((char)local_30 != '\0') {
    *(byte *)(param_1 + 0x612) = *(byte *)(param_1 + 0x612) | 8;
  }
  local_2c = 7;
  thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x80b,(longlong)*(int *)(param_1 + 0x618),
                     local_38);
  *(char *)(param_1 + 0x615) = (char)local_30;
  if ((char)local_30 != '\0') {
    *(byte *)(param_1 + 0x612) = *(byte *)(param_1 + 0x612) | 2;
  }
  local_2c = 3;
  thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x80b,(longlong)*(int *)(param_1 + 0x618),
                     local_38);
  *(char *)(param_1 + 0x617) = (char)local_30;
  if ((char)local_30 != '\0') {
    *(byte *)(param_1 + 0x612) = *(byte *)(param_1 + 0x612) | 0x10;
  }
  local_2c = 4;
  thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x80b,(longlong)*(int *)(param_1 + 0x618),
                     local_38);
  if ((((local_30 == 0x207) || (local_30 == 0x208)) || (local_30 == 0x203)) || (local_30 == 0x201))
  {
    *(undefined1 *)(param_1 + 0x614) = 1;
  }
  if (*(char *)(param_1 + 0x614) != '\0') {
    *(byte *)(param_1 + 0x612) = *(byte *)(param_1 + 0x612) | 1;
  }
  *(undefined4 *)(param_1 + 0x618) = 0x20000;
  uVar1 = thunk_FUN_0418b35e(*(undefined2 *)(param_1 + 0x622),0x843,0x20000,local_50);
  *(undefined4 *)(param_1 + 0x634) = uVar1;
  local_58 = (int)local_50._16_8_;
  local_60 = (int)local_50._8_8_;
  *(int *)(param_1 + 0x648) = local_58 - local_60;
  local_54 = SUB84(local_50._16_8_,4);
  local_5c = SUB84(local_50._8_8_,4);
  *(int *)(param_1 + 0x64c) = local_54 - local_5c;
  return;
}

