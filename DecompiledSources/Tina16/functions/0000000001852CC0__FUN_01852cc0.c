/* Ghidra address: 01852cc0 */
/* Ghidra symbol: FUN_01852cc0 */


undefined8 FUN_01852cc0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_30[0] = 0;
  local_20 = 0;
  FUN_00414480(&local_20);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    iVar1 = FUN_00418c90();
    iVar2 = 0;
    if (-1 < iVar1) {
      iVar1 = iVar1 + 1;
      do {
        FUN_0043f750(local_30,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar2 * 4));
        FUN_00416cd0(&local_20,3,local_20,&DAT_01852fec,local_30[0]);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  FUN_0043f750(&local_38,*(undefined4 *)(param_1 + 8));
  FUN_0043f750(&local_40,*(undefined4 *)(param_1 + 0xc));
  FUN_0043f750(&local_48,*(undefined4 *)(param_1 + 0x10));
  FUN_0043f750(&local_50,*(undefined4 *)(param_1 + 0x14));
  FUN_0043f750(&local_58,*(undefined4 *)(param_1 + 0x18));
  FUN_0043f750(&local_60,*(undefined4 *)(param_1 + 0x1c));
  FUN_0043f750(&local_68,*(undefined4 *)(param_1 + 0x20));
  FUN_004168b0(&local_70,*(undefined8 *)(param_1 + 0x30));
  FUN_00416cd0(param_2,0x12,L"ExtTextOutW\r\n  X, Y, Options: ",local_38,&DAT_01853048,local_40,
               &DAT_01853048,local_48,L"\r\n  Rect: ",local_50,&DAT_01852fec,local_58,&DAT_01852fec,
               local_60,&DAT_01852fec,local_68,L"\r\n  Text: ",local_70,L"\r\n  Dx:",local_20);
  FUN_00414560(&local_70,9);
  FUN_00414480(&local_20);
  return param_2;
}

