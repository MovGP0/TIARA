/* Ghidra address: 015fb370 */
/* Ghidra symbol: FUN_015fb370 */


void FUN_015fb370(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_1e0;
  undefined1 local_1d8 [88];
  undefined1 local_180 [168];
  undefined1 local_d8 [88];
  undefined1 local_80 [96];
  
  local_1e0 = 0;
  iVar2 = 0;
  if (-1 < param_2 + -1) {
    do {
      uVar1 = FUN_015fb070(param_1,2);
      FUN_01aa0f40(local_80,param_3 + iVar2,0x10);
      FUN_00414ff0(local_d8,local_80);
      FUN_00415110(local_d8,&LAB_015fb4a8,0x51);
      FUN_00414ff0(local_180,local_d8);
      FUN_01aa0f40(local_1d8,uVar1,8);
      FUN_00415110(local_180,local_1d8,0xa1);
      FUN_004169a0(&local_1e0,local_180);
      (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x78))
                (*(longlong **)(param_1 + 0xa8),local_1e0);
      iVar2 = iVar2 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_00414480(&local_1e0);
  return;
}

