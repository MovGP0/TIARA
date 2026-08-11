/* Ghidra address: 00af5250 */
/* Ghidra symbol: FUN_00af5250 */


void FUN_00af5250(longlong param_1,undefined4 param_2,int param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 *param_6)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *param_6 = 0;
  plVar1 = *(longlong **)(param_1 + 0x8b0);
  uVar2 = FUN_00414480(param_6);
  (**(code **)(*plVar1 + 0x40))
            (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x740) + 0x490),param_2,
             param_3 + *(int *)((longlong)plVar1 + 0x94),param_4,param_5,uVar2);
  return;
}

