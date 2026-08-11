/* Ghidra address: 00b12d30 */
/* Ghidra symbol: FUN_00b12d30 */


ulonglong FUN_00b12d30(longlong *param_1,longlong param_2,byte param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 unaff_R13;
  ulonglong uVar3;
  longlong local_38;
  undefined1 local_30;
  undefined7 uVar4;
  
  uVar4 = (undefined7)((ulonglong)unaff_R13 >> 8);
  uVar3 = CONCAT71(uVar4,1);
  iVar1 = FUN_004170c0(&DAT_00b12e0c,param_2,1);
  if (iVar1 != 0) {
    uVar2 = FUN_0044d710(&PTR_FUN_004334c0,1,PTR_PTR_020037f0);
    FUN_004134c0(uVar2);
  }
  if (((param_1[0x10] != 0) && ((*(byte *)(param_1[0x10] + 0x608) & 8) != 0)) && (param_2 != 0)) {
    iVar1 = (**(code **)(*param_1 + 0xb8))(param_1,param_2);
    uVar3 = CONCAT71(uVar4,iVar1 == -1);
    if ((param_3 & iVar1 != -1) != 0) {
      local_30 = 0x11;
      local_38 = param_2;
      uVar2 = FUN_0044d8d0(&PTR_FUN_004334c0,1,PTR_PTR_020037b8,&local_38,0);
      FUN_004134c0(uVar2);
    }
  }
  return uVar3 & 0xffffffff;
}

