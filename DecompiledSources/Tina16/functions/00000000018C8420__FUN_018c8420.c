/* Ghidra address: 018c8420 */
/* Ghidra symbol: FUN_018c8420 */


void FUN_018c8420(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
                 ulonglong param_5)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 *local_40;
  longlong local_30;
  undefined4 local_24;
  int local_20;
  char local_19;
  
  local_40 = auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_24 = 0;
  FUN_018c80c0(param_1,param_2,param_3);
  iVar2 = *(int *)(*(longlong *)(param_3 + 0x208) + 0x10);
  local_20 = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_30 = FUN_004aeac0(*(undefined8 *)(param_3 + 0x208),local_20);
      FUN_00414ad0(*(longlong *)(param_1 + 0x40) + 0x158,*(undefined8 *)(local_30 + 0x10));
      FUN_01970cf0(*(undefined8 *)(param_1 + 0x40),&local_58,*(undefined8 *)(local_30 + 0x240),0);
      cVar1 = FUN_0046f340(&local_58,local_30 + 600);
      if (cVar1 != '\0') {
        FUN_019694e0(param_2,*(undefined4 *)(param_2 + 0x250));
        local_19 = '\x01';
        (**(code **)(**(longlong **)(param_2 + 600) + 0x308))(*(longlong **)(param_2 + 600));
        local_68 = param_5;
        local_60 = 0;
        FUN_018c8690(param_1,param_2,param_4,&local_24);
        FUN_018c7fc0(param_1,param_3,local_20,param_2);
        if (local_19 != '\0') {
          (**(code **)(**(longlong **)(param_2 + 600) + 0x300))(*(longlong **)(param_2 + 600));
        }
        local_68 = local_68 & 0xffffffffffffff00;
        FUN_018c7d80(param_1,param_2,param_3,local_20);
        *(undefined4 *)(param_2 + 0x228) = 1;
        FUN_018c7b00(param_1,param_2);
        break;
      }
      local_20 = local_20 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00460ba0(&local_58);
  return;
}

