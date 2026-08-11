/* Ghidra address: 01b694b0 */
/* Ghidra symbol: FUN_01b694b0 */


void FUN_01b694b0(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0xdb4) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xdb4) = 0;
    (**(code **)(*(longlong *)param_1[0x1b4] + 0x118))
              ((longlong *)param_1[0x1b4],(longlong)param_1 + 0xdb4);
    if (*(char *)((longlong)param_1 + 0xdb4) == '\0') {
      if (*(char *)((longlong)param_1 + 0x7ed) != '\0') {
        FUN_0082a6c0(param_1[0xf8],1);
        (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
      }
      (**(code **)(*(longlong *)param_1[0x196] + 0x128))((longlong *)param_1[0x196],0);
      FUN_0064de00(param_1[0x191],L"Time/Div");
      *(undefined1 *)(param_1 + 0x132) = 0xb;
      param_1[0x1b1] = param_1[0x1ae];
      *(undefined1 *)(param_1 + 0x1b3) = *(undefined1 *)(param_1[0x1b5] + 0x2a);
      FUN_010c0d70(param_1 + 0x1b3,param_1 + 0x1b1,0,0x1e,0x3fb999999999999a);
      FUN_00b90440(param_1[0x193],param_1[0x1b1]);
      FUN_01b655a0(param_1,1);
      FUN_010f6af0(param_1,2,0,0);
      (**(code **)(*(longlong *)param_1[0x136] + 0x18))
                ((longlong *)param_1[0x136],(char)param_1[0x132]);
      FUN_010e7b90(param_1[0x136]);
    }
    else {
      FUN_0082a6c0(param_1[0x1a0],1);
    }
  }
  return;
}

