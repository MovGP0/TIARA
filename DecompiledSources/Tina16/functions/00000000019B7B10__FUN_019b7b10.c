/* Ghidra address: 019b7b10 */
/* Ghidra symbol: FUN_019b7b10 */


void FUN_019b7b10(undefined8 param_1,longlong param_2)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  local_30[0] = 0;
  local_20 = 0;
  iVar4 = 0;
  while (iVar2 = FUN_019b5ce0(param_1,param_2), iVar4 < iVar2) {
    iVar2 = FUN_019b5ce0(param_1,param_2);
    uVar5 = iVar2 - 1;
    while (0xfa < (int)(uVar5 - iVar4)) {
      do {
        uVar6 = uVar5;
        uVar5 = uVar6 - 1;
        uVar3 = (ulonglong)uVar5;
        sVar1 = FUN_019b60b0(param_1,uVar3,param_2);
        if ((ushort)(sVar1 - 0x28U) < 8) {
          bVar7 = ((int)CONCAT71((int7)(uVar3 >> 8),1) << ((byte)(sVar1 - 0x28U) & 0x1f) & 0x28U) !=
                  0;
        }
        else {
          bVar7 = false;
        }
      } while (!bVar7);
      if (iVar4 < (int)(uVar6 - 2)) {
        uVar5 = uVar6 - 2;
      }
    }
    FUN_019b79b0(&local_20,param_1,iVar4,uVar5,param_2);
    iVar4 = uVar5 + 1;
    iVar2 = FUN_019b5ce0(param_1,param_2);
    if ((iVar4 < iVar2) && (iVar2 = FUN_019b5ce0(param_1,param_2), iVar2 < 0x2ee)) {
      FUN_00416ba0(local_30,local_20,&DAT_019b7cec);
      (**(code **)(**(longlong **)(param_2 + 0xe38) + 0x78))
                (*(longlong **)(param_2 + 0xe38),local_30[0]);
    }
    else {
      iVar2 = FUN_019b5ce0(param_1,param_2);
      if (iVar4 < iVar2) {
        FUN_00416ba0(&local_38,local_20,&DAT_019b7cfc);
        (**(code **)(**(longlong **)(param_2 + 0xe38) + 0x78))
                  (*(longlong **)(param_2 + 0xe38),local_38);
      }
      else {
        (**(code **)(**(longlong **)(param_2 + 0xe38) + 0x78))
                  (*(longlong **)(param_2 + 0xe38),local_20);
      }
    }
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  return;
}

