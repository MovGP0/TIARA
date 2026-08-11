/* Ghidra address: 00d30800 */
/* Ghidra symbol: FUN_00d30800 */


bool FUN_00d30800(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  bool local_271;
  undefined8 local_270;
  undefined1 local_262 [522];
  undefined8 local_58 [2];
  undefined1 *local_48;
  undefined8 local_40;
  undefined4 local_38;
  code *local_30;
  
  local_270 = 0;
  local_271 = false;
  iVar2 = FUN_0044f100(L"shell32.dll");
  FUN_0040d200(local_58,0x40,0);
  FUN_00415dd0(&DAT_0201a160,param_2,0);
  local_48 = local_262;
  local_40 = FUN_00416740(param_1);
  local_38 = 1;
  if (0x4ffff < iVar2) {
    local_38 = 0x41;
  }
  local_58[0] = *(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0);
  local_30 = FUN_00d30730;
  lVar3 = thunk_FUN_03e5e908(local_58);
  if (lVar3 == 0) {
    FUN_00414480(param_3);
  }
  else {
    iVar2 = thunk_FUN_0413df99(lVar3,local_262);
    if (iVar2 == 0) {
      FUN_00414480(param_3);
    }
    else {
      FUN_00416830(param_3,local_262,0x105);
    }
    local_271 = iVar2 != 0;
    FUN_0042a270(lVar3);
  }
  cVar1 = FUN_004563b0(&LAB_00d309c8,*param_3);
  if (cVar1 != '\0') {
    iVar2 = 0;
    if (*param_3 != 0) {
      iVar2 = *(int *)(*param_3 + -4);
    }
    FUN_005b8820(&local_270,*param_3,iVar2 + -1);
    FUN_00414ad0(param_3,local_270);
  }
  FUN_00414480(&local_270);
  return local_271;
}

