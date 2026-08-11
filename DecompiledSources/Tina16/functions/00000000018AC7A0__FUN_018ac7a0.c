/* Ghidra address: 018ac7a0 */
/* Ghidra symbol: FUN_018ac7a0 */


void FUN_018ac7a0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*(char *)(param_1 + 0x530) == '\0') {
    *(undefined1 *)(param_1 + 0x531) = 0;
    FUN_018a9b10();
    FUN_018a70e0(*(undefined8 *)(param_1 + 0x550));
    FUN_018a70e0(*(undefined8 *)(param_1 + 0x540));
    FUN_018aba70(param_1);
    FUN_018abf10(param_1);
    lVar1 = *(longlong *)(param_1 + 8);
    cVar2 = FUN_004113d0(lVar1,&PTR_FUN_018a1608);
    if (cVar2 != '\0') {
      uVar3 = FUN_0180bfb0();
      FUN_01809b60(uVar3,local_20,L"clClose");
      FUN_0064de00(*(undefined8 *)(lVar1 + 0x790),local_20[0]);
      uVar3 = FUN_006d8710(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(param_1 + 8) + 0x760) + 0x490),1);
      FUN_006d85c0(uVar3,0);
      FUN_018ae240(*(undefined8 *)(param_1 + 8));
    }
  }
  FUN_00414480(local_20);
  return;
}

