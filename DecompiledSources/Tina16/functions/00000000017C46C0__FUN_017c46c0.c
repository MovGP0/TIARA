/* Ghidra address: 017c46c0 */
/* Ghidra symbol: FUN_017c46c0 */


undefined4 FUN_017c46c0(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  short extraout_var;
  int iVar4;
  int iVar5;
  double dVar6;
  undefined1 auStack_68 [32];
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  (**(code **)(*param_2 + 0x1f0))(param_2,param_3,&local_44,&local_48);
  iVar2 = FUN_017c2460(param_1,local_44,local_48);
  if (0 < iVar2) {
    sVar1 = FUN_017c2c60(param_2,0);
    if ((sVar1 == local_44) && (FUN_017c2c60(param_2,0), extraout_var == local_48)) {
      iVar2 = 0;
      iVar4 = 1;
    }
    else {
      iVar2 = FUN_017c2b70(param_2);
      iVar2 = iVar2 + -1;
      iVar4 = -1;
    }
    iVar5 = 1;
    do {
      uVar3 = FUN_017c2c60(param_2,iVar2);
      dVar6 = (double)FUN_017c4420(auStack_68,uVar3,&local_40);
      if (dVar6 < 2147483647.0) {
        local_3c = local_40;
      }
      iVar2 = iVar2 + iVar4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return local_3c;
  }
  uVar3 = FUN_00b92120(local_44,local_48);
  return uVar3;
}

