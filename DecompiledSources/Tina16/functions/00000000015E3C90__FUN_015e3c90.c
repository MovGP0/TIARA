/* Ghidra address: 015e3c90 */
/* Ghidra symbol: FUN_015e3c90 */


int FUN_015e3c90(longlong param_1,longlong param_2,int param_3,int param_4,longlong *param_5,
                int param_6)

{
  longlong lVar1;
  int iVar2;
  undefined4 local_1c;
  
  FUN_015948c0(param_1 + 0x18,param_2,param_4);
  lVar1 = FUN_004095c0((longlong)param_4);
  local_1c = 0;
  iVar2 = param_4;
  if (-1 < param_4 + -1) {
    do {
      *(undefined1 *)(lVar1 + local_1c) = *(undefined1 *)(param_2 + (local_1c + param_3));
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_015af530(*(undefined8 *)(param_1 + 0x180),lVar1,lVar1,param_4);
  local_1c = 0;
  iVar2 = param_4;
  if (-1 < param_4 + -1) {
    do {
      *(undefined1 *)(*param_5 + (longlong)(local_1c + param_6)) = *(undefined1 *)(lVar1 + local_1c)
      ;
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_004095f0(lVar1);
  return param_4;
}

