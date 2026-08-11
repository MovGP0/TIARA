/* Ghidra address: 004eccb0 */
/* Ghidra symbol: FUN_004eccb0 */


void FUN_004eccb0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_004ecc20(param_1,param_2);
  iVar2 = FUN_004ecb70(param_1,param_2,uVar1);
  if (iVar2 < 0) {
    uVar3 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_02002378);
    iVar2 = FUN_004134c0(uVar3);
  }
  uVar1 = *(undefined4 *)(param_1[1] + 0x10 + (longlong)iVar2 * 0x18);
  *(undefined4 *)(param_1[1] + 0x10 + (longlong)iVar2 * 0x18) = param_3;
  (**(code **)(*param_1 + 0x18))(param_1,uVar1,5);
  (**(code **)(*param_1 + 0x18))(param_1,param_3,1);
  return;
}

