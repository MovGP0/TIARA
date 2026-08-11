/* Ghidra address: 006a3c80 */
/* Ghidra symbol: FUN_006a3c80 */


bool FUN_006a3c80(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  iVar1 = (**(code **)(*param_1 + 0x138))(param_1);
  if ((0 < iVar1) && (bVar2 = param_1[0x31] != 0, bVar2)) {
    (*(code *)param_1[0x31])(param_1[0x32],param_1,param_2,param_3,param_4,param_5);
  }
  return bVar2;
}

