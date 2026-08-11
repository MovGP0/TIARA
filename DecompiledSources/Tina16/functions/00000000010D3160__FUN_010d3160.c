/* Ghidra address: 010d3160 */
/* Ghidra symbol: FUN_010d3160 */


bool FUN_010d3160(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  undefined8 local_res18 [2];
  undefined8 local_300;
  undefined1 local_2f8 [256];
  char local_1f8;
  undefined1 local_1e0 [472];
  
  local_300 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_010d3290(param_1,param_2,local_2f8);
  if (((local_1f8 == '\x05') || (local_1f8 == '\x06')) || (local_1f8 == '\x16')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  bVar3 = false;
  if (bVar1) {
    FUN_004169a0(&local_300,local_1e0);
    iVar2 = FUN_00416db0(local_res18[0],local_300);
    bVar3 = iVar2 == 0;
  }
  FUN_00414480(&local_300);
  FUN_00414480(local_res18);
  return bVar3;
}

