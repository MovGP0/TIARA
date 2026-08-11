/* Ghidra address: 01c83ba0 */
/* Ghidra symbol: FUN_01c83ba0 */


void FUN_01c83ba0(longlong param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  code *local_38;
  longlong local_30;
  undefined8 local_20;
  
  local_20 = 0;
  FUN_00414b50(&local_20,*(undefined8 *)PTR_DAT_02001b00);
  plVar3 = (longlong *)FUN_01b7a760(&PTR_FUN_01b798e8,1,*(undefined8 *)PTR_DAT_02004030,param_1);
  iVar2 = (**(code **)(*plVar3 + 0x2d0))(plVar3);
  if (iVar2 == 1) {
    local_38 = FUN_01ca0510;
    local_30 = param_1;
    FUN_00f834f0(&local_38);
    if (0 < *(int *)PTR_DAT_02002718) {
      local_38 = FUN_01ca0510;
      local_30 = param_1;
      FUN_00f833f0(&local_38,*(undefined4 *)PTR_DAT_02002718);
    }
  }
  FUN_00410f20(plVar3);
  if (iVar2 == 1) {
    iVar2 = FUN_00416db0(local_20,*(undefined8 *)PTR_DAT_02001b00);
    if (iVar2 == 0) {
      FUN_0064e770(*(undefined8 *)(param_1 + 0x700));
    }
    else {
      cVar1 = FUN_01c835b0(*(undefined8 *)PTR_DAT_02001b00);
      *(char *)(param_1 + 0x24fb) = cVar1;
      if (cVar1 == '\0') {
        FUN_0064e030(*(undefined8 *)(param_1 + 0xa10),*(undefined4 *)PTR_DAT_02003ad0);
        FUN_0064e770(*(undefined8 *)(param_1 + 0xa10));
        FUN_0064e770(*(undefined8 *)(param_1 + 0x700));
        if (*(longlong *)PTR_DAT_02001e00 != 0) {
          FUN_01a77ef0(*(undefined8 *)PTR_DAT_02001e00,0);
        }
      }
    }
  }
  FUN_00414480(&local_20);
  return;
}

