/* Ghidra address: 0155e900 */
/* Ghidra symbol: FUN_0155e900 */


void FUN_0155e900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_68;
  undefined8 local_60 [2];
  uint local_50 [8];
  undefined8 local_30;
  int local_24;
  int local_20;
  int local_1c;
  
  local_68 = 0;
  local_60[0] = 0;
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_004b6dc0(param_1,0x80);
  FUN_004b84c0(param_1,&local_20,4);
  FUN_004b84c0(param_1,param_3,4);
  if (2 < local_20) {
    iVar2 = 8;
    puVar1 = local_50;
    do {
      FUN_004b84c0(param_1,puVar1,4);
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (((2 < local_20) && ((local_50[0] & 2) != 0)) &&
     (FUN_004b84c0(param_1,&local_1c,4), -1 < local_1c + -1)) {
    do {
      FUN_01b20f00(local_60,param_1);
      FUN_004168b0(&local_30,local_60[0]);
      FUN_01b20f00(&local_68,param_1);
      FUN_004168b0(&local_30,local_68);
      FUN_01b23340(param_1,0,0);
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  FUN_004b84c0(param_1,&local_24,4);
  if (local_24 == 0) {
    FUN_015fcf20(L"SystemC executable not found in the stream",0,0,0);
  }
  FUN_0160b740(param_1,local_24,local_res10[0]);
  FUN_004145c0(&local_68,2);
  FUN_00414480(&local_30);
  FUN_00414480(local_res10);
  return;
}

