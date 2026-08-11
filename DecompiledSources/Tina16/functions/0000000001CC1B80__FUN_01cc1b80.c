/* Ghidra address: 01cc1b80 */
/* Ghidra symbol: FUN_01cc1b80 */


void FUN_01cc1b80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  int local_3c [3];
  
  FUN_01cc0730(param_1,param_2);
  iVar1 = FUN_01d31a40(param_2);
  if (iVar1 == 0) {
    FUN_01d30f00(param_2,param_1 + 0x40,4);
    FUN_01d312f0(param_2,param_1 + 0x48);
    FUN_01d30f00(param_2,param_1 + 0x50,1);
    FUN_01d30f00(param_2,local_3c,4);
    if (-1 < local_3c[0] + -1) {
      do {
        plVar2 = (longlong *)FUN_01cc1630(&PTR_FUN_01cb4260,1);
        (**(code **)(*plVar2 + 0x30))(plVar2,param_2,0x12);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 0x38),plVar2);
        local_3c[0] = local_3c[0] + -1;
      } while (local_3c[0] != 0);
    }
  }
  return;
}

