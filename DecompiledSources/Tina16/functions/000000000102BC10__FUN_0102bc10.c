/* Ghidra address: 0102bc10 */
/* Ghidra symbol: FUN_0102bc10 */


void FUN_0102bc10(longlong param_1)

{
  undefined4 uVar1;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = 0;
  local_38 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  uVar1 = FUN_00f794e0(*(undefined8 *)(param_1 + 0x1520),L"SREG",&DAT_0102be20);
  *(undefined4 *)(param_1 + 0x14e4) = uVar1;
  if (*(int *)(param_1 + 0x14e4) < 0x40) {
    FUN_00416780(&local_18,*(undefined2 *)(*(longlong *)(param_1 + 0x1520) + 0xb0));
    FUN_00416cd0(&local_10,4,&DAT_0102be30,local_18,L"R16, SREG",
                 L" ; save off contents of STATUS register");
    FUN_00f787d0(*(undefined8 *)(param_1 + 0x1520),*(undefined8 *)(param_1 + 0x1528),local_10);
  }
  else {
    FUN_00416780(&local_28,*(undefined2 *)(*(longlong *)(param_1 + 0x1520) + 0xb0));
    FUN_00416cd0(&local_20,4,L"LDS ",local_28,L"R16, SREG",
                 L" ; save off contents of STATUS register");
    FUN_00f787d0(*(undefined8 *)(param_1 + 0x1520),*(undefined8 *)(param_1 + 0x1528),local_20);
  }
  FUN_00416780(&local_38,*(undefined2 *)(*(longlong *)(param_1 + 0x1520) + 0xb0));
  FUN_00416cd0(&local_30,4,L"STS ",local_38,L"status_temp ,R16",
               L" ; save off contents of STATUS register");
  FUN_00f787d0(*(undefined8 *)(param_1 + 0x1520),*(undefined8 *)(param_1 + 0x1528),local_30);
  FUN_00414560(&local_38,6);
  return;
}

