/* Ghidra address: 00c8f970 */
/* Ghidra symbol: FUN_00c8f970 */


undefined1 FUN_00c8f970(longlong param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x28) == '\0') {
    FUN_0041ddd0(&local_10,PTR_PTR_02003f90);
    uVar2 = FUN_0086dfd0(&PTR_FUN_0086d630,1,local_10);
    FUN_004134c0(uVar2);
  }
  uVar1 = FUN_00c8fd10(*(undefined8 *)(param_1 + 0x40),param_2);
  FUN_00414480(&local_10);
  return uVar1;
}

