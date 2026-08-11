/* Ghidra address: 01d711b0 */
/* Ghidra symbol: FUN_01d711b0 */


void FUN_01d711b0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined8 in_stack_ffffffffffffff40;
  ulonglong uVar9;
  char local_59;
  byte *local_58;
  undefined1 local_4c;
  undefined1 local_4b;
  char local_4a;
  char local_49 [33];
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  local_4b = 0;
  local_4c = 0;
  local_59 = '\x06';
  pbVar5 = (byte *)FUN_00dd1b70(0,&PTR_FUN_01d70c38);
  local_58 = pbVar5;
  uVar6 = FUN_016ebdc0(param_1);
  bVar1 = FUN_01d03580(uVar6);
  *pbVar5 = bVar1;
  if ((8 < *pbVar5) || (*pbVar5 == 0)) {
    *pbVar5 = 1;
  }
  cVar2 = FUN_016e9de0(param_1,5);
  if (cVar2 == '\0') {
    pbVar5[0x10] = 0;
    local_59 = '\x05';
  }
  else {
    pbVar5[0x10] = 5;
  }
  cVar2 = FUN_016e9de0(param_1,6);
  if (cVar2 == '\0') {
    pbVar5[0x11] = 0;
    local_59 = local_59 + -1;
  }
  else {
    pbVar5[0x11] = 6;
  }
  local_49[0] = '\x01';
  local_4a = local_59 + '\x01';
  uVar3 = FUN_016eacf0(param_1,2,3);
  uVar9 = CONCAT44(uVar4,uVar3) & 0xffffffff000000ff;
  FUN_00dd5710(pbVar5 + 0x18,1,pbVar5[0x10],local_49,&local_4a,uVar9,1,1,0,0,0,0,0,0xc);
  uVar9 = CONCAT44((int)(uVar9 >> 0x20),uVar3) & 0xffffffff000000ff;
  FUN_00dd5710(pbVar5 + 0x240,2,pbVar5[0x10],local_49,&local_4a,uVar9,1,1,0,0,0,0,0,0xc);
  uVar9 = CONCAT44((int)(uVar9 >> 0x20),uVar3) & 0xffffffff000000ff;
  FUN_00dd5710(pbVar5 + 0x468,4,pbVar5[0x10],local_49,&local_4a,uVar9,1,1,0,0,0,0,0,0xc);
  uVar3 = (undefined4)(uVar9 >> 0x20);
  uVar4 = FUN_016eacf0(param_1,3,3);
  FUN_00dd58f0(pbVar5 + 0xa350,3,pbVar5[0x10],local_49,&local_4a,
               CONCAT44(uVar3,uVar4) & 0xffffffff000000ff,0,1,0,0,0,0);
  cVar2 = FUN_016eacf0(param_1,4,2);
  dVar7 = (double)FUN_016eb990(param_1,1,2);
  dVar8 = (double)FUN_016eb990(param_1,1,1);
  if ((dVar7 < 1e-15) && (dVar8 < 1e-15)) {
    cVar2 = '\0';
  }
  if (cVar2 == '\0') {
    *(byte **)(pbVar5 + 0x6c8) = pbVar5 + 0x6d0;
    FUN_00dd2c10(pbVar5 + 0x6d0,&PTR_FUN_00dd01b8,
                 *(undefined1 *)(*(longlong *)(pbVar5 + 0xa350) + 1),pbVar5[0x10],&local_4b,
                 &local_4c);
  }
  else {
    *(byte **)(pbVar5 + 0x6c8) = pbVar5 + 0x6d0;
    FUN_00dd2ca0(pbVar5 + 0x6d0,&PTR_FUN_00dd01f0,
                 *(undefined1 *)(*(longlong *)(pbVar5 + 0xa350) + 1),pbVar5[0x10],&local_4b,
                 &local_4c);
  }
  *(byte *)(*(longlong *)(pbVar5 + 0x18) + 6) = *pbVar5;
  *(byte *)(*(longlong *)(pbVar5 + 0x240) + 6) = *pbVar5;
  *(byte *)(*(longlong *)(pbVar5 + 0x468) + 6) = *pbVar5;
  *(byte *)(*(longlong *)(pbVar5 + 0xa350) + 6) = *pbVar5;
  *(byte *)(*(longlong *)(pbVar5 + 0x6c8) + 6) = *pbVar5;
  FUN_016e9e20(param_1,local_49[0] + -1);
  FUN_016e9cd0(param_1,(local_4a - local_59) + -1);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar5 + 0x18) + 8) + 8))
            (*(longlong *)(pbVar5 + 0x18),param_1,param_2);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar5 + 0x240) + 8) + 8))
            (*(longlong *)(pbVar5 + 0x240),param_1,param_2);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar5 + 0x468) + 8) + 8))
            (*(longlong *)(pbVar5 + 0x468),param_1,param_2);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar5 + 0xa350) + 8) + 8))
            (*(longlong *)(pbVar5 + 0xa350),param_1);
  FUN_016e9f40(param_1,FUN_01d70c60);
  FUN_00dd5540(pbVar5 + 0x690,FUN_00dd0460,4,pbVar5[0x10]);
  pbVar5[0x698] = 0;
  pbVar5[0x699] = 0;
  pbVar5[0x69a] = 0;
  pbVar5[0x69b] = 0;
  pbVar5[0x69c] = 0;
  pbVar5[0x69d] = 0;
  pbVar5[0x69e] = 0;
  pbVar5[0x69f] = 0;
  pbVar5[0x6a0] = 0;
  pbVar5[0x6a1] = 0;
  pbVar5[0x6a2] = 0;
  pbVar5[0x6a3] = 0;
  pbVar5[0x6a4] = 0;
  pbVar5[0x6a5] = 0;
  pbVar5[0x6a6] = 0;
  pbVar5[0x6a7] = 0;
  pbVar5[0x6a8] = 0;
  pbVar5[0x6a9] = 0;
  pbVar5[0x6aa] = 0;
  pbVar5[0x6ab] = 0;
  pbVar5[0x6ac] = 0;
  pbVar5[0x6ad] = 0;
  pbVar5[0x6ae] = 0;
  pbVar5[0x6af] = 0;
  pbVar5[0x6b0] = 0;
  pbVar5[0x6b1] = 0;
  pbVar5[0x6b2] = 0;
  pbVar5[0x6b3] = 0;
  pbVar5[0x6b4] = 0;
  pbVar5[0x6b5] = 0;
  pbVar5[0x6b6] = 0;
  pbVar5[0x6b7] = 0;
  pbVar5[0x6b8] = 0;
  pbVar5[0x6b9] = 0;
  pbVar5[0x6ba] = 0;
  pbVar5[0x6bb] = 0;
  *(double *)(pbVar5 + 0x6e0) = dVar8;
  *(double *)(pbVar5 + 0x6e8) = dVar7;
  pbVar5[0x6f8] = 0;
  pbVar5[0x6f9] = 0;
  pbVar5[0x6fa] = 0;
  pbVar5[0x6fb] = 0;
  pbVar5[0x6fc] = 0;
  pbVar5[0x6fd] = 0;
  pbVar5[0x6fe] = 0;
  pbVar5[0x6ff] = 0;
  pbVar5[0x6f0] = 0;
  pbVar5[0x6f1] = 0;
  pbVar5[0x6f4] = 0;
  pbVar5[0x6f5] = 0;
  pbVar5[0x6f6] = 0;
  pbVar5[0x6f7] = 0;
  FUN_016ea050(param_1,&local_58,8);
  FUN_016e9f50(param_1,FUN_01d71190);
  return;
}

