/* Ghidra address: 006f7de0 */
/* Ghidra symbol: FUN_006f7de0 */


void FUN_006f7de0(longlong *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  short local_3c;
  ushort uStack_38;
  undefined1 local_30 [16];
  
  (**(code **)(*param_1 + 600))(param_1);
  uVar2 = FUN_007f9920(*(undefined2 *)(param_2 + 8));
  *(undefined1 *)(param_1 + 0x9d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0xffffffff;
  FUN_00650a80(param_1,param_2);
  cVar1 = FUN_0064c470(param_1);
  if (((((cVar1 == '\x01') && ((char)param_1[0x9b] != '\0')) && ((uVar2 & 1) == 0)) &&
      (((uVar2 & 4) == 0 && ((char)param_1[0x9d] == '\0')))) &&
     ((lVar3 = FUN_006f7390(param_1,(longlong)*(short *)(param_2 + 0x10),
                            (longlong)*(short *)(param_2 + 0x12)), lVar3 != 0 &&
      (cVar1 = FUN_006ef240(lVar3,3), cVar1 != '\0')))) {
    FUN_0064e9e0(param_1,0,0xffffffff);
    return;
  }
  if ((char)param_1[0x9d] == '\0') {
    cVar1 = FUN_0064c470(param_1);
    if ((((cVar1 == '\x01') &&
         (((char)param_1[0x9b] == '\0' || (((uVar2 & 1) == 0 && ((uVar2 & 4) == 0)))))) &&
        (lVar3 = FUN_006f7390(param_1,(longlong)*(short *)(param_2 + 0x10),
                              (longlong)*(short *)(param_2 + 0x12)), lVar3 != 0)) &&
       (cVar1 = FUN_006ef240(lVar3,3), cVar1 != '\0')) {
      FUN_0064e9e0(param_1,0,0xffffffff);
    }
  }
  else {
    thunk_FUN_03cc0d62(local_30);
    uVar4 = FUN_0064d3a0(param_1,local_30);
    local_3c = (short)uVar4;
    uStack_38 = (ushort)((ulonglong)uVar4 >> 0x20);
    cVar1 = FUN_0064eb50(param_1);
    if (cVar1 == '\0') {
      FUN_0064fca0(param_1,0x202,0,(int)local_3c | (uint)uStack_38 << 0x10);
      *(undefined1 *)(param_1 + 0x9d) = 0;
    }
    else {
      uVar4 = thunk_FUN_041d93e9();
      thunk_FUN_041b2403(uVar4,0x202,0,(int)local_3c | (uint)uStack_38 << 0x10);
    }
  }
  return;
}

