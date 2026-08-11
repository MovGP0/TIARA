/* Ghidra address: 018a6380 */
/* Ghidra symbol: FUN_018a6380 */


void FUN_018a6380(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_018a5de0(param_1,0);
  lVar2 = FUN_018a73a0(param_1);
  if (lVar2 != 0) {
    lVar2 = FUN_018a73a0(param_1);
    if (((((*(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x220) + 10) & 0x20000) != 0) &&
         (*(char *)(param_1 + 0x4f3) != '\0')) &&
        (*(int *)(param_1 + 0x560) != *(int *)(param_1 + 0x558))) &&
       (*(int *)(param_1 + 0x55c) != *(int *)(param_1 + 0x554))) {
      plVar1 = *(longlong **)(param_1 + 0x490);
      FUN_005fd640(plVar1[0xf],0xe);
      FUN_005fd4e0(plVar1[0xf],0xc0c0c0);
      FUN_005fd6d0(plVar1[0xf],1);
      FUN_005fd670(plVar1[0xf],2);
      FUN_005fdcb0(plVar1[0x10],1);
      (**(code **)(*plVar1 + 0xf8))
                (plVar1,*(undefined4 *)(param_1 + 0x554),*(undefined4 *)(param_1 + 0x558),
                 *(undefined4 *)(param_1 + 0x55c),*(undefined4 *)(param_1 + 0x560));
      FUN_005fd640(plVar1[0xf],4);
      FUN_005fdcb0(plVar1[0x10],0);
    }
  }
  return;
}

