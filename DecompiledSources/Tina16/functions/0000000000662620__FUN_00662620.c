/* Ghidra address: 00662620 */
/* Ghidra symbol: FUN_00662620 */


void FUN_00662620(longlong param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x78),0xff000014);
  (**(code **)(**(longlong **)(param_1 + 0x78) + 200))
            (*(longlong **)(param_1 + 0x78),param_4,param_3);
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0xc0))
            (*(longlong **)(param_1 + 0x78),param_2,param_3);
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0xc0))
            (*(longlong **)(param_1 + 0x78),param_2,param_5);
  FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x78),0xff000010);
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0xc0))
            (*(longlong **)(param_1 + 0x78),param_4,param_5);
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0xc0))
            (*(longlong **)(param_1 + 0x78),param_4,param_3 + -1);
  return;
}

