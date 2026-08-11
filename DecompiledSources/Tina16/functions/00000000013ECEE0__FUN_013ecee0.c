/* Ghidra address: 013ecee0 */
/* Ghidra symbol: FUN_013ecee0 */


void FUN_013ecee0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar1 = FUN_006d8150(*(undefined8 *)(param_1 + 0x6d0));
  if (iVar1 == 0) {
    FUN_014386d0(*(undefined8 *)(param_1 + 0x738),param_1 + 0x745);
    *(undefined1 *)(param_1 + 0x740) = *(undefined1 *)(*(longlong *)(param_1 + 0x738) + 0xe38);
  }
  else if (iVar1 == 1) {
    *(undefined1 *)(param_1 + 0xcbb) = *(undefined1 *)(param_1 + 0x108c);
    uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x728));
    *(undefined8 *)(param_1 + 0xcd0) = uVar2;
    uVar2 = FUN_00b90090(*(undefined8 *)(param_1 + 0x730));
    *(undefined8 *)(param_1 + 0xcd8) = uVar2;
    if (*(double *)(param_1 + 0xcd8) <= *(double *)(param_1 + 0xcd0)) {
      uVar2 = FUN_00b89270();
      FUN_00b8e520(uVar2,local_20,0x134);
      FUN_013ece80(param_1,local_20[0]);
    }
    *(undefined8 *)(param_1 + 0x802) = 0x3ff0000000000000;
  }
  FUN_00414480(local_20);
  return;
}

