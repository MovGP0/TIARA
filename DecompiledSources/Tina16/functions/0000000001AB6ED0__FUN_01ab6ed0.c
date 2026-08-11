/* Ghidra address: 01ab6ed0 */
/* Ghidra symbol: FUN_01ab6ed0 */


void FUN_01ab6ed0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  *(longlong *)(param_1 + 0x60) = param_2;
  if (param_2 != 0) {
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x78);
    lVar2 = *(longlong *)(param_1 + 0x58);
    if ((lVar2 != 0) && (cVar1 = FUN_004113d0(lVar2,&PTR_FUN_01ae9d80), cVar1 != '\0')) {
      lVar2 = FUN_004113f0(lVar2,&PTR_FUN_01ae9d80);
      FUN_005fd6d0(*(undefined8 *)(param_1 + 0x78),
                   *(undefined4 *)(*(longlong *)(lVar2 + 0x7a0) + 0x50));
      return;
    }
    FUN_005fd6d0(*(undefined8 *)(param_1 + 0x78),1);
  }
  return;
}

