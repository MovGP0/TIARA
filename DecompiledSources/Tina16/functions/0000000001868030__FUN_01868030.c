/* Ghidra address: 01868030 */
/* Ghidra symbol: FUN_01868030 */


void FUN_01868030(longlong param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  
  if ((*param_2 & 0x40) == 0) {
    if ((*param_2 & 0x10) == 0) {
      (**(code **)(param_1 + 0x50))(param_1,param_3,param_4,param_5,param_2[5]);
    }
    else {
      (**(code **)(param_1 + 0x58))
                (param_1,param_3,param_4,param_5,*(undefined4 *)(param_2 + 1),param_2[5]);
    }
  }
  else {
    uVar1 = (**(code **)(param_1 + 0xf0))(param_1,param_4);
    (**(code **)(param_1 + 0x58))(param_1,param_3,param_4,param_5,uVar1,param_2[5]);
  }
  return;
}

