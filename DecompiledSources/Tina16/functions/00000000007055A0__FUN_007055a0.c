/* Ghidra address: 007055a0 */
/* Ghidra symbol: FUN_007055a0 */


undefined8 FUN_007055a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00414480(param_2);
  if (*(byte *)(param_1 + 0x580) < 2) {
    FUN_0064dd90(param_1,local_20);
    iVar1 = FUN_006839f0(param_1);
    uVar2 = FUN_00683a60(param_1);
    FUN_00416dc0(param_2,local_20[0],iVar1 + 1,uVar2);
  }
  FUN_00414480(local_20);
  return param_2;
}

