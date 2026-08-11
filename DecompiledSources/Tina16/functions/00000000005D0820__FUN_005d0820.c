/* Ghidra address: 005d0820 */
/* Ghidra symbol: FUN_005d0820 */


undefined8
FUN_005d0820(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4,
            undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_30;
  undefined8 local_28 [3];
  
  local_28[0] = 0;
  local_30 = 0;
  lVar1 = FUN_00410e60(&DAT_005d0618,1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 0x10;
  }
  FUN_0041b840(&local_30,lVar2);
  FUN_0041b840(lVar1 + 0x20,param_5);
  FUN_00419430(lVar1 + 0x18,&DAT_004210c0);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1 + 0x28;
  }
  FUN_0041b840(local_28,lVar2);
  FUN_005d0930(param_2,param_3,local_28[0],0,param_4 == '\x01');
  FUN_004194b0(param_1,*(undefined8 *)(lVar1 + 0x18),&DAT_004210c0);
  FUN_0041b800(&local_30);
  FUN_0041b800(local_28);
  return param_1;
}

