/* Ghidra address: 01c97260 */
/* Ghidra symbol: FUN_01c97260 */


void FUN_01c97260(longlong param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  uVar4 = FUN_015fc1d0(PTR_DAT_02004010 + 0x8a9);
  FUN_015fc210(PTR_DAT_02004010,1);
  uVar6 = FUN_007fc180(&PTR_FUN_01b9fbd8,1,*(undefined8 *)PTR_DAT_02004030);
  *(undefined8 *)PTR_DAT_02002f00 = uVar6;
  local_50 = *(undefined8 *)PTR_DAT_020034b0;
  local_48 = *(undefined8 *)(PTR_DAT_020034b0 + 8);
  local_40 = *(undefined8 *)(PTR_DAT_020034b0 + 0x10);
  FUN_01ba0580(*(undefined8 *)PTR_DAT_02002f00,&local_50);
  iVar5 = (**(code **)(**(longlong **)PTR_DAT_02002f00 + 0x2d0))(*(longlong **)PTR_DAT_02002f00);
  FUN_01ba0560(*(undefined8 *)PTR_DAT_02002f00,&local_50);
  if (iVar5 == 1) {
    uVar6 = *(undefined8 *)(PTR_DAT_02004010 + 0x2b8);
    uVar1 = PTR_DAT_02004010[0x2ac];
    uVar2 = PTR_DAT_02004010[0x2ad];
    *(undefined8 *)(PTR_DAT_02004010 + 0x2b8) = local_48;
    PTR_DAT_02004010[0x2ac] = 0;
    PTR_DAT_02004010[0x2ad] = (undefined1)local_40;
    uVar7 = (**(code **)(param_1 + 0x27f8))(*(undefined8 *)(param_1 + 0x2800));
    cVar3 = FUN_01349310(3,0,uVar7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0x1c7,0,0,0,0,0,0);
    if (cVar3 == '\0') {
      FUN_013e5a30(*(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe00),
                   *(undefined8 *)(*(longlong *)(param_1 + 0x2788) + 0xe10),0,0);
    }
    *(undefined8 *)(PTR_DAT_02004010 + 0x2b8) = uVar6;
    PTR_DAT_02004010[0x2ac] = uVar1;
    PTR_DAT_02004010[0x2ad] = uVar2;
    FUN_00410f20(*(undefined8 *)PTR_DAT_02002f00);
  }
  FUN_015fc210(PTR_DAT_02004010,uVar4);
  return;
}

