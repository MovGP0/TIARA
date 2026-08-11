/* Ghidra address: 0184a4f0 */
/* Ghidra symbol: FUN_0184a4f0 */


void FUN_0184a4f0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  lVar3 = FUN_018490f0(&PTR_FUN_01844e48,1,param_2,*(undefined8 *)(param_1 + 0xa8));
  *(undefined8 *)(lVar3 + 0xd0) = uVar1;
  *(undefined8 *)(lVar3 + 0xd8) = uVar2;
  *(undefined8 *)(lVar3 + 0xb8) = *(undefined8 *)(param_1 + 0x90);
  FUN_01847420(*(undefined8 *)(param_1 + 0xa0),lVar3);
  return;
}

