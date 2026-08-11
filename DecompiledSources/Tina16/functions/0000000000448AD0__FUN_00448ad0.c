/* Ghidra address: 00448ad0 */
/* Ghidra symbol: FUN_00448ad0 */


void FUN_00448ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  undefined2 local_2c;
  undefined2 local_2a [5];
  
  uVar1 = FUN_00448820();
  FUN_0043d300(uVar1,60000,local_2a,&local_2c);
  FUN_0043d300(local_2a[0],0x3c,param_2,param_3);
  FUN_0043d300(local_2c,1000,param_4,param_5);
  return;
}

