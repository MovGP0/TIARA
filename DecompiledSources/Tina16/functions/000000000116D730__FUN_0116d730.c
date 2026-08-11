/* Ghidra address: 0116d730 */
/* Ghidra symbol: FUN_0116d730 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0116d730(undefined8 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar2 = 0x28;
  puVar1 = &DAT_0203a864;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  DAT_0203a71c = 0;
  DAT_0203a720 = 0;
  _DAT_0203aeb8 = 0x3ff0000000000000;
  _DAT_0203a6cc = *(undefined4 *)(*(longlong *)(*(longlong *)PTR_DAT_02003280 + 0x6b0) + 0x98);
  _DAT_0203a6d0 = *(undefined4 *)(*(longlong *)(*(longlong *)PTR_DAT_02003280 + 0x6b0) + 0x9c);
  _DAT_0203ae98 = 2;
  DAT_0203a6d4 = 0;
  DAT_0203a6d8 = 0;
  DAT_0203a6dc = 0;
  DAT_0203a6e0 = 0;
  DAT_0203a6f4 = 0;
  DAT_0203a6e8 = 0;
  DAT_0203a6ec = 0;
  DAT_0203a6f0 = 0;
  DAT_0203a6e4 = 0;
  DAT_0203a6f8 = 0;
  DAT_0203a6fc = 0;
  DAT_0203a700 = 0;
  DAT_0203a704 = 0;
  DAT_0203a718 = 0;
  DAT_0203a70c = 0;
  DAT_0203a710 = 0;
  DAT_0203a714 = 0;
  DAT_0203a708 = 0;
  DAT_0203d94c = 0;
  DAT_0203ae96 = 1;
  FUN_00414480(local_res8);
  return;
}

