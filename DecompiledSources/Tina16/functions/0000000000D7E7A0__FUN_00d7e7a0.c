/* Ghidra address: 00d7e7a0 */
/* Ghidra symbol: FUN_00d7e7a0 */


void FUN_00d7e7a0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  int local_2c [3];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  (**(code **)(*param_2 + 0x18))(param_2,local_2c,4);
  iVar4 = local_2c[0];
  if (0x16 < local_2c[0]) {
    iVar4 = 0x17;
  }
  iVar2 = 0;
  iVar3 = iVar4;
  if (-1 < iVar4 + -1) {
    do {
      FUN_00d57480(local_40,param_2);
      FUN_00d57480(&local_48,param_2);
      FUN_00d57480(&local_50,param_2);
      uVar1 = FUN_005fbf60(local_50);
      *(undefined4 *)(param_1 + 8 + (longlong)iVar2 * 4) = uVar1;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if ((iVar4 < local_2c[0]) && (iVar4 <= local_2c[0] + -1)) {
    iVar4 = ((local_2c[0] + -1) - iVar4) + 1;
    do {
      FUN_00d57480(&local_58,param_2);
      FUN_00d57480(&local_60,param_2);
      FUN_00d57480(&local_68,param_2);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414560(&local_68,6);
  return;
}

