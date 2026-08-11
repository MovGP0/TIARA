/* Ghidra address: 006816f0 */
/* Ghidra symbol: FUN_006816f0 */


void FUN_006816f0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_2a0;
  uint local_298;
  
  if (((PTR_DAT_02005bd0[0xc] == '\0') || (iVar1 = FUN_0044f060(), iVar1 == 2)) ||
     ((*(uint *)(param_2 + 1) & 0x800) == 0)) {
    FUN_00655400(param_1,param_2);
    return;
  }
  puVar3 = &local_2a0;
  for (lVar2 = 0x4f; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_298 = local_298 & 0xfffff7ff;
  FUN_00655400(param_1,&local_2a0);
  if (*(longlong *)(param_1 + 0x468) == 0) {
    return;
  }
  thunk_FUN_041b2403(*(longlong *)(param_1 + 0x468),0xcf,1,0);
  return;
}

