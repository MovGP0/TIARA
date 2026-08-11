/* Ghidra address: 00cb5ff0 */
/* Ghidra symbol: FUN_00cb5ff0 */


void FUN_00cb5ff0(longlong param_1,longlong *param_2,undefined8 param_3,undefined2 param_4)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  byte *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = auStack_a8;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_30 = (byte *)0x0;
  local_20 = (longlong *)FUN_00882aa0(&PTR_FUN_00cb2a30,1,0);
  FUN_00419260(&local_30,&DAT_0086e978,1,8);
  local_78 = param_2;
  (**(code **)(*param_2 + 0x1f8))(param_2,0);
  (**(code **)(*local_20 + 200))(local_20,param_2);
  (**(code **)(*local_20 + 0x148))(local_20,*(undefined8 *)(param_1 + 0xf0));
  (**(code **)(*local_20 + 0x150))(local_20,*(undefined2 *)(param_1 + 0x100));
  (**(code **)(*local_20 + 0x160))(local_20);
  (**(code **)(*local_78 + 0x1f8))(local_78,param_1);
  local_88 = 2;
  FUN_00cb52d0(param_1,param_2,param_3,param_4);
  (**(code **)(*param_2 + 0x188))(param_2,&local_30,2,0);
  bVar1 = local_30[1];
  if (bVar1 != 0x5a) {
    if (bVar1 == 0x5b) {
      FUN_0041ddd0(&local_48,PTR_PTR_02003740);
      uVar3 = FUN_0086dfd0(&PTR_FUN_00ca71d8,1,local_48);
      FUN_004134c0(uVar3);
    }
    else if (bVar1 == 0x5c) {
      FUN_0041ddd0(&local_50,PTR_PTR_02001e20);
      uVar3 = FUN_0086dfd0(&PTR_FUN_00ca7328,1,local_50);
      FUN_004134c0(uVar3);
    }
    else if (bVar1 == 0x5d) {
      FUN_0041ddd0(&local_58,PTR_PTR_02004148);
      uVar3 = FUN_0086dfd0(&PTR_FUN_00ca7480,1,local_58);
      FUN_004134c0(uVar3);
    }
    else {
      FUN_0041ddd0(&local_60,PTR_PTR_02004140);
      uVar3 = FUN_0086dfd0(&PTR_FUN_00ca75d8,1,local_60);
      FUN_004134c0(uVar3);
    }
  }
  (**(code **)(*param_2 + 0x188))(param_2,&local_30,6,0);
  uVar3 = 0;
  FUN_008783b0(&local_68,local_30,2);
  uVar3 = CONCAT62((int6)((ulonglong)uVar3 >> 0x10),(ushort)*local_30);
  FUN_00c8f6b0(local_78[0x2b],local_68,
               CONCAT22((short)((ulonglong)uVar3 >> 8),
                        (short)((int)uVar3 << 8) + (ushort)local_30[1]),0);
  (**(code **)(*local_20 + 200))(local_20,0);
  plVar2 = local_20;
  local_28 = local_20;
  local_20 = (longlong *)0x0;
  FUN_00410f20(plVar2);
  FUN_00414560(&local_70,6);
  FUN_00419430(&local_30,&DAT_0086e978);
  return;
}

