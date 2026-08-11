/* Ghidra address: 00db20f0 */
/* Ghidra symbol: FUN_00db20f0 */


void FUN_00db20f0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 *param_9)

{
  undefined8 uVar1;
  undefined1 local_38 [15];
  undefined1 local_29 [17];
  
  uVar1 = FUN_00c42ff0(param_3,param_4,param_6,param_5,local_29);
  *param_9 = uVar1;
  FUN_016e9f80(param_1,param_2,local_29[0],100);
  FUN_00c42b60(*param_9,param_6,param_7,0x3ff0000000000000,*(undefined8 *)(param_2 + 0x430),param_8,
               local_38);
  return;
}

