/* Ghidra address: 01751b80 */
/* Ghidra symbol: FUN_01751b80 */


undefined8
FUN_01751b80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined1 param_5)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_01cfc7b0(*(undefined8 *)(param_1 + 0x28),param_3,param_4,param_5,&local_28);
  FUN_01d04970(*(undefined8 *)(param_1 + 0x28),local_28,local_24,&local_28,&local_24,1);
  FUN_01d04970(*(undefined8 *)(param_1 + 0x28),local_20,local_1c,&local_20,&local_1c,1);
  FUN_00498350(param_2,local_28,local_24,local_20,local_1c);
  return param_2;
}

