/* Ghidra address: 00aa51b0 */
/* Ghidra symbol: FUN_00aa51b0 */


uint FUN_00aa51b0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  uint uVar1;
  undefined8 uVar2;
  
  *param_7 = 0;
  uVar2 = FUN_00414480(param_7);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0xa8) + 0x40))
                    (*(longlong **)(param_1 + 0xa8),param_2,param_3,param_4,param_5,param_6,uVar2);
  if (((uVar1 & 4) == 0) && (*(longlong *)(param_1 + 0x448) != 0)) {
    FUN_00414ad0(param_7,*(undefined8 *)(param_1 + 0x448));
    uVar1 = uVar1 | 4;
  }
  return uVar1;
}

