/* Ghidra address: 00af21b0 */
/* Ghidra symbol: FUN_00af21b0 */


void FUN_00af21b0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 local_1c [3];
  
  local_1c[0] = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x918) = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x80) + 0x8b0);
  uVar2 = (**(code **)(*plVar1 + 0x30))
                    (plVar1,*(undefined8 *)
                             (*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x740) + 0x490),0,
                     param_2,param_3,0,*(longlong *)(param_1 + 0x80) + 0x918,local_1c);
  *(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x908) = uVar2;
  return;
}

