/* Ghidra address: 009d7f70 */
/* Ghidra symbol: FUN_009d7f70 */


undefined4 FUN_009d7f70(undefined8 param_1,short *param_2)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_009d7dd0(param_1);
  cVar1 = (**(code **)(*plVar2 + 0x2d8))(plVar2);
  *param_2 = -(ushort)(cVar1 != '\0');
  return 0;
}

