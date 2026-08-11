/* Ghidra address: 016ffc70 */
/* Ghidra symbol: FUN_016ffc70 */


undefined8 FUN_016ffc70(longlong param_1,longlong param_2)

{
  short sVar1;
  ushort uVar2;
  bool bVar3;
  longlong local_res10 [3];
  undefined8 local_28;
  undefined8 local_20;
  int local_14;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414480(&local_10);
  while( true ) {
    uVar2 = *(short *)(local_res10[0] + -2 + (longlong)*(int *)(param_1 + 0xbc) * 2) - 8;
    if (uVar2 < 0x78) {
      bVar3 = ((byte)(&DAT_016ffe00)[(longlong)((ulonglong)uVar2 & 0x7f) >> 3] >>
               ((ulonglong)uVar2 & 7) & 1) != 0;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) break;
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  }
  while( true ) {
    sVar1 = *(short *)(local_res10[0] + -2 + (longlong)*(int *)(param_1 + 0xbc) * 2);
    uVar2 = sVar1 - 0x28;
    if (uVar2 < 0x40) {
      bVar3 = (1L << ((byte)uVar2 & 0x3f) & 0x200000002003ff68U) != 0;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) break;
    FUN_00416780(&local_20,sVar1);
    FUN_00416ad0(&local_10,local_20);
    *(int *)(param_1 + 0xbc) = *(int *)(param_1 + 0xbc) + 1;
  }
  local_28 = FUN_00410100(local_10,&local_14);
  if (local_14 != 0) {
    local_28 = 0xfff8000000000000;
  }
  FUN_00414480(&local_20);
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return local_28;
}

