/* Ghidra address: 01d3eaa0 */
/* Ghidra symbol: FUN_01d3eaa0 */


void FUN_01d3eaa0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  double *pdVar6;
  undefined1 auStack_2d8 [32];
  char *local_2b8;
  undefined1 *local_2b0;
  longlong *local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  int local_28c;
  double local_288;
  double local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined1 local_260 [256];
  undefined8 local_160;
  char *local_158;
  undefined1 local_149 [256];
  char local_49;
  undefined1 local_48 [8];
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3c;
  undefined4 local_30;
  char local_2b;
  char local_2a;
  undefined1 local_29 [9];
  
  local_268 = 0;
  local_270 = 0;
  local_278 = 0;
  local_160 = 0;
  local_2a0 = param_1;
  local_298 = param_2;
  local_290 = param_3;
  uVar3 = FUN_01d03160(param_1);
  plVar1 = local_2a0;
  iVar4 = FUN_01cfd2d0();
  local_28c = 0;
  if (-1 < iVar4 + -1) {
    do {
      local_2a = (**(code **)(*plVar1 + 0x2d0))(plVar1,local_28c,local_48);
      if (local_2a == '\x04') {
        local_2b8 = &local_49;
        FUN_01d3ea00(auStack_2d8,uVar3,&local_30,&local_40);
        if (local_49 != '\0') {
          local_2b8 = &local_2b;
          local_2b0 = local_29;
          pdVar6 = (double *)FUN_01cfde70(local_2a0,local_30,local_3f,&local_2a);
          local_288 = *pdVar6;
          local_2b8 = &local_2b;
          local_2b0 = local_29;
          pdVar6 = (double *)FUN_01cfde70(local_2a0,local_30,local_3c,&local_2a);
          local_280 = *pdVar6;
        }
      }
      local_28c = local_28c + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  cVar2 = FUN_01d3d530(uVar3);
  if (((cVar2 != '\0') || ((short)uVar3 == 0x45d)) &&
     ((**(code **)(*local_2a0 + 0x2d0))(local_2a0,4,&local_158), *local_158 == '\0')) {
    local_288 = 0.0;
    local_280 = 0.0;
  }
  uVar5 = FUN_0040c770(local_288 * 1000000000.0);
  FUN_01d43440(&local_160,uVar5);
  FUN_00416ad0(&local_160,&DAT_01d3ee1c);
  FUN_00416910(local_260,local_160,0xff);
  FUN_00415020(local_298,local_260,local_290);
  FUN_004169a0(&local_270,local_298);
  uVar5 = FUN_0040c770(local_280 * 1000000000.0);
  FUN_01d43440(&local_278,uVar5);
  local_2b8 = ",";
  FUN_00416cd0(&local_268,3,local_270,local_278);
  FUN_00416910(local_260,local_268,0xff);
  FUN_00415020(local_298,local_260,local_290);
  iVar4 = FUN_01d3e830(uVar3);
  iVar4 = *(int *)(PTR_DAT_020042c0 + (longlong)(iVar4 + -600) * 0xc + 8);
  local_149[0] = 0;
  if (0 < iVar4) {
    do {
      FUN_00415060(local_149,local_298);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00415260(local_149,0xff,local_149[0],1);
  FUN_00415020(local_298,local_149,local_290);
  FUN_00414560(&local_278,3);
  FUN_00414480(&local_160);
  return;
}

