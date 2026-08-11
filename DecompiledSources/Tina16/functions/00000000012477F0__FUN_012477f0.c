/* Ghidra address: 012477f0 */
/* Ghidra symbol: FUN_012477f0 */


char FUN_012477f0(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *local_res10 [3];
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_36 [4];
  byte local_32;
  undefined4 local_2e;
  int local_2a;
  char local_21;
  longlong *local_20;
  
  local_60 = auStack_98;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_40 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (param_1 != 0) {
    cVar1 = FUN_00c3d380(param_1,&local_48,local_36);
    if (cVar1 != '\0') {
      local_21 = '\x01';
      goto LAB_01247861;
    }
  }
  local_21 = '\0';
LAB_01247861:
  if ((local_21 != '\0') && (local_21 = local_2a != 0, (bool)local_21)) {
    local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_00b909d0(&local_48,local_2e);
    FUN_00415d10(&local_40,local_2a,0);
    uVar2 = FUN_00414df0(&local_40);
    FUN_00409a70(local_48,uVar2,(longlong)local_2a);
    FUN_00416880(&local_68,local_40);
    (**(code **)(*local_20 + 0x60))(local_20,local_68);
    local_4c = (**(code **)(*local_20 + 0x28))(local_20);
    local_4c = local_4c + -1;
    if ((int)(uint)local_32 <= local_4c) {
      iVar3 = ((uint)local_32 - local_4c) + -1;
      do {
        (**(code **)(*local_20 + 0x98))(local_20,local_4c);
        local_4c = local_4c + -1;
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0);
    }
    iVar3 = FUN_004170c0(&DAT_01247a24,local_res10[0],1);
    FUN_00416dc0(&local_78,local_res10[0],1,iVar3 + -1);
    FUN_0043ea00(&local_70,local_78);
    local_21 = FUN_01cf15a0(local_70,local_20);
    FUN_00410f20(local_20);
  }
  FUN_00414560(&local_78,3);
  FUN_004144d0(&local_40);
  FUN_00414480(local_res10);
  return local_21;
}

