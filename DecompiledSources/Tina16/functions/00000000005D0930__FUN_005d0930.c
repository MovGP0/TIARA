/* Ghidra address: 005d0930 */
/* Ghidra symbol: FUN_005d0930 */


void FUN_005d0930(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                 char param_5)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_2e8 [32];
  char local_2c8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined1 *local_2a0;
  char local_28a;
  char local_289;
  undefined1 local_288 [16];
  uint local_278;
  undefined8 local_270;
  
  local_2a0 = auStack_2e8;
  local_2b0 = 0;
  local_2a8 = 0;
  FUN_00417580(local_288,&DAT_00432b90);
  FUN_005d1ea0(&local_2a8,param_1,&LAB_005d0b80,0);
  iVar2 = FUN_00441230(local_2a8,0x1ff,local_288);
  if (iVar2 == 0) {
    local_28a = '\0';
    do {
      local_289 = FUN_005d2710(local_270,param_2);
      if ((local_289 != '\0') && (param_3 != (longlong *)0x0)) {
        cVar1 = (**(code **)(*param_3 + 0x18))(param_3,param_1,local_288);
        local_28a = cVar1 == '\0';
      }
      if (local_28a == '\0') {
        if ((param_5 != '\0') && ((local_278 & 0x10) != 0)) {
          iVar2 = FUN_00416db0(local_270,PTR_DAT_01de8338);
          if (iVar2 != 0) {
            iVar2 = FUN_00416db0(local_270,PTR_DAT_01de8340);
            if (iVar2 != 0) {
              FUN_005d1ea0(&local_2b0,param_1,local_270,0);
              local_2c8 = param_5;
              FUN_005d0930(local_2b0,param_2,param_3);
            }
          }
        }
        if ((local_289 != '\0') && (param_4 != (longlong *)0x0)) {
          cVar1 = (**(code **)(*param_4 + 0x18))(param_4,param_1,local_288);
          local_28a = cVar1 == '\0';
        }
      }
      if (local_28a != '\0') break;
      iVar2 = FUN_00441290(local_288);
    } while (iVar2 == 0);
    FUN_004412c0(local_288);
  }
  FUN_00414560(&local_2b0,2);
  FUN_00417740(local_288,&DAT_00432b90);
  return;
}

