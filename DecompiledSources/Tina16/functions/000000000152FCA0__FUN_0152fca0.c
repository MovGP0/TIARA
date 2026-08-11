/* Ghidra address: 0152fca0 */
/* Ghidra symbol: FUN_0152fca0 */


void FUN_0152fca0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  lVar1 = *(longlong *)PTR_DAT_02004e40;
  *(undefined8 *)(param_1 + 0x1c18) = *(undefined8 *)(lVar1 + 0x27f8);
  *(undefined8 *)(param_1 + 0x1c20) = *(undefined8 *)(lVar1 + 0x2800);
  lVar1 = *(longlong *)PTR_DAT_02004e40;
  *(longlong *)(lVar1 + 0x2800) = param_1;
  *(code **)(lVar1 + 0x27f8) = FUN_0152fb80;
  *(undefined *)(param_1 + 0x1bfa) = *PTR_DAT_02004f10;
  *PTR_DAT_02004f10 = 0;
  *(undefined *)(param_1 + 0x1bfc) = *PTR_DAT_02003038;
  *PTR_DAT_02003038 = 0;
  FUN_00414ad0(PTR_DAT_02004010 + 0xb1,*(undefined8 *)(param_1 + 0x968));
  uVar2 = FUN_015fc1d0(PTR_DAT_02004010 + 0x8a9);
  *(undefined1 *)(param_1 + 0x1bfb) = uVar2;
  if (param_2 != '\x02') {
    FUN_015fc210(PTR_DAT_02004010,0);
  }
  return;
}

