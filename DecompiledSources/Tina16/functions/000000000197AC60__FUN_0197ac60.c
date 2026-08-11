/* Ghidra address: 0197ac60 */
/* Ghidra symbol: FUN_0197ac60 */


undefined1 FUN_0197ac60(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  FUN_00414480(&local_10);
  for (; param_2 != 0; param_2 = *(longlong *)(param_2 + 8)) {
    if (*(longlong *)(param_2 + 0x38) != 0) {
      FUN_00416cd0(&local_10,3,*(undefined8 *)(param_2 + 0x38),&LAB_0197adf8,local_10);
    }
  }
  iVar2 = FUN_00414cb0(*(undefined8 *)(param_1 + 0x90));
  if ((0 < iVar2) &&
     (iVar2 = FUN_00414cb0(*(undefined8 *)(param_1 + 0x90)),
     *(short *)(*(longlong *)(param_1 + 0x90) + -2 + (longlong)iVar2 * 2) != 0x5c)) {
    FUN_00416ba0(&local_10,&LAB_0197adf8,local_10);
  }
  if (*(char *)(param_1 + 0xb8) == '\x01') {
    FUN_00416ba0(local_20,*(undefined8 *)(param_1 + 0x90),local_10);
    cVar1 = FUN_00440b00(local_20[0],1);
    if (cVar1 == '\0') {
      FUN_00416ba0(&local_28,*(undefined8 *)(param_1 + 0x90),local_10);
      FUN_00409a30(local_28);
      FUN_00409900();
    }
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return 1;
}

