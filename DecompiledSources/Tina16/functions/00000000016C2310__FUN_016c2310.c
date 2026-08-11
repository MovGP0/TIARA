/* Ghidra address: 016c2310 */
/* Ghidra symbol: FUN_016c2310 */


undefined8 * FUN_016c2310(longlong param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  int iVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_016b05d0(param_3,param_2,param_3 + 0x24 + (longlong)param_4 * 8);
  iVar1 = FUN_00416db0(*param_2,L"PSG_0");
  if (iVar1 == 0) {
    FUN_00414ad0(param_2,&DAT_016c241c);
  }
  iVar1 = FUN_00416db0(*param_2,L"PSG_1");
  if (iVar1 == 0) {
    FUN_004154b0(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 8),0);
    FUN_004155b0(&local_10,"_PSG1");
    FUN_00416880(param_2,local_10);
    *(undefined1 *)(param_1 + 0x5b) = 1;
  }
  FUN_004144d0(&local_10);
  return param_2;
}

