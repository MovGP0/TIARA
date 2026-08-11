/* Ghidra address: 013018f0 */
/* Ghidra symbol: FUN_013018f0 */


void FUN_013018f0(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 local_res10;
  char local_res18;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 *local_80;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 local_5c [8];
  undefined1 local_54 [60];
  undefined8 local_18;
  undefined8 local_10;
  
  local_80 = auStack_b8;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00417580(local_54,&DAT_01d2e6d8);
  cVar1 = FUN_00440a20(local_res10,1);
  if (cVar1 == '\0') {
    FUN_0072d730(L"Result file doesn\'t exist",0xffffffff,0xffffffff);
  }
  else {
    local_18 = FUN_004b9860(&PTR_FUN_0047c498,1,local_res10,0x20);
    local_98 = 0;
    local_10 = FUN_01d30b30(&DAT_01d2e8e8,1,local_18,0x40);
    FUN_01d317c0(local_10,local_54);
    FUN_01d30e90(local_10,local_5c);
    if (*(char *)(param_1 + 0xabd) == '\0') {
      FUN_01d30f00(local_10,local_70,8);
      FUN_01d30f00(local_10,local_74,4);
      FUN_01d30f00(local_10,local_78,4);
    }
    local_68 = FUN_01cc3bb0(&PTR_FUN_01cb5bc0,1,local_10);
    FUN_01cc6020(local_68);
    if (local_res18 == '\x06') {
      FUN_013d2f60(local_68,0,0);
    }
    else if (local_res18 == '\b') {
      local_98 = 1;
      FUN_013d4bc0(local_68,4,0,0);
    }
    else {
      FUN_013d3ef0(local_68,1);
    }
    FUN_01cc6030(local_68);
    iVar2 = FUN_01d31a40(local_10);
    if (iVar2 != 0) {
      uVar3 = FUN_01d31a40(local_10);
      FUN_00b047e0(uVar3);
    }
    FUN_00410f20(local_10);
    FUN_00410f20(local_18);
  }
  FUN_00417740(local_54,&DAT_01d2e6d8);
  FUN_00414480(&local_res10);
  return;
}

