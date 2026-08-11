/* Ghidra address: 004e24c0 */
/* Ghidra symbol: FUN_004e24c0 */


void FUN_004e24c0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar1 = FUN_004e2420(param_1,param_2);
  iVar2 = FUN_004e2370(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    uVar3 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_02002378);
    iVar2 = FUN_004134c0(uVar3);
  }
  FUN_0041b840(local_20,*(undefined8 *)(param_1[1] + 8 + (longlong)iVar2 * 0x10));
  FUN_0041b840(param_1[1] + 8 + (longlong)iVar2 * 0x10,param_3);
  (**(code **)(*param_1 + 0x18))(param_1,local_20[0],5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  FUN_0041b800(local_20);
  return;
}

