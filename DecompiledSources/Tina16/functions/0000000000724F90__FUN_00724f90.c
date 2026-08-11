/* Ghidra address: 00724f90 */
/* Ghidra symbol: FUN_00724f90 */


void FUN_00724f90(longlong param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  longlong local_20;
  
  local_40 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_20 = 0;
  uVar3 = 0;
  puVar4 = (undefined4 *)(param_1 + 0x70);
  do {
    FUN_00416780(&local_38,CONCAT62((int6)(uVar3 >> 0x10),(short)uVar3 + 0x41));
    FUN_00416ba0(local_30,L"Color",local_38);
    FUN_004b4060(*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + 0xd8),&local_20,local_30[0]);
    if (local_20 == 0) {
      *puVar4 = 0xffffffff;
    }
    else {
      FUN_00416ba0(&local_40,&LAB_007250c0,local_20);
      uVar1 = FUN_0043fc00(local_40);
      *puVar4 = uVar1;
    }
    uVar2 = (int)uVar3 + 1;
    uVar3 = (ulonglong)uVar2;
    puVar4 = puVar4 + 1;
  } while (uVar2 != 0x10);
  FUN_00414560(&local_40,3);
  FUN_00414480(&local_20);
  return;
}

