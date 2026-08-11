/* Ghidra address: 01171c30 */
/* Ghidra symbol: FUN_01171c30 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01171c30(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 in_stack_ffffffffffffffa8;
  undefined4 uVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffa8 >> 0x20);
  local_38 = 0;
  local_30 = 0;
  _DAT_0203a4e0 = 0x10;
  _DAT_0203a4e4 = 0x90;
  _DAT_0203a4e8 = 0x10;
  _DAT_0203a4ec = 0xd0;
  plVar1 = *(longlong **)(param_1 + 0x6b8);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x94] + 0x18))((longlong *)plVar1[0x94],&local_30,uVar2);
  FUN_00414ad0(&DAT_0203add0,local_30);
  FUN_0043e130(&local_38,DAT_0203add0);
  FUN_00414ad0(&DAT_0203add0,local_38);
  DAT_0204121c = FUN_004170c0(L"PROCEDURE",DAT_0203add0,1);
  if (DAT_0204121c != 0) {
    DAT_0204121c = FUN_004170c0(L"{_JO }",DAT_0203add0,1);
    if (DAT_0204121c != 0) {
      DAT_02041220 = FUN_004170c0(&DAT_01171f34,DAT_0203add0,1);
      DAT_02041224 = FUN_004170c0(&DAT_01171f48,DAT_0203add0,1);
      if (DAT_02041224 == 0) {
        DAT_02041224 = FUN_004170c0(&LAB_01171f58,DAT_0203add0,1);
      }
      FUN_00416dc0(&DAT_0203d958,DAT_0203add0,DAT_02041220 + 3,(DAT_02041224 - DAT_02041220) + -3);
    }
  }
  *(undefined4 *)(PTR_DAT_02001ad0 + 0x50) = 0x18;
  *(undefined4 *)(PTR_DAT_02001ad0 + 0x54) = 0x28;
  *(undefined4 *)PTR_DAT_02005b20 = 0;
  if (*(char *)(*(longlong *)PTR_DAT_02003280 + 0xa9) == '\0') {
    FUN_008059a0(*(undefined8 *)PTR_DAT_02003280);
  }
  else {
    FUN_01160b40(*(undefined8 *)PTR_DAT_02003280,param_2);
  }
  (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02003280 + 0x6b0) + 0xe0))
            (*(longlong **)(*(longlong *)PTR_DAT_02003280 + 0x6b0),&local_28);
  FUN_005fdab0(DAT_0203d9b0[0x10],0xff0000);
  (**(code **)(*DAT_0203d9b0 + 0xf8))
            (DAT_0203d9b0,local_28,local_24,local_20,CONCAT44(uVar3,local_1c));
  FUN_0116da30(DAT_0203d9b0,DAT_0203d958,0x28,0x78,PTR_DAT_020011d0);
  FUN_00414560(&local_38,2);
  return;
}

