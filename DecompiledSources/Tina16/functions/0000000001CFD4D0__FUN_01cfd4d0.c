/* Ghidra address: 01cfd4d0 */
/* Ghidra symbol: FUN_01cfd4d0 */


longlong FUN_01cfd4d0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined2 uVar2;
  longlong lVar3;
  longlong local_30;
  
  uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  FUN_00b909a0(&local_30,uVar2);
  lVar3 = 0;
  if (local_30 != 0) {
    FUN_00409a70(param_2,local_30,uVar2);
    cVar1 = FUN_01cfd300(param_1,param_2,local_30);
    lVar3 = local_30;
    if (cVar1 == '\0') {
      uVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
      FUN_004095f0(local_30,uVar2);
      lVar3 = 0;
    }
  }
  return lVar3;
}

