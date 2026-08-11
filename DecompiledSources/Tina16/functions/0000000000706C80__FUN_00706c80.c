/* Ghidra address: 00706c80 */
/* Ghidra symbol: FUN_00706c80 */


void FUN_00706c80(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_004113f0(*(undefined8 *)(param_1 + 0x28),&PTR_FUN_006d1510);
  FUN_00703c80(*(undefined8 *)(lVar1 + 0x588),*(undefined8 *)(param_2 + 0x20),
               *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x30),0xffffffff,0xffffffff
               ,*(undefined8 *)(param_2 + 0x28));
  return;
}

