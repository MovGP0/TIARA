/* Ghidra address: 00ac9e50 */
/* Ghidra symbol: FUN_00ac9e50 */


undefined8 FUN_00ac9e50(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  
  if (((-1 < param_3) && (iVar1 = (**(code **)(*param_1 + 0x28))(param_1), param_3 < iVar1)) &&
     (lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_3), *(longlong *)(lVar2 + 0x18) != 0)) {
    lVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_3);
    FUN_004b4060(*(undefined8 *)(lVar2 + 0x18),param_2,param_4);
    return param_2;
  }
  FUN_00414480(param_2);
  return param_2;
}

