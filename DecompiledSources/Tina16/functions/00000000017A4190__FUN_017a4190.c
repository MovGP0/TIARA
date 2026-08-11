/* Ghidra address: 017a4190 */
/* Ghidra symbol: FUN_017a4190 */


void FUN_017a4190(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                 byte param_5,char param_6,char param_7,float param_8)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  byte local_70;
  undefined1 local_68;
  undefined4 *local_60;
  longlong local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_2c [3];
  
  local_50 = param_1;
  local_48 = param_3;
  local_40 = param_2;
  if (*(char *)(param_1 + 0x7b3) == '\0') {
    FUN_017a6aa0(param_1);
  }
  uVar6 = *(undefined8 *)(local_50 + 0x780);
  iVar2 = (**(code **)(*local_40 + 0x60))(local_40);
  iVar3 = FUN_00c3c500(param_4,param_5,param_6,param_7);
  FUN_007d55b0(uVar6,(longlong)iVar2 / (longlong)iVar3 & 0xffffffff);
  uVar4 = (**(code **)(*local_40 + 0x48))(local_40);
  FUN_007d5610(uVar6,uVar4);
  plVar5 = (longlong *)FUN_00609e10(local_40);
  uVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,0,0);
  *(undefined4 *)(local_50 + 0x7b4) = uVar4;
  FUN_007d5ad0(uVar6,local_40,uVar4);
  bVar1 = 1 < param_5;
  uVar6 = FUN_006df4b0(*(undefined8 *)(*(longlong *)(local_50 + 0x6f0) + 0x550));
  FUN_006dc990(uVar6,100);
  local_2c[0] = 0;
  uVar7 = (undefined1)param_4;
  local_70 = param_5;
  local_60 = local_2c;
  local_78 = uVar7;
  local_68 = bVar1;
  FUN_017a3ee0(auStack_98,*(undefined8 *)(local_50 + 0x6f0),uVar6,local_48);
  uVar6 = FUN_006dd3e0(uVar6);
  FUN_006dc990(uVar6,100);
  if (param_6 != '\0') {
    local_70 = param_5;
    local_60 = local_2c;
    local_78 = uVar7;
    local_68 = bVar1;
    FUN_017a3ee0(auStack_98,*(undefined8 *)(local_50 + 0x6f0),uVar6,local_48);
  }
  uVar6 = FUN_006dd3e0(uVar6);
  FUN_006dc990(uVar6,100);
  if (param_7 != '\0') {
    local_70 = param_5;
    local_60 = local_2c;
    local_78 = uVar7;
    local_68 = bVar1;
    FUN_017a3ee0(auStack_98,*(undefined8 *)(local_50 + 0x6f0),uVar6,local_48);
  }
  FUN_00b90440(*(undefined8 *)(local_50 + 0x7a0),(double)param_8);
  return;
}

