/* Ghidra address: 006f8810 */
/* Ghidra symbol: FUN_006f8810 */


void FUN_006f8810(longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x710) != 0) {
    iVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x28))(*(longlong **)(param_2 + 0x10));
    if ((param_3 < iVar1) && (-1 < param_3)) {
      (**(code **)(param_1 + 0x710))
                (*(undefined8 *)(param_1 + 0x718),param_1,param_2,param_3,param_4);
    }
  }
  return;
}

