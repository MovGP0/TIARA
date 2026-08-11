/* Ghidra address: 0180d440 */
/* Ghidra symbol: FUN_0180d440 */


undefined8 FUN_0180d440(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  
  FUN_00414480(param_1);
  if (param_3 != 0) {
    lVar1 = *(longlong *)(param_3 + 8);
    if (((lVar1 != 0) && (lVar1 != param_2)) &&
       ((cVar2 = FUN_004113d0(param_2,&PTR_FUN_0193aeb8), cVar2 == '\0' ||
        (lVar1 != *(longlong *)(param_2 + 8))))) {
      cVar2 = FUN_004113d0(lVar1,&PTR_FUN_007f0370);
      if ((cVar2 != '\0') || (cVar2 = FUN_004113d0(lVar1,&PTR_FUN_00488b20), cVar2 != '\0')) {
        FUN_00416cd0(param_1,3,*(undefined8 *)(lVar1 + 0x10),&DAT_0180d57c,
                     *(undefined8 *)(param_3 + 0x10));
        return param_1;
      }
      cVar2 = FUN_004113d0(lVar1,&PTR_FUN_007ec678);
      if (cVar2 == '\0') {
        return param_1;
      }
      if (*(longlong *)(lVar1 + 8) != 0) {
        FUN_00416cd0(param_1,5,*(undefined8 *)(*(longlong *)(lVar1 + 8) + 0x10),&DAT_0180d57c,
                     *(undefined8 *)(*(longlong *)(param_3 + 8) + 0x10),&DAT_0180d57c,
                     *(undefined8 *)(param_3 + 0x10));
        return param_1;
      }
      FUN_00416cd0(param_1,3,*(undefined8 *)(*(longlong *)(param_3 + 8) + 0x10),&DAT_0180d57c,
                   *(undefined8 *)(param_3 + 0x10));
      return param_1;
    }
    FUN_00414ad0(param_1,*(undefined8 *)(param_3 + 0x10));
  }
  return param_1;
}

