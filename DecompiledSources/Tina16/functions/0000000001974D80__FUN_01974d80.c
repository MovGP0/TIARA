/* Ghidra address: 01974d80 */
/* Ghidra symbol: FUN_01974d80 */


undefined8
FUN_01974d80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  if (*(longlong *)(param_1 + 0x460) != 0) {
    (**(code **)(param_1 + 0x460))(*(undefined8 *)(param_1 + 0x468),param_2,param_5,param_6);
  }
  return param_2;
}

