/* Ghidra address: 0097f000 */
/* Ghidra symbol: FUN_0097f000 */


undefined1 FUN_0097f000(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong local_28;
  undefined1 local_19;
  
  local_30 = auStack_88;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_28 = FUN_00961b30(&PTR_FUN_00916000,1,param_2);
  local_19 = 1;
  (**(code **)(*param_2 + 0x40))(param_2,&local_38);
  FUN_004168e0(&local_40,local_38);
  FUN_004168e0(&local_48,param_2[0x27]);
  FUN_004168e0(&local_50,param_2[0x25]);
  if (local_28 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = local_28 + 0xa0;
  }
  local_68 = local_50;
  local_60 = (undefined1)param_2[0x26];
  (**(code **)(*param_1 + 0xf0))(param_1,lVar1,local_40,local_48);
  (**(code **)(*param_1 + 0xa8))(param_1,local_28);
  if (local_28 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = local_28 + 0xa0;
  }
  (**(code **)(*param_1 + 0x130))(param_1,lVar1);
  FUN_00410f20(local_28);
  FUN_004145c0(&local_50,3);
  FUN_00414480(&local_38);
  return local_19;
}

