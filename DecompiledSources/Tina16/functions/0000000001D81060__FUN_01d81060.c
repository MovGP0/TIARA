/* Ghidra address: 01d81060 */
/* Ghidra symbol: FUN_01d81060 */


void FUN_01d81060(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_1 + 0x7ed) == '\0') && (*(longlong *)(param_1 + 0xac0) != 0)) {
    if (*(char *)(param_1 + 0xaa0) == '\0') {
      uVar2 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,*(undefined8 *)(param_1 + 0xac0));
    }
    else {
      uVar2 = FUN_01cc6f70(&PTR_FUN_01cba328,1,*(undefined8 *)(param_1 + 0xac0));
    }
    FUN_013e19a0(*(undefined8 *)(param_1 + 0xac0),uVar2,0,L"Time [#s]",0,1,2,L"[#V]",0,1,2,0,0,0,
                 L"Measurement");
    lVar1 = *(longlong *)(param_1 + 0xac0);
    *param_2 = lVar1;
    if (lVar1 != 0) {
      FUN_01cc6030(lVar1);
    }
    *(undefined8 *)(param_1 + 0xac0) = 0;
  }
  return;
}

