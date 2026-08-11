/* Ghidra address: 01cfdc40 */
/* Ghidra symbol: FUN_01cfdc40 */


longlong FUN_01cfdc40(longlong param_1,int param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong unaff_R13;
  
  if ((0 < param_2) && (iVar2 = FUN_01cfd2d0(param_1), param_2 <= iVar2)) {
    uVar1 = FUN_01cfd030(param_1,param_2 + -1);
    *param_3 = uVar1;
    uVar3 = FUN_01cfd270(param_1,0,param_2 + -2);
    return *(longlong *)(param_1 + 0xc0) + (uVar3 & 0xffff);
  }
  *param_3 = 0;
  return unaff_R13;
}

