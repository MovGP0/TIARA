/* Ghidra address: 00659c40 */
/* Ghidra symbol: FUN_00659c40 */


void FUN_00659c40(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [40];
  
  if ((((((*(ulonglong *)(param_2 + 8) & 0xfff0) == 0xf100) && (*(short *)(param_2 + 0x10) != 0x20))
       && (*(short *)(param_2 + 0x10) != 0x2d)) &&
      ((iVar2 = thunk_FUN_03d44949(param_1[0x8d]), iVar2 == 0 &&
       (lVar3 = thunk_FUN_041d93e9(), lVar3 == 0)))) &&
     ((*(longlong **)(*(longlong *)PTR_DAT_02004030 + 0xa8) != param_1 &&
      ((lVar3 = FUN_007f9b70(param_1,1), lVar3 != 0 &&
       (lVar3 = FUN_0064fca0(lVar3,0xb017,0,param_2), lVar3 != 0)))))) {
    return;
  }
  if (((*(ulonglong *)(param_2 + 8) & 0xfff0) == 0xf100) &&
     (cVar1 = FUN_00659b40(auStack_38,param_1), cVar1 != '\0')) {
    return;
  }
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  return;
}

