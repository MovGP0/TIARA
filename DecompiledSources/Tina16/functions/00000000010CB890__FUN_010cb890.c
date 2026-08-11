/* Ghidra address: 010cb890 */
/* Ghidra symbol: FUN_010cb890 */


void FUN_010cb890(byte *param_1)

{
  int iVar1;
  byte bVar2;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_004169a0(&local_10,param_1);
  iVar1 = FUN_004170c0(&LAB_010cb954,local_10,1);
  if (iVar1 != 0) {
    for (bVar2 = *param_1; param_1[bVar2] == 0x30; bVar2 = bVar2 - 1) {
      *param_1 = *param_1 - 1;
    }
    if (param_1[bVar2] == 0x2e) {
      *param_1 = *param_1 - 1;
    }
  }
  FUN_00414480(&local_10);
  return;
}

