/* Ghidra address: 014b4920 */
/* Ghidra symbol: FUN_014b4920 */


void FUN_014b4920(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)PTR_DAT_02004e40;
  *(undefined8 *)(param_1 + 0x8b8) = *(undefined8 *)(lVar1 + 0x27f8);
  *(undefined8 *)(param_1 + 0x8c0) = *(undefined8 *)(lVar1 + 0x2800);
  lVar1 = *(longlong *)PTR_DAT_02004e40;
  *(longlong *)(lVar1 + 0x2800) = param_1;
  *(code **)(lVar1 + 0x27f8) = FUN_014b4640;
  *(undefined *)(param_1 + 0x897) = *PTR_DAT_02004f10;
  *PTR_DAT_02004f10 = 0;
  *(undefined *)(param_1 + 0x898) = *PTR_DAT_02003038;
  *PTR_DAT_02003038 = 0;
  return;
}

