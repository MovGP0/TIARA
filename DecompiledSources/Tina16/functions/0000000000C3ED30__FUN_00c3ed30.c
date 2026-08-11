/* Ghidra address: 00c3ed30 */
/* Ghidra symbol: FUN_00c3ed30 */


void FUN_00c3ed30(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  int local_40;
  int local_3c [3];
  
  FUN_01d30f00(param_2,param_1 + 8,4);
  FUN_01d30f00(param_2,param_1 + 0xc,1);
  if (0x100 < (ushort)param_3) {
    FUN_01d30f00(param_2,param_1 + 0xe,1);
  }
  FUN_01d312f0(param_2,param_1 + 0x10);
  FUN_01d312f0(param_2,param_1 + 0x18);
  FUN_01d30f00(param_2,param_1 + 0x28,2);
  FUN_01d31720(param_2,&local_40);
  iVar2 = local_40;
  if (-1 < local_40 + -1) {
    do {
      FUN_01d31720(param_2,local_3c);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x30),(longlong)local_3c[0]);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_01d31720(param_2,&local_40);
  if (-1 < local_40 + -1) {
    do {
      plVar1 = (longlong *)FUN_00c3c560(&PTR_FUN_00c39d20,1);
      (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x38),plVar1);
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  if ((ushort)param_3 < 0x102) {
    FUN_00c41850(param_1);
  }
  return;
}

