/* Ghidra address: 01d70530 */
/* Ghidra symbol: FUN_01d70530 */


void FUN_01d70530(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar12;
  ulonglong uVar11;
  char local_59;
  undefined8 *local_58;
  undefined1 local_4c;
  undefined1 local_4b;
  char local_4a;
  char local_49 [33];
  
  uVar12 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  local_4b = 0;
  local_4c = 0;
  local_59 = '\x05';
  cVar4 = '\0';
  sVar5 = FUN_016ebd90(param_1);
  if (sVar5 == 0x3ef) {
    local_59 = '\x05';
  }
  else if (sVar5 == 0x44f) {
    cVar4 = '\x02';
    local_59 = '\a';
  }
  FUN_016ee260(param_1,&local_58,8,0);
  cVar2 = FUN_016ee480(param_1);
  if (cVar2 == '\0') {
    pbVar7 = (byte *)FUN_00dd1b70(0,&PTR_FUN_01d70118);
    *local_58 = pbVar7;
  }
  else {
    pbVar7 = (byte *)*local_58;
  }
  uVar8 = FUN_016ebdc0(param_1);
  bVar3 = FUN_01d03580(uVar8);
  *pbVar7 = bVar3;
  if ((8 < *pbVar7) || (*pbVar7 == 0)) {
    *pbVar7 = 1;
  }
  cVar2 = FUN_016e9de0(param_1,4);
  if (cVar2 == '\0') {
    pbVar7[0x10] = 0;
    local_59 = local_59 + -1;
  }
  else {
    pbVar7[0x10] = cVar4 + 4;
  }
  cVar2 = FUN_016e9de0(param_1,5);
  if (cVar2 == '\0') {
    pbVar7[0x12] = 0;
    local_59 = local_59 + -1;
  }
  else {
    pbVar7[0x12] = cVar4 + 5;
  }
  pbVar7[0x11] = cVar4 + 3;
  local_49[0] = '\x01';
  local_4a = local_59 + '\x01';
  uVar6 = FUN_016eacf0(param_1,2,3);
  uVar11 = CONCAT44(uVar12,uVar6) & 0xffffffff000000ff;
  FUN_00dd5710(pbVar7 + 0x468,1,pbVar7[0x10],local_49,&local_4a,uVar11,1,1,0,0,0,0,0,0xc);
  uVar11 = CONCAT44((int)(uVar11 >> 0x20),uVar6) & 0xffffffff000000ff;
  FUN_00dd5710(pbVar7 + 0x690,2,pbVar7[0x10],local_49,&local_4a,uVar11,1,1,0,0,0,0,0,0xc);
  uVar12 = (undefined4)(uVar11 >> 0x20);
  sVar5 = FUN_016ebd90(param_1);
  if (sVar5 == 0x44f) {
    uVar11 = CONCAT44(uVar12,uVar6) & 0xffffffff000000ff;
    FUN_00dd5710(pbVar7 + 0x18,3,pbVar7[0x10],local_49,&local_4a,uVar11,1,1,0,0,0,0,0,0xc);
    uVar11 = CONCAT44((int)(uVar11 >> 0x20),uVar6) & 0xffffffff000000ff;
    FUN_00dd5710(pbVar7 + 0x240,4,pbVar7[0x10],local_49,&local_4a,uVar11,1,1,0,0,0,0,0,0xc);
    uVar12 = (undefined4)(uVar11 >> 0x20);
  }
  uVar6 = FUN_016eacf0(param_1,3,3);
  FUN_00dd58f0(pbVar7 + 0xa578,pbVar7[0x11],pbVar7[0x10],local_49,&local_4a,
               CONCAT44(uVar12,uVar6) & 0xffffffff000000ff,0,1,0,0,0,0);
  pbVar1 = pbVar7 + 0x8f0;
  cVar4 = FUN_016eacf0(param_1,4,2);
  dVar9 = (double)FUN_016eb990(param_1,1,2);
  dVar10 = (double)FUN_016eb990(param_1,1,1);
  if ((dVar9 < 1e-15) && (dVar10 < 1e-15)) {
    cVar4 = '\0';
  }
  if (cVar4 == '\0') {
    *(byte **)pbVar1 = pbVar7 + 0x8f8;
    FUN_00dd2c10(pbVar7 + 0x8f8,&PTR_FUN_00dd01b8,
                 *(undefined1 *)(*(longlong *)(pbVar7 + 0xa578) + 1),pbVar7[0x10],&local_4b,
                 &local_4c);
  }
  else {
    *(byte **)pbVar1 = pbVar7 + 0x8f8;
    FUN_00dd2ca0(pbVar7 + 0x8f8,&PTR_FUN_00dd01f0,
                 *(undefined1 *)(*(longlong *)(pbVar7 + 0xa578) + 1),pbVar7[0x10],&local_4b,
                 &local_4c);
  }
  pbVar7[0x11] = *(byte *)(*(longlong *)pbVar1 + 1);
  *(byte *)(*(longlong *)(pbVar7 + 0x468) + 6) = *pbVar7;
  *(byte *)(*(longlong *)(pbVar7 + 0x690) + 6) = *pbVar7;
  *(byte *)(*(longlong *)(pbVar7 + 0xa578) + 6) = *pbVar7;
  *(byte *)(*(longlong *)(pbVar7 + 0x8f0) + 6) = *pbVar7;
  FUN_016e9e20(param_1,local_49[0] + -1);
  FUN_016e9cd0(param_1,(local_4a - local_59) + -1);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar7 + 0x468) + 8) + 8))
            (*(longlong *)(pbVar7 + 0x468),param_1,param_2);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar7 + 0x690) + 8) + 8))
            (*(longlong *)(pbVar7 + 0x690),param_1,param_2);
  sVar5 = FUN_016ebd90(param_1);
  if (sVar5 == 0x44f) {
    *(byte *)(*(longlong *)(pbVar7 + 0x18) + 6) = *pbVar7;
    *(byte *)(*(longlong *)(pbVar7 + 0x240) + 6) = *pbVar7;
    (**(code **)(*(longlong *)(*(longlong *)(pbVar7 + 0x18) + 8) + 8))
              (*(longlong *)(pbVar7 + 0x18),param_1,param_2);
    (**(code **)(*(longlong *)(*(longlong *)(pbVar7 + 0x240) + 8) + 8))
              (*(longlong *)(pbVar7 + 0x240),param_1,param_2);
  }
  (**(code **)(*(longlong *)(*(longlong *)(pbVar7 + 0xa578) + 8) + 8))
            (*(longlong *)(pbVar7 + 0xa578),param_1);
  FUN_016e9f40(param_1,FUN_01d701c0);
  cVar4 = FUN_016ee480();
  if (cVar4 == '\0') {
    FUN_00dd5540(pbVar7 + 0x8b8,FUN_00dd0460,2,pbVar7[0x10]);
    pbVar7[0x8c0] = 0;
    pbVar7[0x8c1] = 0;
    pbVar7[0x8c2] = 0;
    pbVar7[0x8c3] = 0;
    pbVar7[0x8c4] = 0;
    pbVar7[0x8c5] = 0;
    pbVar7[0x8c6] = 0;
    pbVar7[0x8c7] = 0;
    pbVar7[0x8c8] = 0;
    pbVar7[0x8c9] = 0;
    pbVar7[0x8ca] = 0;
    pbVar7[0x8cb] = 0;
    pbVar7[0x8cc] = 0;
    pbVar7[0x8cd] = 0;
    pbVar7[0x8ce] = 0;
    pbVar7[0x8cf] = 0;
    pbVar7[0x8d0] = 0;
    pbVar7[0x8d1] = 0;
    pbVar7[0x8d2] = 0;
    pbVar7[0x8d3] = 0;
    pbVar7[0x8d4] = 0;
    pbVar7[0x8d5] = 0;
    pbVar7[0x8d6] = 0;
    pbVar7[0x8d7] = 0;
    pbVar7[0x8d8] = 0;
    pbVar7[0x8d9] = 0;
    pbVar7[0x8da] = 0;
    pbVar7[0x8db] = 0;
    pbVar7[0x8dc] = 0;
    pbVar7[0x8dd] = 0;
    pbVar7[0x8de] = 0;
    pbVar7[0x8df] = 0;
    pbVar7[0x8e0] = 0;
    pbVar7[0x8e1] = 0;
    pbVar7[0x8e2] = 0;
    pbVar7[0x8e3] = 0;
    pbVar7[0x8e4] = 0;
    pbVar7[0x8e5] = 0;
    pbVar7[0x8e6] = 0;
    pbVar7[0x8e7] = 0;
    pbVar7[0x8e8] = 0;
    pbVar7[0x8e9] = 0;
    pbVar7[0x8ea] = 0;
    pbVar7[0x8eb] = 0;
  }
  *(double *)(pbVar7 + 0x908) = dVar10;
  *(double *)(pbVar7 + 0x910) = dVar9;
  pbVar7[0x920] = 0;
  pbVar7[0x921] = 0;
  pbVar7[0x922] = 0;
  pbVar7[0x923] = 0;
  pbVar7[0x924] = 0;
  pbVar7[0x925] = 0;
  pbVar7[0x926] = 0;
  pbVar7[0x927] = 0;
  pbVar7[0x918] = 0;
  pbVar7[0x919] = 0;
  pbVar7[0x91c] = 0;
  pbVar7[0x91d] = 0;
  pbVar7[0x91e] = 0;
  pbVar7[0x91f] = 0;
  FUN_016e9f50(param_1,FUN_01d70510);
  return;
}

