/* Ghidra address: 00703c80 */
/* Ghidra symbol: FUN_00703c80 */


longlong *
FUN_00703c80(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_00703c70(param_1);
  (**(code **)(*plVar2 + 0x48))(plVar2,param_2);
  (**(code **)(*plVar2 + 0x58))(plVar2,param_3);
  (**(code **)(*plVar2 + 0x68))(plVar2,param_4);
  (**(code **)(*plVar2 + 0x60))(plVar2,param_5);
  *(undefined4 *)(plVar2 + 8) = param_6;
  (**(code **)(*plVar2 + 0x50))(plVar2,param_7);
  uVar1 = FUN_004b1870(plVar2);
  (**(code **)(*param_1 + 0x60))(param_1,uVar1);
  return plVar2;
}

