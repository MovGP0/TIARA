/* Ghidra address: 00de0420 */
/* Ghidra symbol: FUN_00de0420 */


void FUN_00de0420(longlong param_1,undefined4 param_2,short *param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 local_60 [64];
  short *local_20;
  undefined *local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_00417580(local_60,&DAT_00470720);
  FUN_00ddd3d0(param_1);
  local_18 = &DAT_01ed7830;
  local_10 = 1;
  local_c = 1;
  if (*param_3 == 9) {
    uVar1 = 8;
  }
  else {
    uVar1 = 4;
  }
  local_20 = param_3;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x30))
                    (*(longlong **)(param_1 + 0x4c8),param_2,PTR_DAT_02003140,0,uVar1,&local_20,0,
                     local_60,0);
  if (iVar2 != 0) {
    FUN_00625ac0(iVar2,local_60);
  }
  FUN_00417740(local_60,&DAT_00470720);
  return;
}

