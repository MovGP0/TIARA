/* Ghidra address: 00cb8470 */
/* Ghidra symbol: FUN_00cb8470 */


longlong *
FUN_00cb8470(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
            undefined2 param_5)

{
  longlong lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined1 *local_70;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  int local_2c;
  longlong local_28;
  longlong local_20;
  
  local_70 = auStack_a8;
  local_38 = 0;
  FUN_00419260(param_2,&DAT_0086e978,1,0x400);
  *(undefined1 *)*param_2 = 0;
  *(undefined1 *)(*param_2 + 1) = 0;
  *(undefined1 *)(*param_2 + 2) = 0;
  local_28 = FUN_0089df10(&PTR_FUN_0089d600,param_4);
  if (local_28 == 0) {
    FUN_00877e10(&local_38,param_4,0);
    *(undefined1 *)(*param_2 + 3) = 3;
    local_50 = local_38;
    if (local_38 != 0) {
      local_50 = *(longlong *)(local_38 + -8);
    }
    bVar2 = FUN_008764e0(local_50,0xff);
    *(byte *)(*param_2 + 4) = bVar2;
    if (bVar2 != 0) {
      local_88 = (uint)bVar2;
      FUN_00874e50(local_38,0,param_2,5);
    }
    local_2c = *(byte *)(*param_2 + 4) + 5;
  }
  else {
    if (*(char *)(local_28 + 0xc) == '\x01') {
      *(undefined1 *)(*param_2 + 3) = 4;
    }
    else {
      *(undefined1 *)(*param_2 + 3) = 1;
    }
    local_2c = 4;
    FUN_0089dbf0(local_28,&local_38);
    local_40 = local_38;
    if (local_38 != 0) {
      local_40 = *(longlong *)(local_38 + -8);
    }
    local_88 = (uint)local_40;
    FUN_00874e50(local_38,0,param_2,4);
    lVar1 = local_28;
    local_48 = local_38;
    if (local_38 != 0) {
      local_48 = *(longlong *)(local_38 + -8);
    }
    local_2c = local_2c + (int)local_48;
    local_20 = local_28;
    local_28 = 0;
    FUN_00410f20(lVar1);
  }
  uVar3 = (**(code **)(**(longlong **)PTR_DAT_020050b0 + 0x58))
                    (*(longlong **)PTR_DAT_020050b0,param_5);
  FUN_00874e80(uVar3,param_2,local_2c);
  local_2c = local_2c + 2;
  local_58 = param_3;
  if (param_3 != 0) {
    local_58 = *(longlong *)(param_3 + -8);
  }
  FUN_00419260(param_2,&DAT_0086e978,1,local_2c + local_58);
  local_60 = param_3;
  if (param_3 != 0) {
    local_60 = *(longlong *)(param_3 + -8);
  }
  local_88 = (undefined4)local_60;
  FUN_00874e50(param_3,0,param_2,local_2c);
  FUN_00419430(&local_38,&DAT_0086e978);
  return param_2;
}

