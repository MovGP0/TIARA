/* Ghidra address: 00ce40e0 */
/* Ghidra symbol: FUN_00ce40e0 */


void FUN_00ce40e0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined1 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined1 local_58;
  longlong local_50;
  undefined1 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00ce1840(param_1);
  cVar1 = FUN_00ce20e0(param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_00ce20f0();
    if (cVar1 == '\0') goto LAB_00ce4293;
  }
  FUN_00875210(local_20,*(longlong *)(param_1 + 0x68) != 0,*(undefined8 *)(param_1 + 0x68),L"bytes")
  ;
  uVar2 = FUN_00ce20e0(param_1);
  local_60 = param_1 + 0x58;
  local_58 = 0x10;
  local_50 = param_1 + 0x50;
  local_48 = 0x10;
  FUN_00876cf0(local_40,L"%d-%d",&local_60,1);
  FUN_00875210(&local_28,uVar2,local_40[0],&DAT_00ce4414);
  uVar2 = FUN_00ce20f0(param_1);
  local_78 = param_1 + 0x60;
  local_70 = 0x10;
  FUN_00876cf0(&local_68,&PTR_DAT_00ce4424,&local_78,0);
  FUN_00875210(&local_30,uVar2,local_68,&DAT_00ce4414);
  FUN_00416cd0(&local_80,5,local_20[0],&DAT_00ce4460,local_28,&DAT_00ce4470,local_30);
  FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Content-Range",local_80);
LAB_00ce4293:
  iVar3 = 0;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0xc0) + -4);
  }
  if (0 < iVar3) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Accept-Patch",*(undefined8 *)(param_1 + 0xc0));
  }
  iVar3 = 0;
  if (*(longlong *)(param_1 + 200) != 0) {
    iVar3 = *(int *)(*(longlong *)(param_1 + 200) + -4);
  }
  if (0 < iVar3) {
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Accept-Ranges",*(undefined8 *)(param_1 + 200));
  }
  if (0.0 < *(double *)(param_1 + 0xa0)) {
    FUN_008774b0(&local_88,*(undefined8 *)(param_1 + 0xa0));
    FUN_00cd98b0(*(undefined8 *)(param_1 + 0x18),L"Last-Modified",local_88);
  }
  FUN_00414560(&local_88,2);
  FUN_00414480(&local_68);
  FUN_00414480(local_40);
  FUN_00414560(&local_30,3);
  return;
}

