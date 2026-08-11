/* Ghidra address: 00a7c9a0 */
/* Ghidra symbol: FUN_00a7c9a0 */


void FUN_00a7c9a0(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  int local_2c;
  undefined8 local_28;
  short *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_20 = (short *)0x0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  FUN_00414b50(&local_20,*(undefined8 *)(param_2 + 8));
  FUN_00a28a70(&local_48,&local_20);
  FUN_00414480(&local_10);
  FUN_0043e600(&local_10,local_20);
  local_2c = FUN_004170c0(L"res://",local_10,1);
  FUN_00414480(&local_10);
  if (0 < local_2c) {
    FUN_00416e20(&local_20,local_2c,6);
    if (*local_20 == 0x2f) {
      FUN_00416e20(&local_20,1,1);
    }
  }
  FUN_00414480(&local_18);
  FUN_00a27e40(&local_50,local_20);
  local_38 = local_50;
  FUN_0043e600(&local_18,local_50);
  FUN_00414b50(&local_28,local_18);
  FUN_00414480(&local_18);
  uVar1 = FUN_00a7c330(local_28);
  *(char *)(param_2 + 0x3a) = (char)uVar1;
  uVar2 = FUN_00a7cbc0(*param_1,PTR_IMAGE_DOS_HEADER_0200c280,local_20,uVar1);
  FUN_00a7c690(param_2,uVar2);
  FUN_00414560(&local_50,2);
  FUN_00414560(&local_28,4);
  return;
}

