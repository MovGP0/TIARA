/* Ghidra address: 006ec2b0 */
/* Ghidra symbol: FUN_006ec2b0 */


void FUN_006ec2b0(longlong param_1,longlong param_2,undefined4 param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_00654ca0(param_1,param_2,param_3);
  if (((char)param_3 == '\x01') && (param_2 == *(longlong *)(param_1 + 0x498))) {
    cVar2 = FUN_0065be20(param_1);
    if (cVar2 != '\0') {
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_041b2403(uVar1,0x469,0,0);
      *(undefined8 *)(param_1 + 0x498) = 0;
    }
  }
  return;
}

