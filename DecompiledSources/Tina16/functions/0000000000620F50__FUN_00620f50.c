/* Ghidra address: 00620f50 */
/* Ghidra symbol: FUN_00620f50 */


int FUN_00620f50(undefined8 param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int local_1c;
  undefined8 local_18;
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  local_18 = 0;
  local_1c = -0x7fff0001;
  uVar2 = FUN_0041b800(&local_10);
  uVar3 = thunk_FUN_03d2cad8(uVar2);
  if ((uVar3 & 0x80000000) == 0) {
    (**(code **)(*local_10 + 0x18))(local_10,param_4);
    iVar1 = FUN_00416420(param_5,0);
    if (iVar1 != 0) {
      uVar2 = FUN_00415f70(param_5);
      (**(code **)(*local_10 + 0x20))(local_10,uVar2);
    }
    iVar1 = FUN_00416420(param_6,0);
    if (iVar1 != 0) {
      uVar2 = FUN_00415f70(param_6);
      (**(code **)(*local_10 + 0x30))(local_10,uVar2);
    }
    iVar1 = FUN_00416420(param_1,0);
    if (iVar1 != 0) {
      uVar2 = FUN_00415f70(param_1);
      (**(code **)(*local_10 + 0x28))(local_10,uVar2);
    }
    if (param_2 != 0) {
      (**(code **)(*local_10 + 0x38))(local_10,param_2);
    }
    if (param_3 != 0) {
      local_1c = param_3;
    }
    uVar2 = FUN_0041b800(&local_18);
    iVar1 = (**(code **)*local_10)(local_10,&LAB_006210d8,uVar2);
    if (iVar1 == 0) {
      thunk_FUN_039b758b(0,local_18);
    }
  }
  FUN_0041b800(&local_18);
  FUN_0041b800(&local_10);
  return local_1c;
}

