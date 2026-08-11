/* Ghidra address: 01aa13f0 */
/* Ghidra symbol: FUN_01aa13f0 */


undefined8 FUN_01aa13f0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 local_1b;
  undefined1 local_1a;
  char local_19 [9];
  
  uVar1 = FUN_01cfde70(param_2,param_3,0,local_19,&local_1a,&local_1b);
  if (local_19[0] == '\x01') {
    FUN_00415020(param_1,uVar1,0x1e);
  }
  return param_1;
}

