/* Ghidra address: 00b58a40 */
/* Ghidra symbol: FUN_00b58a40 */


void FUN_00b58a40(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414650(local_res10);
  uVar1 = FUN_00b59cd0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 8),local_res10[0]);
  if ((char)uVar1 == '\0') {
    iVar2 = FUN_00416420(*(undefined8 *)(param_1 + 0x38),local_res10[0]);
    if (iVar2 != 0) {
      FUN_00414b90(param_1 + 0x38,local_res10[0]);
    }
  }
  else {
    uVar3 = FUN_00b146c0(&PTR_FUN_00b141e0,1,uVar1);
    FUN_004134c0(uVar3);
  }
  FUN_00414520(local_res10);
  return;
}

