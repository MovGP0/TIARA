/* Ghidra address: 01c06ed0 */
/* Ghidra symbol: FUN_01c06ed0 */


void FUN_01c06ed0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00410e60(&PTR_FUN_01bf2d50,1);
  *param_2 = lVar1;
  *(undefined8 *)(*param_2 + 0x58) = *(undefined8 *)(param_1 + 800);
  uVar2 = FUN_01bfd960(*(undefined8 *)(param_1 + 800));
  uVar2 = FUN_01bf9620(uVar2);
  *(undefined8 *)(*param_2 + 0x50) = uVar2;
  FUN_0064ec10(param_1,param_2);
  return;
}

