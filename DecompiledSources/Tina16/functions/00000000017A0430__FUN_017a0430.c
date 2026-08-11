/* Ghidra address: 017a0430 */
/* Ghidra symbol: FUN_017a0430 */


void FUN_017a0430(longlong param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  char *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = 0;
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_18 = 0;
  local_40 = param_3;
  FUN_00724270(*(undefined8 *)(param_1 + 0xd48),&local_10);
  FUN_00441a10(&local_18,local_10);
  FUN_0177ddc0(*(undefined8 *)(param_1 + 0xd48),&local_28);
  FUN_00416ba0(&local_20,&DAT_017a0598,local_28);
  iVar2 = FUN_0043e6d0(local_18,local_20);
  if (iVar2 != 0) {
    FUN_0177ddc0(*(undefined8 *)(param_1 + 0xd48),&local_30);
    local_58 = local_30;
    FUN_00416cd0(&local_10,3,local_10,&DAT_017a0598);
  }
  FUN_00441640(&local_38,local_10);
  cVar1 = FUN_017a0270(auStack_78,local_38,local_10);
  *local_40 = cVar1 == '\0';
  if (*local_40 == '\0') {
    FUN_0072d440(L"This shape library name is already used, please select another one.",1,4,0);
  }
  FUN_00414560(&local_38,6);
  return;
}

