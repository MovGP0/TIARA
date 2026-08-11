/* Ghidra address: 014daa20 */
/* Ghidra symbol: FUN_014daa20 */


void FUN_014daa20(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 in_stack_ffffffffffffff60;
  ulonglong uVar9;
  char local_39;
  undefined8 *local_38;
  undefined1 local_2c;
  undefined1 local_2b;
  char local_2a;
  char local_29;
  
  uVar6 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  local_2b = 0;
  local_2c = 0;
  local_39 = '\t';
  FUN_016ee260(param_1,&local_38,8,0);
  cVar1 = FUN_016ee480(param_1);
  if (cVar1 == '\0') {
    pbVar7 = (byte *)FUN_00dd1b70(0,&PTR_FUN_014d9f98);
    *local_38 = pbVar7;
  }
  else {
    pbVar7 = (byte *)*local_38;
  }
  uVar8 = FUN_016ebdc0(param_1);
  bVar2 = FUN_01d03580(uVar8);
  *pbVar7 = bVar2;
  bVar2 = FUN_016ebc30(param_1,1);
  *pbVar7 = bVar2;
  if ((8 < *pbVar7) || (*pbVar7 == 0)) {
    *pbVar7 = 1;
  }
  cVar1 = FUN_016e9de0(param_1,8);
  if (cVar1 == '\0') {
    pbVar7[0x10] = 0;
    local_39 = '\b';
  }
  else {
    pbVar7[0x10] = 8;
  }
  cVar1 = FUN_016e9de0(param_1,9);
  if (cVar1 == '\0') {
    pbVar7[0x11] = 0;
    local_39 = local_39 + -1;
  }
  else {
    pbVar7[0x11] = 9;
  }
  local_29 = '\x01';
  local_2a = local_39 + '\x01';
  uVar5 = FUN_016eacf0(param_1,2,3);
  uVar9 = CONCAT44(uVar6,uVar5) & 0xffffffff000000ff;
  FUN_00dd5710(pbVar7 + 0x690,1,pbVar7[0x10],&local_29,&local_2a,uVar9,1,1,0,0,0,0,0,0xc);
  uVar9 = CONCAT44((int)(uVar9 >> 0x20),uVar5) & 0xffffffff000000ff;
  FUN_00dd5710(pbVar7 + 0x8b8,3,pbVar7[0x10],&local_29,&local_2a,uVar9,1,1,0,0,0,0,0,0xc);
  uVar9 = CONCAT44((int)(uVar9 >> 0x20),uVar5) & 0xffffffff000000ff;
  FUN_00dd5710(pbVar7 + 0x18,7,pbVar7[0x10],&local_29,&local_2a,uVar9,1,1,0,0,0,0,0,0xc);
  uVar9 = CONCAT44((int)(uVar9 >> 0x20),uVar5) & 0xffffffff000000ff;
  FUN_00dd5710(pbVar7 + 0x240,4,pbVar7[0x10],&local_29,&local_2a,uVar9,1,1,0,0,0,0,0,0xc);
  uVar9 = CONCAT44((int)(uVar9 >> 0x20),uVar5) & 0xffffffff000000ff;
  FUN_00dd5710(pbVar7 + 0x468,2,pbVar7[0x10],&local_29,&local_2a,uVar9,1,1,0,0,0,0,0,0xc);
  uVar5 = (undefined4)(uVar9 >> 0x20);
  uVar6 = FUN_016eacf0(param_1,3,3);
  uVar9 = CONCAT44(uVar5,uVar6) & 0xffffffff000000ff;
  FUN_00dd58f0(pbVar7 + 0x14428,6,pbVar7[0x10],&local_29,&local_2a,uVar9,0,1,0,0,0,0);
  FUN_00dd58f0(pbVar7 + 0x14720,5,pbVar7[0x10],&local_29,&local_2a,
               CONCAT44((int)(uVar9 >> 0x20),uVar6) & 0xffffffff000000ff,0,1,0,0,0,0);
  cVar1 = FUN_016eacf0(param_1,4,2);
  if (cVar1 == '\0') {
    *(byte **)(pbVar7 + 0xae0) = pbVar7 + 0xae8;
    FUN_00dd2c10(pbVar7 + 0xae8,&PTR_FUN_00dd01b8,
                 *(undefined1 *)(*(longlong *)(pbVar7 + 0x14428) + 1),pbVar7[0x10],&local_2b,
                 &local_2c);
  }
  else {
    *(byte **)(pbVar7 + 0xae0) = pbVar7 + 0xae8;
    FUN_00dd2ca0(pbVar7 + 0xae8,&PTR_FUN_00dd01f0,
                 *(undefined1 *)(*(longlong *)(pbVar7 + 0x14428) + 1),pbVar7[0x10],&local_2b,
                 &local_2c);
  }
  cVar1 = FUN_016eacf0(param_1,4,2);
  if (cVar1 == '\0') {
    *(byte **)(pbVar7 + 0xa768) = pbVar7 + 0xa770;
    FUN_00dd2c10(pbVar7 + 0xa770,&PTR_FUN_00dd01b8,
                 *(undefined1 *)(*(longlong *)(pbVar7 + 0x14720) + 1),pbVar7[0x10],&local_2b,
                 &local_2c);
  }
  else {
    *(byte **)(pbVar7 + 0xa768) = pbVar7 + 0xa770;
    FUN_00dd2ca0(pbVar7 + 0xa770,&PTR_FUN_00dd01f0,
                 *(undefined1 *)(*(longlong *)(pbVar7 + 0x14720) + 1),pbVar7[0x10],&local_2b,
                 &local_2c);
  }
  FUN_016e9e20(param_1,local_29 + -1);
  FUN_016e9cd0(param_1,(local_2a - local_39) + -1);
  *(byte *)(*(longlong *)(pbVar7 + 0x18) + 6) = *pbVar7;
  *(byte *)(*(longlong *)(pbVar7 + 0x240) + 6) = *pbVar7;
  *(byte *)(*(longlong *)(pbVar7 + 0x468) + 6) = *pbVar7;
  *(byte *)(*(longlong *)(pbVar7 + 0x690) + 6) = *pbVar7;
  *(byte *)(*(longlong *)(pbVar7 + 0x8b8) + 6) = *pbVar7;
  *(byte *)(*(longlong *)(pbVar7 + 0x14428) + 6) = *pbVar7;
  *(byte *)(*(longlong *)(pbVar7 + 0x14720) + 6) = *pbVar7;
  *(byte *)(*(longlong *)(pbVar7 + 0xae0) + 6) = *pbVar7;
  *(byte *)(*(longlong *)(pbVar7 + 0xa768) + 6) = *pbVar7;
  (**(code **)(*(longlong *)(*(longlong *)(pbVar7 + 0x690) + 8) + 8))
            (*(longlong *)(pbVar7 + 0x690),param_1,param_2);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar7 + 0x8b8) + 8) + 8))
            (*(longlong *)(pbVar7 + 0x8b8),param_1,param_2);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar7 + 0x18) + 8) + 8))
            (*(longlong *)(pbVar7 + 0x18),param_1,param_2);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar7 + 0x240) + 8) + 8))
            (*(longlong *)(pbVar7 + 0x240),param_1,param_2);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar7 + 0x468) + 8) + 8))
            (*(longlong *)(pbVar7 + 0x468),param_1,param_2);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar7 + 0x14428) + 8) + 8))
            (*(longlong *)(pbVar7 + 0x14428),param_1);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar7 + 0x14720) + 8) + 8))
            (*(longlong *)(pbVar7 + 0x14720),param_1);
  FUN_016e9f40(param_1,FUN_014da210);
  cVar1 = FUN_016ee480(param_1);
  if (cVar1 == '\0') {
    FUN_00dd5540(pbVar7 + 0x143f0,FUN_00dd0460,2,pbVar7[0x10]);
    pbVar7[0x143f8] = 0;
    pbVar7[0x143f9] = 0;
    pbVar7[0x143fa] = 0;
    pbVar7[0x143fb] = 0;
    pbVar7[0x143fc] = 0;
    pbVar7[0x143fd] = 0;
    pbVar7[0x143fe] = 0;
    pbVar7[0x143ff] = 0;
    pbVar7[0x14400] = 0;
    pbVar7[0x14401] = 0;
    pbVar7[0x14402] = 0;
    pbVar7[0x14403] = 0;
    pbVar7[0x14404] = 0;
    pbVar7[0x14405] = 0;
    pbVar7[0x14406] = 0;
    pbVar7[0x14407] = 0;
    pbVar7[0x14408] = 0;
    pbVar7[0x14409] = 0;
    pbVar7[0x1440a] = 0;
    pbVar7[0x1440b] = 0;
    pbVar7[0x1440c] = 0;
    pbVar7[0x1440d] = 0;
    pbVar7[0x1440e] = 0;
    pbVar7[0x1440f] = 0;
    pbVar7[0x14410] = 0;
    pbVar7[0x14411] = 0;
    pbVar7[0x14412] = 0;
    pbVar7[0x14413] = 0;
    pbVar7[0x14414] = 0;
    pbVar7[0x14415] = 0;
    pbVar7[0x14416] = 0;
    pbVar7[0x14417] = 0;
    pbVar7[0x14418] = 0;
    pbVar7[0x14419] = 0;
    pbVar7[0x1441a] = 0;
    pbVar7[0x1441b] = 0;
    pbVar7[0x1441c] = 0;
    pbVar7[0x1441d] = 0;
    pbVar7[0x1441e] = 0;
    pbVar7[0x1441f] = 0;
    pbVar7[0x14420] = 0;
    pbVar7[0x14421] = 0;
    pbVar7[0x14422] = 0;
    pbVar7[0x14423] = 0;
  }
  sVar3 = FUN_016eb820(param_1,1,3);
  if (sVar3 == 1) {
    pbVar7[0x14a18] = 1;
  }
  else {
    pbVar7[0x14a18] = 2;
  }
  sVar3 = FUN_016eb820(param_1,1,4);
  *(int *)(pbVar7 + 0x14a1c) = (int)sVar3;
  sVar3 = FUN_016eb820(param_1,1,5);
  *(int *)(pbVar7 + 0x14a20) = (int)sVar3;
  sVar3 = FUN_016eb820(param_1,1,6);
  *(int *)(pbVar7 + 0x14a24) = (int)sVar3;
  pbVar7[0x14a28] = 0;
  pbVar7[0x14a29] = 0;
  pbVar7[0x14a2a] = 0;
  pbVar7[0x14a2b] = 0;
  pbVar7[0x14a2c] = 0;
  pbVar7[0x14a2d] = 0;
  uVar8 = FUN_016eb990(param_1,1,1);
  *(undefined8 *)(pbVar7 + 0xaf8) = uVar8;
  uVar8 = FUN_016eb990(param_1,1,2);
  *(undefined8 *)(pbVar7 + 0xb00) = uVar8;
  pbVar7[0xb10] = 0;
  pbVar7[0xb11] = 0;
  pbVar7[0xb12] = 0;
  pbVar7[0xb13] = 0;
  pbVar7[0xb14] = 0;
  pbVar7[0xb15] = 0;
  pbVar7[0xb16] = 0;
  pbVar7[0xb17] = 0;
  pbVar7[0xb08] = 0;
  pbVar7[0xb09] = 0;
  pbVar7[0xb0c] = 0;
  pbVar7[0xb0d] = 0;
  pbVar7[0xb0e] = 0;
  pbVar7[0xb0f] = 0;
  uVar8 = FUN_016eb990(param_1,1,1);
  *(undefined8 *)(pbVar7 + 0xa780) = uVar8;
  uVar8 = FUN_016eb990(param_1,1,2);
  *(undefined8 *)(pbVar7 + 0xa788) = uVar8;
  pbVar7[0xa798] = 0;
  pbVar7[0xa799] = 0;
  pbVar7[0xa79a] = 0;
  pbVar7[0xa79b] = 0;
  pbVar7[0xa79c] = 0;
  pbVar7[0xa79d] = 0;
  pbVar7[0xa79e] = 0;
  pbVar7[0xa79f] = 0;
  pbVar7[0xa790] = 0;
  pbVar7[0xa791] = 0;
  pbVar7[0xa794] = 0;
  pbVar7[0xa795] = 0;
  pbVar7[0xa796] = 0;
  pbVar7[0xa797] = 0;
  FUN_016e9f50(param_1,FUN_014daa00);
  uVar4 = FUN_016ea1b0(param_1,3);
  *(undefined2 *)(pbVar7 + 0x14a2e) = uVar4;
  return;
}

