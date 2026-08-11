/* Ghidra address: 00787480 */
/* Ghidra symbol: FUN_00787480 */


void FUN_00787480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_78 [2];
  longlong local_68;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_b0 = 0;
  local_b8 = 0;
  if (DAT_02012520 == 0) {
    DAT_02012520 = FUN_0078dc70(&PTR_FUN_00766998,1,0);
  }
  cVar1 = FUN_0078e5d0(DAT_02012520,param_2);
  if (cVar1 == '\0') {
    lVar3 = FUN_0078c3e0(&PTR_FUN_007638b8,1);
    local_20[0] = param_3;
    FUN_00597e50(lVar3 + 8,local_20);
    FUN_0078e1e0(DAT_02012520,param_2,lVar3);
  }
  else {
    lVar3 = FUN_0078d850(DAT_02012520,param_2);
    local_68 = lVar3 + 8;
    local_30[0] = param_3;
    iVar2 = FUN_00596a10(local_68,local_30);
    if (iVar2 == -1) {
      local_78[0] = param_3;
      FUN_00597e50(lVar3 + 8,local_78);
    }
    else {
      FUN_00410ae0(param_3,&local_b0);
      local_a8 = local_b0;
      local_a0 = 0x11;
      FUN_00410ae0(param_2,&local_b8);
      local_98 = local_b8;
      local_90 = 0x11;
      uVar4 = FUN_0044d8d0(&PTR_FUN_00777610,1,PTR_PTR_02002640,&local_a8,1);
      FUN_004134c0(uVar4);
    }
  }
  FUN_00414560(&local_b8,2);
  return;
}

