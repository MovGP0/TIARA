/* Ghidra address: 016ba220 */
/* Ghidra symbol: FUN_016ba220 */


undefined1 * FUN_016ba220(longlong param_1,undefined1 *param_2,undefined8 *param_3,char param_4)

{
  byte bVar1;
  undefined8 local_60;
  undefined1 local_58;
  byte local_57;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_50 = 0;
  local_60 = 0;
  local_48 = *param_3;
  uStack_40 = param_3[1];
  uStack_38 = param_3[2];
  uStack_30 = param_3[3];
  *param_2 = 0;
  if (param_4 != '\0') {
    FUN_016b9db0(param_1);
  }
  if (*(char *)(param_1 + 0x9a0) != '\0') {
    while (bVar1 = *(byte *)(param_1 + 0x9a0),
          (*(byte *)((longlong)&local_48 + ((longlong)(ulonglong)bVar1 >> 3)) >>
           ((ulonglong)bVar1 & 7) & 1) != 0) {
      FUN_004154b0(&local_50,param_2,0);
      local_58 = 1;
      local_57 = bVar1;
      FUN_004154b0(&local_60,&local_58,0);
      FUN_004155b0(&local_50,local_60);
      FUN_00415560(param_2,local_50);
      FUN_016b9d20(param_1);
    }
    FUN_016b9d80(param_1);
  }
  FUN_004144d0(&local_60);
  FUN_004144d0(&local_50);
  return param_2;
}

