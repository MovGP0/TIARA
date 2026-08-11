/* Ghidra address: 015c0950 */
/* Ghidra symbol: FUN_015c0950 */


char FUN_015c0950(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_2e8 [32];
  undefined1 *local_2c8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined1 *local_2a0;
  char local_289;
  undefined1 local_288 [16];
  uint local_278;
  undefined8 local_270;
  
  local_2a0 = auStack_2e8;
  local_2b0 = 0;
  local_2a8 = 0;
  FUN_00417580(local_288,&DAT_00432b90);
  FUN_00416ba0(&local_2a8,param_1,&DAT_015c0b00);
  iVar2 = FUN_015bf5c0(local_2a8,0x1f7,local_288);
  if (iVar2 == 0) {
    do {
      iVar2 = FUN_00416db0(local_270,&DAT_015c0b10);
      if (iVar2 != 0) {
        iVar2 = FUN_00416db0(local_270,&DAT_015c0b20);
        if ((iVar2 != 0) && ((local_278 & 0x10) != 0)) {
          local_2c8 = &LAB_015c0b34;
          FUN_00416cd0(&local_2b0,3,param_1,local_270);
          cVar1 = FUN_015c0950(local_2b0);
          if (cVar1 == '\0') {
            local_289 = '\0';
            FUN_015c0aa0(0,local_2a0);
            goto LAB_015c0a74;
          }
        }
      }
      iVar2 = FUN_015bf5f0(local_288);
    } while (iVar2 == 0);
    FUN_015bf620(local_288);
  }
  local_289 = FUN_00442420(param_1);
  if (local_289 == '\0') {
    cVar1 = FUN_015bf150(param_1);
    local_289 = cVar1 == '\0';
  }
LAB_015c0a74:
  FUN_00414560(&local_2b0,2);
  FUN_00417740(local_288,&DAT_00432b90);
  return local_289;
}

