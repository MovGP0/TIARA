/* Ghidra address: 012286f0 */
/* Ghidra symbol: FUN_012286f0 */


void FUN_012286f0(undefined4 param_1,int param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_80 [13];
  
  local_80[0] = 0;
  if (param_3 != 0) {
    iVar1 = FUN_00414d00(param_3);
    if (iVar1 != 0) {
      uVar2 = FUN_005ffa40(DAT_021076c0);
      thunk_FUN_03b994b9(uVar2,1);
      if (DAT_0210771c == '\0') {
        if (DAT_0210771d == '\0') {
          FUN_00442b00(local_80,param_3);
          (**(code **)(*DAT_021076c0 + 0x120))(DAT_021076c0,param_1,param_2,local_80[0]);
        }
        else {
          FUN_005fd4e0(DAT_021076c0[0xf],0xff);
          plVar3 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
          (**(code **)(*plVar3 + 0x10))(plVar3,DAT_021076c0[0xe]);
          FUN_01228540(DAT_021076c0);
          FUN_00442b00(local_80,param_3);
          (**(code **)(*DAT_021076c0 + 0x120))(DAT_021076c0,param_1,param_2,local_80[0]);
          (**(code **)(*(longlong *)DAT_021076c0[0xe] + 0x10))((longlong *)DAT_021076c0[0xe],plVar3)
          ;
          FUN_00410f20(plVar3);
        }
      }
      else {
        FUN_005fd4e0(DAT_021076c0[0xf],0xffff);
        plVar3 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
        (**(code **)(*plVar3 + 0x10))(plVar3,DAT_021076c0[0xe]);
        FUN_01228540(DAT_021076c0);
        FUN_00442b00(local_80,param_3);
        (**(code **)(*DAT_021076c0 + 0x120))(DAT_021076c0,param_1,param_2 + 0xb,local_80[0]);
        (**(code **)(*(longlong *)DAT_021076c0[0xe] + 0x10))((longlong *)DAT_021076c0[0xe],plVar3);
        FUN_00410f20(plVar3);
      }
    }
  }
  FUN_00414480(local_80);
  return;
}

