/* Ghidra address: 010a4450 */
/* Ghidra symbol: FUN_010a4450 */


void FUN_010a4450(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c [3];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_01603390(&local_30,*(undefined8 *)(param_1 + 0x968));
  FUN_00414ad0(param_1 + 0xa60,local_30);
  FUN_015fca00(&local_38,0,0);
  FUN_00414ad0(param_1 + 0x998,local_38);
  FUN_00416ba0(param_1 + 0x9a8,*(undefined8 *)(param_1 + 0x998),L"\\Temp\\");
  FUN_00416ba0(&local_40,*(undefined8 *)(param_1 + 0x9a8),L"temp.tmp");
  uVar2 = FUN_00442620(param_1 + 0xa68,local_40);
  FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0x9a8),*(undefined8 *)(param_1 + 0xa60),
               &DAT_010a4774,L"temp.tmp");
  uVar3 = FUN_00442620(param_1 + 0x126a,local_48);
  FUN_01b217d0(uVar2,uVar3);
  FUN_00416cd0(param_1 + 0x9b0,4,*(undefined8 *)(param_1 + 0x9a8),*(undefined8 *)(param_1 + 0xa60),
               &DAT_010a4774,L"temp.tmp");
  uVar2 = FUN_00b89270();
  FUN_00b8d260(uVar2,param_1,0xffffffff);
  FUN_010a3f60(param_1,*(undefined8 *)(param_1 + 0x9b0));
  FUN_010a38b0(param_1);
  FUN_010a5f40(param_1,param_2);
  FUN_010a5d70(param_1,param_2);
  FUN_010a4f50(param_1,param_2);
  FUN_010a63d0(param_1,param_2);
  FUN_010a6120(param_1,param_2);
  FUN_01b21ee0(*(undefined8 *)(PTR_DAT_020030c0 + 0x40),local_1c,&local_20,&local_24,&local_28);
  if (0 < local_1c[0]) {
    FUN_0064cbf0(param_1,local_1c[0]);
  }
  if (0 < local_20) {
    FUN_0064cc50(param_1,local_20);
  }
  if (0 < local_24) {
    FUN_00806af0(param_1,local_24);
  }
  if (0 < local_28) {
    FUN_00806b40(param_1,local_28);
  }
  uVar1 = FUN_01b218b0(local_4c);
  (**(code **)(**(longlong **)(param_1 + 0x930) + 0x268))(*(longlong **)(param_1 + 0x930),uVar1);
  *(undefined1 *)(param_1 + 0xa28) = *(undefined1 *)(*(longlong *)(param_1 + 0x858) + 0x328);
  FUN_010a6cb0(param_1,L"Idle");
  FUN_00414560(&local_48,4);
  return;
}

