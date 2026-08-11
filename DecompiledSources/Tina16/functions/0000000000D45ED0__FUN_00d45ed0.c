/* Ghidra address: 00d45ed0 */
/* Ghidra symbol: FUN_00d45ed0 */


void FUN_00d45ed0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 int param_5)

{
  int iVar1;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if ((char)param_3 == '\x01') {
    if ((char)param_2 == '\x01') {
      iVar1 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x108f,0,0);
      if (iVar1 == 1) {
        FUN_004238d0(&local_38,0,0,0,0);
        FUN_00611d40(*(undefined8 *)(param_1 + 8),0,&local_38,0);
        iVar1 = FUN_004230c0(&local_38);
        param_5 = param_5 * iVar1;
      }
      thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x1014,0,(longlong)param_5);
    }
    if ((char)param_2 == '\0') {
      iVar1 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x108f,0,0);
      if (iVar1 == 3) {
        FUN_00423010(&local_48,0,0,0,0);
        local_38 = local_48;
        uStack_30 = uStack_40;
        FUN_00611d40(*(undefined8 *)(param_1 + 8),0,&local_38,0);
        iVar1 = FUN_004230a0(&local_38);
        param_5 = param_5 * iVar1;
      }
      thunk_FUN_041b2403(*(undefined8 *)(param_1 + 8),0x1014,(longlong)param_5,0);
    }
  }
  else {
    FUN_00d3d200(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

