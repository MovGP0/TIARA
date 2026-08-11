/* Ghidra address: 007dc700 */
/* Ghidra symbol: FUN_007dc700 */


undefined8 FUN_007dc700(undefined8 param_1,ushort param_2)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  bVar1 = (byte)param_2;
  uVar2 = (ulonglong)bVar1;
  if (uVar2 < 0x2d) {
    if (uVar2 - 8 < 2) {
      FUN_00414b50(&local_10,*(undefined8 *)(&DAT_01e12e70 + (ulonglong)(byte)(bVar1 - 8) * 8));
      goto LAB_007dc8ac;
    }
    if (uVar2 == 0xd) {
      FUN_00414b50(&local_10,DAT_01e12e88);
      goto LAB_007dc8ac;
    }
    if (uVar2 == 0x1b) {
      FUN_00414b50(&local_10,DAT_01e12e80);
      goto LAB_007dc8ac;
    }
    if (uVar2 - 0x20 < 9) {
      FUN_00414b50(&local_10,*(undefined8 *)(&DAT_01e12e70 + (ulonglong)(byte)(bVar1 - 0x1c) * 8));
      goto LAB_007dc8ac;
    }
  }
  else if (uVar2 < 0x41) {
    if (uVar2 - 0x2d < 2) {
      FUN_00414b50(&local_10,*(undefined8 *)(&DAT_01e12e70 + (ulonglong)(byte)(bVar1 - 0x20) * 8));
      goto LAB_007dc8ac;
    }
    if (uVar2 - 0x30 < 10) {
      FUN_00416780(&local_10,bVar1);
      goto LAB_007dc8ac;
    }
  }
  else {
    if (uVar2 - 0x41 < 0x1a) {
      FUN_00416780(&local_10,bVar1);
      goto LAB_007dc8ac;
    }
    if (uVar2 - 0x60 < 10) {
      FUN_00416780(&local_10,bVar1 - 0x30);
      goto LAB_007dc8ac;
    }
    if (uVar2 - 0x70 < 0x18) {
      FUN_0043f750(local_20,bVar1 - 0x6f);
      FUN_00416ba0(&local_10,&LAB_007dc984,local_20[0]);
      goto LAB_007dc8ac;
    }
  }
  FUN_007dc690(&local_10,param_2);
LAB_007dc8ac:
  if (local_10 == 0) {
    FUN_00414480(param_1);
  }
  else {
    FUN_00414480(param_1);
    if ((param_2 & 0x2000) != 0) {
      FUN_00416ad0(param_1,DAT_01e12ee8);
    }
    if ((param_2 & 0x4000) != 0) {
      FUN_00416ad0(param_1,DAT_01e12ef0);
    }
    if ((param_2 & 0x8000) != 0) {
      FUN_00416ad0(param_1,DAT_01e12ef8);
    }
    FUN_00416ad0(param_1,local_10);
  }
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return param_1;
}

