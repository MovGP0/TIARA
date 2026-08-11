/* Ghidra address: 01427cd0 */
/* Ghidra symbol: FUN_01427cd0 */


void FUN_01427cd0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar1 = &local_38;
  FUN_01427b70(param_5,param_6,param_7,param_8,&local_30,puVar1);
  FUN_0141ec20(param_1,param_2,param_3,0,param_4,(ulonglong)puVar1 & 0xffffffffffffff00,local_30,
               local_38,0,0,0,0,0,0,param_9);
  return;
}

