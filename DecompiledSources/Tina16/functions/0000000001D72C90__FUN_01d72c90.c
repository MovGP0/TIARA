/* Ghidra address: 01d72c90 */
/* Ghidra symbol: FUN_01d72c90 */


void FUN_01d72c90(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  undefined4 uVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 unaff_RDI;
  undefined7 uVar7;
  double dVar8;
  double dVar9;
  undefined8 in_stack_ffffffffffffff40;
  undefined4 uVar11;
  ulonglong uVar10;
  char local_5b;
  char local_5a;
  char local_59;
  undefined8 *local_58;
  undefined1 local_4c;
  undefined1 local_4b;
  char local_4a;
  char local_49 [33];
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  local_4b = 0;
  local_4c = 0;
  local_5b = '\t';
  FUN_016ee260(param_1,&local_58,8,0);
  cVar1 = FUN_016ee480(param_1);
  if (cVar1 == '\0') {
    pbVar5 = (byte *)FUN_00dd1b70(0,&PTR_FUN_01d725a8);
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
  sVar3 = FUN_016ebd90(param_1);
  if (sVar3 == 0x3f6) {
    pbVar5[0x10] = 0;
    local_5a = '\0';
    local_59 = '\0';
  }
  else if (sVar3 == 0x44c) {
    pbVar5[0x10] = 1;
    local_5b = '\b';
    local_5a = '\x01';
    local_59 = '\x01';
  }
  else if (sVar3 == 0x44d) {
    pbVar5[0x10] = 2;
    local_5b = '\b';
    local_5a = '\0';
    local_59 = '\x01';
  }
  else {
    pbVar5[0x10] = 3;
    local_5b = '\a';
    local_5a = '\x01';
    local_59 = '\x02';
  }
  uVar7 = (undefined7)((ulonglong)unaff_RDI >> 8);
  cVar1 = FUN_016e9de0(param_1,CONCAT71(uVar7,8U - local_59) & 0xffffffff);
  if (cVar1 == '\0') {
    pbVar5[0x11] = 0;
    local_5b = local_5b + -1;
  }
  else {
    pbVar5[0x11] = 8U - local_59;
  }
  cVar1 = FUN_016e9de0(param_1,CONCAT71(uVar7,9U - local_59) & 0xffffffff);
  if (cVar1 == '\0') {
    pbVar5[0x12] = 0;
    local_5b = local_5b + -1;
  }
  else {
    pbVar5[0x12] = 9U - local_59;
  }
  local_49[0] = '\x01';
  local_4a = local_5b + '\x01';
  uVar4 = FUN_016eacf0(param_1,2,3);
  uVar10 = CONCAT44(uVar11,uVar4) & 0xffffffff000000ff;
  FUN_00dd5710(pbVar5 + 0x18,1,pbVar5[0x11],local_49,&local_4a,uVar10,1,1,0,0,0,0,0,0xc);
  uVar10 = CONCAT44((int)(uVar10 >> 0x20),uVar4) & 0xffffffff000000ff;
  FUN_00dd5710(pbVar5 + 0x240,3,pbVar5[0x11],local_49,&local_4a,uVar10,1,1,0,0,0,0,0,0xc);
  uVar10 = CONCAT44((int)(uVar10 >> 0x20),uVar4) & 0xffffffff000000ff;
  FUN_00dd5710(pbVar5 + 0x468,2,pbVar5[0x11],local_49,&local_4a,uVar10,1,1,0,0,0,0,0,0xc);
  uVar11 = (undefined4)(uVar10 >> 0x20);
  if ((pbVar5[0x10] == 0) || (pbVar5[0x10] == 1)) {
    uVar10 = CONCAT44(uVar11,uVar4) & 0xffffffff000000ff;
    FUN_00dd5710(pbVar5 + 0x690,7,pbVar5[0x11],local_49,&local_4a,uVar10,1,1,0,0,0,0,0,0xc);
    uVar11 = (undefined4)(uVar10 >> 0x20);
  }
  if ((pbVar5[0x10] == 0) || (pbVar5[0x10] == 2)) {
    uVar10 = CONCAT44(uVar11,uVar4) & 0xffffffff000000ff;
    FUN_00dd5710(pbVar5 + 0x8b8,4,pbVar5[0x11],local_49,&local_4a,uVar10,1,1,0,0,0,0,0,0xc);
    uVar11 = (undefined4)(uVar10 >> 0x20);
  }
  uVar4 = FUN_016eacf0(param_1,3,3);
  uVar10 = CONCAT44(uVar11,uVar4) & 0xffffffff000000ff;
  FUN_00dd58f0(pbVar5 + 0xa7a0,'\x06' - local_5a,pbVar5[0x11],local_49,&local_4a,uVar10,0,1,0,0,0,0)
  ;
  FUN_00dd58f0(pbVar5 + 0xaa98,'\x05' - local_5a,pbVar5[0x11],local_49,&local_4a,
               CONCAT44((int)(uVar10 >> 0x20),uVar4) & 0xffffffff000000ff,0,1,0,0,0,0);
  cVar1 = FUN_016eacf0(param_1,4,2);
  dVar8 = (double)FUN_016eb990(param_1,1,2);
  dVar9 = (double)FUN_016eb990(param_1,1,1);
  if ((dVar8 < 1e-15) && (dVar9 < 1e-15)) {
    cVar1 = '\0';
  }
  if (cVar1 == '\0') {
    *(byte **)(pbVar5 + 0xb18) = pbVar5 + 0xb20;
    FUN_00dd2c10(pbVar5 + 0xb20,&PTR_FUN_00dd01b8,
                 *(undefined1 *)(*(longlong *)(pbVar5 + 0xa7a0) + 1),pbVar5[0x11],&local_4b,
                 &local_4c);
  }
  else {
    *(byte **)(pbVar5 + 0xb18) = pbVar5 + 0xb20;
    FUN_00dd2ca0(pbVar5 + 0xb20,&PTR_FUN_00dd01f0,
                 *(undefined1 *)(*(longlong *)(pbVar5 + 0xa7a0) + 1),pbVar5[0x11],&local_4b,
                 &local_4c);
  }
  *(byte *)(*(longlong *)(pbVar5 + 0x18) + 6) = *pbVar5;
  *(byte *)(*(longlong *)(pbVar5 + 0x240) + 6) = *pbVar5;
  if ((pbVar5[0x10] == 0) || (pbVar5[0x10] == 1)) {
    *(byte *)(*(longlong *)(pbVar5 + 0x690) + 6) = *pbVar5;
  }
  if ((pbVar5[0x10] == 0) || (pbVar5[0x10] == 2)) {
    *(byte *)(*(longlong *)(pbVar5 + 0x8b8) + 6) = *pbVar5;
  }
  *(byte *)(*(longlong *)(pbVar5 + 0x468) + 6) = *pbVar5;
  *(byte *)(*(longlong *)(pbVar5 + 0xa7a0) + 6) = *pbVar5;
  *(byte *)(*(longlong *)(pbVar5 + 0xaa98) + 6) = *pbVar5;
  *(byte *)(*(longlong *)(pbVar5 + 0xb18) + 6) = *pbVar5;
  FUN_016e9e20(param_1,local_49[0] + -1);
  FUN_016e9cd0(param_1,(local_4a - local_5b) + -1);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar5 + 0x18) + 8) + 8))
            (*(longlong *)(pbVar5 + 0x18),param_1,param_2);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar5 + 0x240) + 8) + 8))
            (*(longlong *)(pbVar5 + 0x240),param_1,param_2);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar5 + 0x468) + 8) + 8))
            (*(longlong *)(pbVar5 + 0x468),param_1,param_2);
  if ((pbVar5[0x10] == 0) || (pbVar5[0x10] == 2)) {
    (**(code **)(*(longlong *)(*(longlong *)(pbVar5 + 0x8b8) + 8) + 8))
              (*(longlong *)(pbVar5 + 0x8b8),param_1,param_2);
  }
  if ((pbVar5[0x10] == 0) || (pbVar5[0x10] == 1)) {
    (**(code **)(*(longlong *)(*(longlong *)(pbVar5 + 0x690) + 8) + 8))
              (*(longlong *)(pbVar5 + 0x690),param_1,param_2);
  }
  (**(code **)(*(longlong *)(*(longlong *)(pbVar5 + 0xa7a0) + 8) + 8))
            (*(longlong *)(pbVar5 + 0xa7a0),param_1);
  (**(code **)(*(longlong *)(*(longlong *)(pbVar5 + 0xaa98) + 8) + 8))
            (*(longlong *)(pbVar5 + 0xaa98),param_1);
  FUN_016e9f40(param_1,FUN_01d725e0);
  cVar1 = FUN_016ee480();
  if (cVar1 == '\0') {
    FUN_00dd5540(pbVar5 + 0xae0,FUN_00dd0460,2,pbVar5[0x11]);
    pbVar5[0xae8] = 0;
    pbVar5[0xae9] = 0;
    pbVar5[0xaea] = 0;
    pbVar5[0xaeb] = 0;
    pbVar5[0xaec] = 0;
    pbVar5[0xaed] = 0;
    pbVar5[0xaee] = 0;
    pbVar5[0xaef] = 0;
    pbVar5[0xaf0] = 0;
    pbVar5[0xaf1] = 0;
    pbVar5[0xaf2] = 0;
    pbVar5[0xaf3] = 0;
    pbVar5[0xaf4] = 0;
    pbVar5[0xaf5] = 0;
    pbVar5[0xaf6] = 0;
    pbVar5[0xaf7] = 0;
    pbVar5[0xaf8] = 0;
    pbVar5[0xaf9] = 0;
    pbVar5[0xafa] = 0;
    pbVar5[0xafb] = 0;
    pbVar5[0xafc] = 0;
    pbVar5[0xafd] = 0;
    pbVar5[0xafe] = 0;
    pbVar5[0xaff] = 0;
    pbVar5[0xb00] = 0;
    pbVar5[0xb01] = 0;
    pbVar5[0xb02] = 0;
    pbVar5[0xb03] = 0;
    pbVar5[0xb04] = 0;
    pbVar5[0xb05] = 0;
    pbVar5[0xb06] = 0;
    pbVar5[0xb07] = 0;
    pbVar5[0xb08] = 0;
    pbVar5[0xb09] = 0;
    pbVar5[0xb0a] = 0;
    pbVar5[0xb0b] = 0;
    pbVar5[0xb0c] = 0;
    pbVar5[0xb0d] = 0;
    pbVar5[0xb0e] = 0;
    pbVar5[0xb0f] = 0;
    pbVar5[0xb10] = 0;
    pbVar5[0xb11] = 0;
    pbVar5[0xb12] = 0;
    pbVar5[0xb13] = 0;
  }
  *(double *)(pbVar5 + 0xb30) = dVar9;
  *(double *)(pbVar5 + 0xb38) = dVar8;
  pbVar5[0xb48] = 0;
  pbVar5[0xb49] = 0;
  pbVar5[0xb4a] = 0;
  pbVar5[0xb4b] = 0;
  pbVar5[0xb4c] = 0;
  pbVar5[0xb4d] = 0;
  pbVar5[0xb4e] = 0;
  pbVar5[0xb4f] = 0;
  pbVar5[0xb40] = 0;
  pbVar5[0xb41] = 0;
  pbVar5[0xb44] = 0;
  pbVar5[0xb45] = 0;
  pbVar5[0xb46] = 0;
  pbVar5[0xb47] = 0;
  FUN_016e9f50(param_1,FUN_01d72c70);
  return;
}

