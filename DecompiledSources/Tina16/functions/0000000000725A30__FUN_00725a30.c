/* Ghidra address: 00725a30 */
/* Ghidra symbol: FUN_00725a30 */


void FUN_00725a30(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 local_1878 [32];
  longlong *local_1858;
  undefined1 *local_1840;
  undefined2 *local_1830;
  undefined2 *local_1828;
  undefined2 *local_1820;
  undefined1 local_1818 [2048];
  undefined1 local_1018 [1952];
  undefined1 local_878;
  undefined1 local_818 [2048];
  
  local_878 = 0;
  local_1878[0] = 0;
  local_1840 = local_1878;
  uVar4 = FUN_0069e8a0();
  local_1858 = param_1;
  FUN_0069d6e0(uVar4,local_818,local_1018,local_1818);
  if (*param_1 != 0) {
    iVar1 = FUN_00414d00(local_818);
    iVar2 = FUN_00414d00(local_1018);
    iVar3 = FUN_00414d00(local_1818);
    uVar4 = thunk_FUN_0412a7bb(0x42,(iVar1 + iVar2 + iVar3 + 3) * 2 + 8);
    *param_2 = uVar4;
    puVar5 = (undefined2 *)thunk_FUN_0416a623(*param_2);
    local_1828 = puVar5 + 4;
    *puVar5 = (short)(((longlong)local_1828 - (longlong)puVar5) / 2);
    local_1830 = puVar5;
    local_1820 = puVar5;
    lVar6 = FUN_004424f0(local_1828,local_1018);
    local_1828 = (undefined2 *)(lVar6 + 2);
    local_1830[1] = (short)(((longlong)local_1828 - (longlong)puVar5) / 2);
    lVar6 = FUN_004424f0(local_1828,local_818);
    local_1828 = (undefined2 *)(lVar6 + 2);
    local_1830[2] = (short)(((longlong)local_1828 - (longlong)puVar5) / 2);
    FUN_004424b0(local_1828,local_1818);
    thunk_FUN_04172795(*param_2);
  }
  return;
}

