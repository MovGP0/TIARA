/* Ghidra address: 01879a00 */
/* Ghidra symbol: FUN_01879a00 */


void FUN_01879a00(longlong param_1)

{
  char cVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  if ((*(char *)(param_1 + 0x28) != '\0') && (*(char *)(param_1 + 0x80) != '\0')) {
    *(undefined1 *)(param_1 + 0x80) = 0;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + *(int *)(param_1 + 0xe0);
    FUN_0046f180(&local_30);
    cVar1 = FUN_0046f320(param_1 + 0x68,&local_30);
    if (cVar1 == '\0') {
      FUN_0046f180(&local_48);
      cVar1 = FUN_0046f340(param_1 + 0xe8,&local_48);
      if (cVar1 != '\0') {
        if (*(char *)(param_1 + 8) == '\x02') {
          cVar1 = FUN_0046f360(param_1 + 0xe8,param_1 + 0x68);
          if (cVar1 != '\0') {
            FUN_00461840(param_1 + 0x68,param_1 + 0xe8);
          }
        }
        else if (*(char *)(param_1 + 8) == '\x03') {
          cVar1 = FUN_0046f3b0(param_1 + 0xe8,param_1 + 0x68);
          if (cVar1 != '\0') {
            FUN_00461840(param_1 + 0x68,param_1 + 0xe8);
          }
        }
        else {
          FUN_00461840(&local_60,param_1 + 0x68);
          FUN_0046f1c0(&local_60,param_1 + 0xe8);
          FUN_00461840(param_1 + 0x68,&local_60);
        }
      }
    }
    else {
      FUN_00461840(param_1 + 0x68,param_1 + 0xe8);
    }
  }
  FUN_00417840(&local_60,&DAT_004013d8,3);
  return;
}

