/* Ghidra address: 0088f7d0 */
/* Ghidra symbol: FUN_0088f7d0 */


int FUN_0088f7d0(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5,longlong *param_6)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 *local_1040;
  undefined1 *local_1038;
  undefined1 local_102c [2050];
  undefined1 local_82a [1954];
  undefined1 local_88;
  
  local_88 = 0;
  iVar4 = 0;
  FUN_0040d200(local_82a,0x802,0);
  FUN_0040d200(local_102c,0x802,0);
  local_1038 = local_82a;
  local_1040 = local_102c;
  FUN_00442580(local_1038,param_1,0x401);
  while( true ) {
    puVar1 = local_1038;
    iVar2 = FUN_0088f630(param_1,param_2,param_3,param_4,local_1040,param_6);
    if ((iVar2 != 0) || (*param_6 != 0)) goto code_r0x0088f8de;
    iVar2 = FUN_00414d00(local_1040);
    if (iVar2 == 0) break;
    iVar2 = FUN_004426c0(local_1038,local_1040);
    if (iVar2 == 0) break;
    iVar4 = iVar4 + 1;
    if (iVar4 == 0x10) {
      iVar2 = 0x2afb;
      goto code_r0x0088f8de;
    }
    local_1038 = local_1040;
    local_1040 = puVar1;
  }
  iVar2 = 0x2afb;
code_r0x0088f8de:
  if ((iVar2 == 0) && (param_5 != 0)) {
    lVar3 = FUN_0088f490(local_1040);
    *(longlong *)(*param_6 + 0x18) = lVar3;
    if (lVar3 == 0) {
      iVar2 = 8;
    }
  }
  return iVar2;
}

