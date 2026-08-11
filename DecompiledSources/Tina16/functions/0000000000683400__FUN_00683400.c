/* Ghidra address: 00683400 */
/* Ghidra symbol: FUN_00683400 */


int FUN_00683400(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined8 local_30;
  undefined2 *local_28;
  undefined2 local_1a [5];
  
  local_30 = 0;
  local_28 = (undefined2 *)0x0;
  if (param_2 == 0) {
    local_1a[0] = 0;
    puVar3 = local_1a;
  }
  else {
    FUN_00414b50(&local_28,param_2);
    FUN_00414e00(&local_28);
    puVar3 = local_28;
  }
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  iVar1 = thunk_FUN_041b2403(uVar2,0x143,0,puVar3);
  if (iVar1 < 0) {
    FUN_0041ddd0(&local_30,PTR_PTR_02002460);
    uVar2 = FUN_0044d490(&PTR_FUN_00472738,1,local_30);
    FUN_004134c0(uVar2);
  }
  FUN_00414560(&local_30,2);
  return iVar1;
}

