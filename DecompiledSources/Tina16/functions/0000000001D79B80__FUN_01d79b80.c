/* Ghidra address: 01d79b80 */
/* Ghidra symbol: FUN_01d79b80 */


void FUN_01d79b80(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 local_res10 [3];
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined1 *local_2a0;
  int local_294;
  undefined1 local_290 [24];
  undefined8 local_278;
  undefined8 local_10;
  
  local_2a0 = auStack_2e8;
  local_2b8 = 0;
  local_2b0 = 0;
  local_2a8 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_290,&DAT_00432b90);
  FUN_00416ba0(&local_2a8,local_res10[0],L"\\*.ddb");
  local_294 = FUN_00441230(local_2a8,0x20,local_290);
  uVar1 = local_2c8;
  local_2c8 = local_278;
  while (local_294 == 0) {
    local_278 = local_2c8;
    FUN_00416cd0(&local_2b0,3,local_res10[0],&LAB_01d79d88);
    cVar2 = FUN_00c406f0(*(undefined8 *)PTR_DAT_02004440,local_2b0);
    if (cVar2 != '\0') {
      local_10 = FUN_00410e60(&PTR_FUN_00c3b600,1);
      local_2c8 = local_278;
      FUN_00416cd0(&local_2b8,3,local_res10[0],&LAB_01d79d88);
      FUN_00c3f870(local_10,local_2b8);
      FUN_00c40100(*(undefined8 *)PTR_DAT_02004440,local_10);
    }
    local_294 = FUN_00441290(local_290);
    uVar1 = local_2c8;
    local_2c8 = local_278;
  }
  local_2c8 = uVar1;
  FUN_004412c0(local_290);
  FUN_00414560(&local_2b8,3);
  FUN_00417740(local_290,&DAT_00432b90);
  FUN_00414480(local_res10);
  return;
}

