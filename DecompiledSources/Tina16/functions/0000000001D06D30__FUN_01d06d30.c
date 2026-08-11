/* Ghidra address: 01d06d30 */
/* Ghidra symbol: FUN_01d06d30 */


void FUN_01d06d30(longlong *param_1,char param_2,undefined8 *param_3)

{
  char cVar1;
  
  if (param_2 == '\x04') {
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)param_3;
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_3 + 4);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined1 *)((longlong)param_1 + 0xd3) = *(undefined1 *)(param_3 + 2);
    *(undefined1 *)((longlong)param_1 + 0xd1) = *(undefined1 *)((longlong)param_3 + 0x11);
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((longlong)param_3 + 0x12);
  }
  else if (param_2 == '\x05') {
    FUN_00414ad0(param_1 + 0x13,*param_3);
    FUN_00414ad0(param_1 + 0x30,param_3[1]);
    *(undefined1 *)(param_1 + 0xac) = *(undefined1 *)(param_3 + 4);
    cVar1 = FUN_01d04d40(param_1);
    if (cVar1 != '\0') {
      FUN_00414ad0(param_1[0x35] + 0x50,param_3[2]);
      (**(code **)(*(longlong *)param_1[0x35] + 0x10))((longlong *)param_1[0x35],param_3[3]);
    }
    FUN_01cfd660(param_1,param_3[5]);
    (**(code **)(*param_1 + 0x1c0))(param_1,1,0);
  }
  return;
}

