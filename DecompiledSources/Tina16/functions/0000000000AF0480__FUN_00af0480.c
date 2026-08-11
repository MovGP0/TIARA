/* Ghidra address: 00af0480 */
/* Ghidra symbol: FUN_00af0480 */


void FUN_00af0480(longlong *param_1)

{
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong *local_60;
  code **local_58;
  undefined8 local_48;
  code *local_40;
  longlong *local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_88;
  local_48 = 0;
  local_10 = FUN_00ad03b0(&DAT_00acfb00,1,param_1[0x119]);
  *(undefined1 *)(local_10 + 0xf1) = 1;
  local_30 = *(undefined8 *)(*param_1 + 0x478);
  local_40 = FUN_00af9470;
  local_68 = &local_30;
  local_60 = param_1 + 0xbb;
  local_58 = &local_40;
  local_38 = param_1;
  local_28 = param_1;
  FUN_00ae5930(local_10,param_1[0x116],param_1 + 0xb9,param_1 + 0xe3);
  FUN_00ad3070(local_10,&local_48);
  FUN_00af0380(param_1,local_48,*(undefined8 *)(local_10 + 0x10),*(undefined8 *)(local_10 + 0x18));
  FUN_00410f20(local_10);
  FUN_00414480(&local_48);
  return;
}

