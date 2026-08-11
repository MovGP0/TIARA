/* Ghidra address: 0154fc70 */
/* Ghidra symbol: FUN_0154fc70 */


undefined8 FUN_0154fc70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414ad0(param_2,local_res18[0]);
  if (*(char *)(param_1 + 0x94e) == '\0') {
    FUN_00414ad0(param_2,local_res18[0]);
    goto code_r0x0154fe53;
  }
  iVar1 = FUN_00416db0(local_res18[0],L"comp_latch_jkffp_rising_synth");
  if (iVar1 == 0) {
LAB_0154fcd4:
    FUN_00414ad0(param_2,L"comp_latch_jkffp");
    *(undefined1 *)(param_1 + 0x7bb) = 1;
  }
  else {
    iVar1 = FUN_00416db0(local_res18[0],L"comp_latch_jkffp_falling_synth");
    if (iVar1 == 0) goto LAB_0154fcd4;
  }
  iVar1 = FUN_00416db0(local_res18[0],L"comp_latch_jkffc_rising_synth");
  if (iVar1 == 0) {
LAB_0154fd17:
    FUN_00414ad0(param_2,L"comp_latch_jkffc");
    *(undefined1 *)(param_1 + 0x7bb) = 1;
  }
  else {
    iVar1 = FUN_00416db0(local_res18[0],L"comp_latch_jkffc_falling_synth");
    if (iVar1 == 0) goto LAB_0154fd17;
  }
  iVar1 = FUN_00416db0(local_res18[0],L"comp_latch_jkffpc_rising_synth");
  if (iVar1 == 0) {
LAB_0154fd5a:
    FUN_00414ad0(param_2,L"comp_latch_jkffpc");
    *(undefined1 *)(param_1 + 0x7bb) = 1;
  }
  else {
    iVar1 = FUN_00416db0(local_res18[0],L"comp_latch_jkffpc_falling_synth");
    if (iVar1 == 0) goto LAB_0154fd5a;
  }
  iVar1 = FUN_00416db0(local_res18[0],L"comp_latch_rsflop_rising_synth");
  if (iVar1 == 0) {
LAB_0154fd9d:
    FUN_00414ad0(param_2,L"comp_latch_rsflop");
    *(undefined1 *)(param_1 + 0x7bb) = 1;
  }
  else {
    iVar1 = FUN_00416db0(local_res18[0],L"comp_latch_rsflop_falling_synth");
    if (iVar1 == 0) goto LAB_0154fd9d;
  }
  iVar1 = FUN_00416db0(local_res18[0],L"comp_latch_dffpc_rising_synth");
  if (iVar1 == 0) {
LAB_0154fde0:
    FUN_00414ad0(param_2,L"comp_dffpc");
    *(undefined1 *)(param_1 + 0x7bb) = 1;
  }
  else {
    iVar1 = FUN_00416db0(local_res18[0],L"comp_latch_dffpc_falling_synth");
    if (iVar1 == 0) goto LAB_0154fde0;
  }
  iVar1 = FUN_004170c0(L"ms_rising_synth",local_res18[0],1);
  if (0 < iVar1) {
    FUN_00450070(param_2,local_res18[0],L"_rising_synth",0,1);
    *(undefined1 *)(param_1 + 0x7bb) = 1;
  }
code_r0x0154fe53:
  FUN_00414480(local_res18);
  return param_2;
}

