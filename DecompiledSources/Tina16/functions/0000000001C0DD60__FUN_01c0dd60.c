/* Ghidra address: 01c0dd60 */
/* Ghidra symbol: FUN_01c0dd60 */


void FUN_01c0dd60(longlong *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_78;
  puVar1 = auStack_78;
  if (*(char *)((longlong)param_1 + 0x344) != '\0') {
    (**(code **)(*param_1 + 0xe0))(param_1,local_50);
    (**(code **)(*(longlong *)param_1[0x62] + 0xa8))((longlong *)param_1[0x62],local_50);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  local_20 = FUN_005fddc0(&DAT_005f3a38,1,*(undefined8 *)(param_1[0x62] + 0x80));
  local_28 = FUN_005fdd10(&DAT_005f38c8,1,*(undefined8 *)(param_1[0x62] + 0x78));
  if (param_1[100] != 0) {
    cVar2 = FUN_01bfea90(param_1[100]);
    if ((cVar2 != '\0') && (*(char *)((longlong)param_1 + 0x35c) == '\0')) {
      FUN_005fdcb0(*(undefined8 *)(param_1[0x62] + 0x80),0);
      goto LAB_01c0deed;
    }
  }
  FUN_005fdab0(*(undefined8 *)(param_1[0x62] + 0x80),(int)param_1[0x19]);
  FUN_0064d000(param_1,local_38);
  uVar5 = FUN_005ffa40(param_1[0x62]);
  thunk_FUN_03998bad(uVar5,local_38,4,1);
  uVar5 = FUN_005ffa40(param_1[0x62]);
  thunk_FUN_03998bad(uVar5,local_38,4,4);
LAB_01c0deed:
  FUN_005fd4e0(*(undefined8 *)(param_1[0x62] + 0x78),0xff000010);
  iVar3 = FUN_0064d120(param_1);
  (**(code **)(*(longlong *)param_1[0x62] + 200))
            ((longlong *)param_1[0x62],0x20,(longlong)iVar3 / 2 & 0xffffffff);
  uVar4 = FUN_0064d0b0(param_1);
  iVar3 = FUN_0064d120(param_1);
  (**(code **)(*(longlong *)param_1[0x62] + 0xc0))
            ((longlong *)param_1[0x62],uVar4,(longlong)iVar3 / 2 & 0xffffffff);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  return;
}

