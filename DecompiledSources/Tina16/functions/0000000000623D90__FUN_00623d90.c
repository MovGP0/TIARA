/* Ghidra address: 00623d90 */
/* Ghidra symbol: FUN_00623d90 */


void FUN_00623d90(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 ushort param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  longlong *plVar1;
  
  if ((param_5 & 0xc) != 0) {
    param_5 = 0xc;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 0x78);
  (**(code **)(*plVar1 + 0x58))
            (plVar1,param_1 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x80) + 0x18),
             param_2,param_5,param_6,param_7,param_8,param_9);
  return;
}

