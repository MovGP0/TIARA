/* Ghidra address: 01880960 */
/* Ghidra symbol: FUN_01880960 */


undefined8 FUN_01880960(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 local_30;
  undefined8 *local_28;
  undefined1 local_20;
  
  uVar2 = FUN_0187fde0(param_1);
  cVar1 = FUN_005fc3a0(uVar2,param_2);
  if (cVar1 == '\0') {
    local_30 = FUN_0187fde0(param_1);
    local_28 = &local_30;
    local_20 = 0x10;
    FUN_00442fd0(param_2,&LAB_018809cc,&local_28,0);
  }
  return param_2;
}

