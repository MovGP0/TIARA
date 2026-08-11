/* Ghidra address: 01419510 */
/* Ghidra symbol: FUN_01419510 */


void FUN_01419510(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_40 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_28 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_30 = (longlong *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  if (*(int *)(param_1 + 0xf88) != 2) {
    FUN_01418bb0(param_1,L"noname.tfc");
  }
  local_20 = (longlong *)FUN_007fc180(&PTR_FUN_0104a6e8,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_00414ad0(local_20 + 0x136,*(undefined8 *)(param_1 + 4000));
  *(undefined4 *)(local_20 + 0x134) = *(undefined4 *)(param_1 + 0xfc0);
  FUN_015fcb30(&local_48,PTR_DAT_02004770);
  FUN_00414ad0(param_1 + 0xf78,local_48);
  uVar1 = FUN_00442620(param_1 + 0x76c,*(undefined8 *)(param_1 + 0xf78));
  FUN_015fcc20(uVar1,param_1 + 0xf70,0,0);
  FUN_01051710(local_20,*(undefined8 *)(param_1 + 0xf70));
  local_20[0x137] = *(longlong *)(*(longlong *)(param_1 + 0xfb0) + 0x108);
  (**(code **)(*local_30 + 8))(local_30,0);
  (**(code **)(**(longlong **)(param_1 + 0x760) + 0x58))(*(longlong **)(param_1 + 0x760),local_30);
  FUN_010515b0(local_20,local_30);
  (**(code **)(*local_28 + 0x10))(local_28,*(undefined8 *)(param_1 + 0x740));
  FUN_010515c0(local_20,local_28);
  FUN_01050730(local_20);
  FUN_01051510(local_20,*(undefined8 *)(param_1 + 0xf90));
  FUN_00806b40(local_20,10);
  (**(code **)(*local_20 + 0x2d0))(local_20);
  if ((char)local_20[0x13a] == '\0') {
    FUN_01418bb0(param_1,*(undefined8 *)(param_1 + 0xf80));
    *(undefined4 *)(param_1 + 0xf8c) = *(undefined4 *)(param_1 + 0xf88);
  }
  else {
    *(undefined4 *)(param_1 + 0xf88) = *(undefined4 *)(param_1 + 0xf8c);
    FUN_010514c0(local_20,&local_50);
    FUN_01418bb0(param_1,local_50);
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x10))(*(longlong **)(param_1 + 0x740),local_28)
    ;
    (**(code **)(**(longlong **)(param_1 + 0x760) + 8))(*(longlong **)(param_1 + 0x760),0);
    (**(code **)(*local_30 + 0x58))(local_30,*(undefined8 *)(param_1 + 0x760));
  }
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00410f20(local_30);
  uVar1 = FUN_00442620(param_1 + 0x76c,*(undefined8 *)(param_1 + 0xf78));
  FUN_015fcd60(*(undefined8 *)(param_1 + 0xf70),uVar1,0);
  FUN_015fcbd0(PTR_DAT_02004770,0);
  FUN_00414560(&local_50,2);
  return;
}

