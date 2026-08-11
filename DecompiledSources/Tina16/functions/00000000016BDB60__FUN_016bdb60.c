/* Ghidra address: 016bdb60 */
/* Ghidra symbol: FUN_016bdb60 */


undefined8
FUN_016bdb60(longlong param_1,byte *param_2,undefined8 *param_3,undefined8 param_4,char param_5)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 local_res20;
  undefined8 local_120;
  byte local_118 [256];
  
  lVar1 = (ulonglong)*param_2 + 1;
  pbVar2 = local_118;
  for (; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 1;
  }
  local_res20 = param_4;
  FUN_00414630(param_4);
  if (param_5 == '\x01') {
    local_120 = FUN_016a4e90(&PTR_FUN_016a09d8,1,local_118,param_3,local_res20,
                             *(undefined8 *)(param_1 + 0x10));
  }
  else if (param_5 == '\x02') {
    local_120 = FUN_016a5170(&PTR_FUN_016a0c30,1,local_118,*(undefined4 *)param_3,local_res20,
                             *(undefined8 *)(param_1 + 0x10));
  }
  else if (param_5 == '\x03') {
    local_120 = FUN_016a5390(&PTR_FUN_016a0e58,1,local_118,*param_3,local_res20,
                             *(undefined8 *)(param_1 + 0x10));
  }
  (**(code **)(**(longlong **)(param_1 + 0xa40) + 0x50))(*(longlong **)(param_1 + 0xa40),local_120);
  FUN_004144d0(&local_res20);
  return local_120;
}

