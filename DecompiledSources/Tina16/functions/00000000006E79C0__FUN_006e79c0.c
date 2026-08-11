/* Ghidra address: 006e79c0 */
/* Ghidra symbol: FUN_006e79c0 */


void FUN_006e79c0(undefined8 param_1,byte param_2)

{
  int iVar1;
  undefined1 local_d4 [4];
  undefined4 local_d0;
  ushort local_cc;
  
  if (param_2 == 0) {
    FUN_006e7af0(param_1,0);
  }
  else if (param_2 == 1) {
    iVar1 = FUN_006e7ac0(param_1);
    if (iVar1 < 10) {
      FUN_006e7af0(param_1,10);
    }
  }
  FUN_006e7810(param_1,local_d4);
  local_d0 = 0x20;
  local_cc = (ushort)param_2;
  FUN_006e7890(param_1,local_d4);
  return;
}

