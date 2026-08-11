/* Ghidra address: 01b5a710 */
/* Ghidra symbol: FUN_01b5a710 */


void FUN_01b5a710(longlong *param_1)

{
  if (*(char *)((longlong)param_1 + 0xd6c) != '\0') {
    *(undefined1 *)((longlong)param_1 + 0xd6c) = 0;
    (**(code **)(*(longlong *)param_1[0x1ab] + 0x118))
              ((longlong *)param_1[0x1ab],(longlong)param_1 + 0xd6c);
    if (*(char *)((longlong)param_1 + 0xd6c) == '\0') {
      if (*(char *)((longlong)param_1 + 0x7ed) != '\0') {
        FUN_0082a6c0(param_1[0xf8],1);
        (**(code **)(*param_1 + 0x3d8))(param_1,param_1);
      }
      (**(code **)(*(longlong *)param_1[0x197] + 0x128))((longlong *)param_1[0x197],0);
      FUN_0064de00(param_1[0x192],L"Time/Div");
      *(undefined1 *)(param_1 + 0x132) = 0xb;
      param_1[0x1a7] = param_1[0x1a4];
      *(undefined1 *)(param_1 + 0x1aa) = *(undefined1 *)(param_1[0x1ac] + 0x2a);
      FUN_010c0d70(param_1 + 0x1aa,param_1 + 0x1a7,0,0x1e,0x3fb999999999999a);
      FUN_00b90440(param_1[0x194],param_1[0x1a7]);
      FUN_01b581d0(param_1,1);
      FUN_010f6af0(param_1,2,0,0);
      (**(code **)(*(longlong *)param_1[0x136] + 0x18))
                ((longlong *)param_1[0x136],(char)param_1[0x132]);
      FUN_010e7b90(param_1[0x136]);
    }
    else {
      FUN_0082a6c0(param_1[0x1a2],1);
    }
  }
  return;
}

