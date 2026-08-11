/* Ghidra address: 00411460 */
/* Ghidra symbol: FUN_00411460 */


undefined8 FUN_00411460(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_20;
  
  if (((param_1 != (undefined8 *)0x0) &&
      (iVar2 = (**(code **)*param_1)(param_1,&DAT_01db9090,&local_20), iVar2 == 0)) &&
     (cVar1 = FUN_004113d0(local_20,param_2), cVar1 != '\0')) {
    return local_20;
  }
  return 0;
}

