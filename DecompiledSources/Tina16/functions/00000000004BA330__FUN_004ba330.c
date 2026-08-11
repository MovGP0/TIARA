/* Ghidra address: 004ba330 */
/* Ghidra symbol: FUN_004ba330 */


longlong FUN_004ba330(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((0 < (int)*param_2) && ((longlong)(int)*param_2 != *(longlong *)(param_1 + 0x10))) {
    *param_2 = *param_2 + 0x1fff & 0xffffe000;
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((longlong)(int)*param_2 != *(longlong *)(param_1 + 0x20)) {
    FUN_00419260(param_1 + 0x28,&DAT_00406578,1,(longlong)(int)*param_2);
    lVar2 = *(longlong *)(param_1 + 0x28);
    if ((*param_2 != 0) && (lVar2 == 0)) {
      uVar1 = FUN_0044d710(&PTR_FUN_00471608,1,PTR_PTR_020053d0);
      lVar2 = FUN_004134c0(uVar1);
    }
  }
  return lVar2;
}

