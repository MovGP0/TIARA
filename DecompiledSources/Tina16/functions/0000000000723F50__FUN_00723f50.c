/* Ghidra address: 00723f50 */
/* Ghidra symbol: FUN_00723f50 */


void FUN_00723f50(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  short *psVar4;
  undefined8 local_20;
  short *local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = (short *)0x0;
  uVar3 = FUN_00723ed0(param_1,param_2,&local_10);
  local_20 = FUN_00723ed0(param_1,uVar3,&local_18);
  if (local_18 == (short *)0x0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x110);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_10);
  }
  else {
    psVar4 = (short *)FUN_004413a0(local_10);
    if (*psVar4 != 0x5c) {
      FUN_00416ad0(&local_10,&LAB_007240a8);
    }
    do {
      if (*local_18 != 0x5c) {
        iVar2 = 0;
        if (local_18 != (short *)0x0) {
          iVar2 = *(int *)(local_18 + -2);
        }
        if (((iVar2 < 4) || (local_18[1] != 0x3a)) || (local_18[2] != 0x5c)) {
          FUN_00416ba0(&local_18,local_10,local_18);
        }
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x60) + 0x110);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_18);
      local_20 = FUN_00723ed0(param_1,local_20,&local_18);
    } while (local_18 != (short *)0x0);
  }
  FUN_00414560(&local_18,2);
  return;
}

