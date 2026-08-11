/* Ghidra address: 01ca5a20 */
/* Ghidra symbol: FUN_01ca5a20 */


undefined8 FUN_01ca5a20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_01ca59f0(param_1,param_3);
  iVar2 = FUN_01ca5930(param_1,param_3,uVar1);
  if (iVar2 < 0) {
    uVar3 = FUN_0044d710(&PTR_FUN_004347c0,1,PTR_PTR_02002378);
    iVar2 = FUN_004134c0(uVar3);
  }
  FUN_00414ad0(param_2,*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar2 * 0x18));
  return param_2;
}

