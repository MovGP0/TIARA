/* Ghidra address: 013966f0 */
/* Ghidra symbol: FUN_013966f0 */


undefined1 FUN_013966f0(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_28;
  undefined1 local_9;
  
  local_30 = auStack_98;
  local_38 = 0;
  local_9 = 0;
  FUN_015fca00(&local_38,0,0);
  local_78 = 1;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 1;
  local_48 = local_38;
  local_28 = FUN_0138de60(&PTR_FUN_0138d958,1,param_1,8);
  FUN_013908e0(0,0,local_28);
  FUN_01af2a70(*(undefined8 *)(local_28 + 0xf10),FUN_01390b40);
  lVar1 = *(longlong *)(local_28 + 0xf10);
  *(undefined8 *)(lVar1 + 0x18) = 0x4059000000000000;
  FUN_01af29b0(lVar1,2);
  FUN_01af29d0(*(undefined8 *)(local_28 + 0xf10),0);
  *(undefined1 *)(local_28 + 0x13b8) = 0;
  *(undefined4 *)(local_28 + 0x498) = 0;
  *(undefined1 *)(*(longlong *)(local_28 + 0x110) + 0xf5) = 0;
  if ((*PTR_DAT_02002b78 != '\0') && (*PTR_DAT_020052b8 == '\0')) {
    FUN_019ad890(*(undefined8 *)(local_28 + 0xa0),0);
  }
  FUN_00414480(&local_38);
  return local_9;
}

