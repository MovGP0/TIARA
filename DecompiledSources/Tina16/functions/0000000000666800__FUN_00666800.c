/* Ghidra address: 00666800 */
/* Ghidra symbol: FUN_00666800 */


void FUN_00666800(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 *local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_80 = auStack_c8;
  (**(code **)(*param_2 + 0xe0))(param_2,&local_90);
  FUN_004236d0(&local_48,&local_90,3,*(undefined4 *)((longlong)param_2 + 0x9c));
  FUN_005fdab0(*(undefined8 *)(param_2[0x92] + 0x80),0xf0ffff);
  (**(code **)(*param_2 + 0xe0))(param_2,&local_90);
  (**(code **)(*(longlong *)param_2[0x92] + 0xa8))((longlong *)param_2[0x92],&local_90);
  local_38 = thunk_FUN_03976db5(local_48,local_44,local_40,local_3c);
  uVar1 = FUN_005ffa40(param_2[0x92]);
  local_30 = thunk_FUN_041a19a1(uVar1,local_38);
  FUN_005fdab0(*(undefined8 *)(param_2[0x92] + 0x80),0);
  uVar1 = FUN_005ffa40(param_2[0x92]);
  uVar2 = FUN_005fdb10(*(undefined8 *)(param_2[0x92] + 0x80));
  local_a8 = 1;
  thunk_FUN_0416ab53(uVar1,local_38,uVar2,1);
  if (param_2[0x96] != 0) {
    FUN_00423730(&local_58,&local_48,2,0x3fe0000000000000);
  }
  if (param_2[0x95] != 0) {
    FUN_00423730(&local_68,&local_48,3,0x3fe0000000000000);
  }
  FUN_005fdcb0(*(undefined8 *)(param_2[0x92] + 0x80),1);
  (**(code **)(*(longlong *)param_2[0x92] + 0x128))
            ((longlong *)param_2[0x92],local_78,param_2 + 0x95,2);
  FUN_004237f0(&local_90,&local_58,local_78);
  local_58 = local_90;
  uStack_50 = uStack_88;
  (**(code **)(*(longlong *)param_2[0x92] + 0x128))
            ((longlong *)param_2[0x92],&local_58,param_2 + 0x95,0x28500);
  (**(code **)(*(longlong *)param_2[0x92] + 0x128))
            ((longlong *)param_2[0x92],local_78,param_2 + 0x96,2);
  FUN_004237f0(&local_90,&local_68,local_78);
  local_68 = local_90;
  uStack_60 = uStack_88;
  (**(code **)(*(longlong *)param_2[0x92] + 0x128))
            ((longlong *)param_2[0x92],&local_68,param_2 + 0x96,0x28500);
  uVar1 = FUN_005ffa40(param_2[0x92]);
  thunk_FUN_041a19a1(uVar1,local_30);
  thunk_FUN_0416f828(local_38);
  return;
}

