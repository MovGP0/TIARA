/* Ghidra address: 0179d0d0 */
/* Ghidra symbol: FUN_0179d0d0 */


int FUN_0179d0d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  int local_44;
  longlong *local_40;
  undefined8 local_38 [5];
  
  local_60 = auStack_a8;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_40 = (longlong *)FUN_007fc180(&PTR_FUN_01783448,1,*(undefined8 *)PTR_DAT_02004030);
  local_44 = (**(code **)(*local_40 + 0x2d0))(local_40);
  if (local_44 == 1) {
    cVar2 = '\x04';
    local_50 = local_38;
    do {
      uVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
      *local_50 = uVar1;
      local_50 = local_50 + 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
    FUN_0064dd90(local_40[0xdc],&local_68);
    FUN_0179d010(auStack_a8,1,local_68);
    FUN_0064dd90(local_40[0xdd],&local_70);
    FUN_0179d010(auStack_a8,3,local_70);
    FUN_0064dd90(local_40[0xe0],&local_78);
    FUN_0179d010(auStack_a8,2,local_78);
    FUN_0064dd90(local_40[0xe1],&local_80);
    FUN_0179d010(auStack_a8,0,local_80);
    FUN_0064dd90(local_40[0xdb],&local_88);
    uVar1 = FUN_00c3da20(&LAB_00c3a6d0,1,local_88,local_38);
    *param_2 = uVar1;
    cVar2 = '\x04';
    local_58 = local_38;
    do {
      FUN_00410f20(*local_58);
      local_58 = local_58 + 1;
      cVar2 = cVar2 + -1;
    } while (cVar2 != '\0');
  }
  else if (local_44 == 5) {
    uVar1 = FUN_00c3d400(&LAB_00c3a6d0,1);
    *param_2 = uVar1;
  }
  FUN_00410f20(local_40);
  FUN_00414560(&local_88,5);
  return local_44;
}

