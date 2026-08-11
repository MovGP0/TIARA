/* Ghidra address: 00d9cce0 */
/* Ghidra symbol: FUN_00d9cce0 */


undefined1
FUN_00d9cce0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
            ulonglong *param_9)

{
  undefined4 uVar1;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  longlong *local_60;
  undefined1 local_51;
  undefined8 local_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  longlong local_30;
  
  local_70 = auStack_b8;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  local_50 = *param_9;
  uStack_48 = param_9[1];
  uStack_40 = param_9[2];
  uStack_38 = param_9[3];
  local_51 = 1;
  local_60 = *(longlong **)(param_2 + 0x180);
  local_30 = FUN_00d8ecd0(param_3);
  if ((local_50 & 1) != 0) {
    FUN_005fc860(*(undefined8 *)(*(longlong *)(local_30 + 8) + 0x70),local_50._4_4_);
  }
  uVar1 = FUN_0060f550(param_8);
  uVar1 = FUN_0060f500(uVar1);
  FUN_00d83080(&local_90,param_7,param_6,uVar1);
  (**(code **)(*local_60 + 0x78))(local_60,*(undefined8 *)(local_30 + 8),&local_90,0);
  FUN_00410f20(local_30);
  FUN_00417740(&local_90,&DAT_00d623c8);
  return local_51;
}

