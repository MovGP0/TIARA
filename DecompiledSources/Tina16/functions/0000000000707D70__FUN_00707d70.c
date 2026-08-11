/* Ghidra address: 00707d70 */
/* Ghidra symbol: FUN_00707d70 */


void FUN_00707d70(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  uVar2 = FUN_00707f20(param_1);
  cVar1 = FUN_0065be20(uVar2);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x40))(param_1);
    uVar2 = FUN_00707f20(param_1);
    FUN_006f7580(uVar2);
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  return;
}

