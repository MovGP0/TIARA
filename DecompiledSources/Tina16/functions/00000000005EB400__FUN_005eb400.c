/* Ghidra address: 005eb400 */
/* Ghidra symbol: FUN_005eb400 */


void FUN_005eb400(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 local_50 [2];
  undefined8 local_40;
  undefined1 local_38 [8];
  int local_30;
  int local_2c;
  int local_1c;
  
  local_50[0] = 0;
  local_40 = 0;
  (**(code **)(*param_2 + 0x90))(param_2);
  cVar1 = FUN_005eb020(param_1,local_38);
  if (cVar1 != '\0') {
    FUN_00414740(&local_40,0,local_2c + 1);
    iVar3 = 0;
    if (-1 < local_30 + -1) {
      do {
        local_1c = local_2c + 1;
        uVar2 = FUN_00416740(local_40);
        thunk_FUN_04195abe(*(undefined8 *)(param_1 + 8),iVar3,uVar2,&local_1c,0,0,0,0);
        uVar2 = FUN_00416740(local_40);
        FUN_004167d0(local_50,uVar2);
        (**(code **)(*param_2 + 0x78))(param_2,local_50[0]);
        iVar3 = iVar3 + 1;
        local_30 = local_30 + -1;
      } while (local_30 != 0);
    }
  }
  FUN_00414480(local_50);
  FUN_00414480(&local_40);
  return;
}

