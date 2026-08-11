/* Ghidra address: 00d7e410 */
/* Ghidra symbol: FUN_00d7e410 */


void FUN_00d7e410(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  byte bVar3;
  char cVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  byte local_29 [9];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  (**(code **)(*param_2 + 0x18))(param_2,local_29,1);
  bVar3 = local_29[0];
  if (0x1e < local_29[0]) {
    bVar3 = 0x1f;
  }
  uVar2 = 0;
  cVar4 = bVar3 + 1;
  do {
    FUN_00d57480(local_40,param_2);
    FUN_00d57480(&local_48,param_2);
    FUN_00d57480(&local_50,param_2);
    uVar1 = FUN_005fbf60(local_50);
    *(undefined4 *)(param_1 + 8 + uVar2 * 4) = uVar1;
    uVar2 = (ulonglong)(byte)((char)uVar2 + 1);
    cVar4 = cVar4 + -1;
  } while (cVar4 != '\0');
  if ((bVar3 < local_29[0]) && (local_29[0] = local_29[0] - 1, bVar3 <= local_29[0])) {
    cVar4 = (local_29[0] - bVar3) + '\x01';
    do {
      FUN_00d57480(&local_58,param_2);
      FUN_00d57480(&local_60,param_2);
      FUN_00d57480(&local_68,param_2);
      cVar4 = cVar4 + -1;
    } while (cVar4 != '\0');
  }
  FUN_00414560(&local_68,6);
  return;
}

