/* Ghidra address: 0064f090 */
/* Ghidra symbol: FUN_0064f090 */


void FUN_0064f090(undefined8 param_1,longlong *param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  int local_78;
  undefined4 local_70;
  int local_68;
  int local_64;
  undefined1 *local_60;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_60 = auStack_98;
  local_54 = (**(code **)(*param_2 + 0x70))(param_2);
  if (param_3 == '\0') {
    local_50 = param_2[0xc];
    local_48 = param_2[0xd];
  }
  else {
    local_50 = param_2[0x10];
    local_48 = param_2[0x11];
  }
  local_30 = thunk_FUN_0417695f();
  local_38 = thunk_FUN_03dfb93b(local_30,0,0x402);
  uVar3 = FUN_005fdb10(param_2[0xb]);
  local_40 = thunk_FUN_041a19a1(local_38,uVar3);
  local_68 = (int)local_50;
  iVar1 = local_50._4_4_;
  local_64 = (int)local_48;
  iVar4 = ((int)local_48 - (int)local_50) - local_54;
  local_78 = local_54;
  local_70 = 0x5a0049;
  thunk_FUN_04161b78(local_38,(int)local_50 + local_54,local_50._4_4_,iVar4);
  iVar2 = local_48._4_4_;
  iVar5 = (local_48._4_4_ - iVar1) - local_54;
  local_70 = 0x5a0049;
  local_78 = iVar5;
  thunk_FUN_04161b78(local_38,local_64 - local_54,iVar1 + local_54,local_54);
  local_78 = local_54;
  local_70 = 0x5a0049;
  thunk_FUN_04161b78(local_38,local_68,iVar2 - local_54,iVar4);
  local_70 = 0x5a0049;
  local_78 = iVar5;
  thunk_FUN_04161b78(local_38,local_68,iVar1,local_54);
  thunk_FUN_041a19a1(local_38,local_40);
  thunk_FUN_041a9b5c(local_30,local_38);
  return;
}

