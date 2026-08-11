/* Ghidra address: 009d7a90 */
/* Ghidra symbol: FUN_009d7a90 */


undefined4 FUN_009d7a90(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_009d7890(param_1);
  uVar1 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
  *param_2 = uVar1;
  return 0;
}

