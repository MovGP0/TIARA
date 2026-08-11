/* Ghidra address: 01609620 */
/* Ghidra symbol: FUN_01609620 */


undefined1 FUN_01609620(undefined8 param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar2 = FUN_004170c0(L"SAMD21",local_res8[0],1);
  if (iVar2 == 0) {
    iVar2 = FUN_004170c0(L"SAMW25",local_res8[0],1);
    if (iVar2 == 0) {
      uVar1 = 0;
      goto LAB_01609670;
    }
  }
  uVar1 = 1;
LAB_01609670:
  FUN_00414480(local_res8);
  return uVar1;
}

