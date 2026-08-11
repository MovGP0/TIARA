/* Ghidra address: 01c01ac0 */
/* Ghidra symbol: FUN_01c01ac0 */


void FUN_01c01ac0(longlong *param_1,longlong param_2,undefined4 param_3)

{
  FUN_00654ca0(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    if (param_2 == param_1[0x94]) {
      (**(code **)(*param_1 + 0x270))(param_1);
      param_1[0x94] = 0;
    }
    else if ((param_2 == param_1[0x97]) && ((*(ushort *)((longlong)param_1 + 0x34) & 8) == 0)) {
      (**(code **)(*param_1 + 0x318))(param_1,0);
    }
  }
  return;
}

