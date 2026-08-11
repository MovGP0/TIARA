/* Ghidra address: 00c35f60 */
/* Ghidra symbol: FUN_00c35f60 */


void FUN_00c35f60(longlong *param_1,undefined2 *param_2,longlong *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 *local_20;
  
  local_30 = auStack_58;
  *param_4 = 0;
  cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (cVar1 == '\0') {
    *param_2 = DAT_01e9f530;
    local_20 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
    (**(code **)(*param_1 + 200))(param_1,local_20);
    uVar2 = (**(code **)*local_20)(local_20);
    lVar3 = thunk_FUN_0412a7bb(*(undefined2 *)PTR_DAT_02004bb0,uVar2);
    *param_3 = lVar3;
    if (*param_3 != 0) {
      local_28 = thunk_FUN_0416a623(*param_3);
      uVar2 = (**(code **)*local_20)(local_20);
      FUN_00409a70(local_20[1],local_28,uVar2);
      thunk_FUN_04172795(*param_3);
    }
    FUN_00410f20(local_20);
  }
  else {
    *param_2 = 0;
    *param_3 = 0;
  }
  return;
}

