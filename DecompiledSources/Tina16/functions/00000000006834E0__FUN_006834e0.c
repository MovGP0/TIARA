/* Ghidra address: 006834e0 */
/* Ghidra symbol: FUN_006834e0 */


void FUN_006834e0(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined8 local_30;
  undefined2 *local_28;
  undefined2 local_1a [5];
  
  local_30 = 0;
  local_28 = (undefined2 *)0x0;
  if (param_3 == 0) {
    local_1a[0] = 0;
    puVar3 = local_1a;
  }
  else {
    FUN_00414b50(&local_28,param_3);
    FUN_00414e00(&local_28);
    puVar3 = local_28;
  }
  uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
  iVar1 = thunk_FUN_041b2403(uVar2,0x14a,(longlong)param_2,puVar3);
  if (iVar1 < 0) {
    FUN_0041ddd0(&local_30,PTR_PTR_02002460);
    uVar2 = FUN_0044d490(&PTR_FUN_00472738,1,local_30);
    FUN_004134c0(uVar2);
  }
  FUN_00414560(&local_30,2);
  return;
}

