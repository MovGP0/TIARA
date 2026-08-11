/* Ghidra address: 01050620 */
/* Ghidra symbol: FUN_01050620 */


void FUN_01050620(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined4 local_1c;
  
  local_1c = FUN_00f62a40(*(undefined8 *)(param_1 + 0x980));
  FUN_004b89e0(param_2,PTR_DAT_02004d30,4);
  FUN_004b89e0(param_2,&local_1c,4);
  plVar1 = (longlong *)FUN_00f62a60(*(undefined8 *)(param_1 + 0x980));
  (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  return;
}

