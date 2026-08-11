/* Ghidra address: 01976b70 */
/* Ghidra symbol: FUN_01976b70 */


void FUN_01976b70(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_01974160(param_1,L"Report",param_1);
  uVar1 = FUN_0196f540(param_1);
  FUN_01974160(param_1,L"PreviewPages",uVar1);
  FUN_01974160(param_1,L"Engine",*(undefined8 *)(param_1 + 0x1a0));
  lVar2 = FUN_0196f540(param_1);
  FUN_01974160(param_1,L"Outline",*(undefined8 *)(lVar2 + 0x18));
  return;
}

