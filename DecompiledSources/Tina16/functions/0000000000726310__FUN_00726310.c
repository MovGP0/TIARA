/* Ghidra address: 00726310 */
/* Ghidra symbol: FUN_00726310 */


undefined8 FUN_00726310(undefined8 param_1,int param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_00721e30(param_1,param_2,param_3,param_4);
  if (param_2 == 0x110) {
    uVar4 = *(undefined8 *)(param_4 + 0x38);
    iVar1 = FUN_007267d0(uVar4);
    if ((iVar1 != -1) || (iVar1 = FUN_00726850(uVar4), iVar1 != -1)) {
      uVar2 = FUN_007267d0(uVar4);
      uVar3 = FUN_00726850(uVar4);
      thunk_FUN_041cc6e2(param_1,0,uVar2,uVar3,0,0,0x15);
    }
    uVar4 = thunk_FUN_04118143(param_1,0xfffffffc);
    thunk_FUN_03ea0151(param_1,DAT_01e050f8,uVar4);
    thunk_FUN_03c9d277(param_1,0xfffffffc,FUN_00726210);
    return 1;
  }
  return uVar4;
}

