/* Ghidra address: 01566aa0 */
/* Ghidra symbol: FUN_01566aa0 */


undefined1 FUN_01566aa0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_29;
  undefined8 local_20;
  
  local_20 = 0;
  cVar1 = FUN_00e0f210(*(undefined8 *)(param_1 + 0x938),0,&local_20);
  if (cVar1 == '\0') {
    local_29 = 1;
  }
  else {
    lVar2 = FUN_015710a0(&DAT_0156d6c8,1,0,*(undefined1 *)(param_1 + 0x94e));
    FUN_00414ad0(lVar2 + 0x20,local_20);
    local_29 = FUN_015fd300(lVar2,local_20);
    FUN_00410f20(lVar2);
  }
  FUN_00414480(&local_20);
  return local_29;
}

