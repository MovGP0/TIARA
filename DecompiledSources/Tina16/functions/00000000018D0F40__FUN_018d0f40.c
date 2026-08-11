/* Ghidra address: 018d0f40 */
/* Ghidra symbol: FUN_018d0f40 */


void FUN_018d0f40(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_2f8 [32];
  undefined8 local_2d8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined1 *local_2a0;
  int local_28c;
  undefined1 local_288 [16];
  uint local_278;
  undefined8 local_270;
  
  local_2a0 = auStack_2f8;
  local_2b8 = 0;
  local_2c0 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  FUN_00417580(local_288,&DAT_00432b90);
  cVar1 = FUN_00b96de0(param_1);
  if (cVar1 != '\0') {
    FUN_00416ba0(&local_2a8,param_1,L"\\*.*");
    local_28c = FUN_00441230(local_2a8,0x1ff,local_288);
    while (local_28c == 0) {
      iVar2 = FUN_00416db0(local_270,&DAT_018d1188);
      if ((iVar2 != 0) && (iVar2 = FUN_00416db0(local_270,&DAT_018d1198), iVar2 != 0)) {
        if ((local_278 & 0x10) == 0) {
          if ((local_278 & 8) == 0) {
            local_2d8 = local_270;
            FUN_00416cd0(&local_2b8,3,param_1,&DAT_018d11ac);
            uVar3 = FUN_00416740(local_2b8);
            FUN_004167d0(&local_2c0,uVar3);
            FUN_004412f0(local_2c0);
          }
        }
        else {
          local_2d8 = local_270;
          FUN_00416cd0(&local_2b0,3,param_1,&DAT_018d11ac);
          FUN_018d0f40(local_2b0);
        }
      }
      local_28c = FUN_00441290(local_288);
    }
    FUN_004412c0(local_288);
    uVar3 = FUN_00416740(param_1);
    thunk_FUN_0411ad98(uVar3);
  }
  FUN_00414560(&local_2c0,4);
  FUN_00417740(local_288,&DAT_00432b90);
  return;
}

