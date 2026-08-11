/* Ghidra address: 01bd4f30 */
/* Ghidra symbol: FUN_01bd4f30 */


void FUN_01bd4f30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5,undefined1 *param_6)

{
  char cVar1;
  undefined1 uVar2;
  
  FUN_0064eb60(param_1,param_2,param_3,param_4,param_5,param_6);
  if (*(longlong *)(*(longlong *)(param_1 + 0x5b8) + 800) == 0) {
LAB_01bd4f7f:
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf2d50);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf2b08);
      if (cVar1 == '\0') {
        uVar2 = 0;
        goto LAB_01bd4fab;
      }
    }
  }
  else {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01bf2778);
    if (cVar1 == '\0') goto LAB_01bd4f7f;
  }
  uVar2 = 1;
LAB_01bd4fab:
  *param_6 = uVar2;
  return;
}

