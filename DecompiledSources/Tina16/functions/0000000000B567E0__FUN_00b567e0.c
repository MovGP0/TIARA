/* Ghidra address: 00b567e0 */
/* Ghidra symbol: FUN_00b567e0 */


void FUN_00b567e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  undefined8 local_18;
  undefined1 local_10;
  
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  iVar1 = FUN_00417170(&DAT_00b5689c,local_res10[0],1);
  if (0 < iVar1) {
    local_18 = local_res10[0];
    local_10 = 0xf;
    uVar2 = FUN_00b147c0(&PTR_FUN_00b141e0,1,0xb,&local_18,0);
    FUN_004134c0(uVar2);
  }
  iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x18),local_res10[0]);
  if (iVar1 != 0) {
    FUN_00414b90(param_1 + 0x18,local_res10[0]);
  }
  FUN_00414520(local_res10);
  return;
}

