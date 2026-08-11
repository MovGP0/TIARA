/* Ghidra address: 00d82890 */
/* Ghidra symbol: FUN_00d82890 */


void FUN_00d82890(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 local_e8 [24];
  int local_d0 [14];
  undefined1 local_98 [40];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong *local_50;
  undefined8 uStack_48;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  uStack_2c = *(undefined4 *)(param_4 + 2);
  local_60 = *param_5;
  uStack_58 = param_5[1];
  local_50 = (longlong *)param_5[2];
  uVar4 = param_5[3];
  uStack_48._1_1_ = (char)((ulonglong)uVar4 >> 8);
  uStack_48 = uVar4;
  if (uStack_48._1_1_ == '\0') {
    FUN_00423010(&local_70,0,0,0x10,0x10);
    FUN_00d57690(local_e8,&local_70,&local_60);
    FUN_00409a70(&DAT_01ed0890,local_d0,0x60);
    iVar5 = 0xc;
    piVar3 = local_d0;
    do {
      *piVar3 = *piVar3 + (local_70 + local_68) / 2 + -2;
      piVar3[1] = piVar3[1] + (local_6c + local_64) / 2 + 1;
      piVar3 = piVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    FUN_005fd4e0(*(undefined8 *)(param_3 + 0x78),
                 *(undefined4 *)(*(longlong *)(param_3 + 0x70) + 0x28));
    uVar4 = FUN_005ffa40(param_3);
    thunk_FUN_04172651(uVar4,local_d0,7);
    FUN_005fd4e0(*(undefined8 *)(param_3 + 0x78),
                 *(undefined4 *)(*(longlong *)(param_3 + 0x70) + 0x28));
    uVar4 = FUN_005ffa40(param_3);
    thunk_FUN_04172651(uVar4,local_98,5);
  }
  else if (uStack_48._1_1_ == '\x01') {
    FUN_00423010(&local_70,0,0,6,6);
    FUN_00d57690(local_e8,&local_70,&local_60);
    FUN_00d57d80(param_3,&local_70,3,0);
  }
  else if (uStack_48._1_1_ == '\x02') {
    FUN_00423010(&local_70,0,0,0x10,0x10);
    FUN_00d57690(local_e8,&local_70,&local_60);
    FUN_00d57e00(param_3,&local_70,2,0,*(undefined4 *)(*(longlong *)(param_3 + 0x70) + 0x28));
  }
  else if ((uStack_48._1_1_ == '\x03') && (local_50 != (longlong *)0x0)) {
    uVar1 = (**(code **)(*local_50 + 0x60))(local_50);
    uVar2 = (**(code **)(*local_50 + 0x48))(local_50);
    FUN_00423010(&local_70,0,0,uVar1,uVar2);
    FUN_00d57690(local_e8,&local_70,&local_60);
    FUN_00d58940(local_50,param_3,&local_70);
  }
  return;
}

