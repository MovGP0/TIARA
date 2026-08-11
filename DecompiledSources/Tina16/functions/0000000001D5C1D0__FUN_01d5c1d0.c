/* Ghidra address: 01d5c1d0 */
/* Ghidra symbol: FUN_01d5c1d0 */


void FUN_01d5c1d0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar7;
  ulonglong in_stack_fffffffffffffe80;
  undefined1 local_158 [32];
  undefined8 local_138;
  char local_129;
  undefined8 local_128;
  undefined1 local_120 [176];
  double local_70 [3];
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_47;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  local_138 = 0;
  pdVar4 = (double *)&DAT_01ffead8;
  pdVar5 = local_70;
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar5 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    pdVar5 = pdVar5 + 1;
  }
  if (*(char *)(param_2 + 0x339) == '\0') {
    local_47 = 0;
  }
  else {
    local_47 = FUN_016eacf0(param_1,10,3);
  }
  FUN_016ea450(local_158,param_1,2);
  FUN_004169a0(&local_138,local_158);
  uVar2 = FUN_016ebdc0(param_1);
  local_30 = FUN_01b08260(param_2,uVar2,local_138,&DAT_01ffebd0,CONCAT44(uVar7,1),
                          in_stack_fffffffffffffe80 & 0xffffffffffffff00);
  local_38 = FUN_016eb0a0(param_1,3);
  uVar2 = FUN_00b90650(0x3ff0000000000000,local_38);
  local_38 = FUN_00b90620(0,uVar2);
  local_40 = FUN_016ea920(param_1,4,5,&local_129);
  if (local_129 == '\x01') {
    local_40 = 0x3fb999999999999a;
  }
  else if (local_129 == '\x02') {
    local_40 = 0x3f847ae147ae147b;
  }
  else if (local_129 == '\x03') {
    local_40 = 0x3f1a36e2eb1c432d;
  }
  else if (local_129 == '\x04') {
    local_40 = 0x3e45798ee2308c3a;
  }
  uVar2 = FUN_00b90650(0x3ff0000000000000,local_40);
  local_40 = FUN_00b90620(0,uVar2);
  cVar1 = FUN_016eacf0(param_1,5,2);
  local_70[0] = (double)FUN_016eb0a0(param_1,6);
  local_70[0] = local_70[0] + 273.15;
  if (cVar1 == '\0') {
    dVar6 = (double)FUN_016ed770(param_2);
    local_70[0] = local_70[0] + dVar6;
  }
  local_70[2] = (double)FUN_016eb0a0(param_1,7);
  cVar1 = FUN_016eacf0(param_1,8,2);
  local_58 = cVar1 != '\0';
  local_50 = FUN_016ea920(param_1,9,2,&local_48);
  FUN_016ebb00(param_1,1,local_120,0xb0);
  FUN_016ee260(param_1,&local_128,0x140,0);
  FUN_01d5be90(param_1,param_2,1,2,local_70,local_120,local_128);
  FUN_016e9f40(param_1,FUN_01d5c180);
  FUN_016e9f60(param_1,FUN_01d5bc80);
  FUN_016e9fb0(param_1,FUN_01d5bcc0);
  FUN_016e9fd0(param_1,FUN_01d5bca0);
  FUN_00414480(&local_138);
  return;
}

