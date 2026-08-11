/* Ghidra address: 00a5b9f0 */
/* Ghidra symbol: FUN_00a5b9f0 */


void FUN_00a5b9f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0;
  *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x68);
  uVar2 = FUN_00462650(param_1 + 0x120);
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar2;
  bVar4 = 0;
  FUN_00467e90(&local_20,param_1 + 0xc0);
  iVar3 = FUN_004170c0(L"bold",local_20,1);
  if (iVar3 < 1) {
    FUN_00467e90(&local_28,param_1 + 0xc0);
    iVar3 = FUN_0043fc50(local_28,0);
    if (599 < iVar3) {
      bVar4 = 1;
    }
  }
  else {
    bVar4 = 1;
  }
  FUN_00468a10(&local_40,L"italic");
  cVar1 = FUN_0046f320(param_1 + 0xa8,&local_40);
  if (cVar1 == '\0') {
    FUN_00468a10(&local_58,L"oblique");
    cVar1 = FUN_0046f320(param_1 + 0xa8,&local_58);
    if (cVar1 == '\0') goto LAB_00a5bb3d;
  }
  bVar4 = bVar4 | 2;
LAB_00a5bb3d:
  FUN_00467e90(&local_60,param_1 + 0xf0);
  iVar3 = FUN_004170c0(L"underline",local_60,1);
  if (0 < iVar3) {
    bVar4 = bVar4 | 4;
  }
  FUN_00467e90(&local_68,param_1 + 0xf0);
  iVar3 = FUN_004170c0(L"line-through",local_68,1);
  if (0 < iVar3) {
    bVar4 = bVar4 | 8;
  }
  *(byte *)(param_2 + 2) = bVar4;
  lVar5 = FUN_00464c60(param_1 + 0x90);
  param_2[1] = lVar5;
  *(undefined1 *)((longlong)param_2 + 0x1c) = *(undefined1 *)(param_1 + 0x6c);
  FUN_00461840(param_2 + 4,param_1 + 0x108);
  FUN_00467e90(&local_78,param_1 + 0x78);
  FUN_00a5b8c0(&local_70,local_78);
  FUN_00414ad0(param_2,local_70);
  if (*param_2 == 0) {
    FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x28));
  }
  FUN_00414560(&local_78,4);
  FUN_00417840(&local_58,&DAT_004013d8,2);
  FUN_00414560(&local_28,2);
  return;
}

