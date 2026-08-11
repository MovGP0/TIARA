/* Ghidra address: 0196def0 */
/* Ghidra symbol: FUN_0196def0 */


void FUN_0196def0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined1 *local_40;
  int local_2c;
  longlong local_28;
  undefined8 local_20;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_20 = FUN_01810fa0(&DAT_018103d8,1,0);
  FUN_00414ad0(param_2 + 0x20,L"style");
  FUN_01803ed0(param_2,L"Name",*(undefined8 *)(param_1 + 0x28));
  iVar1 = FUN_004b2060();
  local_2c = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_28 = FUN_01803a30(param_2);
      FUN_00414ad0(local_28 + 0x20,L"item");
      uVar2 = FUN_0196dcf0(param_1,local_2c);
      local_58 = 0;
      FUN_01813180(local_20,&local_48,uVar2,0);
      FUN_00414ad0(local_28 + 0x30,local_48);
      local_2c = local_2c + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00410f20(local_20);
  FUN_00414480(&local_48);
  return;
}

