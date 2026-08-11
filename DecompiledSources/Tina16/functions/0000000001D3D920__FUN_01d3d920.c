/* Ghidra address: 01d3d920 */
/* Ghidra symbol: FUN_01d3d920 */


undefined8 FUN_01d3d920(longlong *param_1,char param_2,uint param_3,undefined2 *param_4)

{
  char cVar1;
  int iVar2;
  undefined1 local_40 [16];
  
  *param_4 = 0;
  iVar2 = FUN_01cfd2d0(param_1);
  param_3 = param_3 & 0xffff;
  if ((int)param_3 <= iVar2 + -1) {
    iVar2 = ((iVar2 + -1) - param_3) + 1;
    do {
      cVar1 = (**(code **)(*param_1 + 0x2d0))(param_1,param_3,local_40);
      if (param_2 == cVar1) {
        *param_4 = (short)param_3;
        return 1;
      }
      param_3 = param_3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

