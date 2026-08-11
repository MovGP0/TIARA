/* Ghidra address: 01d35080 */
/* Ghidra symbol: FUN_01d35080 */


undefined4 FUN_01d35080(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_2c [3];
  
  uVar2 = (**(code **)(*param_1 + 0x68))(param_1,param_2);
  cVar1 = FUN_01d350f0(param_1,uVar2,local_2c);
  if ((cVar1 == '\0') || ((char)param_1[4] != '\0')) {
    FUN_01d348b0(param_1,local_2c[0],param_2);
  }
  return local_2c[0];
}

