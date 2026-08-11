/* Ghidra address: 00aa7430 */
/* Ghidra symbol: FUN_00aa7430 */


void FUN_00aa7430(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,byte *param_5)

{
  char cVar1;
  longlong lVar2;
  byte local_39 [9];
  
  *param_5 = 0;
  while (-1 < param_3) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x240) + 0x30))
                      (*(longlong **)(param_1 + 0x240),param_3);
    if (lVar2 == param_1) {
      if ((*(char *)(param_1 + 700) == '\0') && ((char)param_4 == '\0')) {
        *(undefined1 *)(param_1 + 0x1b0) = 0;
        FUN_00aa84c0(param_1);
      }
    }
    else {
      cVar1 = FUN_004113d0(lVar2,&PTR_FUN_00a83768);
      if (cVar1 != '\0') {
        FUN_00a95a20(lVar2,param_2,param_4,local_39);
        *param_5 = *param_5 | local_39[0];
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x240) + 0x98))(*(longlong **)(param_1 + 0x240),param_3);
    param_3 = (**(code **)(**(longlong **)(param_1 + 0x240) + 0xb0))
                        (*(longlong **)(param_1 + 0x240),param_2);
  }
  return;
}

