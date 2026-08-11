/* Ghidra address: 00ee4600 */
/* Ghidra symbol: FUN_00ee4600 */


void FUN_00ee4600(undefined1 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                 undefined8 param_5,longlong *param_6,undefined4 param_7,longlong param_8,
                 longlong param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12,
                 undefined1 param_13,undefined1 param_14,undefined8 param_15,longlong *param_16,
                 longlong *param_17,undefined8 param_18,undefined1 *param_19,undefined1 *param_20)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_208 [32];
  undefined1 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [256];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  longlong local_70;
  longlong local_60;
  int local_54;
  undefined8 local_50 [4];
  undefined1 local_29;
  longlong local_28;
  undefined4 local_1c;
  
  local_80 = auStack_208;
  local_1b8 = 0;
  local_1b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_50[0] = 0;
  FUN_00b95290(param_3);
  FUN_019953b0(param_3);
  *PTR_DAT_02002ce0 = 0;
  local_1c = 0;
  local_28 = *(longlong *)(param_3 + 0xe70);
  lVar1 = *(longlong *)(local_28 + 0x10);
  *(undefined1 *)(lVar1 + 0x231) = 0;
  *(undefined1 *)(lVar1 + 0x230) = param_1;
  if (param_4 == 0) {
    FUN_00414480(lVar1 + 0x218);
  }
  else {
    FUN_00414ad0(*(longlong *)(local_28 + 0x10) + 0x218,*(undefined8 *)(param_4 + 0x360));
  }
  FUN_00414ad0(*(longlong *)(local_28 + 0x10) + 0x220,
               *(undefined8 *)(*(longlong *)(local_28 + 0x10) + 0x218));
  *(longlong **)(*(longlong *)(local_28 + 0x10) + 0x228) = param_16;
  if (param_16 != (longlong *)0x0) {
    (**(code **)(*param_16 + 0x90))(param_16);
  }
  FUN_016a36d0(*(undefined8 *)(local_28 + 0x10),param_6);
  *(undefined1 *)(*(longlong *)(local_28 + 8) + 8) = 1;
  *(undefined1 *)(local_28 + 0x9a7) = 0;
  *(undefined1 *)(local_28 + 0x9a8) = 0;
  *(undefined1 *)(local_28 + 0x9a9) = param_14;
  *(undefined1 *)(local_28 + 0x9a6) = 0;
  if (*(char *)(*(longlong *)(local_28 + 0x10) + 0x230) == '\0') {
    if ((*(longlong *)PTR_DAT_02004208 != 0) &&
       (*(char *)(*(longlong *)PTR_DAT_02004208 + 0xa9) == '\0')) {
      uVar4 = FUN_00b89270();
      FUN_00b8e520(uVar4,&local_90,0x4e8);
      FUN_00c54370(*(undefined8 *)PTR_DAT_02004208,local_90);
      *(undefined1 *)(*(longlong *)PTR_DAT_02004208 + 0x6c1) = 0;
      FUN_008059a0(*(undefined8 *)PTR_DAT_02004208);
    }
  }
  else {
    uVar4 = FUN_00b89270();
    FUN_00b8e520(uVar4,&local_88,0x4e8);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x828),local_88);
  }
  FUN_016cff60(local_28,param_7,0,1);
  FUN_016bb740(local_28,param_2);
  while( true ) {
    FUN_016b8f10(&local_98,*(undefined8 *)(local_28 + 0xd80));
    iVar3 = FUN_00415a60(local_98,&DAT_00ee4f18);
    if (iVar3 == 0) break;
    local_1e8 = param_10;
    local_1e0 = param_11;
    local_1d8 = param_12;
    local_1d0 = 0;
    local_1c8 = 1;
    local_1c0 = 1;
    FUN_00ee2730(*(undefined8 *)(local_28 + 8),param_6,param_4,param_5);
  }
  FUN_00ee43f0(auStack_208);
  if (*(char *)(*(longlong *)(local_28 + 0x10) + 0x230) == '\0') {
    if (*(longlong *)PTR_DAT_02004208 != 0) {
      uVar4 = FUN_00b89270();
      FUN_00b8e520(uVar4,&local_a8,0x4e9);
      FUN_00c54370(*(undefined8 *)PTR_DAT_02004208,local_a8);
    }
  }
  else {
    uVar4 = FUN_00b89270();
    FUN_00b8e520(uVar4,&local_a0,0x4e9);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x828),local_a0);
  }
  *(undefined1 *)(*(longlong *)(local_28 + 0x10) + 0x231) = 1;
  if ((param_8 != 0) && (cVar2 = FUN_00440a20(param_8,1), cVar2 != '\0')) {
    FUN_00416910(local_1a8,param_8,0xff);
    FUN_016c41d0(local_28,local_1a8);
  }
  FUN_00416ba0(&local_1b0,*(undefined8 *)PTR_DAT_020049a0,L"\\EXAMPLES\\SPICE\\TSPICE.LIB");
  FUN_00416910(local_1a8,local_1b0,0xff);
  FUN_016c41d0(local_28,local_1a8);
  if (param_9 != 0) {
    FUN_016cc660(param_9,local_28);
  }
  if (param_17 != (longlong *)0x0) {
    (**(code **)(*param_17 + 0x90))(param_17);
    local_60 = *(longlong *)(local_28 + 0xa38);
    iVar3 = *(int *)(local_60 + 0x10);
    local_54 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar4 = FUN_01d347d0(local_60,local_54);
        FUN_00ee4370(auStack_208,uVar4);
        local_54 = local_54 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if (param_6 == (longlong *)0x0) {
    FUN_00414480(local_50);
  }
  else {
    (**(code **)(*param_6 + 0x288))(param_6,local_50);
  }
  local_1e8 = param_13;
  local_1e0 = param_15;
  local_1d8 = 0;
  local_1d0 = 1;
  local_1c8 = 1;
  FUN_016cb2b0(local_28,local_50[0],param_3,param_4);
  *param_19 = *(undefined1 *)(local_28 + 0x9a7);
  *param_20 = *(undefined1 *)(local_28 + 0x9a8);
  *(undefined1 *)(local_28 + 0x9a6) = *(undefined1 *)(local_28 + 0x9a6);
  local_70 = param_3;
  FUN_01995400(param_3);
  iVar3 = *(int *)(local_70 + 0x10);
  local_54 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar4 = FUN_00b94e60(local_70,local_54);
      FUN_00ee4340(auStack_208,uVar4);
      local_54 = local_54 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_01995490(local_70,local_1c);
  FUN_019954b0(local_70,*(int *)(local_28 + 0x998) + -1);
  if (*(char *)(*(longlong *)(local_28 + 0x10) + 0x230) != '\0') {
    uVar4 = FUN_00b89270();
    FUN_00b8e520(uVar4,&local_1b8,0x4eb);
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_020057d0 + 0x828),local_1b8);
  }
  local_29 = *(undefined1 *)(*(longlong *)(local_28 + 0x10) + 0x230);
  FUN_00414560(&local_1b8,2);
  FUN_00414560(&local_a8,2);
  FUN_004144d0(&local_98);
  FUN_00414560(&local_90,2);
  FUN_00414480(local_50);
  return;
}

