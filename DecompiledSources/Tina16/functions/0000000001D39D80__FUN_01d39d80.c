/* Ghidra address: 01d39d80 */
/* Ghidra symbol: FUN_01d39d80 */


undefined8 FUN_01d39d80(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  undefined1 local_98 [40];
  undefined1 local_70 [39];
  undefined1 local_49 [41];
  longlong local_20;
  
  cVar1 = (**(code **)(*param_2 + 0x2d0))(param_2,param_3,&local_20);
  if (cVar1 == '\x04') {
    FUN_00414ff0(local_70,local_20);
    FUN_00415110(local_70,&LAB_01d39e9c,0x15);
    FUN_00414ff0(local_98,local_70);
    FUN_00415110(local_98,local_20 + 0x15,0x25);
    FUN_00415020(local_49,local_98,0x28);
  }
  else if (cVar1 == '\a') {
    FUN_00414ff0(local_70,local_20);
    FUN_00415110(local_70,&LAB_01d39e9c,0x15);
    FUN_00414ff0(local_98,local_70);
    FUN_00415110(local_98,local_20 + 0x15,0x25);
    FUN_00415020(local_49,local_98,0x28);
  }
  FUN_00415020(param_1,local_49,0x28);
  return param_1;
}

