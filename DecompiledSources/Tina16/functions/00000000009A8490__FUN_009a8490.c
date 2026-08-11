/* Ghidra address: 009a8490 */
/* Ghidra symbol: FUN_009a8490 */


void FUN_009a8490(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_28 [24];
  
  FUN_00417580(local_28,&DAT_009427f8);
  uVar1 = FUN_009a83e0(param_1,param_2);
  iVar2 = FUN_009a8330(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    uVar3 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_02002378);
    iVar2 = FUN_004134c0(uVar3);
  }
  FUN_00417c40(local_28,param_1[1] + 8 + (longlong)iVar2 * 0x18,&DAT_009427f8);
  FUN_00417c40(param_1[1] + 8 + (longlong)iVar2 * 0x18,param_3,&DAT_009427f8);
  (**(code **)(*param_1 + 0x18))(param_1,local_28,5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  FUN_00417740(local_28,&DAT_009427f8);
  return;
}

