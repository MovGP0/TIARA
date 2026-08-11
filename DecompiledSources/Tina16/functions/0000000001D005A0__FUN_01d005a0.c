/* Ghidra address: 01d005a0 */
/* Ghidra symbol: FUN_01d005a0 */


void FUN_01d005a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 local_130 [256];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2f0) + 0x168) +
          (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x2f0) + 0xfc) * 99;
  uVar5 = FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x3e9);
  *(undefined8 *)(lVar1 + 0x5b) = uVar5;
  plVar2 = *(longlong **)(lVar1 + 0x5b);
  (**(code **)(**(longlong **)(param_1 + 0x2f0) + 0x288))(*(longlong **)(param_1 + 0x2f0),&local_28)
  ;
  FUN_01d03640(*(undefined8 *)(param_1 + 0x2f0),&local_30,*(undefined8 *)PTR_DAT_02001f18);
  FUN_00416cd0(&local_20,4,local_28,&DAT_01d0076c,local_30,L"(Ground)");
  FUN_00416910(local_130,local_20,0xff);
  FUN_00415020((longlong)plVar2 + 0xfe,local_130,0x50);
  uVar3 = FUN_01d38290(plVar2,1);
  *PTR_DAT_02002ce0 = uVar3;
  (**(code **)(*plVar2 + 0x208))(plVar2,0,0,0);
  iVar4 = FUN_01d01910(*(undefined8 *)(param_1 + 0x2f0));
  (**(code **)(*plVar2 + 0x208))(plVar2,1,*(int *)(*(longlong *)(param_1 + 0x2f0) + 0xe8) + iVar4,0)
  ;
  FUN_00414560(&local_30,3);
  return;
}

