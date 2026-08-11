/* Ghidra address: 01ab5580 */
/* Ghidra symbol: FUN_01ab5580 */


void FUN_01ab5580(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  *(undefined8 *)PTR_DAT_02005620 = 0;
  *(undefined8 *)PTR_DAT_020041f8 = 0;
  FUN_01abde90(*(undefined8 *)(param_1 + 200),*(undefined8 *)(param_1 + 0xe0),
               *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0xb8),
               *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0xc0),param_2,param_3,param_4,param_5
               ,param_6);
  return;
}

