/* Ghidra address: 01ac8190 */
/* Ghidra symbol: FUN_01ac8190 */


void FUN_01ac8190(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_00c5a450(*(undefined8 *)(param_1 + 0x708));
  uVar1 = FUN_01ac7fd0(*(undefined8 *)(param_1 + 0x730),*(undefined2 *)(param_1 + 0x73a),
                       *(undefined2 *)(param_1 + 0x738),*(undefined8 *)(param_1 + 0x748),
                       *(undefined8 *)(param_1 + 0x740),uVar2,0);
  FUN_013e0ed0(uVar1);
  *(undefined4 *)(param_1 + 0x508) = 1;
  return;
}

