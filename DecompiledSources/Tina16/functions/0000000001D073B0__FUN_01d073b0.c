/* Ghidra address: 01d073b0 */
/* Ghidra symbol: FUN_01d073b0 */


undefined1 FUN_01d073b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_45 [4];
  byte local_41;
  undefined4 local_3d;
  int local_39;
  longlong local_30;
  undefined1 local_21;
  longlong *local_20;
  
  local_70 = auStack_a8;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_58 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_21 = 0;
  local_30 = FUN_01d06fb0(param_1,0);
  if (local_30 != 0) {
    cVar1 = FUN_00c3d380(local_30,&local_50,local_45);
    if ((cVar1 != '\0') && (local_39 != 0)) {
      local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
      FUN_00b909d0(&local_50,local_3d);
      FUN_00415d10(&local_58,local_39,0);
      uVar2 = FUN_00414df0(&local_58);
      FUN_00409a70(local_50,uVar2,(longlong)local_39);
      FUN_00416880(&local_78,local_58);
      (**(code **)(*local_20 + 0x60))(local_20,local_78);
      local_5c = (**(code **)(*local_20 + 0x28))(local_20);
      local_5c = local_5c + -1;
      if ((int)(uint)local_41 <= local_5c) {
        iVar3 = ((uint)local_41 - local_5c) + -1;
        do {
          (**(code **)(*local_20 + 0x98))(local_20,local_5c);
          local_5c = local_5c + -1;
          iVar3 = iVar3 + 1;
        } while (iVar3 != 0);
      }
      iVar3 = FUN_004170c0(&LAB_01d07614,local_res10,1);
      FUN_00416dc0(&local_88,local_res10,1,iVar3 + -1);
      FUN_0043ea00(&local_80,local_88);
      local_21 = FUN_01cf1650(local_80,local_20,local_res18);
      FUN_00410f20(local_20);
    }
  }
  FUN_00414560(&local_88,3);
  FUN_004144d0(&local_58);
  FUN_00414480(&local_res10);
  return local_21;
}

