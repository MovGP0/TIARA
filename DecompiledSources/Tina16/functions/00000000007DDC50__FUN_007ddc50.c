/* Ghidra address: 007ddc50 */
/* Ghidra symbol: FUN_007ddc50 */


void FUN_007ddc50(longlong param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  code *local_30;
  longlong local_28;
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_58;
  puVar1 = auStack_58;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    cVar2 = FUN_004113d0(*(longlong *)(param_1 + 0xe0),&PTR_FUN_007db330);
    puVar1 = local_20;
    if (cVar2 != '\0') {
      FUN_007e44b0(param_1,0);
      FUN_007e51a0(param_1,0);
      puVar1 = local_20;
    }
  }
  local_20 = puVar1;
  local_10 = FUN_00410e60(&DAT_007ddb40,1);
  uVar4 = FUN_007de060(param_1);
  *(undefined8 *)(local_10 + 8) = uVar4;
  if (*(longlong *)(param_1 + 0xe0) != 0) {
    cVar2 = FUN_007e6b10(*(longlong *)(param_1 + 0xe0));
    if (cVar2 != '\0') {
      uVar3 = 1;
      goto LAB_007ddcdf;
    }
  }
  uVar3 = 0;
LAB_007ddcdf:
  *(undefined1 *)(local_10 + 0x10) = uVar3;
  local_28 = local_10;
  local_30 = FUN_007ddc30;
  FUN_007dcc20(&local_30,*(undefined8 *)(param_1 + 0xd0),param_1);
  FUN_00410f20(local_10);
  return;
}

