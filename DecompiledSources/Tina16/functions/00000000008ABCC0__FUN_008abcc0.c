/* Ghidra address: 008abcc0 */
/* Ghidra symbol: FUN_008abcc0 */


void FUN_008abcc0(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  longlong local_18;
  short *local_10;
  
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_10 = (short *)0x0;
  local_18 = 0;
  FUN_00879190(&local_10,param_2);
  iVar1 = 0;
  if (local_10 != (short *)0x0) {
    iVar1 = *(int *)(local_10 + -2);
  }
  if (iVar1 == 0) {
    if (param_4 != '\0') {
      FUN_0041ddd0(&local_20,PTR_PTR_020055f0);
      uVar2 = FUN_0086dfd0(&PTR_FUN_0086d2e8,1,local_20);
      FUN_004134c0(uVar2);
    }
  }
  else {
    FUN_00879190(&local_18,param_3);
    iVar1 = 0;
    if (local_18 != 0) {
      iVar1 = *(int *)(local_18 + -4);
    }
    if (iVar1 == 0) {
      if (param_4 != '\0') {
        FUN_0041ddd0(&local_28,PTR_PTR_02003df8);
        uVar2 = FUN_0086dfd0(&PTR_FUN_0086d2e8,1,local_28);
        FUN_004134c0(uVar2);
      }
    }
    else {
      if (*local_10 != 0x2e) {
        FUN_00416ba0(&local_10,&LAB_008abe98,local_10);
      }
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))
                        (*(longlong **)(param_1 + 0x28),local_10);
      if (iVar1 == -1) {
        (**(code **)(**(longlong **)(param_1 + 0x28) + 0x78))
                  (*(longlong **)(param_1 + 0x28),local_10);
        (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))
                  (*(longlong **)(param_1 + 0x20),local_18);
      }
      else if (param_4 != '\0') {
        FUN_0041ddd0(&local_30,PTR_PTR_02003240);
        uVar2 = FUN_0086dfd0(&PTR_FUN_0086d2e8,1,local_30);
        FUN_004134c0(uVar2);
      }
    }
  }
  FUN_00414560(&local_30,5);
  return;
}

