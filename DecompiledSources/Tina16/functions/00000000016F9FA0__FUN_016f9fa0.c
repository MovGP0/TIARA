/* Ghidra address: 016f9fa0 */
/* Ghidra symbol: FUN_016f9fa0 */


int FUN_016f9fa0(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  byte local_49;
  undefined1 local_48 [40];
  
  iVar4 = 0;
  lVar3 = (**(code **)*param_2)(param_2);
  if (6 < lVar3) {
    uVar1 = FUN_004b6da0(param_2);
    iVar4 = 6;
    (**(code **)(*param_2 + 0x48))(param_2,0xfffffffa,2);
    (**(code **)(*param_2 + 0x18))(param_2,local_48,6);
    FUN_004153c0(&local_49,6);
    while( true ) {
      lVar3 = (**(code **)*param_2)(param_2);
      if (0x2800 < lVar3) {
        lVar3 = 0x2800;
      }
      if (lVar3 <= iVar4) break;
      iVar2 = FUN_00414f50(&local_49,&DAT_016fa0b0,(ulonglong)local_49 + 1);
      if (iVar2 == 0) break;
      iVar4 = iVar4 + 1;
      (**(code **)(*param_2 + 0x48))(param_2,-iVar4,2);
      (**(code **)(*param_2 + 0x18))(param_2,local_48,6);
      FUN_004153c0(&local_49,6);
    }
    (**(code **)(*param_2 + 0x48))(param_2,uVar1,0);
    iVar2 = FUN_00414f50(&local_49,&DAT_016fa0b0,(ulonglong)local_49 + 1);
    if (iVar2 != 0) {
      iVar4 = 0;
    }
  }
  return iVar4;
}

