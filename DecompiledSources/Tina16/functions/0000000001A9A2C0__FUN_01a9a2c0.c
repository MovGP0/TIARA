/* Ghidra address: 01a9a2c0 */
/* Ghidra symbol: FUN_01a9a2c0 */


void FUN_01a9a2c0(longlong *param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  
  local_48 = (int)*param_4;
  if ((((local_48 + 5 <= param_2) && (local_40 = (int)param_4[1], param_2 <= local_40 + -5)) &&
      (local_44 = (int)((ulonglong)*param_4 >> 0x20), local_44 + 5 <= param_3)) &&
     (local_3c = (int)((ulonglong)param_4[1] >> 0x20), param_3 <= local_3c + -5)) {
    uVar1 = FUN_01a99be0(param_1);
    uVar2 = FUN_01a99b30(param_1);
    uVar3 = FUN_01a99990(param_1);
    (**(code **)(*param_1 + 0xf0))(param_1,1);
    thunk_FUN_03f297b0(param_1[0x29],10);
    (**(code **)(*param_1 + 0xe0))(param_1,2);
    FUN_01a9a440(param_1,0x11);
    (**(code **)(*param_1 + 0x40))(param_1,local_48 + 5,param_3);
    (**(code **)(*param_1 + 0x48))(param_1,local_40 + -5,param_3);
    (**(code **)(*param_1 + 0x40))(param_1,param_2,local_44 + 5);
    (**(code **)(*param_1 + 0x48))(param_1,param_2,local_3c + -5);
    (**(code **)(*param_1 + 0xb8))(param_1,uVar3);
    (**(code **)(*param_1 + 0xe0))(param_1,uVar2);
    (**(code **)(*param_1 + 0xf0))(param_1,uVar1);
  }
  return;
}

