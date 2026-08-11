/* Ghidra address: 00c5fc40 */
/* Ghidra symbol: FUN_00c5fc40 */


void FUN_00c5fc40(longlong param_1)

{
  longlong *plVar1;
  undefined1 local_38 [16];
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x948) + 0x310);
    FUN_005fd4e0(plVar1[0xf],0x808080);
    FUN_005fd6d0(plVar1[0xf],0);
    FUN_005fd670(plVar1[0xf],2);
    FUN_005fd640(plVar1[0xf],0xf);
    FUN_005fdcb0(plVar1[0x10],1);
    FUN_00498350(local_38,*(int *)PTR_DAT_020033a8 * *(int *)(param_1 + 0x20),
                 *(int *)PTR_DAT_02002d48 * *(int *)(param_1 + 0x24),
                 *(int *)PTR_DAT_020033a8 * *(int *)(param_1 + 0x28),
                 *(int *)PTR_DAT_02002d48 * *(int *)(param_1 + 0x2c));
    FUN_017ad620(&local_28,local_38);
    (**(code **)(*plVar1 + 0xf8))(plVar1,local_28,local_24,local_20,local_1c);
    FUN_005fd640(plVar1[0xf],4);
    FUN_005fd670(plVar1[0xf],0);
  }
  return;
}

