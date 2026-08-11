/* Ghidra address: 014c7110 */
/* Ghidra symbol: FUN_014c7110 */


void FUN_014c7110(undefined8 param_1,undefined8 param_2,undefined1 param_3,char param_4,char param_5
                 ,undefined8 *param_6,undefined8 *param_7,longlong param_8)

{
  undefined1 uVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  short *psVar5;
  longlong *plVar6;
  longlong lVar7;
  char *pcVar8;
  int iVar9;
  undefined8 *puVar10;
  char local_3a8 [480];
  undefined1 *local_1c8;
  char local_1c0;
  char local_1bf;
  undefined8 local_1be [3];
  short local_1a6 [180];
  short local_3e;
  undefined8 local_3c;
  undefined8 local_34;
  undefined4 local_2c;
  
  local_34 = *param_6;
  local_2c = *(undefined4 *)(param_6 + 1);
  puVar10 = local_1be;
  for (lVar7 = 0x31; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *param_7;
    param_7 = param_7 + 1;
    puVar10 = puVar10 + 1;
  }
  *(undefined2 *)puVar10 = *(undefined2 *)param_7;
  uVar1 = FUN_00b90600(local_34._4_1_,8,1);
  *(undefined1 *)(param_8 + 0xc) = uVar1;
  *(undefined1 *)(param_8 + 0xd) = local_34._5_1_;
  *(undefined1 *)(param_8 + 0xe) = local_34._6_1_;
  *(undefined4 *)(param_8 + 8) = (undefined4)local_34;
  *(undefined1 *)(param_8 + 0x19) = (undefined1)local_2c;
  *(undefined1 *)(param_8 + 0x18) = local_34._7_1_;
  *(undefined1 *)(param_8 + 0x1a) = local_2c._1_1_;
  *(undefined1 *)(param_8 + 4) = param_3;
  *(char *)(param_8 + 5) = param_4;
  *(char *)(param_8 + 6) = param_5;
  cVar2 = FUN_016e9f30(param_1);
  local_1bf = cVar2 + '\x01';
  cVar3 = FUN_016e9d70(param_1);
  if (param_4 == -1) {
    *(undefined1 *)(param_8 + 5) = 0;
    cVar3 = cVar3 + -1;
  }
  else {
    *(char *)(param_8 + 5) = param_4;
  }
  if (param_5 == -1) {
    *(undefined1 *)(param_8 + 6) = 0;
    cVar3 = cVar3 + -1;
  }
  else {
    *(char *)(param_8 + 6) = param_5;
  }
  local_1c0 = cVar3 + '\x01';
  iVar9 = 0x14;
  psVar5 = local_1a6;
  pcVar8 = local_3a8;
  do {
    if (*psVar5 == -1) {
      *pcVar8 = '\f';
    }
    else {
      *pcVar8 = (char)*psVar5;
      *(undefined1 *)(param_8 + 0xd) = 3;
    }
    if (*pcVar8 == '\x06') {
      *pcVar8 = '\x04';
    }
    *(undefined8 *)(pcVar8 + 8) = *(undefined8 *)(psVar5 + 1);
    *(undefined8 *)(pcVar8 + 0x10) = *(undefined8 *)(psVar5 + 5);
    pcVar8 = pcVar8 + 0x18;
    psVar5 = psVar5 + 9;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (local_3e == -1) {
    local_3e._0_1_ = 0xc;
  }
  else {
  }
  if (*(char *)(param_8 + 0xd) == '\x03') {
    FUN_00dd5710(param_8 + 0x20,*(undefined1 *)(param_8 + 4),*(undefined1 *)(param_8 + 6),&local_1bf
                 ,&local_1c0,3,0,*(undefined1 *)(param_8 + 0xc),*(undefined1 *)(param_8 + 5),
                 local_1be[1],local_1be[2],local_3c,local_3a8,(undefined1)local_3e);
  }
  else {
    FUN_00dd5710(param_8 + 0x20,*(undefined1 *)(param_8 + 4),*(undefined1 *)(param_8 + 6),&local_1bf
                 ,&local_1c0,*(char *)(param_8 + 0xd),1,1,0,0,0,0,0,0xc);
  }
  FUN_016e9d10(param_1,(local_1c0 - cVar3) + -1);
  FUN_016e9e80(param_1,(local_1bf - cVar2) + -1);
  lVar7 = *(longlong *)(param_8 + 0x20);
  *(undefined1 *)(lVar7 + 6) = *(undefined1 *)(param_8 + 0xc);
  (**(code **)(*(longlong *)(lVar7 + 8) + 8))(lVar7,param_1,param_2);
  plVar6 = (longlong *)FUN_016ebdc0(param_1);
  (**(code **)(*plVar6 + 0x2d0))(plVar6,4,&local_1c8);
  *local_1c8 = 2;
  uVar4 = FUN_016ea1b0(param_1,3);
  *(undefined2 *)(param_8 + 2) = uVar4;
  return;
}

