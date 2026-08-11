/* Ghidra address: 013ef560 */
/* Ghidra symbol: FUN_013ef560 */


void FUN_013ef560(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  uVar1 = (**(code **)**(undefined8 **)(param_1 + 0x710))(*(undefined8 **)(param_1 + 0x710));
  FUN_00418590(uVar1,&DAT_01cf1390);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x748));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x730));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x738));
  FUN_007fc890(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

