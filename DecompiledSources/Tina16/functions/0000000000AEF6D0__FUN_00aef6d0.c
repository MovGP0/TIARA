/* Ghidra address: 00aef6d0 */
/* Ghidra symbol: FUN_00aef6d0 */


undefined1 FUN_00aef6d0(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_21;
  undefined8 local_20;
  undefined4 local_14;
  undefined8 local_10;
  
  local_20 = 0;
  local_10 = 0;
  FUN_00441a10(&local_20,param_1);
  FUN_0043e1a0(&local_10,local_20);
  local_14 = 0xffffffff;
  cVar1 = (**(code **)(*DAT_02014760 + 0x140))(DAT_02014760,local_10,&local_14);
  if (cVar1 == '\0') {
    local_21 = 4;
  }
  else {
    lVar2 = (**(code **)(*DAT_02014760 + 0x30))(DAT_02014760,local_14);
    local_21 = *(undefined1 *)(lVar2 + 8);
  }
  FUN_00414480(&local_20);
  FUN_00414480(&local_10);
  return local_21;
}

