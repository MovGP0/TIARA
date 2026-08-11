/* Ghidra address: 012bf5d0 */
/* Ghidra symbol: FUN_012bf5d0 */


char FUN_012bf5d0(char param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined1 local_270 [88];
  undefined1 local_218 [268];
  undefined1 local_10c [6];
  undefined1 local_106 [81];
  undefined1 local_b5 [81];
  undefined1 local_64 [4];
  int local_60;
  char local_5a;
  char local_59;
  double local_58;
  double local_50 [8];
  
  local_298 = 0;
  local_2a0 = 0;
  local_290 = 0;
  local_280 = 0;
  local_288 = 0;
  local_278 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  dVar5 = *(double *)PTR_DAT_02001968;
  FUN_00416910(local_218,local_res10,0xff);
  FUN_00b90d70(local_218,local_50,&local_59,&local_60);
  FUN_00416910(local_218,local_res18,0xff);
  FUN_00b90d70(local_218,&local_58,&local_5a,local_64);
  cVar2 = '\0';
  if ((local_59 == '\0') && (local_60 == 0)) {
    cVar2 = '\x03';
  }
  else if (param_1 != '\0') {
    if (local_59 == '\f') {
      local_50[0] = (local_50[0] * 180.0) / 3.141592653589793;
      local_59 = '\v';
    }
    if (local_59 != local_5a) {
      cVar2 = '\x04';
    }
    dVar3 = (double)FUN_0040c850(local_50[0] - local_58);
    dVar4 = (double)FUN_0040c850(local_58 * (dVar5 / 100.0));
    if (dVar4 < dVar3) {
      FUN_004100d0(local_218,local_50[0]);
      FUN_00415020(local_b5,local_218,0x50);
      FUN_004169a0(&local_278,local_b5);
      iVar1 = FUN_004170c0(&LAB_012bfa14,local_278,1);
      FUN_004151b0(local_270,local_b5,1,iVar1 + -1);
      FUN_00415020(local_b5,local_270,0x50);
      FUN_004154b0(&local_280,local_b5,0);
      FUN_00416880(&local_288,local_280);
      dVar3 = (double)FUN_00410100(local_288,local_10c);
      FUN_004100d0(local_218,local_58);
      FUN_00415020(local_106,local_218,0x50);
      FUN_004169a0(&local_290,local_106);
      iVar1 = FUN_004170c0(&LAB_012bfa14,local_290,1);
      FUN_004151b0(local_270,local_106,1,iVar1 + -1);
      FUN_00415020(local_106,local_270,0x50);
      FUN_004154b0(&local_298,local_106,0);
      FUN_00416880(&local_2a0,local_298);
      dVar4 = (double)FUN_00410100(local_2a0,local_10c);
      dVar3 = (double)FUN_0040c850(dVar3 - dVar4);
      dVar5 = (double)FUN_0040c850(dVar4 * (dVar5 / 100.0));
      if (dVar3 <= dVar5) {
        if (cVar2 == '\0') {
          cVar2 = '\x05';
        }
        else {
          cVar2 = '\b';
        }
      }
      else if (cVar2 == '\0') {
        cVar2 = '\x06';
      }
      else {
        cVar2 = '\a';
      }
    }
  }
  FUN_00414480(&local_2a0);
  FUN_004144d0(&local_298);
  FUN_00414560(&local_290,2);
  FUN_004144d0(&local_280);
  FUN_00414480(&local_278);
  FUN_00414560(&local_res10,2);
  return cVar2;
}

