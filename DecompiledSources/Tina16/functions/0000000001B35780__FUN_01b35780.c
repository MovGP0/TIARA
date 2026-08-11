/* Ghidra address: 01b35780 */
/* Ghidra symbol: FUN_01b35780 */


void FUN_01b35780(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined *local_48;
  int local_3c;
  longlong local_38;
  undefined8 local_20 [2];
  
  local_50 = auStack_98;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_58 = 0;
  local_20[0] = 0;
  *(undefined4 *)PTR_DAT_02004708 = 0x4b0;
  if (*(char *)(param_1 + 0x5fe9) == '\0') {
    *(undefined1 *)(param_1 + 0x5fe8) = 0;
  }
  FUN_0064cc50(*(undefined8 *)PTR_DAT_020040c0,0x1e5);
  *(undefined1 *)(param_1 + 0x7c0) = 1;
  uVar1 = FUN_00b89270();
  FUN_00b8e520(uVar1,&local_58,0x88e);
  FUN_00414ad0(param_1 + 0x5fd8,local_58);
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001d60 + 0x6b0) + 0x298))
            (*(longlong **)(*(longlong *)PTR_DAT_02001d60 + 0x6b0));
  FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001d60 + 0x6b8),0);
  FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001d60 + 0x6c0),0);
  FUN_00414480(&DAT_02110d08);
  FUN_00414480(&DAT_02110d10);
  FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001d60 + 0x6c8),0);
  FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001d60 + 0x6d0),0);
  FUN_00805990(*(undefined8 *)PTR_DAT_02001d58);
  FUN_00805990(*(undefined8 *)PTR_DAT_02004ae8);
  FUN_00805990(*(undefined8 *)PTR_DAT_02001a00);
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001a00 + 0x710) + 0x128))
            (*(longlong **)(*(longlong *)PTR_DAT_02001a00 + 0x710),0);
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001a00 + 0x718) + 0x128))
            (*(longlong **)(*(longlong *)PTR_DAT_02001a00 + 0x718),0);
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001a00 + 0x720) + 0x128))
            (*(longlong **)(*(longlong *)PTR_DAT_02001a00 + 0x720),0);
  iVar2 = 8;
  local_48 = PTR_DAT_020013a0;
  do {
    FUN_00414480(local_48);
    local_48 = local_48 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0064dd90(*(undefined8 *)(DAT_02110d00 + 0x710),&local_68);
  FUN_0043ea00(&local_60,local_68);
  FUN_00414ad0(param_1 + 0x5fe0,local_60);
  FUN_00416ad0(param_1 + 0x5fe0,&DAT_01b35b3c);
  DAT_01fd6758 = '\0';
  FUN_01b2c870(*(undefined8 *)(param_1 + 0x5fe0),param_1 + 0x5fe0);
  if (DAT_01fd6758 != '\0') {
    local_20[0] = 0;
    FUN_0064dd90(*(undefined8 *)(DAT_02110d00 + 0x710),local_20);
    FUN_0064dd90(*(undefined8 *)(DAT_02110d00 + 0x710),&local_70);
    local_38 = local_70;
    local_3c = 0;
    if (local_70 != 0) {
      local_3c = *(int *)(local_70 + -4);
    }
    FUN_00416dc0(&local_78,local_20[0],1,local_3c + -1);
    FUN_0064de00(*(undefined8 *)(DAT_02110d00 + 0x710),local_78);
    FUN_00414480(local_20);
  }
  FUN_00414560(&local_78,3);
  FUN_00414560(&local_60,2);
  return;
}

