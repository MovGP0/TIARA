/* Ghidra address: 00aa5260 */
/* Ghidra symbol: FUN_00aa5260 */


int FUN_00aa5260(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                undefined8 param_5,undefined8 param_6,undefined4 param_7,int param_8,
                undefined4 param_9,longlong param_10,int *param_11,int *param_12)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined1 *local_108;
  longlong *local_100;
  undefined4 local_f8;
  int *local_f0;
  int *local_e8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 *local_a0;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  char local_6e;
  char local_6d;
  int local_6c;
  undefined8 local_68;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_a0 = auStack_138;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  *(int *)((longlong)param_1 + 0x74) = param_4;
  *(int *)(param_1 + 0xd) = *param_12;
  local_110 = (**(code **)(*param_1 + 0xc0))(param_1);
  local_118 = (undefined4)param_1[9];
  local_108 = local_5c;
  local_100 = param_1 + 0x8a;
  FUN_00a57400(param_1 + 0x16,param_7,param_8,*(undefined4 *)((longlong)param_1 + 0x44));
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00468530(&local_30,*(undefined4 *)((longlong)param_1 + 0x484),0xfffffffffffffffc);
  FUN_00468530(&local_b8,0xff4392a3,0xfffffffffffffffc);
  local_6d = FUN_0046f320(&local_30,&local_b8);
  FUN_00460ba0(&local_30);
  if (local_6d != '\0') {
    *(undefined4 *)((longlong)param_1 + 0x484) = 0;
  }
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  FUN_00468530(&local_48,*(undefined4 *)((longlong)param_1 + 0x47c),0xfffffffffffffffc);
  FUN_00468530(&local_d0,0xff4392a3,0xfffffffffffffffc);
  local_6e = FUN_0046f320(&local_48,&local_d0);
  FUN_00460ba0(&local_48);
  if (local_6e != '\0') {
    *(undefined4 *)((longlong)param_1 + 0x47c) = 0;
  }
  FUN_00a55e40(param_1 + 0x8a,*(undefined1 *)(param_1[3] + 0x60));
  iVar2 = *(int *)((longlong)param_1 + 0x484) + *(int *)((longlong)param_1 + 0x494) +
          *(int *)((longlong)param_1 + 0x4a4);
  *(int *)((longlong)param_1 + 0x514) =
       *(int *)(param_10 + 0xc) -
       (iVar2 + *(int *)((longlong)param_1 + 0x47c) + *(int *)((longlong)param_1 + 0x48c) +
       *(int *)((longlong)param_1 + 0x49c));
  *(int *)(param_1 + 0xf) = (int)param_1[0x8f];
  *(longlong *)(param_1[0x15] + 0x38) = param_10;
  local_68 = *(undefined8 *)(param_10 + 0x28);
  *(longlong **)(param_10 + 0x28) = param_1;
  local_54 = FUN_00a74830(param_10,iVar2,param_4);
  local_58 = FUN_00a74880(param_10,iVar2 + *(int *)((longlong)param_1 + 0x514),param_4);
  iVar3 = param_4 + (int)param_1[0x8f] + (int)param_1[0x91] + (int)param_1[0x93];
  *(int *)((longlong)param_1 + 0x7c) = iVar3;
  local_118 = 0;
  local_110 = 0;
  local_108 = (undefined1 *)CONCAT44(local_108._4_4_,*(undefined4 *)((longlong)param_1 + 0x514));
  local_100 = (longlong *)
              CONCAT44(local_100._4_4_,(param_8 - (int)param_1[0x8f]) - (int)param_1[0x90]);
  local_f8 = param_9;
  local_f0 = &local_50;
  local_e8 = param_12;
  FUN_00abf530(param_1[0x15],param_2,iVar2,iVar3);
  *(int *)((longlong)param_1 + 0x6c) = *param_12 - (int)param_1[0xd];
  local_74 = *(int *)((longlong)param_1 + 0x7c);
  local_78 = *(int *)(param_1[0x15] + 0x4c);
  local_7c = local_78;
  if (local_78 < local_74) {
    local_7c = local_74;
  }
  local_6c = local_7c;
  *(int *)(param_1 + 0x10) = local_7c + (int)param_1[0x92] + (int)param_1[0x94] + (int)param_1[0x90]
  ;
  local_80 = *(int *)(param_1[0x15] + 0x50);
  local_84 = local_80;
  if (local_80 < local_7c) {
    local_84 = local_7c;
  }
  *(int *)((longlong)param_1 + 0x84) = local_84 + (int)param_1[0x92] + (int)param_1[0x94];
  lVar1 = param_1[0x15];
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(lVar1 + 0x4c) = 0xf3e58;
  local_4c = (*(int *)((longlong)param_1 + 0x84) + (int)param_1[0x90]) - param_4;
  *(int *)(param_1 + 0x11) = local_4c;
  FUN_00a748d0(param_10,local_54);
  FUN_00a748f0(param_10,local_58);
  iVar2 = FUN_00a73fc0(param_10);
  *(int *)((longlong)param_1 + 0x8c) = iVar2 - param_4;
  *(undefined8 *)(param_10 + 0x28) = local_68;
  if (*(int *)((longlong)param_1 + 0x8c) < (int)param_1[0x11]) {
    *(int *)((longlong)param_1 + 0x8c) = (int)param_1[0x11];
  }
  local_88 = *(int *)((longlong)param_1 + 0x514);
  local_8c = local_88;
  if (local_88 < local_50) {
    local_8c = local_50;
  }
  local_90 = *(int *)(param_10 + 0xc);
  local_94 = local_8c + *(int *)((longlong)param_1 + 0x484) + *(int *)((longlong)param_1 + 0x47c);
  local_98 = local_94;
  if (local_94 < local_90) {
    local_98 = local_90;
  }
  *param_11 = local_98;
  if (*(int *)(param_1[0xa6] + 0x10) == 0) {
    FUN_00a9ff10(param_1);
  }
  FUN_00417840(&local_d0,&DAT_004013d8,2);
  return local_4c;
}

