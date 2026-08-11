/* Ghidra address: 00f07ca0 */
/* Ghidra symbol: FUN_00f07ca0 */


void FUN_00f07ca0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
                 undefined1 param_5,ushort param_6)

{
  undefined4 uVar1;
  
  FUN_00b90440(*(undefined8 *)(param_1 + 0x4f0));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x4e8),param_3);
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x4f8),param_4);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x500),param_5);
  (**(code **)(**(longlong **)(param_1 + 0x510) + 0x268))
            (*(longlong **)(param_1 + 0x510),(param_6 & 1) != 0);
  (**(code **)(**(longlong **)(param_1 + 0x518) + 0x268))
            (*(longlong **)(param_1 + 0x518),(param_6 & 2) != 0);
  (**(code **)(**(longlong **)(param_1 + 0x528) + 0x268))
            (*(longlong **)(param_1 + 0x528),(param_6 & 8) != 0);
  (**(code **)(**(longlong **)(param_1 + 0x530) + 0x268))
            (*(longlong **)(param_1 + 0x530),(param_6 & 0x10) != 0);
  (**(code **)(**(longlong **)(param_1 + 0x520) + 0x268))
            (*(longlong **)(param_1 + 0x520),(param_6 & 4) != 0);
  uVar1 = FUN_00f06890(L"Show Loop Gain Output Only",1);
  (**(code **)(**(longlong **)(param_1 + 0x538) + 0x268))(*(longlong **)(param_1 + 0x538),uVar1);
  return;
}

