/* Ghidra address: 0064db10 */
/* Ghidra symbol: FUN_0064db10 */


void FUN_0064db10(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if ((longlong *)param_1[0xf] != param_2) {
    if (param_2 == param_1) {
      uVar2 = FUN_0044d710(&PTR_FUN_00472870,1,PTR_PTR_02004558);
      FUN_004134c0(uVar2);
    }
    if (param_1[0xf] != 0) {
      FUN_00654af0(param_1[0xf],param_1);
    }
    if (param_2 != (longlong *)0x0) {
      FUN_00654980(param_2,param_1);
      if (((((*(ushort *)((longlong)param_1 + 0x34) & 1) == 0) &&
           ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)) &&
          ((*(ushort *)((longlong)param_1 + 0x34) & 8) == 0)) &&
         (((*(ushort *)((longlong)param_1 + 0x34) & 0x100) == 0 &&
          ((*(ushort *)(param_1[0xf] + 0x34) & 0x10) == 0)))) {
        uVar1 = (**(code **)(*param_1 + 0x90))(param_1);
        (**(code **)(*param_1 + 0x170))(param_1,uVar1);
      }
      FUN_0064c920(param_1);
    }
  }
  return;
}

