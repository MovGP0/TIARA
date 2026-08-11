/* Ghidra address: 01879810 */
/* Ghidra symbol: FUN_01879810 */


void FUN_01879810(longlong param_1)

{
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
  if ((*(char *)(param_1 + 0x19) == '\0') || (*(int *)(param_1 + 0x48) == 0)) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_0046f180(&local_30);
    FUN_00461840(param_1 + 0x68,&local_30);
    FUN_0046f180(&local_48);
    FUN_00461840(param_1 + 0x30,&local_48);
    FUN_0046f180(&local_60);
    FUN_00461840(param_1 + 0x50,&local_60);
  }
  FUN_00417840(&local_60,&DAT_004013d8,3);
  return;
}

