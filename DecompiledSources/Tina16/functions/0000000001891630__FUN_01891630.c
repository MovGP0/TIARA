/* Ghidra address: 01891630 */
/* Ghidra symbol: FUN_01891630 */


void FUN_01891630(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_70 [16];
  undefined1 *local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20;
  
  local_60 = auStack_a8;
  FUN_007433d0(param_1);
  (**(code **)(*param_1 + 0xe0))(param_1,&local_30);
  FUN_005fdcb0(*(undefined8 *)(param_1[0x92] + 0x80),0);
  FUN_005fdab0(*(undefined8 *)(param_1[0x92] + 0x80),(int)param_1[0x9d]);
  fVar4 = (float)FUN_01818dc0(param_1);
  local_38 = FUN_0040c770((double)fVar4 * 4.0);
  (**(code **)(*(longlong *)param_1[0x92] + 0xa8))((longlong *)param_1[0x92],&local_30);
  iVar1 = (local_24 - local_2c) + local_38 * -2;
  local_34 = (iVar1 / 2) * 2;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  fVar4 = (float)FUN_01818dc0(param_1,(longlong)iVar1 % 2 & 0xffffffff);
  uVar2 = FUN_0040c770((double)fVar4);
  local_88 = 0;
  local_20 = thunk_FUN_04164f7c(0x10000,uVar2,&local_48,0);
  uVar3 = FUN_005ffa40(param_1[0x92]);
  local_50 = thunk_FUN_041a19a1(uVar3,local_20);
  (**(code **)(*(longlong *)param_1[0x92] + 200))((longlong *)param_1[0x92],local_38,local_38);
  iVar1 = local_34 + local_38;
  (**(code **)(*(longlong *)param_1[0x92] + 0xc0))((longlong *)param_1[0x92],iVar1,iVar1);
  (**(code **)(*(longlong *)param_1[0x92] + 200))((longlong *)param_1[0x92],local_38,iVar1);
  (**(code **)(*(longlong *)param_1[0x92] + 0xc0))((longlong *)param_1[0x92],iVar1,local_38);
  FUN_005fdab0(*(undefined8 *)(param_1[0x92] + 0x80),0);
  uVar3 = FUN_005ffa40(param_1[0x92]);
  thunk_FUN_041a19a1(uVar3,local_50);
  thunk_FUN_0416f828(local_20);
  local_38 = 0;
  iVar1 = (local_24 - local_2c) / 2;
  local_34 = iVar1 * 2;
  if ((char)param_1[0x97] == '\0') {
    local_58 = param_1[0x9a];
  }
  else {
    local_58 = param_1[0x99];
  }
  iVar1 = (local_28 - local_30) + iVar1 * -2 + 1;
  local_88 = CONCAT44(local_88._4_4_,local_34);
  FUN_00498350(local_70,iVar1,1,iVar1 + local_34);
  (**(code **)(*(longlong *)param_1[0x92] + 0x110))((longlong *)param_1[0x92],local_70,local_58);
  return;
}

