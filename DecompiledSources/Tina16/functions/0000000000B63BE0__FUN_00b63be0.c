/* Ghidra address: 00b63be0 */
/* Ghidra symbol: FUN_00b63be0 */


void FUN_00b63be0(longlong param_1,longlong param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60 [2];
  short local_4a;
  undefined8 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60[0] = 0;
  local_40 = 0;
  local_48 = 0;
  uVar1 = *(ushort *)(param_2 + 0x12);
  if (*(ushort *)(param_2 + 0x10) == 0) {
    local_24 = 0;
  }
  else {
    uVar2 = (uint)*(ushort *)(param_2 + 0x10);
    if (uVar2 + 10 < 0x10001) {
      local_24 = uVar2 - 1;
    }
    else {
      local_24 = uVar2 - 10;
    }
  }
  if (uVar1 + 6 < 0x101) {
    local_1c = uVar1 + 1;
  }
  else {
    local_1c = uVar1 - 6;
  }
  uVar2 = FUN_00b39590(param_2);
  uVar3 = FUN_00b395d0(param_2);
  FUN_00b637b0(param_1,local_24,10,param_3,&local_24,&local_28);
  FUN_00b63880(param_1,local_1c,0xf,param_3,&local_1c,&local_20);
  FUN_00b637b0(param_1,local_24,(uVar3 & 0xffff) + 10,param_3,&local_34,&local_38);
  FUN_00b63880(param_1,local_1c,(uVar2 & 0xffff) + 0xf,param_3,&local_2c,&local_30);
  FUN_00b39470(param_2,local_60);
  local_4a = 0;
  if (local_60[0] != 0) {
    local_4a = (short)(*(uint *)(local_60[0] + -4) >> 1);
  }
  FUN_004144d0(&local_40);
  if (local_4a != 0) {
    FUN_00b39540(param_2,&local_68);
    FUN_00b37900(&local_40,local_68,0,
                 *(undefined8 *)
                  (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x60) + 0x18) + 0x18)
                );
    FUN_00414c70(&local_48,&DAT_00b64050);
    uVar5 = FUN_00414df0(&local_48);
    FUN_00409a70(&local_4a,uVar5,2);
    iVar4 = 0;
    if (local_40 != 0) {
      iVar4 = *(int *)(local_40 + -4);
    }
    if (7 < iVar4) {
      iVar4 = 0;
      if (local_40 != 0) {
        iVar4 = *(int *)(local_40 + -4);
      }
      FUN_00415ad0(&local_70,local_40,iVar4 + -7,8);
      iVar4 = FUN_00415a60(local_70,local_48);
      if (iVar4 != 0) {
        FUN_004155b0(&local_40,local_48);
      }
    }
  }
  FUN_00b39470(param_2,&local_78);
  FUN_00b394e0(param_2,&local_80);
  FUN_00b436f0(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x50) + 0x60) + 0x60),param_3,
               *(undefined2 *)(param_2 + 0x10),*(undefined2 *)(param_2 + 0x12),local_78,local_80,
               local_40,local_1c,local_20,local_24,local_28,local_2c,local_30,local_34,local_38);
  FUN_004145c0(&local_80,2);
  FUN_00414590(&local_70,2);
  FUN_00414520(local_60);
  FUN_00414590(&local_48,2);
  return;
}

