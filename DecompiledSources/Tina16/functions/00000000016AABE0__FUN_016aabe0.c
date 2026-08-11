/* Ghidra address: 016aabe0 */
/* Ghidra symbol: FUN_016aabe0 */


undefined8 *
FUN_016aabe0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
            undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (*(longlong *)(param_4 + 0x68) == 0) {
    puVar1 = (undefined8 *)(PTR_DAT_020025e0 + 8);
    *param_1 = *(undefined8 *)PTR_DAT_020025e0;
    param_1[1] = *puVar1;
  }
  else {
    plVar2 = *(longlong **)(param_4 + 0x68);
    (**(code **)(*plVar2 + 8))(plVar2,param_2,param_3,param_5,param_6);
    (**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2,param_3,param_6);
  }
  return param_1;
}

