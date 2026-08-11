/* Ghidra address: 00c48ba0 */
/* Ghidra symbol: FUN_00c48ba0 */


undefined8 FUN_00c48ba0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int local_2c [3];
  
  lVar1 = FUN_00c48b00(param_1);
  if (lVar1 < 4) {
    FUN_00414480(param_2);
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))(*(longlong **)(param_1 + 0x40),local_2c,4)
    ;
    FUN_004169f0(param_2,local_2c[0]);
    uVar2 = FUN_00414de0(param_2);
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x18))
              (*(longlong **)(param_1 + 0x40),uVar2,local_2c[0] * 2);
    uVar2 = FUN_004b6da0(*(undefined8 *)(param_1 + 0x40));
    *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 8) = uVar2;
  }
  return param_2;
}

