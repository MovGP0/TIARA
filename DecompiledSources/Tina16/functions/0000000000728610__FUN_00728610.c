/* Ghidra address: 00728610 */
/* Ghidra symbol: FUN_00728610 */


uint FUN_00728610(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  
  FUN_00414480(param_1 + 0xa0);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x68))
                    (*(longlong **)(param_1 + 0x90),param_1 + 0xe0);
  if ((uVar1 & 0x80000000) == 0) {
    pcVar2 = (code *)FUN_00411550(param_1,0xffe6);
    uVar1 = (*pcVar2)(param_1,*(undefined8 *)(param_1 + 0xe0),param_1 + 0xa0);
    if ((uVar1 & 0x80000000) == 0) {
      pcVar2 = (code *)FUN_00411550(param_1,0xffed);
      (*pcVar2)(param_1);
    }
  }
  FUN_0041b800(param_1 + 0xe0);
  return uVar1;
}

