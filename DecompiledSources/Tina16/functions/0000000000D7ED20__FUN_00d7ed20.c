/* Ghidra address: 00d7ed20 */
/* Ghidra symbol: FUN_00d7ed20 */


void FUN_00d7ed20(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  byte bVar2;
  ulonglong uVar3;
  char cVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  byte local_29;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  (**(code **)(*param_2 + 0x18))(param_2,&local_29,1);
  bVar2 = local_29;
  if (0x5b < local_29) {
    bVar2 = 0x5c;
  }
  uVar3 = 0;
  cVar4 = bVar2 + 1;
  do {
    FUN_00d57480(&local_40,param_2);
    FUN_00d57480(&local_48,param_2);
    FUN_00d57480(&local_38,param_2);
    FUN_00d7dea0(&local_50,local_38);
    FUN_005fcd80(*(undefined8 *)(param_1 + 8 + uVar3 * 8),local_50);
    uVar1 = FUN_00d7df20(local_38);
    FUN_005fce30(*(undefined8 *)(param_1 + 8 + uVar3 * 8),uVar1);
    uVar1 = FUN_00d7dfe0(local_38);
    FUN_005fc860(*(undefined8 *)(param_1 + 8 + uVar3 * 8),uVar1);
    uVar1 = FUN_00d7e140(local_38);
    FUN_005fce70(*(undefined8 *)(param_1 + 8 + uVar3 * 8),uVar1);
    uVar3 = (ulonglong)(byte)((char)uVar3 + 1);
    cVar4 = cVar4 + -1;
  } while (cVar4 != '\0');
  if ((bVar2 < local_29) && (local_29 = local_29 - 1, bVar2 <= local_29)) {
    cVar4 = (local_29 - bVar2) + '\x01';
    do {
      FUN_00d57480(&local_58,param_2);
      FUN_00d57480(&local_60,param_2);
      FUN_00d57480(&local_68,param_2);
      cVar4 = cVar4 + -1;
    } while (cVar4 != '\0');
  }
  FUN_00414560(&local_68,7);
  return;
}

