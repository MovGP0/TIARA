/* Ghidra address: 01b22280 */
/* Ghidra symbol: FUN_01b22280 */


undefined8 FUN_01b22280(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined8 local_290;
  undefined1 local_288 [8];
  undefined8 local_280;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  FUN_00417580(local_288,&DAT_00432b90);
  iVar1 = FUN_00441230(local_res8[0],0x1ff,local_288);
  if (iVar1 == 0) {
    local_290 = local_280;
  }
  else {
    local_290 = 0xffffffffffffffff;
  }
  FUN_004412c0(local_288);
  FUN_00417740(local_288,&DAT_00432b90);
  FUN_00414480(local_res8);
  return local_290;
}

