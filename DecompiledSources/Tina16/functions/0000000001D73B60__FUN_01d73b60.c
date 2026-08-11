/* Ghidra address: 01d73b60 */
/* Ghidra symbol: FUN_01d73b60 */


void FUN_01d73b60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined8 in_stack_ffffffffffffff40;
  ulonglong uVar9;
  char local_59;
  undefined8 *local_58;
  undefined1 local_4c;
  undefined1 local_4b;
  char local_4a;
  char local_49 [33];
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  local_4b = 0;
  local_4c = 0;
  local_59 = '\b';
  FUN_016ee260(param_1,&local_58,8,0);
  cVar1 = FUN_016ee480(param_1);
  if (cVar1 == '\0') {
    pbVar5 = (byte *)FUN_00dd1b70(0,&PTR_FUN_01d73568);
    *local_58 = pbVar5;
  }
  else {
    pbVar5 = (byte *)*local_58;
  }
  uVar6 = FUN_016ebdc0(param_1);
  bVar2 = FUN_01d03580(uVar6);
  *pbVar5 = bVar2;
  if ((8 < *pbVar5) || (*pbVar5 == 0)) {
    *pbVar5 = 1;
  }
  cVar1 = FUN_016e9de0(param_1,7);
  if (cVar1 == '\0') {
    pbVar5[0x10] = 0;
    local_59 = '\a';
  }
  else {
    pbVar5[0x10] = 7;
  }
  cVar1 = FUN_016e9de0(param_1,8);
  if (cVar1 == '\0') {
    pbVar5[0x11] = 0;
    local_59 = local_59 + -1;
  }
  else {
    pbVar5[0x11] = 8;
  }
  local_49[0] = '\x01';
  local_4a = local_59 + '\x01';
  uVar3 = FUN_016eacf0(param_1,2,3);
  uVar9 = CONCAT44(uVar4,uVar3) & 0xffffffff000000ff;
  FUN_00dd5710(pbVar5 + 0x690,1,pbVar5[0x10],local_49,&local_4a,uVar9,1,1,0,0,0,0,0,0xc);
  uVar9 = CONCAT44((int)(uVar9 >> 0x20),uVar3) & 0xffffffff000000ff;
  FUN_00dd5710(pbVar5 + 0x18,6,pbVar5[0x10],local_49,&local_4a,uVar9,1,1,0,0,0,0,0,0xc);
  uVar9 = CONCAT44((int)(uVar9 >> 0x20),uVar3) & 0xffffffff000000ff;
  FUN_00dd5710(pbVar5 + 0x240,3,pbVar5[0x10],local_49,&local_4a,uVar9,1,1,0,0,0,0,0,0xc);
  uVar9 = CONCAT44((int)(uVar9 >> 0x20),uVar3) & 0xffffffff000000ff;
  FUN_00dd5710(pbVar5 + 0x468,2,pbVar5[0x10],local_49,&local_4a,uVar9,1,1,0,0,0,0,0,0xc);
  uVar3 = (undefined4)(uVar9 >> 0x20);
  uVar4 = FUN_016eacf0(param_1,3,3);
  uVar9 = CONCAT44(uVar3,uVar4) & 0xffffffff000000ff;
  FUN_00dd58f0(pbVar5 + 0xa578,5,pbVar5[0x10],local_49,&local_4a,uVar9,0,1,0,0,0,0);
  FUN_00dd58f0(pbVar5 + 0xa870,4,pbVar5[0x10],local_49,&local_4a,
               CONCAT44((int)(uVar9 >> 0x20),uVar4) & 0xffffffff000000ff,0,1,0,0,0,0);
  cVar1 = FUN_016eacf0(param_1,4,2);
  dVar7 = (double)FUN_016eb990(param_1,1,2);
  dVar8 = (double)FUN_016eb990(param_1,1,1);
  if ((dVar7 < 1e-15) && (dVar8 < 1e-15)) {
    cVar1 = '\0';
  }
  if (cVar1 == '\0') {
    *(byte **)(pbVar5 + 0x8b8) = pbVar5 + 0x8c0;
    FUN_00dd2c10(pbVar5 + 0x8c0,&PTR_FUN_00dd01b8,
                 *(undefined1 *)(*(longlong *)(pbVar5 + 0xa578) + 1),pbVar5[0x10],&local_4b,
                 &local_4c);
  }
  else {
    *(byte **)(pbVar5 + 0x8b8) = pbVar5 + 0x8c0;
    FUN_00dd2ca0(pbVar5 + 0x8c0,&PTR_FUN_00dd01f0,
                 *(undefined1 *)(*(longlong *)(pbVar5 + 0xa578) + 1),pbVar5[0x10],&local_4b,
                 &local_4c);
  }
  FUN_016e9e20(param_1,local_49[0] + -1);
  FUN_016e9cd0(param_1,(local_4a - local_59) + -1);
  *(byte *)(*(longlong *)(pbVar5 + 0x18) + 6) = *pbVar5;
  *(byte *)(*(longlong *)(pbVar5 + 0x240) + 6) = *pbVar5;
  *(byte *)(*(longlong *)(pbVar5 + 0x468) + 6) = *pbVar5;
  *(byte *)(*(longlong *)(pbVar5 + 0x690) + 6) = *pbVar5;
  *(byte *)(*(longlong *)(pbVar5 + 0xa578) + 6) = *pbVar5;
  *(byte *)(*(longlong *)(pbVar5 + 0xa870) + 6) = *pbVar5;
  *(byte *)(*(longlong *)(pbVar5 + 0x8b8) + 6) = *pbVar5;
  (**(code **)(*(longlong *)(*(longlong *)(pbVar5 + 0x690) + 8) + 8))
            (*(longlong *)(pbVar5 + 0x690),param_1,param_2);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar5 + 0x18) + 8) + 8))
            (*(longlong *)(pbVar5 + 0x18),param_1,param_2);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar5 + 0x240) + 8) + 8))
            (*(longlong *)(pbVar5 + 0x240),param_1,param_2);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar5 + 0x468) + 8) + 8))
            (*(longlong *)(pbVar5 + 0x468),param_1,param_2);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar5 + 0xa578) + 8) + 8))
            (*(longlong *)(pbVar5 + 0xa578),param_1);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar5 + 0xa870) + 8) + 8))
            (*(longlong *)(pbVar5 + 0xa870),param_1);
  FUN_016e9f40(param_1,FUN_01d73580);
  cVar1 = FUN_016ee480();
  if (cVar1 == '\0') {
    FUN_00dd5540(pbVar5 + 0xa540,FUN_00dd0460,2,pbVar5[0x10]);
    pbVar5[0xa548] = 0;
    pbVar5[0xa549] = 0;
    pbVar5[0xa54a] = 0;
    pbVar5[0xa54b] = 0;
    pbVar5[0xa54c] = 0;
    pbVar5[0xa54d] = 0;
    pbVar5[0xa54e] = 0;
    pbVar5[0xa54f] = 0;
    pbVar5[0xa550] = 0;
    pbVar5[0xa551] = 0;
    pbVar5[0xa552] = 0;
    pbVar5[0xa553] = 0;
    pbVar5[0xa554] = 0;
    pbVar5[0xa555] = 0;
    pbVar5[0xa556] = 0;
    pbVar5[0xa557] = 0;
    pbVar5[0xa558] = 0;
    pbVar5[0xa559] = 0;
    pbVar5[0xa55a] = 0;
    pbVar5[0xa55b] = 0;
    pbVar5[0xa55c] = 0;
    pbVar5[0xa55d] = 0;
    pbVar5[0xa55e] = 0;
    pbVar5[0xa55f] = 0;
    pbVar5[0xa560] = 0;
    pbVar5[0xa561] = 0;
    pbVar5[0xa562] = 0;
    pbVar5[0xa563] = 0;
    pbVar5[0xa564] = 0;
    pbVar5[0xa565] = 0;
    pbVar5[0xa566] = 0;
    pbVar5[0xa567] = 0;
    pbVar5[0xa568] = 0;
    pbVar5[0xa569] = 0;
    pbVar5[0xa56a] = 0;
    pbVar5[0xa56b] = 0;
    pbVar5[0xa56c] = 0;
    pbVar5[0xa56d] = 0;
    pbVar5[0xa56e] = 0;
    pbVar5[0xa56f] = 0;
    pbVar5[0xa570] = 0;
    pbVar5[0xa571] = 0;
    pbVar5[0xa572] = 0;
    pbVar5[0xa573] = 0;
  }
  *(double *)(pbVar5 + 0x8d0) = dVar8;
  *(double *)(pbVar5 + 0x8d8) = dVar7;
  pbVar5[0x8e8] = 0;
  pbVar5[0x8e9] = 0;
  pbVar5[0x8ea] = 0;
  pbVar5[0x8eb] = 0;
  pbVar5[0x8ec] = 0;
  pbVar5[0x8ed] = 0;
  pbVar5[0x8ee] = 0;
  pbVar5[0x8ef] = 0;
  pbVar5[0x8e0] = 0;
  pbVar5[0x8e1] = 0;
  pbVar5[0x8e4] = 0;
  pbVar5[0x8e5] = 0;
  pbVar5[0x8e6] = 0;
  pbVar5[0x8e7] = 0;
  FUN_016e9f50(param_1,FUN_01d73b40);
  return;
}

