/* Ghidra address: 005eb020 */
/* Ghidra symbol: FUN_005eb020 */


undefined4 FUN_005eb020(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_0040d200(param_2,0x1c,0);
  uVar1 = thunk_FUN_041d253b(*(undefined8 *)(param_1 + 8),0,0,0,param_2,param_2 + 4,0,param_2 + 8,
                             param_2 + 0xc,param_2 + 0x10,0,param_2 + 0x14);
  uVar1 = FUN_005ea620(param_1,uVar1);
  if (PTR_DAT_02005bd0[0xc] != '\0') {
    iVar2 = FUN_0044f060();
    if (iVar2 == 2) {
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + *(int *)(param_2 + 4);
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + *(int *)(param_2 + 0xc);
    }
  }
  return uVar1;
}

