/* Ghidra address: 019a6230 */
/* Ghidra symbol: FUN_019a6230 */


void FUN_019a6230(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  char local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  FUN_019a58e0(param_1,local_20,param_2,0);
  iVar2 = 1;
  do {
    if (iVar2 < 5) {
      if (iVar2 == 4) {
        local_29 = *(char *)(param_1 + 0x140);
      }
      else if (iVar2 == 1) {
        local_29 = *(char *)(param_1 + 0x128);
      }
      else if (iVar2 == 2) {
        local_29 = *(char *)(param_1 + 0x130);
      }
      else if (iVar2 == 3) {
        local_29 = *(char *)(param_1 + 0x138);
      }
    }
    else if (iVar2 == 5) {
      local_29 = *(char *)(param_1 + 0x148);
    }
    else if (iVar2 == 6) {
      local_29 = *(char *)(param_1 + 0x150);
    }
    else if (iVar2 == 7) {
      local_29 = *(char *)(param_1 + 0x158);
    }
    if (local_29 != '\0') {
      FUN_019a58e0(param_1,&local_28,param_2,iVar2);
      if (*(char *)(param_1 + 0x120) != '\0') {
        cVar1 = FUN_019a61b0(param_1,local_28);
        if (cVar1 != '\0') {
          FUN_00414480(&local_28);
        }
      }
      FUN_00416cd0(local_20,3,local_20[0],&LAB_019a63e8,local_28);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x78))(*(longlong **)(param_1 + 0xd0),local_20[0]);
  FUN_00414560(&local_28,2);
  return;
}

