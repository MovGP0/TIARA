/* Ghidra address: 00778f70 */
/* Ghidra symbol: FUN_00778f70 */


void FUN_00778f70(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,int param_7,undefined4 param_8)

{
  char cVar1;
  bool local_58 [4];
  int local_54;
  int local_38;
  undefined8 local_34;
  undefined4 uStack_2c;
  
  local_34 = *param_3;
  uStack_2c = *(undefined4 *)(param_3 + 1);
  if ((param_7 == 0x1fffffff) &&
     (cVar1 = FUN_007790b0(param_1,&local_34,2,&local_38), cVar1 != '\0')) {
    param_7 = local_38;
  }
  local_58[0] = param_7 != 0x1fffffff;
  if (local_58[0]) {
    local_54 = param_7;
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_2,&local_34,param_4,param_5,param_6,local_58,param_8)
  ;
  return;
}

