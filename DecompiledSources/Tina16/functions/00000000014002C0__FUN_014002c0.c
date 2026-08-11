/* Ghidra address: 014002c0 */
/* Ghidra symbol: FUN_014002c0 */


longlong *
FUN_014002c0(undefined8 param_1,longlong *param_2,longlong param_3,int param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_50;
  longlong local_48;
  int local_3c;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_38 = 0;
  local_30[0] = 0;
  local_20 = 0;
  local_50 = param_2;
  local_48 = param_3;
  local_3c = param_4;
  if (param_4 < 2) {
    FUN_00414ad0(param_2,&LAB_01400488);
  }
  else {
    FUN_00414480(param_2);
    FUN_00dff7c0(local_48,param_5);
    iVar2 = 0;
    iVar3 = param_5;
    if (-1 < param_5 + -1) {
      do {
        if (*(short *)(local_48 + (longlong)iVar2 * 2) != 0) {
          if (((*local_50 != 0) && (iVar2 < param_5)) && (1 < param_5)) {
            FUN_00416ad0(local_50,&DAT_01400468);
          }
          FUN_01400210(auStack_88,local_30,iVar2);
          FUN_00414b50(&local_20,local_30[0]);
          FUN_00416ad0(local_50,local_20);
          uVar1 = *(ushort *)(local_48 + (longlong)iVar2 * 2);
          if (1 < uVar1) {
            FUN_0043f750(&local_38,uVar1);
            local_68 = local_38;
            FUN_00416cd0(local_50,3,*local_50,&DAT_01400478);
          }
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(&local_20);
  return local_50;
}

