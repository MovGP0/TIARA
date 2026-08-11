/* Ghidra address: 01a27e60 */
/* Ghidra symbol: FUN_01a27e60 */


undefined8 * FUN_01a27e60(undefined8 *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong local_res10 [3];
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  longlong local_70;
  longlong local_68;
  undefined4 local_5c;
  char local_55;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  int local_38;
  int local_34;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_80 = auStack_c8;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_28 = 0;
  local_30 = 0;
  local_48 = (undefined8 *)0x0;
  local_50 = 0;
  local_20 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  local_res10[0] = param_2;
  FUN_00414480(&local_20);
  FUN_004576f0(local_res10,&local_20,*(undefined4 *)PTR_DAT_02005bd0);
  FUN_00414b50(&local_50,local_20);
  cVar1 = FUN_004575a0(&local_50,L".tran",0);
  local_55 = cVar1 == '\0';
  FUN_00414480(&local_20);
  if (local_55 != '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Not a .tran line");
    FUN_004134c0(uVar3);
  }
  local_5c = 0;
  if (local_res10[0] != 0) {
    local_5c = *(undefined4 *)(local_res10[0] + -4);
  }
  FUN_00416dc0(&local_88,local_res10[0],6,local_5c);
  FUN_0043ea00(&local_30,local_88);
  local_a8 = 1;
  FUN_00456a80(&local_30,&local_28,&DAT_01a282de,0);
  local_68 = local_28;
  if (local_28 != 0) {
    local_68 = *(longlong *)(local_28 + -8);
  }
  FUN_00419260(&local_48,&DAT_00421028,1,local_68);
  local_38 = 0;
  local_70 = local_28;
  if (local_28 != 0) {
    local_70 = *(longlong *)(local_28 + -8);
  }
  iVar5 = (int)local_70;
  local_34 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar4 = (longlong)local_34;
      FUN_0043e1a0(&local_90,*(undefined8 *)(local_28 + lVar4 * 8));
      iVar2 = FUN_00416db0(local_90,&DAT_01a282ec);
      if (iVar2 == 0) {
LAB_01a280d7:
        *(undefined1 *)(param_1 + 4) = 1;
      }
      else {
        FUN_0043e1a0(&local_98,*(undefined8 *)(local_28 + lVar4 * 8));
        iVar2 = FUN_00416db0(local_98,L"startup");
        if (iVar2 == 0) goto LAB_01a280d7;
        cVar1 = FUN_01a27710(*(undefined8 *)(local_28 + lVar4 * 8),&local_40);
        if (cVar1 != '\0') {
          local_48[local_38] = local_40;
          local_38 = local_38 + 1;
        }
      }
      local_34 = local_34 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00419260(&local_48,&DAT_00421028,1,(longlong)local_38);
  if (local_38 == 1) {
    param_1[1] = *local_48;
  }
  else if (1 < local_38) {
    *param_1 = *local_48;
    param_1[1] = local_48[1];
  }
  FUN_00414560(&local_98,3);
  FUN_00414480(&local_50);
  FUN_00419430(&local_48,&DAT_00421028);
  FUN_00414480(&local_30);
  FUN_00419430(&local_28,&DAT_004210c0);
  FUN_00414480(&local_20);
  return param_1;
}

