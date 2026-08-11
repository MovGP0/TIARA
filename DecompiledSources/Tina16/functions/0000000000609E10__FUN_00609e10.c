/* Ghidra address: 00609e10 */
/* Ghidra symbol: FUN_00609e10 */


longlong FUN_00609e10(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[9] == 0) {
    FUN_0060a460(param_1);
    if (param_1[9] == 0) {
      lVar1 = FUN_00607810(&PTR_FUN_006073f8,1,param_1);
      param_1[9] = lVar1;
      *(longlong **)(lVar1 + 0x10) = param_1;
      *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(*param_1 + 0x20);
      *(longlong **)(lVar1 + 0x20) = param_1;
      *(code **)(lVar1 + 0x18) = FUN_006090e0;
    }
  }
  return param_1[9];
}

