/* Ghidra address: 005c24c0 */
/* Ghidra symbol: FUN_005c24c0 */


void FUN_005c24c0(longlong *param_1,undefined2 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_48 [56];
  
  FUN_00417580(local_48,&DAT_005bc4e0);
  uVar1 = FUN_005c2410(param_1,param_2);
  iVar2 = FUN_005c2340(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    uVar3 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_02002378);
    iVar2 = FUN_004134c0(uVar3);
  }
  FUN_00417c40(local_48,param_1[1] + 8 + (longlong)iVar2 * 0x38,&DAT_005bc4e0);
  FUN_00417c40(param_1[1] + 8 + (longlong)iVar2 * 0x38,param_3,&DAT_005bc4e0);
  (**(code **)(*param_1 + 0x18))(param_1,local_48,5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  FUN_00417740(local_48,&DAT_005bc4e0);
  return;
}

