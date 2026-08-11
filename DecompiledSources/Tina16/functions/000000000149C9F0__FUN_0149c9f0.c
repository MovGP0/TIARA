/* Ghidra address: 0149c9f0 */
/* Ghidra symbol: FUN_0149c9f0 */


void FUN_0149c9f0(longlong param_1,longlong param_2)

{
  undefined1 local_950 [928];
  undefined2 local_5b0;
  undefined8 local_5ae;
  undefined8 local_5a6;
  undefined8 local_59e;
  byte local_596;
  
  FUN_00417580(local_950,&DAT_01d0d0b8);
  *(longlong *)(param_1 + 0x540) = param_2;
  if (param_2 == 0) {
    FUN_00417c40(local_950,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_950,param_2 + 0x5d8,&DAT_01d0d0b8);
  }
  FUN_00b90440(*(undefined8 *)(param_1 + 0x4f0),local_5ae);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x4f8),local_5a6);
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x500),local_5b0);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x530),local_59e);
  (**(code **)(**(longlong **)(param_1 + 0x510) + 0x268))
            (*(longlong **)(param_1 + 0x510),(local_596 & 1) != 0);
  (**(code **)(**(longlong **)(param_1 + 0x518) + 0x268))
            (*(longlong **)(param_1 + 0x518),(local_596 & 2) != 0);
  (**(code **)(**(longlong **)(param_1 + 0x520) + 0x268))
            (*(longlong **)(param_1 + 0x520),(local_596 & 4) != 0);
  (**(code **)(**(longlong **)(param_1 + 0x528) + 0x268))
            (*(longlong **)(param_1 + 0x528),(local_596 & 8) != 0);
  FUN_00417740(local_950,&DAT_01d0d0b8);
  return;
}

