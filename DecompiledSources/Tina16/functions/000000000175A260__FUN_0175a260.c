/* Ghidra address: 0175a260 */
/* Ghidra symbol: FUN_0175a260 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_0175a260(undefined8 param_1,double param_2,double param_3,undefined4 *param_4,char *param_5)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 auStack_378 [32];
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined1 *local_330;
  char local_326;
  byte local_325;
  byte local_324;
  byte local_323;
  byte local_322;
  byte local_321;
  double local_320;
  undefined1 local_311 [256];
  undefined1 local_211 [4];
  char local_20d;
  undefined1 local_111 [256];
  undefined1 local_11;
  undefined8 local_10;
  
  local_330 = auStack_378;
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_340 = 0;
  local_338 = 0;
  local_10 = 0;
  local_11 = 0;
  *param_5 = '\0';
  puVar1 = auStack_378;
  if ((0.0 <= param_2) && (puVar1 = auStack_378, param_2 <= 999000000000.0)) {
    FUN_00414480(&local_10);
    FUN_004485a0(&local_10,L"0.00E+00",param_2,PTR_DAT_02004830);
    FUN_00416910(local_111,local_10,0xff);
    FUN_00414480(&local_10);
    FUN_004169a0(&local_338,local_111);
    local_322 = FUN_004170c0(&DAT_0175a79c,local_338,1);
    FUN_004151b0(local_311,local_111,local_322 + 1,3);
    FUN_004151b0(local_211,local_111,1,local_322 - 1);
    if ((1.0 <= param_2) || (puVar1 = local_330, local_20d == '0')) {
      *param_5 = '\0';
      if (*param_5 == '\0') {
        FUN_004169a0(&local_340,local_211);
        local_320 = (double)FUN_00448650(local_340,PTR_DAT_02004830);
        local_320 = local_320 * 10.0;
        local_323 = FUN_0040c840(local_320 / 10.0);
        local_324 = FUN_0040c770(local_320 - (double)((uint)local_323 * 10));
        *param_4 = *(undefined4 *)(&DAT_01f9b2c8 + (ulonglong)local_323 * 4);
        param_4[1] = *(undefined4 *)(&DAT_01f9b2c8 + (ulonglong)local_324 * 4);
        FUN_004169a0(&local_348,local_311);
        iVar2 = FUN_0043fc00(local_348);
        param_4[2] = *(undefined4 *)(&DAT_01f9b2c8 + (longlong)(iVar2 + -1) * 4);
        param_4[4] = 0x1fffffff;
        local_321 = 4;
      }
      else {
        FUN_004169a0(&local_350,local_211);
        local_320 = (double)FUN_00448650(local_350,PTR_DAT_02004830);
        local_320 = local_320 * 100.0;
        local_323 = FUN_0040c840(local_320 / 100.0);
        local_324 = FUN_0040c840((local_320 - (double)((uint)local_323 * 100)) / 10.0);
        local_325 = FUN_0040c770((local_320 - (double)((uint)local_323 * 100)) -
                                 (double)((uint)local_324 * 10));
        *param_4 = *(undefined4 *)(&DAT_01f9b2c8 + (ulonglong)local_323 * 4);
        param_4[1] = *(undefined4 *)(&DAT_01f9b2c8 + (ulonglong)local_324 * 4);
        param_4[2] = *(undefined4 *)(&DAT_01f9b2c8 + (ulonglong)local_325 * 4);
        FUN_004169a0(&local_358,local_311);
        iVar2 = FUN_0043fc00(local_358);
        param_4[3] = *(undefined4 *)(&DAT_01f9b2c8 + (longlong)(iVar2 + -2) * 4);
        local_321 = 5;
      }
      if (DAT_01f9b310 < param_3) {
        if (param_3 < _DAT_01f9b348) {
          local_326 = -1;
          do {
            do {
              local_326 = local_326 + '\x01';
            } while (param_3 < (&DAT_01f9b310)[local_326]);
          } while ((&DAT_01f9b310)[local_326 + 1] <= param_3);
          param_4[(ulonglong)local_321 - 1] = (&DAT_01f9b2f0)[local_326];
        }
        else {
          param_4[(ulonglong)local_321 - 1] = DAT_01f9b30c;
        }
      }
      else {
        param_4[(ulonglong)local_321 - 1] = DAT_01f9b2f0;
      }
      local_11 = 1;
      puVar1 = local_330;
    }
  }
  local_330 = puVar1;
  FUN_00414560(&local_358,5);
  FUN_00414480(&local_10);
  return local_11;
}

