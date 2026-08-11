/* Ghidra address: 012209c0 */
/* Ghidra symbol: FUN_012209c0 */


void FUN_012209c0(longlong *param_1,undefined8 param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (*PTR_DAT_02004418 != '\0') {
    FUN_00805990(*(undefined8 *)PTR_DAT_02004ae8);
  }
  (**(code **)(*param_1 + 0x118))(param_1,0);
  if (*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) < 5) {
    (**(code **)(*(longlong *)param_1[0xdd] + 0x128))((longlong *)param_1[0xdd],1);
    (**(code **)(*(longlong *)param_1[0xdf] + 0x128))((longlong *)param_1[0xdf],1);
    (**(code **)(*(longlong *)param_1[0xe9] + 0x128))((longlong *)param_1[0xe9],1);
    (**(code **)(*(longlong *)param_1[0xeb] + 0x128))((longlong *)param_1[0xeb],1);
  }
  else {
    (**(code **)(*(longlong *)param_1[0xdd] + 0x128))((longlong *)param_1[0xdd],0);
    (**(code **)(*(longlong *)param_1[0xdf] + 0x128))((longlong *)param_1[0xdf],0);
    (**(code **)(*(longlong *)param_1[0xe9] + 0x128))((longlong *)param_1[0xe9],0);
    (**(code **)(*(longlong *)param_1[0xeb] + 0x128))((longlong *)param_1[0xeb],0);
  }
  DAT_01f2aaf4 = (**(code **)(*(longlong *)param_1[0xe7] + 0x260))((longlong *)param_1[0xe7]);
  if (DAT_01f2aaf4 != '\0') {
    (**(code **)(*(longlong *)param_1[0xde] + 0x128))((longlong *)param_1[0xde],1);
  }
  FUN_012206d0(param_1,param_2);
  (**(code **)(*(longlong *)param_1[0xea] + 0x268))((longlong *)param_1[0xea],1);
  *(undefined4 *)PTR_DAT_02004708 = 5000;
  FUN_0064dd90(*(undefined8 *)(*(longlong *)PTR_DAT_020040c0 + 0x6f0),local_20);
  FUN_0064de00(param_1[0xef],local_20[0]);
  if (*(longlong *)PTR_DAT_02001890 != 0) {
    FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001890 + 0x868),0);
  }
  FUN_00414480(local_20);
  return;
}

