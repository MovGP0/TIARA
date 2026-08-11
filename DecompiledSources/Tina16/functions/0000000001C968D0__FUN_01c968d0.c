/* Ghidra address: 01c968d0 */
/* Ghidra symbol: FUN_01c968d0 */


void FUN_01c968d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_68 = 0;
  local_40[0] = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_48 = 0;
  local_20 = (longlong *)0x0;
  local_28 = 0;
  local_30 = 0;
  cVar3 = FUN_01b23030();
  if (cVar3 == '\0') {
    plVar1 = *(longlong **)(param_1 + 0xb40);
    FUN_00414ad0(plVar1 + 0x20,L"schdoc");
    FUN_00724270(plVar1,&local_48);
    FUN_00441640(local_40,local_48);
    FUN_00441920(&local_58,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
    FUN_00416ba0(&local_60,&DAT_01c96cdc,plVar1[0x20]);
    FUN_004414c0(&local_50,local_58,local_60);
    FUN_00416ad0(local_40,local_50);
    FUN_00724380(plVar1,local_40[0]);
    FUN_00414b50(&local_30,plVar1[0x1c]);
    FUN_00414ad0(plVar1 + 0x1c,L"Altium schematic|*.schdoc");
    *(undefined4 *)(plVar1 + 0x1d) = 1;
    cVar3 = (**(code **)(*plVar1 + 0xa8))(plVar1);
    if (cVar3 != '\0') {
      uVar7 = 0;
      FUN_00416cd0(&local_68,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01c96d2c,L"altium.dll");
      cVar3 = FUN_01bc47d0(local_68);
      if (cVar3 != '\0') {
        FUN_00bac3d0(&local_20);
        (**(code **)(*local_20 + 0x118))(local_20,0);
        lVar2 = *(longlong *)(param_1 + 0x2788);
        FUN_00417c40(lVar2 + 0x492,PTR_DAT_02004010,&DAT_01d0d0b8);
        FUN_0128ee00(&local_70,lVar2,local_20,*PTR_DAT_02002480 == '\0',CONCAT44(uVar7,7),
                     &LAB_01c96d60,0,0,0,0,0);
        (**(code **)(*local_20 + 0xf0))(local_20,&local_78);
        uVar5 = FUN_00416740(local_78);
        FUN_00724270(plVar1,&local_80);
        uVar6 = FUN_00416740(local_80);
        iVar4 = (**(code **)PTR_DAT_02003710)(uVar5,uVar6);
        if ((iVar4 < 0xb) && (0 < iVar4)) {
          FUN_00414b50(&local_28,*(undefined8 *)(PTR_PTR_02003d08 + (longlong)iVar4 * 8));
          FUN_016fd940(local_28);
        }
      }
    }
    FUN_00414ad0(plVar1 + 0x1c,local_30);
  }
  FUN_00414480(&local_80);
  FUN_00414480(&local_78);
  FUN_0041b800(&local_70);
  FUN_00414560(&local_68,4);
  FUN_00414480(&local_48);
  FUN_00414480(local_40);
  FUN_00414560(&local_30,2);
  FUN_0041b800(&local_20);
  return;
}

