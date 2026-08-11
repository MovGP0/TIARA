/* Ghidra address: 00a28c10 */
/* Ghidra symbol: FUN_00a28c10 */


int FUN_00a28c10(undefined8 param_1,ushort param_2)

{
  undefined8 uVar1;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  if ((ushort)(param_2 - 0x30) < 10) {
    local_1c = param_2 - 0x30;
  }
  else if ((ushort)(param_2 - 0x41) < 6) {
    local_1c = param_2 - 0x37;
  }
  else if ((ushort)(param_2 - 0x61) < 6) {
    local_1c = param_2 - 0x57;
  }
  else {
    FUN_00416780(&local_18,param_2);
    FUN_00416cd0(&local_10,3,L"Invalid escape character: \'",local_18,&DAT_00a28d5c);
    uVar1 = FUN_0044d490(&PTR_FUN_00436080,1,local_10);
    FUN_004134c0(uVar1);
  }
  FUN_00414560(&local_18,2);
  return local_1c;
}

