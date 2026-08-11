/* Ghidra address: 019b7680 */
/* Ghidra symbol: FUN_019b7680 */


undefined1 FUN_019b7680(byte *param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  byte bVar3;
  bool bVar4;
  undefined1 local_61;
  undefined1 local_60 [48];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  int local_c;
  
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  if (*param_1 == 0) {
    local_61 = 0;
    goto LAB_019b78b9;
  }
  while (*param_1 != 0) {
    if ((byte)(param_1[1] - 0x28) < 0x58) {
      uVar2 = ((ulonglong)(byte)(param_1[1] - 0x28) & 0x7f) + 0x20;
      bVar4 = (*(byte *)(((longlong)uVar2 >> 3) + 0x19b7908) >> (uVar2 & 7) & 1) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) break;
    FUN_00415260(param_1,0x28,1,1);
  }
  if ((byte)(param_1[1] - 0x28) < 0x20 && (1 << (param_1[1] - 0x28 & 0x1f) & 0x3ff28U) != 0) {
    FUN_004154b0(local_20,param_1,0);
    FUN_00416880(&local_28,local_20[0]);
    FUN_00410100(local_28,&local_c);
    if (local_c != 0) {
      *(undefined1 *)(param_2 + 0xb3e) = 1;
    }
  }
  FUN_004169a0(&local_30,param_1);
  iVar1 = FUN_004170c0(&DAT_019b7928,local_30,1);
  if (((iVar1 < 1) &&
      (0x1f < (byte)(param_1[1] - 0x28) || (1 << (param_1[1] - 0x28 & 0x1f) & 0x3ff28U) == 0)) &&
     (*param_1 != 0)) {
    local_61 = 1;
  }
  else {
    *param_1 = 0;
    local_61 = 0;
  }
  if (*param_1 == 0) {
LAB_019b7849:
    iVar1 = 1;
  }
  else {
    if ((byte)(param_1[1] - 0x28) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (param_1[1] - 0x28 & 0x1f) &
              0x28U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) goto LAB_019b7849;
    iVar1 = 2;
  }
  for (; iVar1 <= (int)(uint)*param_1; iVar1 = iVar1 + 1) {
    bVar3 = param_1[iVar1] - 0x30;
    if (bVar3 < 0x50) {
      bVar4 = ((byte)(&DAT_019b792d)[(longlong)(short)(bVar3 & 0x7f) >> 3] >> (bVar3 & 7) & 1) != 0;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) break;
  }
  FUN_004151b0(local_60,param_1,1,iVar1 + -1);
  FUN_00415020(param_1,local_60,0x28);
LAB_019b78b9:
  FUN_00414560(&local_30,2);
  FUN_004144d0(local_20);
  return local_61;
}

