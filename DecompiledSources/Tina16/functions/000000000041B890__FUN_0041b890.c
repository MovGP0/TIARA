/* Ghidra address: 0041b890 */
/* Ghidra symbol: FUN_0041b890 */


void FUN_0041b890(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 unaff_retaddr;
  longlong local_30 [2];
  
  if (param_2 == (undefined8 *)0x0) {
    FUN_0041b800(param_1);
  }
  else {
    local_30[0] = 0;
    uVar2 = FUN_0041b800(local_30);
    iVar1 = (**(code **)*param_2)(param_2,param_3,uVar2);
    if (iVar1 == 0) {
      if (*param_1 != 0) {
        (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1);
      }
      *param_1 = local_30[0];
    }
    else {
      FUN_00409880(0x17,unaff_retaddr);
    }
  }
  return;
}

