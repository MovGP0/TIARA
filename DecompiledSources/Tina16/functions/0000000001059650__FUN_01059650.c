/* Ghidra address: 01059650 */
/* Ghidra symbol: FUN_01059650 */


void FUN_01059650(undefined8 param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 local_res8;
  longlong local_res10;
  longlong *local_res18;
  undefined1 auStack_2e8 [32];
  longlong local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined1 *local_2b0;
  bool local_299;
  longlong local_298;
  undefined8 local_290;
  undefined1 local_288 [16];
  uint local_278;
  undefined8 local_270;
  
  local_2b0 = auStack_2e8;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0;
  local_290 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00417580(local_288,&DAT_00432b90);
  FUN_0044f850(&local_2b8,local_res8);
  FUN_00416ad0(&local_2b8,&DAT_010598b8);
  iVar1 = FUN_00441230(local_2b8,0x1ff,local_288);
  if (iVar1 == 0) {
    do {
      iVar1 = FUN_00416db0(local_270,&DAT_010598c8);
      if (iVar1 != 0) {
        iVar1 = FUN_00416db0(local_270,&LAB_010598d8);
        if (iVar1 != 0) {
          FUN_0044f850(&local_2c0,local_res8);
          FUN_00416ba0(&local_290,local_2c0,local_270);
          if ((local_278 & 0x10) == 0) {
            FUN_00441a10(&local_2c8,local_270);
            local_298 = local_2c8;
            if (local_2c8 == local_res10) {
              local_299 = true;
            }
            else if ((local_2c8 == 0) || (local_res10 == 0)) {
              local_299 = false;
            }
            else {
              iVar1 = FUN_0043e420(local_2c8,local_res10);
              local_299 = iVar1 == 0;
            }
            if (local_299 != false) {
              (**(code **)(*local_res18 + 0x78))(local_res18,local_290);
            }
          }
          else {
            FUN_01059650(local_290,local_res10,local_res18);
          }
        }
      }
      iVar1 = FUN_00441290(local_288);
    } while (iVar1 == 0);
    FUN_004412c0(local_288);
  }
  FUN_00414560(&local_2c8,3);
  FUN_00414480(&local_290);
  FUN_00417740(local_288,&DAT_00432b90);
  FUN_00414560(&local_res8,2);
  return;
}

