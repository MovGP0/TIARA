/* Ghidra address: 008f7e20 */
/* Ghidra symbol: FUN_008f7e20 */


char FUN_008f7e20(longlong *param_1,undefined8 param_2,undefined8 param_3,uint *param_4)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char local_21;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  plVar1 = (longlong *)param_1[1];
  if ((char)plVar1[2] == '\x01') {
    uVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_2,param_3);
    *param_4 = uVar2;
    local_21 = *param_4 < 0x80000000;
  }
  else {
    local_21 = (**(code **)(*plVar1 + 0xb0))(plVar1,param_2,param_4);
    if (local_21 != '\0') {
      uVar3 = (**(code **)(*(longlong *)param_1[1] + 0x40))((longlong *)param_1[1],*param_4);
      (**(code **)(*(longlong *)param_1[2] + 0x28))((longlong *)param_1[2],local_20,uVar3);
      iVar4 = FUN_00416420(local_20[0],param_3);
      if (iVar4 != 0) {
        *param_4 = 0xffffffff;
        local_21 = '\0';
      }
    }
  }
  FUN_00414520(local_20);
  return local_21;
}

