/* Ghidra address: 0094bf90 */
/* Ghidra symbol: FUN_0094bf90 */


longlong FUN_0094bf90(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_0094b880(param_1);
  FUN_0094ba40(param_1);
  lVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3);
  if (lVar1 == 0) {
    uVar2 = FUN_0044d490(&PTR_FUN_00901268,1,L"Node not found error.");
    FUN_004134c0(uVar2);
  }
  (**(code **)(*param_1 + 0x20))(param_1,lVar1);
  return lVar1;
}

