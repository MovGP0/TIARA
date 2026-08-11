/* Ghidra address: 006e3d60 */
/* Ghidra symbol: FUN_006e3d60 */


void FUN_006e3d60(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_006e21e0(param_1,param_3,param_4);
  if (lVar1 != 0) {
    lVar2 = FUN_006e25f0(param_1);
    if ((lVar1 != lVar2) || (lVar1 == *(longlong *)(param_1 + 0x4f8))) {
      *(undefined8 *)(param_1 + 0x4f8) = 0;
      (**(code **)(*param_2 + 0x30))(param_2);
      FUN_006dd250(lVar1,1);
      (**(code **)(*param_2 + 0x40))(param_2);
    }
  }
  return;
}

