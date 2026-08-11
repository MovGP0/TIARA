/* Ghidra address: 01b80e10 */
/* Ghidra symbol: FUN_01b80e10 */


undefined1 FUN_01b80e10(undefined8 param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  *param_2 = 0;
  iVar2 = FUN_00416db0(local_res8[0],&DAT_01b80f34);
  if (iVar2 == 0) {
LAB_01b80e9c:
    uVar1 = 1;
  }
  else {
    iVar2 = FUN_00416db0(local_res8[0],L"npn2");
    if (iVar2 == 0) goto LAB_01b80e9c;
    iVar2 = FUN_00416db0(local_res8[0],L"npn3");
    if (iVar2 == 0) goto LAB_01b80e9c;
    iVar2 = FUN_00416db0(local_res8[0],&DAT_01b80f78);
    if (iVar2 == 0) goto LAB_01b80e9c;
    iVar2 = FUN_00416db0(local_res8[0],L"pnp2");
    if (iVar2 == 0) goto LAB_01b80e9c;
    uVar1 = 0;
  }
  iVar2 = FUN_00416db0(local_res8[0],&DAT_01b80f34);
  if (iVar2 != 0) {
    iVar2 = FUN_00416db0(local_res8[0],L"npn2");
    if (iVar2 != 0) {
      iVar2 = FUN_00416db0(local_res8[0],L"npn3");
      if (iVar2 != 0) {
        *param_2 = 1;
        goto code_r0x01b80ef4;
      }
    }
  }
  *param_2 = 0;
code_r0x01b80ef4:
  FUN_00414480(local_res8);
  return uVar1;
}

