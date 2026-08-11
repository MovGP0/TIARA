/* Ghidra address: 01be3f00 */
/* Ghidra symbol: FUN_01be3f00 */


void FUN_01be3f00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_28 = 0;
  if ((*(byte *)(param_2 + 0x59) & 2) == 0) {
    FUN_0041ddd0(&local_10,PTR_PTR_02005660);
    FUN_01bfd990(param_2,&local_28);
    local_20 = local_28;
    local_18 = 0x11;
    uVar1 = FUN_0044d530(&PTR_FUN_004334c0,1,local_10,&local_20,0);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_28);
  FUN_00414480(&local_10);
  return;
}

