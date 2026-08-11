/* Ghidra address: 008674b0 */
/* Ghidra symbol: FUN_008674b0 */


undefined4 FUN_008674b0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong *local_20;
  
  local_88 = 0;
  local_90 = (longlong *)0x0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_38 = 0;
  local_40 = (longlong *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  local_68 = 0;
  local_20 = (longlong *)0x0;
  uVar2 = FUN_0041b800(&local_40);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xb8))
                    (*(longlong **)(param_1 + 0x18),uVar2);
  FUN_0041d630(uVar1);
  FUN_004685b0(&local_58,2,1);
  FUN_004168e0(&local_60,param_3);
  FUN_004168e0(&local_68,param_2);
  uVar2 = FUN_0041b800(&local_38);
  uVar1 = (**(code **)(*local_40 + 0x1c0))(local_40,&local_58,local_60,local_68,uVar2);
  FUN_0041d630(uVar1);
  FUN_0041b890(&local_20,local_38,&DAT_00867714);
  FUN_00468b40(&local_80,param_4);
  uVar1 = (**(code **)(*local_20 + 0x48))(local_20,&local_80);
  FUN_0041d630(uVar1);
  FUN_00866490(param_1,&local_90);
  uVar2 = FUN_0041b800(&local_88);
  uVar1 = (**(code **)(*local_90 + 0x180))(local_90,local_20,uVar2);
  FUN_0041d630(uVar1);
  local_30 = 0;
  FUN_0041b800(&local_90);
  FUN_0041b800(&local_88);
  FUN_00460ba0(&local_80);
  FUN_004145c0(&local_68,2);
  FUN_00460ba0(&local_58);
  FUN_0041b800(&local_40);
  FUN_0041b800(&local_38);
  FUN_0041b800(&local_20);
  return local_30;
}

