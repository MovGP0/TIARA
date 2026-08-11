/* Ghidra address: 01c02b70 */
/* Ghidra symbol: FUN_01c02b70 */


void FUN_01c02b70(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_20;
  undefined1 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_0064fe60(param_1);
  if (*(char *)(param_1 + 0x4a8) == '\0') {
    FUN_0041ddd0(&local_10,PTR_PTR_02002008);
    local_20 = *(undefined8 *)(param_1 + 0x10);
    local_18 = 0x11;
    uVar1 = FUN_0044d530(&PTR_FUN_004334c0,1,local_10,&local_20,0);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_10);
  return;
}

