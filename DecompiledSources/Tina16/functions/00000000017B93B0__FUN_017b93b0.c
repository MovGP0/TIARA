/* Ghidra address: 017b93b0 */
/* Ghidra symbol: FUN_017b93b0 */


undefined8 FUN_017b93b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 10) != '\0') {
    FUN_017b96e0(param_1);
    uVar1 = FUN_017b9690(param_1);
    FUN_017afd00(uVar1,*(undefined1 *)(param_1 + 10));
    plVar2 = (longlong *)FUN_017b9690(param_1);
    uVar1 = (**(code **)(*plVar2 + 0x78))(plVar2,param_3,param_4);
  }
  return uVar1;
}

