/* Ghidra address: 0123b5e0 */
/* Ghidra symbol: FUN_0123b5e0 */


void FUN_0123b5e0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_30 [4];
  
  FUN_0123b410(param_1,param_2);
  cVar1 = (**(code **)(*param_2 + 0x2d0))(param_2,0,local_30);
  if (cVar1 == '\x03') {
    uVar2 = FUN_01194fd0(param_3);
    FUN_01d3a010(local_30[0],3,uVar2);
  }
  if (cVar1 == '\x06') {
    uVar2 = FUN_01194fd0(param_3);
    FUN_01d3a010(local_30[0],6,uVar2);
  }
  return;
}

