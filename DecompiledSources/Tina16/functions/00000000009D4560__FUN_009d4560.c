/* Ghidra address: 009d4560 */
/* Ghidra symbol: FUN_009d4560 */


short FUN_009d4560(longlong param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  short local_2a;
  undefined8 local_20;
  
  local_40 = auStack_b8;
  local_50 = 0;
  local_48 = 0;
  *(int **)(param_1 + 0x48) = param_4;
  *param_4 = 0;
  FUN_009d4140(param_1);
  plVar2 = (longlong *)FUN_009dab20(param_3);
  (**(code **)(*plVar2 + 0x20))(plVar2);
  uVar3 = FUN_009dab20(param_3);
  *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x80) = uVar3;
  local_38 = 0;
  FUN_004168e0(&local_48,param_2);
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_20 = FUN_00960a20(&PTR_FUN_00915170,1,local_48,0);
  local_38 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xb8))
                       (*(longlong **)(param_1 + 0x20),local_20);
  FUN_00410f20(local_20);
  if (*param_4 == 0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x138))(*(longlong **)(param_1 + 0x30),local_38);
  }
  local_2a = -(ushort)(*param_4 == 0);
  if (local_2a != 0) {
    uVar3 = FUN_0041b800(&local_50);
    uVar1 = FUN_009db590(param_3,uVar3);
    FUN_0041d630(uVar1);
    if (*(char *)(param_3 + 0xb1) == '\0') {
      FUN_009dd610(param_3);
    }
  }
  FUN_00410f20(local_38);
  FUN_0041b800(&local_50);
  FUN_00414520(&local_48);
  return local_2a;
}

